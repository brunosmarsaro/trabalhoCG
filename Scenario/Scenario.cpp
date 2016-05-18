#include "Scenario.h"

/*==================== Constructors and Destructor ====================*/
Scenario::Scenario( void ){}

/*Scenario::Scenario( int w, int h ){
    width = w;
    height = h;
}*/

Scenario::~Scenario( void ){}
/*==================== Class Methods ====================*/


void Scenario::landscape( void ){
    /* Reading Image File */
    
    GLuint image = loadBMP_custom("../Img/scenario.bmp");
    
    // Data read from the header of the BMP file
    unsigned char header[54]; // Each BMP file begins by a 54-bytes header
    unsigned int dataPos;     // Position in the file where the actual data begins
    unsigned int width, height;
    unsigned int imageSize;   // = width*height*3
    // Actual RGB data
    unsigned char * data;
    
    FILE * file = fopen("../Img/scenario.bmp","rb");
    
    /* Verifications regarding BMP file */
    if (!file){printf("Image could not be opened\n"); return;}
    
    if ( fread(header, 1, 54, file)!=54 ){ // If not 54 bytes read : problem
        printf("Not a correct BMP file\n");
        return;
    }
    
    if ( header[0]!='B' || header[1]!='M' ){
        printf("Not a correct BMP file\n");
        return;
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
    
    //Everything is in memory now, the file can be closed
    fclose(file);
    
    // Create one OpenGL texture
    GLuint textureID;
    glGenTextures(1, &textureID);
    
    // "Bind" the newly created texture : all future texture functions will modify this texture
    glBindTexture(GL_TEXTURE_2D, textureID);
    
    // Give the image to OpenGL
    glTexImage2D(GL_TEXTURE_2D, 0,GL_RGB, width, height, 0, GL_BGR, GL_UNSIGNED_BYTE, data);
    
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    
    /* Reading Object File */
    
    FILE * fp;
    fp = fopen("../Objs/scenario.obj", "r");

    glPushMatrix();
    char v[5];
    float x, y, z;
    //glTranslatef( 0, 0, 0 );
    //glRotatef(theta,1,0,0);
    //glScalef(5,5,5);
    
    vector<Position> vertices;
    vector<Position> normals;
    vector<Position> texture;
    
    float i=0,j=0,k=0;
    int o = 0;
    float r=0.4,g=0.1,b=0.7;
    
    while( fscanf( fp, "%s", v) != EOF ){
        while(strcmp(v,"v") !=0 && strcmp(v,"f") !=0 && strcmp(v,"vn") !=0 && strcmp(v,"vt") !=0){
            if(fscanf( fp, "%s", v) == EOF) break;
        }
        
        if(strcmp("v",v) == 0){
            fscanf(fp,"%f %f %f",&x, &y, &z );
            Position aux;
            aux.setX(x);
            aux.setY(y);
            aux.setZ(z);
            vertices.push_back(aux);
        }else if (strcmp("vn",v) == 0){
            fscanf(fp,"%f %f %f",&x, &y, &z );
            Position aux;
            aux.setX(x);
            aux.setY(y);
            aux.setZ(z);
            normals.push_back(aux);
        }else if (strcmp("vt",v) == 0){
            fscanf(fp,"%f %f",&x, &y );
            Position aux;
            aux.setX(x);
            aux.setY(y);
            texture.push_back(aux);
        }else if (strcmp("f",v) == 0){
            char point[50];
            int i,j,k,aux;
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
            
            /*
            fprintf(saida, "glNormal3f( %f, %f, %f );\n", normals[ni].getX(), normals[nj].getY(), normals[nk].getZ());
            fprintf(saida, "glBegin(GL_TRIANGLES);\n");
            fprintf(saida, "\tglVertex3f( %f, %f, %f);\n",vertices[i].getX(),vertices[i].getY() ,vertices[i].getZ());
            fprintf(saida, "\tglVertex3f( %f, %f, %f);\n",vertices[j].getX(),vertices[j].getY() ,vertices[j].getZ());
            fprintf(saida, "\tglVertex3f( %f, %f, %f);\n",vertices[k].getX(),vertices[k].getY() ,vertices[k].getZ());
            fprintf(saida, "glEnd();\n\n");
            */
            
            glNormal3f(normals[ni].getX(), normals[nj].getY(), normals[nk].getZ());
            glBegin(GL_TRIANGLES);
            //glColor3f(r,g,b);
            glTexCoord2f( texture[ti].getX(), texture[ti].getY());
            glVertex3f( vertices[i].getX(),vertices[i].getY(), vertices[i].getZ());
            glTexCoord2f( texture[tj].getX(), texture[tj].getY());
            glVertex3f( vertices[j].getX(),vertices[j].getY(), vertices[j].getZ());
            glTexCoord2f( texture[tk].getX(), texture[tk].getY());
            glVertex3f( vertices[k].getX(),vertices[k].getY(), vertices[k].getZ());
            glEnd();
            
        }
    }
    
    fclose( fp );
    glPopMatrix();
    glutSwapBuffers();
    
}
