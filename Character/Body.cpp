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
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.068929, -1.907493, 0.341887);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( 0.205492, -1.907493, 0.336122);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.205492, -1.907493, 0.336122);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( 0.336807, -1.907493, 0.319050);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.336807, -1.907493, 0.319050);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( 0.457828, -1.907493, 0.291328);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.457828, -1.907493, 0.291328);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( 0.563904, -1.907493, 0.254019);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.563904, -1.907493, 0.254019);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( 0.650958, -1.907493, 0.208558);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.650958, -1.907493, 0.208558);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( 0.715645, -1.907493, 0.156692);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.715645, -1.907493, 0.156692);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( 0.755479, -1.907493, 0.100414);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.755479, -1.907493, 0.100414);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( 0.768929, -1.907493, 0.041887);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.768929, -1.907493, 0.041887);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( 0.755479, -1.907493, -0.016640);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.755479, -1.907493, -0.016640);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( 0.715645, -1.907493, -0.072918);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.715645, -1.907493, -0.072918);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( 0.650958, -1.907493, -0.124784);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.650958, -1.907493, -0.124784);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( 0.563904, -1.907493, -0.170245);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.563904, -1.907493, -0.170245);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( 0.457828, -1.907493, -0.207554);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.457828, -1.907493, -0.207554);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( 0.336807, -1.907493, -0.235277);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.336807, -1.907493, -0.235277);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( 0.205492, -1.907493, -0.252349);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.205492, -1.907493, -0.252349);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( 0.068929, -1.907493, -0.258113);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.068929, -1.907493, -0.258113);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( -0.067635, -1.907493, -0.252349);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.067635, -1.907493, -0.252349);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( -0.198950, -1.907493, -0.235277);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.198950, -1.907493, -0.235277);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( -0.319971, -1.907493, -0.207554);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.319971, -1.907493, -0.207554);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( -0.426046, -1.907493, -0.170245);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.426046, -1.907493, -0.170245);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( -0.513100, -1.907493, -0.124784);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.513100, -1.907493, -0.124784);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( -0.577787, -1.907493, -0.072918);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.577787, -1.907493, -0.072918);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( -0.617621, -1.907493, -0.016640);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.617621, -1.907493, -0.016640);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( -0.631071, -1.907493, 0.041887);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.631071, -1.907493, 0.041887);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( -0.617621, -1.907493, 0.100414);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.617621, -1.907493, 0.100414);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( -0.577786, -1.907493, 0.156692);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.577786, -1.907493, 0.156692);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( -0.513099, -1.907493, 0.208558);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.513099, -1.907493, 0.208558);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( -0.426045, -1.907493, 0.254019);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.426045, -1.907493, 0.254019);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( -0.319969, -1.907493, 0.291328);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.319969, -1.907493, 0.291328);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( -0.198949, -1.907493, 0.319051);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.198949, -1.907493, 0.319051);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( -0.067633, -1.907493, 0.336122);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.067633, -1.907493, 0.336122);
		glVertex3f( 0.068929, -2.707493, 0.041887);
		glVertex3f( 0.068929, -1.907493, 0.341887);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.068929, -1.907493, 0.341887);
		glVertex3f( 0.205492, -1.907493, 0.336122);
		glVertex3f( -0.067633, -1.907493, 0.336122);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.205492, -1.907493, 0.336122);
		glVertex3f( 0.336807, -1.907493, 0.319050);
		glVertex3f( -0.067633, -1.907493, 0.336122);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.336807, -1.907493, 0.319050);
		glVertex3f( 0.457828, -1.907493, 0.291328);
		glVertex3f( -0.067633, -1.907493, 0.336122);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.457828, -1.907493, 0.291328);
		glVertex3f( 0.563904, -1.907493, 0.254019);
		glVertex3f( -0.067633, -1.907493, 0.336122);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.563904, -1.907493, 0.254019);
		glVertex3f( 0.650958, -1.907493, 0.208558);
		glVertex3f( -0.067633, -1.907493, 0.336122);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.650958, -1.907493, 0.208558);
		glVertex3f( 0.715645, -1.907493, 0.156692);
		glVertex3f( -0.067633, -1.907493, 0.336122);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.715645, -1.907493, 0.156692);
		glVertex3f( 0.755479, -1.907493, 0.100414);
		glVertex3f( -0.067633, -1.907493, 0.336122);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.755479, -1.907493, 0.100414);
		glVertex3f( 0.768929, -1.907493, 0.041887);
		glVertex3f( -0.067633, -1.907493, 0.336122);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.768929, -1.907493, 0.041887);
		glVertex3f( 0.755479, -1.907493, -0.016640);
		glVertex3f( -0.067633, -1.907493, 0.336122);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.755479, -1.907493, -0.016640);
		glVertex3f( 0.715645, -1.907493, -0.072918);
		glVertex3f( -0.067633, -1.907493, 0.336122);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.715645, -1.907493, -0.072918);
		glVertex3f( 0.650958, -1.907493, -0.124784);
		glVertex3f( -0.067633, -1.907493, 0.336122);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.650958, -1.907493, -0.124784);
		glVertex3f( 0.563904, -1.907493, -0.170245);
		glVertex3f( -0.067633, -1.907493, 0.336122);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.563904, -1.907493, -0.170245);
		glVertex3f( 0.457828, -1.907493, -0.207554);
		glVertex3f( -0.067633, -1.907493, 0.336122);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.457828, -1.907493, -0.207554);
		glVertex3f( 0.336807, -1.907493, -0.235277);
		glVertex3f( -0.067633, -1.907493, 0.336122);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.336807, -1.907493, -0.235277);
		glVertex3f( 0.205492, -1.907493, -0.252349);
		glVertex3f( -0.067633, -1.907493, 0.336122);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.617621, -1.907493, 0.100414);
		glVertex3f( -0.617621, -1.907493, -0.016640);
		glVertex3f( -0.631071, -1.907493, 0.041887);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.577786, -1.907493, 0.156692);
		glVertex3f( -0.617621, -1.907493, -0.016640);
		glVertex3f( -0.617621, -1.907493, 0.100414);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.577786, -1.907493, 0.156692);
		glVertex3f( -0.577787, -1.907493, -0.072918);
		glVertex3f( -0.617621, -1.907493, -0.016640);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.577786, -1.907493, 0.156692);
		glVertex3f( -0.513100, -1.907493, -0.124784);
		glVertex3f( -0.577787, -1.907493, -0.072918);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.513099, -1.907493, 0.208558);
		glVertex3f( -0.513100, -1.907493, -0.124784);
		glVertex3f( -0.577786, -1.907493, 0.156692);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.513099, -1.907493, 0.208558);
		glVertex3f( -0.426046, -1.907493, -0.170245);
		glVertex3f( -0.513100, -1.907493, -0.124784);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.426045, -1.907493, 0.254019);
		glVertex3f( -0.426046, -1.907493, -0.170245);
		glVertex3f( -0.513099, -1.907493, 0.208558);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.426045, -1.907493, 0.254019);
		glVertex3f( -0.319971, -1.907493, -0.207554);
		glVertex3f( -0.426046, -1.907493, -0.170245);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.319969, -1.907493, 0.291328);
		glVertex3f( -0.319971, -1.907493, -0.207554);
		glVertex3f( -0.426045, -1.907493, 0.254019);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.319969, -1.907493, 0.291328);
		glVertex3f( -0.198950, -1.907493, -0.235277);
		glVertex3f( -0.319971, -1.907493, -0.207554);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.198949, -1.907493, 0.319051);
		glVertex3f( -0.198950, -1.907493, -0.235277);
		glVertex3f( -0.319969, -1.907493, 0.291328);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.198949, -1.907493, 0.319051);
		glVertex3f( -0.067635, -1.907493, -0.252349);
		glVertex3f( -0.198950, -1.907493, -0.235277);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.067633, -1.907493, 0.336122);
		glVertex3f( -0.067635, -1.907493, -0.252349);
		glVertex3f( -0.198949, -1.907493, 0.319051);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.205492, -1.907493, -0.252349);
		glVertex3f( 0.068929, -1.907493, -0.258113);
		glVertex3f( -0.067633, -1.907493, 0.336122);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.068929, -1.907493, -0.258113);
		glVertex3f( -0.067635, -1.907493, -0.252349);
		glVertex3f( -0.067633, -1.907493, 0.336122);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.079167, -1.941019, 0.319957);
		glVertex3f( 0.550861, -1.989084, 0.227618);
		glVertex3f( -0.072679, -1.614301, 0.441545);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.769324, -1.264121, 0.388582);
		glVertex3f( 0.550861, -1.989084, 0.227618);
		glVertex3f( 0.896364, -1.420855, 0.066222);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.079167, -1.941019, 0.319957);
		glVertex3f( -0.072679, -1.614301, 0.441545);
		glVertex3f( -0.564455, -1.983366, 0.123631);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.079167, -1.941019, 0.319957);
		glVertex3f( -0.564455, -1.983366, 0.123631);
		glVertex3f( -0.062495, -1.968260, -0.226587);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.079167, -1.941019, 0.319957);
		glVertex3f( -0.062495, -1.968260, -0.226587);
		glVertex3f( 0.622070, -1.960644, -0.107845);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.769324, -1.264121, 0.388582);
		glVertex3f( 0.896364, -1.420855, 0.066222);
		glVertex3f( 0.909575, -0.756830, 0.416870);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.153185, -1.106014, 0.525320);
		glVertex3f( 0.217254, -1.269060, 0.502670);
		glVertex3f( 0.028380, -0.825840, 0.786251);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.848710, -1.342335, 0.066222);
		glVertex3f( -0.642473, -1.245397, 0.390761);
		glVertex3f( -0.905341, -0.818549, 0.252722);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.230671, -1.252012, -0.549576);
		glVertex3f( -0.642473, -1.261348, -0.369972);
		glVertex3f( -0.542069, -0.846538, -0.564661);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.769324, -1.342339, -0.459503);
		glVertex3f( 0.308585, -1.320301, -0.491398);
		glVertex3f( 0.633502, -0.863175, -0.567097);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.769324, -1.264121, 0.388582);
		glVertex3f( 0.909575, -0.756830, 0.416870);
		glVertex3f( 0.633502, -0.895120, 0.875239);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.153185, -1.106014, 0.525320);
		glVertex3f( 0.028380, -0.825840, 0.786251);
		glVertex3f( -0.542069, -0.895120, 0.875239);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.848710, -1.342335, 0.066222);
		glVertex3f( -0.905341, -0.818549, 0.252722);
		glVertex3f( -0.905341, -0.895120, -0.242790);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.230671, -1.252012, -0.549576);
		glVertex3f( -0.542069, -0.846538, -0.564661);
		glVertex3f( 0.018196, -0.824871, -0.571776);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.769324, -1.342339, -0.459503);
		glVertex3f( 0.633502, -0.863175, -0.567097);
		glVertex3f( 0.996774, -0.789471, -0.016400);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.266700, -0.639670, 0.916871);
		glVertex3f( 1.249458, -0.199426, 0.587580);
		glVertex3f( 0.244322, -0.214325, 0.531222);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -1.241652, -0.224907, 0.512768);
		glVertex3f( -0.208547, -0.656377, 0.875234);
		glVertex3f( -0.243169, -0.193226, 0.349025);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.677891, -0.447900, -0.459503);
		glVertex3f( -1.219778, -0.150252, 0.109029);
		glVertex3f( -0.254325, 0.072042, -0.047871);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.322105, -0.481353, -0.583707);
		glVertex3f( -0.234200, -0.368675, -0.557676);
		glVertex3f( 0.208172, -0.044465, -0.433773);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 1.339322, -0.130274, -0.110351);
		glVertex3f( 0.733906, -0.369383, -0.433775);
		glVertex3f( 0.545204, 0.023080, 0.032237);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.545204, 0.023080, 0.032237);
		glVertex3f( 0.208172, -0.044465, -0.433773);
		glVertex3f( 0.136976, 0.197335, 0.033875);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.545204, 0.023080, 0.032237);
		glVertex3f( 0.733906, -0.369383, -0.433775);
		glVertex3f( 0.208172, -0.044465, -0.433773);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.733906, -0.369383, -0.433775);
		glVertex3f( 0.322105, -0.481353, -0.583707);
		glVertex3f( 0.208172, -0.044465, -0.433773);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.208172, -0.044465, -0.433773);
		glVertex3f( -0.254325, 0.072042, -0.047871);
		glVertex3f( 0.136976, 0.197335, 0.033875);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.208172, -0.044465, -0.433773);
		glVertex3f( -0.234200, -0.368675, -0.557676);
		glVertex3f( -0.254325, 0.072042, -0.047871);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.234200, -0.368675, -0.557676);
		glVertex3f( -0.677891, -0.447900, -0.459503);
		glVertex3f( -0.254325, 0.072042, -0.047871);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.254325, 0.072042, -0.047871);
		glVertex3f( -0.243169, -0.193226, 0.349025);
		glVertex3f( 0.136976, 0.197335, 0.033875);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.254325, 0.072042, -0.047871);
		glVertex3f( -1.219778, -0.150252, 0.109029);
		glVertex3f( -0.243169, -0.193226, 0.349025);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -1.219778, -0.150252, 0.109029);
		glVertex3f( -1.241652, -0.224907, 0.512768);
		glVertex3f( -0.243169, -0.193226, 0.349025);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.243169, -0.193226, 0.349025);
		glVertex3f( 0.244322, -0.214325, 0.531222);
		glVertex3f( 0.136976, 0.197335, 0.033875);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.243169, -0.193226, 0.349025);
		glVertex3f( -0.208547, -0.656377, 0.875234);
		glVertex3f( 0.244322, -0.214325, 0.531222);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.208547, -0.656377, 0.875234);
		glVertex3f( 0.266700, -0.639670, 0.916871);
		glVertex3f( 0.244322, -0.214325, 0.531222);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.244322, -0.214325, 0.531222);
		glVertex3f( 0.545204, 0.023080, 0.032237);
		glVertex3f( 0.136976, 0.197335, 0.033875);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.244322, -0.214325, 0.531222);
		glVertex3f( 1.249458, -0.199426, 0.587580);
		glVertex3f( 0.545204, 0.023080, 0.032237);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 1.249458, -0.199426, 0.587580);
		glVertex3f( 1.339322, -0.130274, -0.110351);
		glVertex3f( 0.545204, 0.023080, 0.032237);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.996774, -0.789471, -0.016400);
		glVertex3f( 0.733906, -0.369383, -0.433775);
		glVertex3f( 1.339322, -0.130274, -0.110351);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.996774, -0.789471, -0.016400);
		glVertex3f( 0.633502, -0.863175, -0.567097);
		glVertex3f( 0.733906, -0.369383, -0.433775);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.633502, -0.863175, -0.567097);
		glVertex3f( 0.322105, -0.481353, -0.583707);
		glVertex3f( 0.733906, -0.369383, -0.433775);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.018196, -0.824871, -0.571776);
		glVertex3f( -0.234200, -0.368675, -0.557676);
		glVertex3f( 0.322105, -0.481353, -0.583707);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.018196, -0.824871, -0.571776);
		glVertex3f( -0.542069, -0.846538, -0.564661);
		glVertex3f( -0.234200, -0.368675, -0.557676);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.542069, -0.846538, -0.564661);
		glVertex3f( -0.677891, -0.447900, -0.459503);
		glVertex3f( -0.234200, -0.368675, -0.557676);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.905341, -0.895120, -0.242790);
		glVertex3f( -1.219778, -0.150252, 0.109029);
		glVertex3f( -0.677891, -0.447900, -0.459503);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.905341, -0.895120, -0.242790);
		glVertex3f( -0.905341, -0.818549, 0.252722);
		glVertex3f( -1.219778, -0.150252, 0.109029);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.905341, -0.818549, 0.252722);
		glVertex3f( -1.241652, -0.224907, 0.512768);
		glVertex3f( -1.219778, -0.150252, 0.109029);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.542069, -0.895120, 0.875239);
		glVertex3f( -0.208547, -0.656377, 0.875234);
		glVertex3f( -1.241652, -0.224907, 0.512768);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.542069, -0.895120, 0.875239);
		glVertex3f( 0.028380, -0.825840, 0.786251);
		glVertex3f( -0.208547, -0.656377, 0.875234);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.028380, -0.825840, 0.786251);
		glVertex3f( 0.266700, -0.639670, 0.916871);
		glVertex3f( -0.208547, -0.656377, 0.875234);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.633502, -0.895120, 0.875239);
		glVertex3f( 1.249458, -0.199426, 0.587580);
		glVertex3f( 0.266700, -0.639670, 0.916871);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.633502, -0.895120, 0.875239);
		glVertex3f( 0.909575, -0.756830, 0.416870);
		glVertex3f( 1.249458, -0.199426, 0.587580);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.909575, -0.756830, 0.416870);
		glVertex3f( 1.339322, -0.130274, -0.110351);
		glVertex3f( 1.249458, -0.199426, 0.587580);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.633502, -0.863175, -0.567097);
		glVertex3f( 0.018196, -0.824871, -0.571776);
		glVertex3f( 0.322105, -0.481353, -0.583707);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.633502, -0.863175, -0.567097);
		glVertex3f( 0.308585, -1.320301, -0.491398);
		glVertex3f( 0.018196, -0.824871, -0.571776);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.308585, -1.320301, -0.491398);
		glVertex3f( -0.230671, -1.252012, -0.549576);
		glVertex3f( 0.018196, -0.824871, -0.571776);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.542069, -0.846538, -0.564661);
		glVertex3f( -0.905341, -0.895120, -0.242790);
		glVertex3f( -0.677891, -0.447900, -0.459503);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.542069, -0.846538, -0.564661);
		glVertex3f( -0.642473, -1.261348, -0.369972);
		glVertex3f( -0.905341, -0.895120, -0.242790);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.642473, -1.261348, -0.369972);
		glVertex3f( -0.848710, -1.342335, 0.066222);
		glVertex3f( -0.905341, -0.895120, -0.242790);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.905341, -0.818549, 0.252722);
		glVertex3f( -0.542069, -0.895120, 0.875239);
		glVertex3f( -1.241652, -0.224907, 0.512768);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.905341, -0.818549, 0.252722);
		glVertex3f( -0.642473, -1.245397, 0.390761);
		glVertex3f( -0.542069, -0.895120, 0.875239);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.642473, -1.245397, 0.390761);
		glVertex3f( -0.153185, -1.106014, 0.525320);
		glVertex3f( -0.542069, -0.895120, 0.875239);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.028380, -0.825840, 0.786251);
		glVertex3f( 0.633502, -0.895120, 0.875239);
		glVertex3f( 0.266700, -0.639670, 0.916871);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.028380, -0.825840, 0.786251);
		glVertex3f( 0.217254, -1.269060, 0.502670);
		glVertex3f( 0.633502, -0.895120, 0.875239);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.217254, -1.269060, 0.502670);
		glVertex3f( 0.769324, -1.264121, 0.388582);
		glVertex3f( 0.633502, -0.895120, 0.875239);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.909575, -0.756830, 0.416870);
		glVertex3f( 0.996774, -0.789471, -0.016400);
		glVertex3f( 1.339322, -0.130274, -0.110351);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.909575, -0.756830, 0.416870);
		glVertex3f( 0.896364, -1.420855, 0.066222);
		glVertex3f( 0.996774, -0.789471, -0.016400);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.896364, -1.420855, 0.066222);
		glVertex3f( 0.769324, -1.342339, -0.459503);
		glVertex3f( 0.996774, -0.789471, -0.016400);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.622070, -1.960644, -0.107845);
		glVertex3f( 0.308585, -1.320301, -0.491398);
		glVertex3f( 0.769324, -1.342339, -0.459503);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.622070, -1.960644, -0.107845);
		glVertex3f( -0.062495, -1.968260, -0.226587);
		glVertex3f( 0.308585, -1.320301, -0.491398);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.062495, -1.968260, -0.226587);
		glVertex3f( -0.230671, -1.252012, -0.549576);
		glVertex3f( 0.308585, -1.320301, -0.491398);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.062495, -1.968260, -0.226587);
		glVertex3f( -0.642473, -1.261348, -0.369972);
		glVertex3f( -0.230671, -1.252012, -0.549576);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.062495, -1.968260, -0.226587);
		glVertex3f( -0.564455, -1.983366, 0.123631);
		glVertex3f( -0.642473, -1.261348, -0.369972);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.564455, -1.983366, 0.123631);
		glVertex3f( -0.848710, -1.342335, 0.066222);
		glVertex3f( -0.642473, -1.261348, -0.369972);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.564455, -1.983366, 0.123631);
		glVertex3f( -0.642473, -1.245397, 0.390761);
		glVertex3f( -0.848710, -1.342335, 0.066222);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.564455, -1.983366, 0.123631);
		glVertex3f( -0.072679, -1.614301, 0.441545);
		glVertex3f( -0.642473, -1.245397, 0.390761);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.072679, -1.614301, 0.441545);
		glVertex3f( -0.153185, -1.106014, 0.525320);
		glVertex3f( -0.642473, -1.245397, 0.390761);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.896364, -1.420855, 0.066222);
		glVertex3f( 0.622070, -1.960644, -0.107845);
		glVertex3f( 0.769324, -1.342339, -0.459503);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.896364, -1.420855, 0.066222);
		glVertex3f( 0.550861, -1.989084, 0.227618);
		glVertex3f( 0.622070, -1.960644, -0.107845);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.550861, -1.989084, 0.227618);
		glVertex3f( -0.079167, -1.941019, 0.319957);
		glVertex3f( 0.622070, -1.960644, -0.107845);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.072679, -1.614301, 0.441545);
		glVertex3f( 0.217254, -1.269060, 0.502670);
		glVertex3f( -0.153185, -1.106014, 0.525320);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.072679, -1.614301, 0.441545);
		glVertex3f( 0.550861, -1.989084, 0.227618);
		glVertex3f( 0.217254, -1.269060, 0.502670);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.550861, -1.989084, 0.227618);
		glVertex3f( 0.769324, -1.264121, 0.388582);
		glVertex3f( 0.217254, -1.269060, 0.502670);
	glEnd();
}

