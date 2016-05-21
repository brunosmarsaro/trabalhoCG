#include "Scenario.h"

/*==================== Constructors and Destructor ====================*/
Scenario::Scenario( void ){}

Scenario::~Scenario( void ){}
/*==================== Class Methods ====================*/

typedef struct position SPosition;
struct position
{
    float x, y, z;
};


GLuint Scenario::loadBMP_custom(FILE *file){
	// Data read from the header of the BMP file
    unsigned char header[54]; // Each BMP file begins by a 54-bytes header
    unsigned int dataPos;     // Position in the file where the actual data begins
    unsigned int width, height;
    unsigned int imageSize;   // = width*height*3
    // Actual RGB data
    unsigned char * data;
    
 	//FILE * file = fopen(imagepath,"rb");
 	//FILE *file = imagepath;
    
    /* Verifications regarding BMP file */
    if (!file){printf("Image could not be opened\n"); return 0;}
    
    if ( fread(header, 1, 54, file)!=54 ){ // If not 54 bytes read : problem
        printf("Not a correct BMP file\n");
        return false;
    }
    
    if ( header[0]!='B' || header[1]!='M' ){
        printf("Not a correct BMP file\n");
        return 0;
    }
    
    /* Getting Data Info */
    dataPos    = *(int*)&(header[0x0A]);
    imageSize  = *(int*)&(header[0x22]);
    width      = *(int*)&(header[0x12]);
    height     = *(int*)&(header[0x16]);
    
    /* Verifying Data */
    if (imageSize==0)    imageSize=width*height*3; // 3 : one byte for each Red, Green and Blue component
    if (dataPos==0)      dataPos=54;  // The BMP header is done that way
    
    // Create a buffer
    data = new unsigned char [imageSize];
    
    // Read the actual data from the file into the buffer
    fread(data,1,imageSize,file);
    
    // Everything is in memory now, the file can be closed
    //fclose(file);
    
    // Create one OpenGL texture
    GLuint textureID;
    glGenTextures(1, &textureID);
    
    // "Bind" the newly created texture : all future texture functions will modify this texture
    glBindTexture(GL_TEXTURE_2D, textureID);
    
    // Give the image to OpenGL
    glTexImage2D(GL_TEXTURE_2D, 0,GL_RGB, width, height, 0, GL_BGR, GL_UNSIGNED_BYTE, data);
    
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);

	free( data );
	return textureID;

}

void Scenario::readObjFile( void ){
    /* Reading Object File */
    
    //FILE * fp = fopen(objfile, "r");
    FILE * fp = objfile;

    if (!fp){printf("File could not be opened\n"); exit(0);}
    char v[5];
    float x, y, z; 
    vector<SPosition> vertices;
    vector<SPosition> normals;
    vector<SPosition> texture;
    float i=0,j=0,k=0;
    int fcount =0;
    while( fscanf( fp, "%s", v) != EOF ){
        while(strcmp(v,"v") !=0 && strcmp(v,"f") !=0 && strcmp(v,"vn") !=0 && strcmp(v,"vt") !=0){
			if(fscanf( fp, "%s", v) == EOF) break;
        }
        
        if(strcmp("v",v) == 0){
            fscanf(fp,"%f %f %f",&x, &y, &z );
            SPosition aux;
            aux.x=x;
            aux.y=y;
            aux.z=z;
            vertices.push_back(aux);
        }else if (strcmp("vn",v) == 0){
            fscanf(fp,"%f %f %f",&x, &y, &z );
            SPosition aux;
            aux.x=x;
            aux.y=y;
            aux.z=z;
            normals.push_back(aux);
        }else if (strcmp("vt",v) == 0){
            fscanf(fp,"%f %f",&x, &y );
            SPosition aux;
            aux.x=x;
            aux.y=y;
            texture.push_back(aux);
        }else if (strcmp("f",v) == 0){
            int i,j,k;
            int ni,nj,nk;
            int ti,tj,tk;
            
            fscanf(fp,"%d %*c %d %*c %d",&i,&ti,&ni);
            fscanf(fp,"%d %*c %d %*c %d",&j,&tj,&nj);
            fscanf(fp,"%d %*c %d %*c %d",&k,&tk,&nk);
            i--;
            j--;
            k--;
            ni--;
            nj--;
            nk--;
            ti--;
            tj--;
            tk--;
            

 			vector<float> auxV;

 			auxV.push_back(normals[ni].x);
            auxV.push_back(normals[nj].y);
            auxV.push_back(normals[nk].z);
            
            auxV.push_back(vertices[i].x);
            auxV.push_back(vertices[i].y);
            auxV.push_back(vertices[i].z);
            
            auxV.push_back(texture[ti].x);
            auxV.push_back(texture[ti].y);
            
            auxV.push_back(vertices[j].x);
            auxV.push_back(vertices[j].y);
            auxV.push_back(vertices[j].z);
            
            auxV.push_back(texture[tj].x);
            auxV.push_back(texture[tj].y);
            
            auxV.push_back(vertices[k].x);
            auxV.push_back(vertices[k].y);
            auxV.push_back(vertices[k].z);
            
            auxV.push_back(texture[tk].x);
            auxV.push_back(texture[tk].y);

            faces.push_back(auxV);
            
            fcount++;
        }
    }
}

void Scenario::draw( void ){
    glEnable(GL_TEXTURE_2D);
    glBindTexture (GL_TEXTURE_2D, textureID);
    glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
    
    int i;
    glPushMatrix();
    glColor3f( 1.0f, 1.0f, 1.0f );
    for(i = 0; i < faces.size(); i++){
        glNormal3f(faces[i][0], faces[i][1], faces[i][2]);
        glBegin(GL_TRIANGLES);
            glVertex3f( faces[i][3],faces[i][4], faces[i][5]);
            glTexCoord2f( faces[i][6], faces[i][7]);
            glVertex3f( faces[i][8],faces[i][9], faces[i][10]);
            glTexCoord2f( faces[i][11], faces[i][12]);
            glVertex3f( faces[i][13],faces[i][14], faces[i][15]);
            glTexCoord2f( faces[i][16], faces[i][17]);
        glEnd();
    }
    glPopMatrix();
    glDisable(GL_TEXTURE_2D);
    glutSwapBuffers();
}
