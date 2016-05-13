#include "Calf.h"

void Calf::setRotate( float x, float y, float z ){
	rotateX = x;
	rotateX = y;
	rotateX = z;
}

void Calf::setScale( float x, float y, float z ){
	scaleX = x;
	scaleY = y;
	scaleZ = z;
}

void Calf::setCalfPosition( float x, float y, float z ){
	posX = x;
	posY = y;
	posZ = z;
}

void Calf::setMirror( bool m ){
	mirror = m;
}

void Calf::draw(){
	glPushMatrix();
		glTranslatef( posX, posY, posZ );
		glRotatef( rotateX, 1, 0, 0 );
		glRotatef( rotateY, 0, 1, 0 );
		if(mirror) glRotatef( rotateZ + 180, 0, 0, 1 );
		else glRotatef( rotateZ, 0, 0, 1 );
		if(mirror) glScalef( scaleX, -scaleY, scaleZ );
		else glScalef( scaleX, scaleY, scaleZ );
		privateDraw();
	glPopMatrix();
}

void Calf::privateDraw(){
glBegin(GL_TRIANGLES);
		glVertex3f( -0.035024, -2.331634, 0.370079);
		glVertex3f( 0.082647, -2.317467, 0.587681);
		glVertex3f( -0.080257, -2.321747, 0.720708);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.161559, -2.297644, 0.743507);
		glVertex3f( 0.082647, -2.317467, 0.587681);
		glVertex3f( 0.195860, -2.305496, 0.375499);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.035024, -2.331634, 0.370079);
		glVertex3f( -0.080257, -2.321747, 0.720708);
		glVertex3f( -0.175762, -2.337987, 0.375499);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.035024, -2.331634, 0.370079);
		glVertex3f( -0.175762, -2.337987, 0.375499);
		glVertex3f( -0.077678, -2.337988, 0.025502);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.035024, -2.331634, 0.370079);
		glVertex3f( -0.077678, -2.337988, 0.025502);
		glVertex3f( 0.081022, -2.337988, 0.159191);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.161559, -2.297644, 0.743507);
		glVertex3f( 0.195860, -2.305496, 0.375499);
		glVertex3f( 0.222971, -2.252922, 0.591808);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.108440, -2.297644, 0.970953);
		glVertex3f( 0.037159, -2.305496, 0.941807);
		glVertex3f( -0.045871, -2.187146, 0.991697);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.251525, -2.294080, 0.366024);
		glVertex3f( -0.219626, -2.305496, 0.725497);
		glVertex3f( -0.266392, -2.245907, 0.597244);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.083137, -2.341792, -0.204237);
		glVertex3f( -0.191390, -2.341761, 0.028879);
		glVertex3f( -0.159555, -2.260526, -0.190639);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.161559, -2.297644, 0.007491);
		glVertex3f( 0.067225, -2.351081, -0.177770);
		glVertex3f( 0.138186, -2.252922, -0.193320);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.161559, -2.297644, 0.743507);
		glVertex3f( 0.222971, -2.252922, 0.591808);
		glVertex3f( 0.103232, -2.239909, 0.940762);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.108440, -2.297644, 0.970953);
		glVertex3f( -0.045871, -2.187146, 0.991697);
		glVertex3f( -0.175505, -2.235276, 0.937489);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.251525, -2.294080, 0.366024);
		glVertex3f( -0.266392, -2.245907, 0.597244);
		glVertex3f( -0.230644, -2.252923, 0.138141);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.083137, -2.341792, -0.204237);
		glVertex3f( -0.159555, -2.260526, -0.190639);
		glVertex3f( 0.025379, -2.286937, -0.277205);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.161559, -2.297644, 0.007491);
		glVertex3f( 0.138186, -2.252922, -0.193320);
		glVertex3f( 0.222971, -2.252922, 0.159190);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.040810, -2.208200, 0.970953);
		glVertex3f( 0.151996, -2.200349, 0.725497);
		glVertex3f( 0.010048, -2.167857, 0.725496);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.219907, -2.201061, 0.742742);
		glVertex3f( -0.104790, -2.200349, 0.941807);
		glVertex3f( -0.148652, -2.167857, 0.591807);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.213932, -2.205332, -0.001007);
		glVertex3f( -0.263490, -2.200349, 0.375499);
		glVertex3f( -0.123666, -2.077127, 0.105991);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.063282, -2.162998, -0.257849);
		glVertex3f( -0.106064, -2.151730, -0.223406);
		glVertex3f( -0.026340, -2.081974, -0.034001);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.207680, -2.208201, 0.375499);
		glVertex3f( 0.151996, -2.200349, 0.025501);
		glVertex3f( 0.108642, -2.189075, 0.396748);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.108642, -2.189075, 0.396748);
		glVertex3f( -0.026340, -2.081974, -0.034001);
		glVertex3f( -0.026467, -2.173744, 0.387573);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.108642, -2.189075, 0.396748);
		glVertex3f( 0.151996, -2.200349, 0.025501);
		glVertex3f( -0.026340, -2.081974, -0.034001);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.151996, -2.200349, 0.025501);
		glVertex3f( 0.063282, -2.162998, -0.257849);
		glVertex3f( -0.026340, -2.081974, -0.034001);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.026340, -2.081974, -0.034001);
		glVertex3f( -0.123666, -2.077127, 0.105991);
		glVertex3f( -0.026467, -2.173744, 0.387573);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.026340, -2.081974, -0.034001);
		glVertex3f( -0.106064, -2.151730, -0.223406);
		glVertex3f( -0.123666, -2.077127, 0.105991);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.106064, -2.151730, -0.223406);
		glVertex3f( -0.213932, -2.205332, -0.001007);
		glVertex3f( -0.123666, -2.077127, 0.105991);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.123666, -2.077127, 0.105991);
		glVertex3f( -0.148652, -2.167857, 0.591807);
		glVertex3f( -0.026467, -2.173744, 0.387573);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.123666, -2.077127, 0.105991);
		glVertex3f( -0.263490, -2.200349, 0.375499);
		glVertex3f( -0.148652, -2.167857, 0.591807);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.263490, -2.200349, 0.375499);
		glVertex3f( -0.219907, -2.201061, 0.742742);
		glVertex3f( -0.148652, -2.167857, 0.591807);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.148652, -2.167857, 0.591807);
		glVertex3f( 0.010048, -2.167857, 0.725496);
		glVertex3f( -0.026467, -2.173744, 0.387573);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.148652, -2.167857, 0.591807);
		glVertex3f( -0.104790, -2.200349, 0.941807);
		glVertex3f( 0.010048, -2.167857, 0.725496);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.104790, -2.200349, 0.941807);
		glVertex3f( 0.040810, -2.208200, 0.970953);
		glVertex3f( 0.010048, -2.167857, 0.725496);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.010048, -2.167857, 0.725496);
		glVertex3f( 0.108642, -2.189075, 0.396748);
		glVertex3f( -0.026467, -2.173744, 0.387573);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.010048, -2.167857, 0.725496);
		glVertex3f( 0.151996, -2.200349, 0.725497);
		glVertex3f( 0.108642, -2.189075, 0.396748);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.151996, -2.200349, 0.725497);
		glVertex3f( 0.207680, -2.208201, 0.375499);
		glVertex3f( 0.108642, -2.189075, 0.396748);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.222971, -2.252922, 0.159190);
		glVertex3f( 0.151996, -2.200349, 0.025501);
		glVertex3f( 0.207680, -2.208201, 0.375499);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.222971, -2.252922, 0.159190);
		glVertex3f( 0.138186, -2.252922, -0.193320);
		glVertex3f( 0.151996, -2.200349, 0.025501);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.138186, -2.252922, -0.193320);
		glVertex3f( 0.063282, -2.162998, -0.257849);
		glVertex3f( 0.151996, -2.200349, 0.025501);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.025379, -2.286937, -0.277205);
		glVertex3f( -0.106064, -2.151730, -0.223406);
		glVertex3f( 0.063282, -2.162998, -0.257849);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.025379, -2.286937, -0.277205);
		glVertex3f( -0.159555, -2.260526, -0.190639);
		glVertex3f( -0.106064, -2.151730, -0.223406);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.159555, -2.260526, -0.190639);
		glVertex3f( -0.213932, -2.205332, -0.001007);
		glVertex3f( -0.106064, -2.151730, -0.223406);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.230644, -2.252923, 0.138141);
		glVertex3f( -0.263490, -2.200349, 0.375499);
		glVertex3f( -0.213932, -2.205332, -0.001007);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.230644, -2.252923, 0.138141);
		glVertex3f( -0.266392, -2.245907, 0.597244);
		glVertex3f( -0.263490, -2.200349, 0.375499);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.266392, -2.245907, 0.597244);
		glVertex3f( -0.219907, -2.201061, 0.742742);
		glVertex3f( -0.263490, -2.200349, 0.375499);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.175505, -2.235276, 0.937489);
		glVertex3f( -0.104790, -2.200349, 0.941807);
		glVertex3f( -0.219907, -2.201061, 0.742742);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.175505, -2.235276, 0.937489);
		glVertex3f( -0.045871, -2.187146, 0.991697);
		glVertex3f( -0.104790, -2.200349, 0.941807);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.045871, -2.187146, 0.991697);
		glVertex3f( 0.040810, -2.208200, 0.970953);
		glVertex3f( -0.104790, -2.200349, 0.941807);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.103232, -2.239909, 0.940762);
		glVertex3f( 0.151996, -2.200349, 0.725497);
		glVertex3f( 0.040810, -2.208200, 0.970953);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.103232, -2.239909, 0.940762);
		glVertex3f( 0.222971, -2.252922, 0.591808);
		glVertex3f( 0.151996, -2.200349, 0.725497);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.222971, -2.252922, 0.591808);
		glVertex3f( 0.207680, -2.208201, 0.375499);
		glVertex3f( 0.151996, -2.200349, 0.725497);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.138186, -2.252922, -0.193320);
		glVertex3f( 0.025379, -2.286937, -0.277205);
		glVertex3f( 0.063282, -2.162998, -0.257849);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.138186, -2.252922, -0.193320);
		glVertex3f( 0.067225, -2.351081, -0.177770);
		glVertex3f( 0.025379, -2.286937, -0.277205);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.067225, -2.351081, -0.177770);
		glVertex3f( -0.083137, -2.341792, -0.204237);
		glVertex3f( 0.025379, -2.286937, -0.277205);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.159555, -2.260526, -0.190639);
		glVertex3f( -0.230644, -2.252923, 0.138141);
		glVertex3f( -0.213932, -2.205332, -0.001007);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.159555, -2.260526, -0.190639);
		glVertex3f( -0.191390, -2.341761, 0.028879);
		glVertex3f( -0.230644, -2.252923, 0.138141);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.191390, -2.341761, 0.028879);
		glVertex3f( -0.251525, -2.294080, 0.366024);
		glVertex3f( -0.230644, -2.252923, 0.138141);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.266392, -2.245907, 0.597244);
		glVertex3f( -0.175505, -2.235276, 0.937489);
		glVertex3f( -0.219907, -2.201061, 0.742742);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.266392, -2.245907, 0.597244);
		glVertex3f( -0.219626, -2.305496, 0.725497);
		glVertex3f( -0.175505, -2.235276, 0.937489);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.219626, -2.305496, 0.725497);
		glVertex3f( -0.108440, -2.297644, 0.970953);
		glVertex3f( -0.175505, -2.235276, 0.937489);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.045871, -2.187146, 0.991697);
		glVertex3f( 0.103232, -2.239909, 0.940762);
		glVertex3f( 0.040810, -2.208200, 0.970953);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.045871, -2.187146, 0.991697);
		glVertex3f( 0.037159, -2.305496, 0.941807);
		glVertex3f( 0.103232, -2.239909, 0.940762);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.037159, -2.305496, 0.941807);
		glVertex3f( 0.161559, -2.297644, 0.743507);
		glVertex3f( 0.103232, -2.239909, 0.940762);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.222971, -2.252922, 0.591808);
		glVertex3f( 0.222971, -2.252922, 0.159190);
		glVertex3f( 0.207680, -2.208201, 0.375499);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.222971, -2.252922, 0.591808);
		glVertex3f( 0.195860, -2.305496, 0.375499);
		glVertex3f( 0.222971, -2.252922, 0.159190);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.195860, -2.305496, 0.375499);
		glVertex3f( 0.161559, -2.297644, 0.007491);
		glVertex3f( 0.222971, -2.252922, 0.159190);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.081022, -2.337988, 0.159191);
		glVertex3f( 0.067225, -2.351081, -0.177770);
		glVertex3f( 0.161559, -2.297644, 0.007491);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.081022, -2.337988, 0.159191);
		glVertex3f( -0.077678, -2.337988, 0.025502);
		glVertex3f( 0.067225, -2.351081, -0.177770);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.077678, -2.337988, 0.025502);
		glVertex3f( -0.083137, -2.341792, -0.204237);
		glVertex3f( 0.067225, -2.351081, -0.177770);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.077678, -2.337988, 0.025502);
		glVertex3f( -0.191390, -2.341761, 0.028879);
		glVertex3f( -0.083137, -2.341792, -0.204237);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.077678, -2.337988, 0.025502);
		glVertex3f( -0.175762, -2.337987, 0.375499);
		glVertex3f( -0.191390, -2.341761, 0.028879);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.175762, -2.337987, 0.375499);
		glVertex3f( -0.251525, -2.294080, 0.366024);
		glVertex3f( -0.191390, -2.341761, 0.028879);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.175762, -2.337987, 0.375499);
		glVertex3f( -0.219626, -2.305496, 0.725497);
		glVertex3f( -0.251525, -2.294080, 0.366024);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.175762, -2.337987, 0.375499);
		glVertex3f( -0.080257, -2.321747, 0.720708);
		glVertex3f( -0.219626, -2.305496, 0.725497);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.080257, -2.321747, 0.720708);
		glVertex3f( -0.108440, -2.297644, 0.970953);
		glVertex3f( -0.219626, -2.305496, 0.725497);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.195860, -2.305496, 0.375499);
		glVertex3f( 0.081022, -2.337988, 0.159191);
		glVertex3f( 0.161559, -2.297644, 0.007491);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.195860, -2.305496, 0.375499);
		glVertex3f( 0.082647, -2.317467, 0.587681);
		glVertex3f( 0.081022, -2.337988, 0.159191);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.082647, -2.317467, 0.587681);
		glVertex3f( -0.035024, -2.331634, 0.370079);
		glVertex3f( 0.081022, -2.337988, 0.159191);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.080257, -2.321747, 0.720708);
		glVertex3f( 0.037159, -2.305496, 0.941807);
		glVertex3f( -0.108440, -2.297644, 0.970953);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.080257, -2.321747, 0.720708);
		glVertex3f( 0.082647, -2.317467, 0.587681);
		glVertex3f( 0.037159, -2.305496, 0.941807);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.082647, -2.317467, 0.587681);
		glVertex3f( 0.161559, -2.297644, 0.743507);
		glVertex3f( 0.037159, -2.305496, 0.941807);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.073367, -2.152257, 0.013712);
		glVertex3f( 0.120390, -2.047928, 0.035293);
		glVertex3f( -0.075684, -2.156659, 0.181573);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.239130, -1.110626, 0.134936);
		glVertex3f( 0.120390, -2.047928, 0.035293);
		glVertex3f( 0.236373, -1.485196, -0.055412);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.073367, -2.152257, 0.013712);
		glVertex3f( -0.075684, -2.156659, 0.181573);
		glVertex3f( -0.164643, -2.146573, 0.065341);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.073367, -2.152257, 0.013712);
		glVertex3f( -0.164643, -2.146573, 0.065341);
		glVertex3f( -0.160515, -2.075418, -0.115080);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.073367, -2.152257, 0.013712);
		glVertex3f( -0.160515, -2.075418, -0.115080);
		glVertex3f( 0.098626, -2.145005, -0.178166);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.239130, -1.110626, 0.134936);
		glVertex3f( 0.236373, -1.485196, -0.055412);
		glVertex3f( 0.312811, -0.908162, 0.090671);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055736, -1.327385, 0.236566);
		glVertex3f( 0.080912, -1.095477, 0.305518);
		glVertex3f( 0.000000, -0.436674, 0.400000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.263200, -1.213591, -0.014660);
		glVertex3f( -0.255228, -1.380301, 0.129750);
		glVertex3f( -0.337082, -0.761398, 0.103099);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.063578, -1.338965, -0.242372);
		glVertex3f( -0.195969, -1.223078, -0.149782);
		glVertex3f( -0.151483, -0.813235, -0.282797);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.180351, -1.467941, -0.237933);
		glVertex3f( 0.072261, -2.126201, -0.205860);
		glVertex3f( 0.197834, -0.893732, -0.291427);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.239130, -1.110626, 0.134936);
		glVertex3f( 0.312811, -0.908162, 0.090671);
		glVertex3f( 0.235114, -0.436674, 0.323607);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055736, -1.327385, 0.236566);
		glVertex3f( 0.000000, -0.436674, 0.400000);
		glVertex3f( -0.226699, -0.713576, 0.278711);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.263200, -1.213591, -0.014660);
		glVertex3f( -0.337082, -0.761398, 0.103099);
		glVertex3f( -0.345391, -0.715025, -0.139333);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.063578, -1.338965, -0.242372);
		glVertex3f( -0.151483, -0.813235, -0.282797);
		glVertex3f( 0.096354, -1.021547, -0.316725);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.180351, -1.467941, -0.237933);
		glVertex3f( 0.197834, -0.893732, -0.291427);
		glVertex3f( 0.337303, -0.795417, -0.150779);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.110555, -0.123620, 0.340260);
		glVertex3f( 0.275276, -0.068659, 0.199999);
		glVertex3f( 0.064982, 0.158784, 0.199998);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.289443, -0.123620, 0.210290);
		glVertex3f( -0.105148, -0.068658, 0.323605);
		glVertex3f( -0.170129, 0.158784, 0.123605);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.289443, -0.123620, -0.210290);
		glVertex3f( -0.340259, -0.068659, 0.000000);
		glVertex3f( -0.170129, 0.158784, -0.123605);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.097272, -0.399649, -0.365584);
		glVertex3f( -0.094245, -0.262444, -0.332062);
		glVertex3f( 0.064982, 0.158784, -0.199998);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.357771, -0.123623, 0.000000);
		glVertex3f( 0.275276, -0.068659, -0.199999);
		glVertex3f( 0.210292, 0.158782, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.210292, 0.158782, 0.000000);
		glVertex3f( 0.064982, 0.158784, -0.199998);
		glVertex3f( 0.000000, 0.263326, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.210292, 0.158782, 0.000000);
		glVertex3f( 0.275276, -0.068659, -0.199999);
		glVertex3f( 0.064982, 0.158784, -0.199998);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.275276, -0.068659, -0.199999);
		glVertex3f( 0.097272, -0.399649, -0.365584);
		glVertex3f( 0.064982, 0.158784, -0.199998);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.064982, 0.158784, -0.199998);
		glVertex3f( -0.170129, 0.158784, -0.123605);
		glVertex3f( 0.000000, 0.263326, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.064982, 0.158784, -0.199998);
		glVertex3f( -0.094245, -0.262444, -0.332062);
		glVertex3f( -0.170129, 0.158784, -0.123605);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.094245, -0.262444, -0.332062);
		glVertex3f( -0.289443, -0.123620, -0.210290);
		glVertex3f( -0.170129, 0.158784, -0.123605);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.170129, 0.158784, -0.123605);
		glVertex3f( -0.170129, 0.158784, 0.123605);
		glVertex3f( 0.000000, 0.263326, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.170129, 0.158784, -0.123605);
		glVertex3f( -0.340259, -0.068659, 0.000000);
		glVertex3f( -0.170129, 0.158784, 0.123605);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.340259, -0.068659, 0.000000);
		glVertex3f( -0.289443, -0.123620, 0.210290);
		glVertex3f( -0.170129, 0.158784, 0.123605);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.170129, 0.158784, 0.123605);
		glVertex3f( 0.064982, 0.158784, 0.199998);
		glVertex3f( 0.000000, 0.263326, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.170129, 0.158784, 0.123605);
		glVertex3f( -0.105148, -0.068658, 0.323605);
		glVertex3f( 0.064982, 0.158784, 0.199998);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.105148, -0.068658, 0.323605);
		glVertex3f( 0.110555, -0.123620, 0.340260);
		glVertex3f( 0.064982, 0.158784, 0.199998);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.064982, 0.158784, 0.199998);
		glVertex3f( 0.210292, 0.158782, 0.000000);
		glVertex3f( 0.000000, 0.263326, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.064982, 0.158784, 0.199998);
		glVertex3f( 0.275276, -0.068659, 0.199999);
		glVertex3f( 0.210292, 0.158782, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.275276, -0.068659, 0.199999);
		glVertex3f( 0.357771, -0.123623, 0.000000);
		glVertex3f( 0.210292, 0.158782, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.337303, -0.795417, -0.150779);
		glVertex3f( 0.275276, -0.068659, -0.199999);
		glVertex3f( 0.357771, -0.123623, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.337303, -0.795417, -0.150779);
		glVertex3f( 0.197834, -0.893732, -0.291427);
		glVertex3f( 0.275276, -0.068659, -0.199999);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.197834, -0.893732, -0.291427);
		glVertex3f( 0.097272, -0.399649, -0.365584);
		glVertex3f( 0.275276, -0.068659, -0.199999);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.096354, -1.021547, -0.316725);
		glVertex3f( -0.094245, -0.262444, -0.332062);
		glVertex3f( 0.097272, -0.399649, -0.365584);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.096354, -1.021547, -0.316725);
		glVertex3f( -0.151483, -0.813235, -0.282797);
		glVertex3f( -0.094245, -0.262444, -0.332062);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.151483, -0.813235, -0.282797);
		glVertex3f( -0.289443, -0.123620, -0.210290);
		glVertex3f( -0.094245, -0.262444, -0.332062);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.345391, -0.715025, -0.139333);
		glVertex3f( -0.340259, -0.068659, 0.000000);
		glVertex3f( -0.289443, -0.123620, -0.210290);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.345391, -0.715025, -0.139333);
		glVertex3f( -0.337082, -0.761398, 0.103099);
		glVertex3f( -0.340259, -0.068659, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.337082, -0.761398, 0.103099);
		glVertex3f( -0.289443, -0.123620, 0.210290);
		glVertex3f( -0.340259, -0.068659, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.226699, -0.713576, 0.278711);
		glVertex3f( -0.105148, -0.068658, 0.323605);
		glVertex3f( -0.289443, -0.123620, 0.210290);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.226699, -0.713576, 0.278711);
		glVertex3f( 0.000000, -0.436674, 0.400000);
		glVertex3f( -0.105148, -0.068658, 0.323605);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.436674, 0.400000);
		glVertex3f( 0.110555, -0.123620, 0.340260);
		glVertex3f( -0.105148, -0.068658, 0.323605);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.235114, -0.436674, 0.323607);
		glVertex3f( 0.275276, -0.068659, 0.199999);
		glVertex3f( 0.110555, -0.123620, 0.340260);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.235114, -0.436674, 0.323607);
		glVertex3f( 0.312811, -0.908162, 0.090671);
		glVertex3f( 0.275276, -0.068659, 0.199999);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.312811, -0.908162, 0.090671);
		glVertex3f( 0.357771, -0.123623, 0.000000);
		glVertex3f( 0.275276, -0.068659, 0.199999);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.197834, -0.893732, -0.291427);
		glVertex3f( 0.096354, -1.021547, -0.316725);
		glVertex3f( 0.097272, -0.399649, -0.365584);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.197834, -0.893732, -0.291427);
		glVertex3f( 0.072261, -2.126201, -0.205860);
		glVertex3f( 0.096354, -1.021547, -0.316725);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.072261, -2.126201, -0.205860);
		glVertex3f( -0.063578, -1.338965, -0.242372);
		glVertex3f( 0.096354, -1.021547, -0.316725);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.151483, -0.813235, -0.282797);
		glVertex3f( -0.345391, -0.715025, -0.139333);
		glVertex3f( -0.289443, -0.123620, -0.210290);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.151483, -0.813235, -0.282797);
		glVertex3f( -0.195969, -1.223078, -0.149782);
		glVertex3f( -0.345391, -0.715025, -0.139333);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.195969, -1.223078, -0.149782);
		glVertex3f( -0.263200, -1.213591, -0.014660);
		glVertex3f( -0.345391, -0.715025, -0.139333);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.337082, -0.761398, 0.103099);
		glVertex3f( -0.226699, -0.713576, 0.278711);
		glVertex3f( -0.289443, -0.123620, 0.210290);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.337082, -0.761398, 0.103099);
		glVertex3f( -0.255228, -1.380301, 0.129750);
		glVertex3f( -0.226699, -0.713576, 0.278711);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.255228, -1.380301, 0.129750);
		glVertex3f( -0.055736, -1.327385, 0.236566);
		glVertex3f( -0.226699, -0.713576, 0.278711);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.436674, 0.400000);
		glVertex3f( 0.235114, -0.436674, 0.323607);
		glVertex3f( 0.110555, -0.123620, 0.340260);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.436674, 0.400000);
		glVertex3f( 0.080912, -1.095477, 0.305518);
		glVertex3f( 0.235114, -0.436674, 0.323607);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.080912, -1.095477, 0.305518);
		glVertex3f( 0.239130, -1.110626, 0.134936);
		glVertex3f( 0.235114, -0.436674, 0.323607);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.312811, -0.908162, 0.090671);
		glVertex3f( 0.337303, -0.795417, -0.150779);
		glVertex3f( 0.357771, -0.123623, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.312811, -0.908162, 0.090671);
		glVertex3f( 0.236373, -1.485196, -0.055412);
		glVertex3f( 0.337303, -0.795417, -0.150779);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.236373, -1.485196, -0.055412);
		glVertex3f( 0.180351, -1.467941, -0.237933);
		glVertex3f( 0.337303, -0.795417, -0.150779);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.098626, -2.145005, -0.178166);
		glVertex3f( 0.072261, -2.126201, -0.205860);
		glVertex3f( 0.180351, -1.467941, -0.237933);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.098626, -2.145005, -0.178166);
		glVertex3f( -0.160515, -2.075418, -0.115080);
		glVertex3f( 0.072261, -2.126201, -0.205860);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.160515, -2.075418, -0.115080);
		glVertex3f( -0.063578, -1.338965, -0.242372);
		glVertex3f( 0.072261, -2.126201, -0.205860);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.160515, -2.075418, -0.115080);
		glVertex3f( -0.195969, -1.223078, -0.149782);
		glVertex3f( -0.063578, -1.338965, -0.242372);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.160515, -2.075418, -0.115080);
		glVertex3f( -0.164643, -2.146573, 0.065341);
		glVertex3f( -0.195969, -1.223078, -0.149782);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.164643, -2.146573, 0.065341);
		glVertex3f( -0.263200, -1.213591, -0.014660);
		glVertex3f( -0.195969, -1.223078, -0.149782);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.164643, -2.146573, 0.065341);
		glVertex3f( -0.255228, -1.380301, 0.129750);
		glVertex3f( -0.263200, -1.213591, -0.014660);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.164643, -2.146573, 0.065341);
		glVertex3f( -0.075684, -2.156659, 0.181573);
		glVertex3f( -0.255228, -1.380301, 0.129750);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.075684, -2.156659, 0.181573);
		glVertex3f( -0.055736, -1.327385, 0.236566);
		glVertex3f( -0.255228, -1.380301, 0.129750);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.236373, -1.485196, -0.055412);
		glVertex3f( 0.098626, -2.145005, -0.178166);
		glVertex3f( 0.180351, -1.467941, -0.237933);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.236373, -1.485196, -0.055412);
		glVertex3f( 0.120390, -2.047928, 0.035293);
		glVertex3f( 0.098626, -2.145005, -0.178166);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.120390, -2.047928, 0.035293);
		glVertex3f( 0.073367, -2.152257, 0.013712);
		glVertex3f( 0.098626, -2.145005, -0.178166);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.075684, -2.156659, 0.181573);
		glVertex3f( 0.080912, -1.095477, 0.305518);
		glVertex3f( -0.055736, -1.327385, 0.236566);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.075684, -2.156659, 0.181573);
		glVertex3f( 0.120390, -2.047928, 0.035293);
		glVertex3f( 0.080912, -1.095477, 0.305518);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.120390, -2.047928, 0.035293);
		glVertex3f( 0.239130, -1.110626, 0.134936);
		glVertex3f( 0.080912, -1.095477, 0.305518);
	glEnd();
}