#include "Scenario2.h"

/*==================== Constructors and Destructor ====================*/
Scenario2::Scenario2( void ){}

/*Scenario::Scenario( int w, int h ){
    width = w;
    height = h;
}*/

Scenario2::~Scenario2( void ){}
/*==================== Class Methods ====================*/

typedef struct position SPosition;
struct position
{
    float x, y, z;
};


GLuint Scenario2::loadBMP_custom(const char * imagepath){
	// Data read from the header of the BMP file
    unsigned char header[54]; // Each BMP file begins by a 54-bytes header
    unsigned int dataPos;     // Position in the file where the actual data begins
    unsigned int width, height;
    unsigned int imageSize;   // = width*height*3
    // Actual RGB data
    unsigned char * data;
    
    FILE * file = fopen(imagepath,"rb");
    
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

	free( data );
	return textureID;

}

void Scenario2::draw( void ){
    /* Reading Image File */
    
	//glEnable(GL_TEXTURE_2D);
	//GLuint image = loadBMP_custom("../Img/scenario.bmp");
	//glBindTexture (GL_TEXTURE_2D, image);
	//glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);

	//cout << "AQUI" << endl;
    
    /* Reading Object File */
    
    FILE * fp;
    fp = fopen("scenario.txt", "r");

    fclose(fp);
    
}
