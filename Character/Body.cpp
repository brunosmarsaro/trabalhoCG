#include "Body.h"

void Body::setRotate( float x, float y, float z ){
	rotateX = x;
	rotateY = y;
	rotateZ = z;
}
void Body::setScale( float x, float y, float z ){
	scaleX = x;
	scaleY = y;
	scaleZ = z;
}
void Body::setBodyPosition( float x, float y, float z ){
	posX = x;
	posY = y;
	posZ = z;
}
void Body::setColor( float r, float g, float b){
	colorR = r;
	colorG = g;
	colorB = b;
}
void Body::draw(){
	glPushMatrix();
		glColor3f( colorR, colorG, colorB );
		glTranslatef( posX, posY, posZ );
		glRotatef( rotateX, 1, 0, 0 );
		glRotatef( rotateY, 0, 1, 0 );
		glRotatef( rotateZ, 0, 0, 1 );
		glScalef( scaleX, scaleY, scaleZ );
		privateDraw();
	glPopMatrix();
}

void Body::privateDraw(){
	glNormal3f( 0.039492, -0.350850, 0.935599 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.068929, -1.907493, 0.341887);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( 0.205492, -1.907493, 0.336122);
	glEnd();

	glNormal3f( 0.120242, -0.360698, 0.924899 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.205492, -1.907493, 0.336122);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( 0.336807, -1.907493, 0.319050);
	glEnd();

	glNormal3f( 0.206422, -0.381312, 0.901106 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.336807, -1.907493, 0.319050);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( 0.457828, -1.907493, 0.291328);
	glEnd();

	glNormal3f( 0.301954, -0.414471, 0.858509 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.457828, -1.907493, 0.291328);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( 0.563904, -1.907493, 0.254019);
	glEnd();

	glNormal3f( 0.410448, -0.462364, 0.785972 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.563904, -1.907493, 0.254019);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( 0.650958, -1.907493, 0.208558);
	glEnd();

	glNormal3f( 0.532216, -0.525497, 0.663776 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.650958, -1.907493, 0.208558);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( 0.715645, -1.907493, 0.156692);
	glEnd();

	glNormal3f( 0.655257, -0.596264, 0.463796 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.715645, -1.907493, 0.156692);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( 0.755479, -1.907493, 0.100414);
	glEnd();

	glNormal3f( 0.741567, -0.648871, 0.170423 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.755479, -1.907493, 0.100414);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( 0.768929, -1.907493, 0.041887);
	glEnd();

	glNormal3f( 0.741568, -0.648872, -0.170420 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.768929, -1.907493, 0.041887);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( 0.755479, -1.907493, -0.016640);
	glEnd();

	glNormal3f( 0.655257, -0.596264, -0.463796 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.755479, -1.907493, -0.016640);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( 0.715645, -1.907493, -0.072918);
	glEnd();

	glNormal3f( 0.532216, -0.525497, -0.663777 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.715645, -1.907493, -0.072918);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( 0.650958, -1.907493, -0.124784);
	glEnd();

	glNormal3f( 0.410447, -0.462363, -0.785973 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.650958, -1.907493, -0.124784);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( 0.563904, -1.907493, -0.170245);
	glEnd();

	glNormal3f( 0.301954, -0.414471, -0.858509 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.563904, -1.907493, -0.170245);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( 0.457828, -1.907493, -0.207554);
	glEnd();

	glNormal3f( 0.206422, -0.381312, -0.901105 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.457828, -1.907493, -0.207554);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( 0.336807, -1.907493, -0.235277);
	glEnd();

	glNormal3f( 0.120242, -0.360699, -0.924899 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.336807, -1.907493, -0.235277);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( 0.205492, -1.907493, -0.252349);
	glEnd();

	glNormal3f( 0.039492, -0.350849, -0.935599 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.205492, -1.907493, -0.252349);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( 0.068929, -1.907493, -0.258113);
	glEnd();

	glNormal3f( -0.039492, -0.350850, -0.935599 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.068929, -1.907493, -0.258113);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( -0.067635, -1.907493, -0.252349);
	glEnd();

	glNormal3f( -0.120242, -0.360699, -0.924899 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.067635, -1.907493, -0.252349);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( -0.198950, -1.907493, -0.235277);
	glEnd();

	glNormal3f( -0.206422, -0.381312, -0.901105 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.198950, -1.907493, -0.235277);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( -0.319971, -1.907493, -0.207554);
	glEnd();

	glNormal3f( -0.301955, -0.414471, -0.858508 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.319971, -1.907493, -0.207554);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( -0.426046, -1.907493, -0.170245);
	glEnd();

	glNormal3f( -0.410447, -0.462363, -0.785973 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.426046, -1.907493, -0.170245);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( -0.513100, -1.907493, -0.124784);
	glEnd();

	glNormal3f( -0.532217, -0.525497, -0.663775 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.513100, -1.907493, -0.124784);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( -0.577787, -1.907493, -0.072918);
	glEnd();

	glNormal3f( -0.655258, -0.596265, -0.463794 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.577787, -1.907493, -0.072918);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( -0.617621, -1.907493, -0.016640);
	glEnd();

	glNormal3f( -0.741568, -0.648872, -0.170419 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.617621, -1.907493, -0.016640);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( -0.631071, -1.907493, 0.041887);
	glEnd();

	glNormal3f( -0.741567, -0.648871, 0.170425 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.631071, -1.907493, 0.041887);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( -0.617621, -1.907493, 0.100414);
	glEnd();

	glNormal3f( -0.655256, -0.596263, 0.463799 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.617621, -1.907493, 0.100414);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( -0.577786, -1.907493, 0.156692);
	glEnd();

	glNormal3f( -0.532216, -0.525496, 0.663777 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.577786, -1.907493, 0.156692);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( -0.513099, -1.907493, 0.208558);
	glEnd();

	glNormal3f( -0.410446, -0.462363, 0.785973 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.513099, -1.907493, 0.208558);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( -0.426045, -1.907493, 0.254019);
	glEnd();

	glNormal3f( -0.301954, -0.414471, 0.858509 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.426045, -1.907493, 0.254019);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( -0.319969, -1.907493, 0.291328);
	glEnd();

	glNormal3f( -0.206421, -0.381312, 0.901106 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.319969, -1.907493, 0.291328);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( -0.198949, -1.907493, 0.319051);
	glEnd();

	glNormal3f( -0.120242, -0.360699, 0.924899 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.198949, -1.907493, 0.319051);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( -0.067633, -1.907493, 0.336122);
	glEnd();

	glNormal3f( -0.039492, -0.350850, 0.935599 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.067633, -1.907493, 0.336122);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( 0.068929, -1.907493, 0.341887);
	glEnd();

	glNormal3f( 0.000000, 1.000000, -0.000012 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.068929, -1.907493, 0.341887);
		glVertex3f( 0.205492, -1.907493, 0.336122);
		glVertex3f( -0.067633, -1.907493, 0.336122);
	glEnd();

	glNormal3f( 0.000000, 1.000000, -0.000004 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.205492, -1.907493, 0.336122);
		glVertex3f( 0.336807, -1.907493, 0.319050);
		glVertex3f( -0.067633, -1.907493, 0.336122);
	glEnd();

	glNormal3f( 0.000000, 1.000000, 0.000003 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.336807, -1.907493, 0.319050);
		glVertex3f( 0.457828, -1.907493, 0.291328);
		glVertex3f( -0.067633, -1.907493, 0.336122);
	glEnd();

	glNormal3f( 0.000000, 1.000000, -0.000003 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.457828, -1.907493, 0.291328);
		glVertex3f( 0.563904, -1.907493, 0.254019);
		glVertex3f( -0.067633, -1.907493, 0.336122);
	glEnd();

	glNormal3f( 0.000000, 1.000000, 0.000002 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.563904, -1.907493, 0.254019);
		glVertex3f( 0.650958, -1.907493, 0.208558);
		glVertex3f( -0.067633, -1.907493, 0.336122);
	glEnd();

	glNormal3f( 0.000000, 1.000000, 0.000004 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.650958, -1.907493, 0.208558);
		glVertex3f( 0.715645, -1.907493, 0.156692);
		glVertex3f( -0.067633, -1.907493, 0.336122);
	glEnd();

	glNormal3f( 0.000000, 1.000000, 0.000006 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.715645, -1.907493, 0.156692);
		glVertex3f( 0.755479, -1.907493, 0.100414);
		glVertex3f( -0.067633, -1.907493, 0.336122);
	glEnd();

	glNormal3f( 0.000000, 1.000000, -0.000003 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.755479, -1.907493, 0.100414);
		glVertex3f( 0.768929, -1.907493, 0.041887);
		glVertex3f( -0.067633, -1.907493, 0.336122);
	glEnd();

	glNormal3f( 0.000000, 1.000000, -0.000000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.768929, -1.907493, 0.041887);
		glVertex3f( 0.755479, -1.907493, -0.016640);
		glVertex3f( -0.067633, -1.907493, 0.336122);
	glEnd();

	glNormal3f( 0.000000, 1.000000, -0.000002 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.755479, -1.907493, -0.016640);
		glVertex3f( 0.715645, -1.907493, -0.072918);
		glVertex3f( -0.067633, -1.907493, 0.336122);
	glEnd();

	glNormal3f( 0.000000, 1.000000, -0.000003 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.715645, -1.907493, -0.072918);
		glVertex3f( 0.650958, -1.907493, -0.124784);
		glVertex3f( -0.067633, -1.907493, 0.336122);
	glEnd();

	glNormal3f( 0.000000, 1.000000, -0.000001 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.650958, -1.907493, -0.124784);
		glVertex3f( 0.563904, -1.907493, -0.170245);
		glVertex3f( -0.067633, -1.907493, 0.336122);
	glEnd();

	glNormal3f( 0.000000, 1.000000, -0.000000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.563904, -1.907493, -0.170245);
		glVertex3f( 0.457828, -1.907493, -0.207554);
		glVertex3f( -0.067633, -1.907493, 0.336122);
	glEnd();

	glNormal3f( 0.000000, 1.000000, 0.000001 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.457828, -1.907493, -0.207554);
		glVertex3f( 0.336807, -1.907493, -0.235277);
		glVertex3f( -0.067633, -1.907493, 0.336122);
	glEnd();

	glNormal3f( 0.000000, 1.000000, -0.000000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.336807, -1.907493, -0.235277);
		glVertex3f( 0.205492, -1.907493, -0.252349);
		glVertex3f( -0.067633, -1.907493, 0.336122);
	glEnd();

	glNormal3f( 0.000000, 1.000000, 0.000001 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.617621, -1.907493, 0.100414);
		glVertex3f( -0.617621, -1.907493, -0.016640);
		glVertex3f( -0.631071, -1.907493, 0.041887);
	glEnd();

	glNormal3f( 0.000000, 1.000000, -0.000001 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.577786, -1.907493, 0.156692);
		glVertex3f( -0.617621, -1.907493, -0.016640);
		glVertex3f( -0.617621, -1.907493, 0.100414);
	glEnd();

	glNormal3f( 0.000000, 1.000000, -0.000000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.577786, -1.907493, 0.156692);
		glVertex3f( -0.577787, -1.907493, -0.072918);
		glVertex3f( -0.617621, -1.907493, -0.016640);
	glEnd();

	glNormal3f( 0.000000, 1.000000, -0.000000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.577786, -1.907493, 0.156692);
		glVertex3f( -0.513100, -1.907493, -0.124784);
		glVertex3f( -0.577787, -1.907493, -0.072918);
	glEnd();

	glNormal3f( 0.000000, 1.000000, -0.000000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.513099, -1.907493, 0.208558);
		glVertex3f( -0.513100, -1.907493, -0.124784);
		glVertex3f( -0.577786, -1.907493, 0.156692);
	glEnd();

	glNormal3f( 0.000000, 1.000000, -0.000000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.513099, -1.907493, 0.208558);
		glVertex3f( -0.426046, -1.907493, -0.170245);
		glVertex3f( -0.513100, -1.907493, -0.124784);
	glEnd();

	glNormal3f( 0.000000, 1.000000, -0.000000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.426045, -1.907493, 0.254019);
		glVertex3f( -0.426046, -1.907493, -0.170245);
		glVertex3f( -0.513099, -1.907493, 0.208558);
	glEnd();

	glNormal3f( 0.000000, 1.000000, -0.000000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.426045, -1.907493, 0.254019);
		glVertex3f( -0.319971, -1.907493, -0.207554);
		glVertex3f( -0.426046, -1.907493, -0.170245);
	glEnd();

	glNormal3f( 0.000000, 1.000000, -0.000000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.319969, -1.907493, 0.291328);
		glVertex3f( -0.319971, -1.907493, -0.207554);
		glVertex3f( -0.426045, -1.907493, 0.254019);
	glEnd();

	glNormal3f( 0.000000, 1.000000, -0.000000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.319969, -1.907493, 0.291328);
		glVertex3f( -0.198950, -1.907493, -0.235277);
		glVertex3f( -0.319971, -1.907493, -0.207554);
	glEnd();

	glNormal3f( 0.000000, 1.000000, -0.000000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.198949, -1.907493, 0.319051);
		glVertex3f( -0.198950, -1.907493, -0.235277);
		glVertex3f( -0.319969, -1.907493, 0.291328);
	glEnd();

	glNormal3f( 0.000000, 1.000000, -0.000000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.198949, -1.907493, 0.319051);
		glVertex3f( -0.067635, -1.907493, -0.252349);
		glVertex3f( -0.198950, -1.907493, -0.235277);
	glEnd();

	glNormal3f( 0.000000, 1.000000, 0.000001 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.067633, -1.907493, 0.336122);
		glVertex3f( -0.067635, -1.907493, -0.252349);
		glVertex3f( -0.198949, -1.907493, 0.319051);
	glEnd();

	glNormal3f( 0.000000, 1.000000, -0.000000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.205492, -1.907493, -0.252349);
		glVertex3f( 0.068929, -1.907493, -0.258113);
		glVertex3f( -0.067633, -1.907493, 0.336122);
	glEnd();

	glNormal3f( 0.000000, 1.000000, -0.000000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.068929, -1.907493, -0.258113);
		glVertex3f( -0.067635, -1.907493, -0.252349);
		glVertex3f( -0.067633, -1.907493, 0.336122);
	glEnd();

	glNormal3f( 0.121406, -0.348317, 0.929481 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.079167, -1.941019, 0.319957);
		glVertex3f( 0.700216, -1.922697, 0.225022);
		glVertex3f( -0.072679, -1.614301, 0.441545);
	glEnd();

	glNormal3f( 0.873874, -0.201570, 0.442396 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.769324, -1.264121, 0.388582);
		glVertex3f( 0.700216, -1.922697, 0.225022);
		glVertex3f( 0.896364, -1.420855, 0.066222);
	glEnd();

	glNormal3f( -0.330487, -0.323411, 0.886670 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.079167, -1.941019, 0.319957);
		glVertex3f( -0.072679, -1.614301, 0.441545);
		glVertex3f( -0.564455, -1.983366, 0.123631);
	glEnd();

	glNormal3f( 0.066047, -0.996477, 0.051683 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.079167, -1.941019, 0.319957);
		glVertex3f( -0.564455, -1.983366, 0.123631);
		glVertex3f( -0.062495, -1.968260, -0.226587);
	glEnd();

	glNormal3f( 0.025571, -0.998394, 0.050544 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.079167, -1.941019, 0.319957);
		glVertex3f( -0.062495, -1.968260, -0.226587);
		glVertex3f( 0.677224, -1.943120, -0.104230);
	glEnd();

	glNormal3f( 0.848426, -0.260267, 0.460906 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.769324, -1.264121, 0.388582);
		glVertex3f( 0.896364, -1.420855, 0.066222);
		glVertex3f( 0.909575, -0.756830, 0.416870);
	glEnd();

	glNormal3f( -0.211620, -0.589133, 0.779833 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.153185, -1.106014, 0.525320);
		glVertex3f( 0.217254, -1.269060, 0.502670);
		glVertex3f( 0.028380, -0.825840, 0.786251);
	glEnd();

	glNormal3f( -0.767329, -0.287122, 0.573382 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.848710, -1.342335, 0.066222);
		glVertex3f( -0.642473, -1.245397, 0.390761);
		glVertex3f( -0.905341, -0.818549, 0.252722);
	glEnd();

	glNormal3f( -0.372840, -0.318756, -0.871427 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.230671, -1.252012, -0.549576);
		glVertex3f( -0.642473, -1.261348, -0.369972);
		glVertex3f( -0.542069, -0.846538, -0.564661);
	glEnd();

	glNormal3f( 0.057952, -0.203055, -0.977451 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.769324, -1.342339, -0.459503);
		glVertex3f( 0.308585, -1.320301, -0.491398);
		glVertex3f( 0.633502, -0.863175, -0.567097);
	glEnd();

	glNormal3f( 0.859586, -0.262111, 0.438645 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.769324, -1.264121, 0.388582);
		glVertex3f( 0.909575, -0.756830, 0.416870);
		glVertex3f( 0.633502, -0.895120, 0.875239);
	glEnd();

	glNormal3f( 0.190902, -0.732394, 0.653571 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.153185, -1.106014, 0.525320);
		glVertex3f( 0.028380, -0.825840, 0.786251);
		glVertex3f( -0.542069, -0.895120, 0.875239);
	glEnd();

	glNormal3f( -0.993365, -0.113656, 0.017563 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.848710, -1.342335, 0.066222);
		glVertex3f( -0.905341, -0.818549, 0.252722);
		glVertex3f( -0.905341, -0.895120, -0.242790);
	glEnd();

	glNormal3f( -0.010924, -0.045553, -0.998902 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.230671, -1.252012, -0.549576);
		glVertex3f( -0.542069, -0.846538, -0.564661);
		glVertex3f( 0.018196, -0.824871, -0.571776);
	glEnd();

	glNormal3f( 0.823130, 0.108146, -0.557460 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.769324, -1.342339, -0.459503);
		glVertex3f( 0.633502, -0.863175, -0.567097);
		glVertex3f( 0.996774, -0.789471, -0.016400);
	glEnd();

	glNormal3f( -0.051480, 0.669314, 0.741194 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.266700, -0.639670, 0.916871);
		glVertex3f( 1.249458, -0.199426, 0.587580);
		glVertex3f( 0.244322, -0.214325, 0.531222);
	glEnd();

	glNormal3f( 0.022176, 0.640454, 0.767676 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -1.202690, -0.132747, 0.467100);
		glVertex3f( -0.208547, -0.656377, 0.875234);
		glVertex3f( -0.139852, -0.224724, 0.513132);
	glEnd();

	glNormal3f( -0.315530, 0.663400, -0.678485 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.677891, -0.447900, -0.459503);
		glVertex3f( -1.173215, -0.092732, 0.118118);
		glVertex3f( -0.605963, 0.032543, -0.023192);
	glEnd();

	glNormal3f( 0.022637, 0.329796, -0.943781 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.322105, -0.481353, -0.583707);
		glVertex3f( -0.234200, -0.368675, -0.557676);
		glVertex3f( 0.208172, -0.044465, -0.433773);
	glEnd();

	glNormal3f( 0.047825, 0.758305, -0.650143 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.339322, -0.130274, -0.110351);
		glVertex3f( 0.733906, -0.369383, -0.433775);
		glVertex3f( 0.593558, 0.037352, 0.030303);
	glEnd();

	glNormal3f( 0.282614, 0.876703, -0.389256 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.593558, 0.037352, 0.030303);
		glVertex3f( 0.208172, -0.044465, -0.433773);
		glVertex3f( -0.017998, 0.236079, 0.033875);
	glEnd();

	glNormal3f( 0.453474, 0.733747, -0.505942 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.593558, 0.037352, 0.030303);
		glVertex3f( 0.733906, -0.369383, -0.433775);
		glVertex3f( 0.208172, -0.044465, -0.433773);
	glEnd();

	glNormal3f( 0.227863, 0.368698, -0.901188 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.733906, -0.369383, -0.433775);
		glVertex3f( 0.322105, -0.481353, -0.583707);
		glVertex3f( 0.208172, -0.044465, -0.433773);
	glEnd();

	glNormal3f( -0.216567, 0.787423, -0.577117 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.208172, -0.044465, -0.433773);
		glVertex3f( -0.605963, 0.032543, -0.023192);
		glVertex3f( -0.017998, 0.236079, 0.033875);
	glEnd();

	glNormal3f( -0.288165, 0.658781, -0.694959 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.208172, -0.044465, -0.433773);
		glVertex3f( -0.234200, -0.368675, -0.557676);
		glVertex3f( -0.605963, 0.032543, -0.023192);
	glEnd();

	glNormal3f( -0.272468, 0.668888, -0.691628 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.234200, -0.368675, -0.557676);
		glVertex3f( -0.677891, -0.447900, -0.459503);
		glVertex3f( -0.605963, 0.032543, -0.023192);
	glEnd();

	glNormal3f( -0.310295, 0.723457, 0.616707 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.605963, 0.032543, -0.023192);
		glVertex3f( -0.139852, -0.224724, 0.513132);
		glVertex3f( -0.017998, 0.236079, 0.033875);
	glEnd();

	glNormal3f( -0.072742, 0.873122, 0.482045 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.605963, 0.032543, -0.023192);
		glVertex3f( -1.173215, -0.092732, 0.118118);
		glVertex3f( -0.139852, -0.224724, 0.513132);
	glEnd();

	glNormal3f( 0.080421, 0.989481, 0.120248 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -1.173215, -0.092732, 0.118118);
		glVertex3f( -1.202690, -0.132747, 0.467100);
		glVertex3f( -0.139852, -0.224724, 0.513132);
	glEnd();

	glNormal3f( -0.051932, 0.726440, 0.685265 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.139852, -0.224724, 0.513132);
		glVertex3f( 0.244322, -0.214325, 0.531222);
		glVertex3f( -0.017998, 0.236079, 0.033875);
	glEnd();

	glNormal3f( -0.053334, 0.646740, 0.760844 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.139852, -0.224724, 0.513132);
		glVertex3f( -0.208547, -0.656377, 0.875234);
		glVertex3f( 0.244322, -0.214325, 0.531222);
	glEnd();

	glNormal3f( -0.088286, 0.666516, 0.740244 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.208547, -0.656377, 0.875234);
		glVertex3f( 0.266700, -0.639670, 0.916871);
		glVertex3f( 0.244322, -0.214325, 0.531222);
	glEnd();

	glNormal3f( 0.256758, 0.779879, 0.570845 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.244322, -0.214325, 0.531222);
		glVertex3f( 0.593558, 0.037352, 0.030303);
		glVertex3f( -0.017998, 0.236079, 0.033875);
	glEnd();

	glNormal3f( -0.037369, 0.903142, 0.427713 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.244322, -0.214325, 0.531222);
		glVertex3f( 1.249458, -0.199426, 0.587580);
		glVertex3f( 0.593558, 0.037352, 0.030303);
	glEnd();

	glNormal3f( 0.240156, 0.962485, 0.126286 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.249458, -0.199426, 0.587580);
		glVertex3f( 1.339322, -0.130274, -0.110351);
		glVertex3f( 0.593558, 0.037352, 0.030303);
	glEnd();

	glNormal3f( 0.549016, -0.390606, -0.738924 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.996774, -0.789471, -0.016400);
		glVertex3f( 0.733906, -0.369383, -0.433775);
		glVertex3f( 1.339322, -0.130274, -0.110351);
	glEnd();

	glNormal3f( 0.835884, -0.021877, -0.548471 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.996774, -0.789471, -0.016400);
		glVertex3f( 0.633502, -0.863175, -0.567097);
		glVertex3f( 0.733906, -0.369383, -0.433775);
	glEnd();

	glNormal3f( 0.288466, 0.194477, -0.937532 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.633502, -0.863175, -0.567097);
		glVertex3f( 0.322105, -0.481353, -0.583707);
		glVertex3f( 0.733906, -0.369383, -0.433775);
	glEnd();

	glNormal3f( -0.045599, 0.005647, -0.998944 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.018196, -0.824871, -0.571776);
		glVertex3f( -0.234200, -0.368675, -0.557676);
		glVertex3f( 0.322105, -0.481353, -0.583707);
	glEnd();

	glNormal3f( -0.013599, 0.023373, -0.999634 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.018196, -0.824871, -0.571776);
		glVertex3f( -0.542069, -0.846538, -0.564661);
		glVertex3f( -0.234200, -0.368675, -0.557676);
	glEnd();

	glNormal3f( -0.241694, 0.169680, -0.955402 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.542069, -0.846538, -0.564661);
		glVertex3f( -0.677891, -0.447900, -0.459503);
		glVertex3f( -0.234200, -0.368675, -0.557676);
	glEnd();

	glNormal3f( -0.741651, 0.053169, -0.668676 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.905341, -0.895120, -0.242790);
		glVertex3f( -1.173215, -0.092732, 0.118118);
		glVertex3f( -0.677891, -0.447900, -0.459503);
	glEnd();

	glNormal3f( -0.939973, -0.337246, 0.052114 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.905341, -0.895120, -0.242790);
		glVertex3f( -0.905341, -0.818549, 0.252722);
		glVertex3f( -1.173215, -0.092732, 0.118118);
	glEnd();

	glNormal3f( -0.923989, -0.363208, -0.119687 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.905341, -0.818549, 0.252722);
		glVertex3f( -1.202690, -0.132747, 0.467100);
		glVertex3f( -1.173215, -0.092732, 0.118118);
	glEnd();

	glNormal3f( -0.219107, 0.306110, 0.926439 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.542069, -0.895120, 0.875239);
		glVertex3f( -0.208547, -0.656377, 0.875234);
		glVertex3f( -1.202690, -0.132747, 0.467100);
	glEnd();

	glNormal3f( 0.178787, -0.249744, 0.951663 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.542069, -0.895120, 0.875239);
		glVertex3f( 0.028380, -0.825840, 0.786251);
		glVertex3f( -0.208547, -0.656377, 0.875234);
	glEnd();

	glNormal3f( -0.056001, -0.524419, 0.849617 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.028380, -0.825840, 0.786251);
		glVertex3f( 0.266700, -0.639670, 0.916871);
		glVertex3f( -0.208547, -0.656377, 0.875234);
	glEnd();

	glNormal3f( 0.236871, 0.184672, 0.953828 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.633502, -0.895120, 0.875239);
		glVertex3f( 1.249458, -0.199426, 0.587580);
		glVertex3f( 0.266700, -0.639670, 0.916871);
	glEnd();

	glNormal3f( 0.772613, -0.561721, 0.295869 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.633502, -0.895120, 0.875239);
		glVertex3f( 0.909575, -0.756830, 0.416870);
		glVertex3f( 1.249458, -0.199426, 0.587580);
	glEnd();

	glNormal3f( 0.844734, -0.532245, 0.056031 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.909575, -0.756830, 0.416870);
		glVertex3f( 1.339322, -0.130274, -0.110351);
		glVertex3f( 1.249458, -0.199426, 0.587580);
	glEnd();

	glNormal3f( 0.005155, -0.039264, -0.999216 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.633502, -0.863175, -0.567097);
		glVertex3f( 0.018196, -0.824871, -0.571776);
		glVertex3f( 0.322105, -0.481353, -0.583707);
	glEnd();

	glNormal3f( -0.002555, -0.161604, -0.986852 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.633502, -0.863175, -0.567097);
		glVertex3f( 0.308585, -1.320301, -0.491398);
		glVertex3f( 0.018196, -0.824871, -0.571776);
	glEnd();

	glNormal3f( 0.093397, -0.105871, -0.989984 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.308585, -1.320301, -0.491398);
		glVertex3f( -0.230671, -1.252012, -0.549576);
		glVertex3f( 0.018196, -0.824871, -0.571776);
	glEnd();

	glNormal3f( -0.660871, -0.027323, -0.750002 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.542069, -0.846538, -0.564661);
		glVertex3f( -0.905341, -0.895120, -0.242790);
		glVertex3f( -0.677891, -0.447900, -0.459503);
	glEnd();

	glNormal3f( -0.635344, -0.196704, -0.746757 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.542069, -0.846538, -0.564661);
		glVertex3f( -0.642473, -1.261348, -0.369972);
		glVertex3f( -0.905341, -0.895120, -0.242790);
	glEnd();

	glNormal3f( -0.791900, -0.411825, -0.450881 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.642473, -1.261348, -0.369972);
		glVertex3f( -0.848710, -1.342335, 0.066222);
		glVertex3f( -0.905341, -0.895120, -0.242790);
	glEnd();

	glNormal3f( -0.787481, -0.467123, 0.402081 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.905341, -0.818549, 0.252722);
		glVertex3f( -0.542069, -0.895120, 0.875239);
		glVertex3f( -1.202690, -0.132747, 0.467100);
	glEnd();

	glNormal3f( -0.822681, -0.365940, 0.435068 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.905341, -0.818549, 0.252722);
		glVertex3f( -0.642473, -1.245397, 0.390761);
		glVertex3f( -0.542069, -0.895120, 0.875239);
	glEnd();

	glNormal3f( 0.074393, -0.815391, 0.574110 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.642473, -1.245397, 0.390761);
		glVertex3f( -0.153185, -1.106014, 0.525320);
		glVertex3f( -0.542069, -0.895120, 0.875239);
	glEnd();

	glNormal3f( -0.178110, -0.402120, 0.898096 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.028380, -0.825840, 0.786251);
		glVertex3f( 0.633502, -0.895120, 0.875239);
		glVertex3f( 0.266700, -0.639670, 0.916871);
	glEnd();

	glNormal3f( -0.183158, -0.584023, 0.790804 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.028380, -0.825840, 0.786251);
		glVertex3f( 0.217254, -1.269060, 0.502670);
		glVertex3f( 0.633502, -0.895120, 0.875239);
	glEnd();

	glNormal3f( 0.135510, -0.770915, 0.622356 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.217254, -1.269060, 0.502670);
		glVertex3f( 0.769324, -1.264121, 0.388582);
		glVertex3f( 0.633502, -0.895120, 0.875239);
	glEnd();

	glNormal3f( 0.879592, -0.427257, 0.209213 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.909575, -0.756830, 0.416870);
		glVertex3f( 0.996774, -0.789471, -0.016400);
		glVertex3f( 1.339322, -0.130274, -0.110351);
	glEnd();

	glNormal3f( 0.970438, -0.127515, 0.204915 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.909575, -0.756830, 0.416870);
		glVertex3f( 0.896364, -1.420855, 0.066222);
		glVertex3f( 0.996774, -0.789471, -0.016400);
	glEnd();

	glNormal3f( 0.948694, -0.184477, -0.256802 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.896364, -1.420855, 0.066222);
		glVertex3f( 0.769324, -1.342339, -0.459503);
		glVertex3f( 0.996774, -0.789471, -0.016400);
	glEnd();

	glNormal3f( 0.034866, -0.512657, -0.857885 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.677224, -1.943120, -0.104230);
		glVertex3f( 0.308585, -1.320301, -0.491398);
		glVertex3f( 0.769324, -1.342339, -0.459503);
	glEnd();

	glNormal3f( 0.160562, -0.450803, -0.878064 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.677224, -1.943120, -0.104230);
		glVertex3f( -0.062495, -1.968260, -0.226587);
		glVertex3f( 0.308585, -1.320301, -0.491398);
	glEnd();

	glNormal3f( 0.047873, -0.401247, -0.914718 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.062495, -1.968260, -0.226587);
		glVertex3f( -0.230671, -1.252012, -0.549576);
		glVertex3f( 0.308585, -1.320301, -0.491398);
	glEnd();

	glNormal3f( -0.347961, -0.452070, -0.821314 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.062495, -1.968260, -0.226587);
		glVertex3f( -0.642473, -1.261348, -0.369972);
		glVertex3f( -0.230671, -1.252012, -0.549576);
	glEnd();

	glNormal3f( -0.473950, -0.531280, -0.702220 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.062495, -1.968260, -0.226587);
		glVertex3f( -0.564455, -1.983366, 0.123631);
		glVertex3f( -0.642473, -1.261348, -0.369972);
	glEnd();

	glNormal3f( -0.799944, -0.395165, -0.451591 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.564455, -1.983366, 0.123631);
		glVertex3f( -0.848710, -1.342335, 0.066222);
		glVertex3f( -0.642473, -1.261348, -0.369972);
	glEnd();

	glNormal3f( -0.766716, -0.288632, 0.573444 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.564455, -1.983366, 0.123631);
		glVertex3f( -0.642473, -1.245397, 0.390761);
		glVertex3f( -0.848710, -1.342335, 0.066222);
	glEnd();

	glNormal3f( -0.306987, -0.352460, 0.884042 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.564455, -1.983366, 0.123631);
		glVertex3f( -0.072679, -1.614301, 0.441545);
		glVertex3f( -0.642473, -1.245397, 0.390761);
	glEnd();

	glNormal3f( -0.209263, -0.191202, 0.958984 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.072679, -1.614301, 0.441545);
		glVertex3f( -0.153185, -1.106014, 0.525320);
		glVertex3f( -0.642473, -1.245397, 0.390761);
	glEnd();

	glNormal3f( 0.916793, -0.297860, -0.266026 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.896364, -1.420855, 0.066222);
		glVertex3f( 0.677224, -1.943120, -0.104230);
		glVertex3f( 0.769324, -1.342339, -0.459503);
	glEnd();

	glNormal3f( 0.926074, -0.375064, -0.041404 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.896364, -1.420855, 0.066222);
		glVertex3f( 0.700216, -1.922697, 0.225022);
		glVertex3f( 0.677224, -1.943120, -0.104230);
	glEnd();

	glNormal3f( 0.030731, -0.997741, 0.059741 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.700216, -1.922697, 0.225022);
		glVertex3f( -0.079167, -1.941019, 0.319957);
		glVertex3f( 0.677224, -1.943120, -0.104230);
	glEnd();

	glNormal3f( -0.012086, -0.164475, 0.986307 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.072679, -1.614301, 0.441545);
		glVertex3f( 0.217254, -1.269060, 0.502670);
		glVertex3f( -0.153185, -1.106014, 0.525320);
	glEnd();

	glNormal3f( 0.148274, -0.291816, 0.944912 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.072679, -1.614301, 0.441545);
		glVertex3f( 0.700216, -1.922697, 0.225022);
		glVertex3f( 0.217254, -1.269060, 0.502670);
	glEnd();

	glNormal3f( 0.197842, -0.255771, 0.946277 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.700216, -1.922697, 0.225022);
		glVertex3f( 0.769324, -1.264121, 0.388582);
		glVertex3f( 0.217254, -1.269060, 0.502670);
	glEnd();
}