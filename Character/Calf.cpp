#include "Calf.h"

void Calf::setRotate( float x, float y, float z ){
	rotateX = x;
	rotateY = y;
	rotateZ = z;
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
void Calf::setColor( float r, float g, float b){
	colorR = r;
	colorG = g;
	colorB = b;
}
void Calf::draw(){
	glPushMatrix();
		glColor3f( colorR, colorG, colorB );
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
	glNormal3f( 0.054990, -0.997865, 0.035231 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.035024, -2.331634, 0.370079);
		glVertex3f( 0.082647, -2.317467, 0.587681);
		glVertex3f( -0.080257, -2.321747, 0.720708);
	glEnd();

	glNormal3f( 0.173759, -0.984086, 0.037192 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.161559, -2.297644, 0.743507);
		glVertex3f( 0.082647, -2.317467, 0.587681);
		glVertex3f( 0.195860, -2.305496, 0.375499);
	glEnd();

	glNormal3f( 0.046383, -0.998340, 0.034133 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.035024, -2.331634, 0.370079);
		glVertex3f( -0.080257, -2.321747, 0.720708);
		glVertex3f( -0.175762, -2.337987, 0.375499);
	glEnd();

	glNormal3f( 0.045585, -0.998879, 0.012775 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.035024, -2.331634, 0.370079);
		glVertex3f( -0.175762, -2.337987, 0.375499);
		glVertex3f( -0.077678, -2.337988, 0.025502);
	glEnd();

	glNormal3f( -0.017335, -0.999638, 0.020578 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.035024, -2.331634, 0.370079);
		glVertex3f( -0.077678, -2.337988, 0.025502);
		glVertex3f( 0.081022, -2.337988, 0.159191);
	glEnd();

	glNormal3f( 0.709839, -0.699681, 0.081090 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.161559, -2.297644, 0.743507);
		glVertex3f( 0.195860, -2.305496, 0.375499);
		glVertex3f( 0.222971, -2.252922, 0.591808);
	glEnd();

	glNormal3f( 0.174315, -0.276145, 0.945176 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.108440, -2.297644, 0.970953);
		glVertex3f( 0.037159, -2.305496, 0.941807);
		glVertex3f( -0.045871, -2.187146, 0.991697);
	glEnd();

	glNormal3f( -0.841869, -0.536592, 0.057664 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.251525, -2.294080, 0.366024);
		glVertex3f( -0.219626, -2.305496, 0.725497);
		glVertex3f( -0.266392, -2.245907, 0.597244);
	glEnd();

	glNormal3f( -0.714334, -0.616234, -0.331637 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.083137, -2.341792, -0.204237);
		glVertex3f( -0.191390, -2.341761, 0.028879);
		glVertex3f( -0.159555, -2.260526, -0.190639);
	glEnd();

	glNormal3f( 0.773078, -0.594087, -0.222287 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.161559, -2.297644, 0.007491);
		glVertex3f( 0.067225, -2.351081, -0.177770);
		glVertex3f( 0.138186, -2.252922, -0.193320);
	glEnd();

	glNormal3f( 0.929659, -0.172692, 0.325440 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.161559, -2.297644, 0.743507);
		glVertex3f( 0.222971, -2.252922, 0.591808);
		glVertex3f( 0.103232, -2.239909, 0.940762);
	glEnd();

	glNormal3f( -0.403029, 0.056732, 0.913427 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.108440, -2.297644, 0.970953);
		glVertex3f( -0.045871, -2.187146, 0.991697);
		glVertex3f( -0.175505, -2.235276, 0.937489);
	glEnd();

	glNormal3f( -0.994461, 0.069887, -0.078501 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.251525, -2.294080, 0.366024);
		glVertex3f( -0.266392, -2.245907, 0.597244);
		glVertex3f( -0.230644, -2.252923, 0.138141);
	glEnd();

	glNormal3f( -0.439559, -0.269996, -0.856674 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.083137, -2.341792, -0.204237);
		glVertex3f( -0.159555, -2.260526, -0.190639);
		glVertex3f( 0.025379, -2.286937, -0.277205);
	glEnd();

	glNormal3f( 0.854831, -0.476436, -0.205603 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.161559, -2.297644, 0.007491);
		glVertex3f( 0.138186, -2.252922, -0.193320);
		glVertex3f( 0.222971, -2.252922, 0.159190);
	glEnd();

	glNormal3f( 0.221200, 0.966375, 0.131112 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.040810, -2.208200, 0.970953);
		glVertex3f( 0.151996, -2.200349, 0.725497);
		glVertex3f( 0.010048, -2.167857, 0.725496);
	glEnd();

	glNormal3f( -0.206775, 0.971476, 0.116099 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.219907, -2.201061, 0.742742);
		glVertex3f( -0.104790, -2.200349, 0.941807);
		glVertex3f( -0.148652, -2.167857, 0.591807);
	glEnd();

	glNormal3f( -0.767491, 0.631659, -0.109382 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.213932, -2.205332, -0.001007);
		glVertex3f( -0.263490, -2.200349, 0.375499);
		glVertex3f( -0.123666, -2.077127, 0.105991);
	glEnd();

	glNormal3f( -0.007237, 0.939342, -0.342905 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.063282, -2.162998, -0.257849);
		glVertex3f( -0.106064, -2.151730, -0.223406);
		glVertex3f( -0.026340, -2.081974, -0.034001);
	glEnd();

	glNormal3f( 0.187982, 0.982141, -0.007874 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.207680, -2.208201, 0.375499);
		glVertex3f( 0.151996, -2.200349, 0.025501);
		glVertex3f( 0.108642, -2.189075, 0.396748);
	glEnd();

	glNormal3f( 0.095978, 0.972600, 0.211749 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.108642, -2.189075, 0.396748);
		glVertex3f( -0.026340, -2.081974, -0.034001);
		glVertex3f( -0.026467, -2.173744, 0.387573);
	glEnd();

	glNormal3f( 0.543788, 0.838360, 0.038044 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.108642, -2.189075, 0.396748);
		glVertex3f( 0.151996, -2.200349, 0.025501);
		glVertex3f( -0.026340, -2.081974, -0.034001);
	glEnd();

	glNormal3f( 0.567709, 0.820280, -0.069617 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.151996, -2.200349, 0.025501);
		glVertex3f( 0.063282, -2.162998, -0.257849);
		glVertex3f( -0.026340, -2.081974, -0.034001);
	glEnd();

	glNormal3f( 0.334344, 0.920864, 0.200559 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.026340, -2.081974, -0.034001);
		glVertex3f( -0.123666, -2.077127, 0.105991);
		glVertex3f( -0.026467, -2.173744, 0.387573);
	glEnd();

	glNormal3f( -0.278989, 0.933255, -0.226277 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.026340, -2.081974, -0.034001);
		glVertex3f( -0.106064, -2.151730, -0.223406);
		glVertex3f( -0.123666, -2.077127, 0.105991);
	glEnd();

	glNormal3f( -0.721469, 0.666040, -0.189403 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.106064, -2.151730, -0.223406);
		glVertex3f( -0.213932, -2.205332, -0.001007);
		glVertex3f( -0.123666, -2.077127, 0.105991);
	glEnd();

	glNormal3f( 0.360151, 0.913521, 0.189131 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.123666, -2.077127, 0.105991);
		glVertex3f( -0.148652, -2.167857, 0.591807);
		glVertex3f( -0.026467, -2.173744, 0.387573);
	glEnd();

	glNormal3f( -0.496287, 0.857653, 0.134650 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.123666, -2.077127, 0.105991);
		glVertex3f( -0.263490, -2.200349, 0.375499);
		glVertex3f( -0.148652, -2.167857, 0.591807);
	glEnd();

	glNormal3f( -0.345945, 0.937275, 0.042875 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.263490, -2.200349, 0.375499);
		glVertex3f( -0.219907, -2.201061, 0.742742);
		glVertex3f( -0.148652, -2.167857, 0.591807);
	glEnd();

	glNormal3f( 0.016141, 0.999686, -0.019160 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.148652, -2.167857, 0.591807);
		glVertex3f( 0.010048, -2.167857, 0.725496);
		glVertex3f( -0.026467, -2.173744, 0.387573);
	glEnd();

	glNormal3f( -0.086639, 0.990917, 0.102848 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.148652, -2.167857, 0.591807);
		glVertex3f( -0.104790, -2.200349, 0.941807);
		glVertex3f( 0.010048, -2.167857, 0.725496);
	glEnd();

	glNormal3f( 0.021284, 0.986961, 0.159548 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.104790, -2.200349, 0.941807);
		glVertex3f( 0.040810, -2.208200, 0.970953);
		glVertex3f( 0.010048, -2.167857, 0.725496);
	glEnd();

	glNormal3f( 0.114684, 0.992958, -0.029691 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.010048, -2.167857, 0.725496);
		glVertex3f( 0.108642, -2.189075, 0.396748);
		glVertex3f( -0.026467, -2.173744, 0.387573);
	glEnd();

	glNormal3f( 0.223126, 0.974781, 0.004004 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.010048, -2.167857, 0.725496);
		glVertex3f( 0.151996, -2.200349, 0.725497);
		glVertex3f( 0.108642, -2.189075, 0.396748);
	glEnd();

	glNormal3f( 0.191352, 0.981485, 0.008424 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.151996, -2.200349, 0.725497);
		glVertex3f( 0.207680, -2.208201, 0.375499);
		glVertex3f( 0.108642, -2.189075, 0.396748);
	glEnd();

	glNormal3f( 0.702914, 0.704764, -0.096021 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.222971, -2.252922, 0.159190);
		glVertex3f( 0.151996, -2.200349, 0.025501);
		glVertex3f( 0.207680, -2.208201, 0.375499);
	glEnd();

	glNormal3f( 0.789812, 0.583191, -0.189963 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.222971, -2.252922, 0.159190);
		glVertex3f( 0.138186, -2.252922, -0.193320);
		glVertex3f( 0.151996, -2.200349, 0.025501);
	glEnd();

	glNormal3f( 0.816009, 0.548234, -0.183218 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.138186, -2.252922, -0.193320);
		glVertex3f( 0.063282, -2.162998, -0.257849);
		glVertex3f( 0.151996, -2.200349, 0.025501);
	glEnd();

	glNormal3f( -0.181874, 0.205792, -0.961546 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.025379, -2.286937, -0.277205);
		glVertex3f( -0.106064, -2.151730, -0.223406);
		glVertex3f( 0.063282, -2.162998, -0.257849);
	glEnd();

	glNormal3f( -0.430177, -0.059782, -0.900763 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.025379, -2.286937, -0.277205);
		glVertex3f( -0.159555, -2.260526, -0.190639);
		glVertex3f( -0.106064, -2.151730, -0.223406);
	glEnd();

	glNormal3f( -0.878731, 0.327451, -0.347285 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.159555, -2.260526, -0.190639);
		glVertex3f( -0.213932, -2.205332, -0.001007);
		glVertex3f( -0.106064, -2.151730, -0.223406);
	glEnd();

	glNormal3f( -0.990991, -0.032153, -0.130014 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.230644, -2.252923, 0.138141);
		glVertex3f( -0.263490, -2.200349, 0.375499);
		glVertex3f( -0.213932, -2.205332, -0.001007);
	glEnd();

	glNormal3f( -0.957164, -0.280897, -0.070236 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.230644, -2.252923, 0.138141);
		glVertex3f( -0.266392, -2.245907, 0.597244);
		glVertex3f( -0.263490, -2.200349, 0.375499);
	glEnd();

	glNormal3f( -0.835205, 0.540739, 0.100167 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.266392, -2.245907, 0.597244);
		glVertex3f( -0.219907, -2.201061, 0.742742);
		glVertex3f( -0.263490, -2.200349, 0.375499);
	glEnd();

	glNormal3f( -0.440891, 0.861494, 0.251878 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.175505, -2.235276, 0.937489);
		glVertex3f( -0.104790, -2.200349, 0.941807);
		glVertex3f( -0.219907, -2.201061, 0.742742);
	glEnd();

	glNormal3f( -0.437820, 0.850311, 0.292036 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.175505, -2.235276, 0.937489);
		glVertex3f( -0.045871, -2.187146, 0.991697);
		glVertex3f( -0.104790, -2.200349, 0.941807);
	glEnd();

	glNormal3f( 0.127560, 0.911182, -0.391759 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.045871, -2.187146, 0.991697);
		glVertex3f( 0.040810, -2.208200, 0.970953);
		glVertex3f( -0.104790, -2.200349, 0.941807);
	glEnd();

	glNormal3f( 0.536338, 0.800141, 0.268543 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.103232, -2.239909, 0.940762);
		glVertex3f( 0.151996, -2.200349, 0.725497);
		glVertex3f( 0.040810, -2.208200, 0.970953);
	glEnd();

	glNormal3f( 0.850379, 0.448544, 0.275069 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.103232, -2.239909, 0.940762);
		glVertex3f( 0.222971, -2.252922, 0.591808);
		glVertex3f( 0.151996, -2.200349, 0.725497);
	glEnd();

	glNormal3f( 0.702914, 0.704763, 0.096021 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.222971, -2.252922, 0.591808);
		glVertex3f( 0.207680, -2.208201, 0.375499);
		glVertex3f( 0.151996, -2.200349, 0.725497);
	glEnd();

	glNormal3f( 0.607561, -0.062139, -0.791839 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.138186, -2.252922, -0.193320);
		glVertex3f( 0.025379, -2.286937, -0.277205);
		glVertex3f( 0.063282, -2.162998, -0.257849);
	glEnd();

	glNormal3f( 0.603032, -0.530342, -0.595894 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.138186, -2.252922, -0.193320);
		glVertex3f( 0.067225, -2.351081, -0.177770);
		glVertex3f( 0.025379, -2.286937, -0.277205);
	glEnd();

	glNormal3f( 0.046428, -0.830405, -0.555222 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.067225, -2.351081, -0.177770);
		glVertex3f( -0.083137, -2.341792, -0.204237);
		glVertex3f( 0.025379, -2.286937, -0.277205);
	glEnd();

	glNormal3f( -0.947686, -0.249470, -0.199139 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.159555, -2.260526, -0.190639);
		glVertex3f( -0.230644, -2.252923, 0.138141);
		glVertex3f( -0.213932, -2.205332, -0.001007);
	glEnd();

	glNormal3f( -0.963255, -0.174427, -0.204241 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.159555, -2.260526, -0.190639);
		glVertex3f( -0.191390, -2.341761, 0.028879);
		glVertex3f( -0.230644, -2.252923, 0.138141);
	glEnd();

	glNormal3f( -0.956853, -0.257714, -0.134221 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.191390, -2.341761, 0.028879);
		glVertex3f( -0.251525, -2.294080, 0.366024);
		glVertex3f( -0.230644, -2.252923, 0.138141);
	glEnd();

	glNormal3f( -0.951745, 0.179927, 0.248612 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.266392, -2.245907, 0.597244);
		glVertex3f( -0.175505, -2.235276, 0.937489);
		glVertex3f( -0.219907, -2.201061, 0.742742);
	glEnd();

	glNormal3f( -0.947730, -0.186373, 0.258983 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.266392, -2.245907, 0.597244);
		glVertex3f( -0.219626, -2.305496, 0.725497);
		glVertex3f( -0.175505, -2.235276, 0.937489);
	glEnd();

	glNormal3f( -0.725657, -0.593740, 0.347699 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.219626, -2.305496, 0.725497);
		glVertex3f( -0.108440, -2.297644, 0.970953);
		glVertex3f( -0.175505, -2.235276, 0.937489);
	glEnd();

	glNormal3f( 0.011338, -0.677725, 0.735228 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.045871, -2.187146, 0.991697);
		glVertex3f( 0.103232, -2.239909, 0.940762);
		glVertex3f( 0.040810, -2.208200, 0.970953);
	glEnd();

	glNormal3f( 0.241454, -0.228207, 0.943198 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.045871, -2.187146, 0.991697);
		glVertex3f( 0.037159, -2.305496, 0.941807);
		glVertex3f( 0.103232, -2.239909, 0.940762);
	glEnd();

	glNormal3f( 0.653498, -0.652214, 0.384132 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.037159, -2.305496, 0.941807);
		glVertex3f( 0.161559, -2.297644, 0.743507);
		glVertex3f( 0.103232, -2.239909, 0.940762);
	glEnd();

	glNormal3f( 0.946222, 0.323519, -0.000000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.222971, -2.252922, 0.591808);
		glVertex3f( 0.222971, -2.252922, 0.159190);
		glVertex3f( 0.207680, -2.208201, 0.375499);
	glEnd();

	glNormal3f( 0.888787, -0.458321, -0.000000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.222971, -2.252922, 0.591808);
		glVertex3f( 0.195860, -2.305496, 0.375499);
		glVertex3f( 0.222971, -2.252922, 0.159190);
	glEnd();

	glNormal3f( 0.709839, -0.699681, -0.081091 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.195860, -2.305496, 0.375499);
		glVertex3f( 0.161559, -2.297644, 0.007491);
		glVertex3f( 0.222971, -2.252922, 0.159190);
	glEnd();

	glNormal3f( 0.470317, -0.882370, 0.015030 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.081022, -2.337988, 0.159191);
		glVertex3f( 0.067225, -2.351081, -0.177770);
		glVertex3f( 0.161559, -2.297644, 0.007491);
	glEnd();

	glNormal3f( -0.033857, -0.998618, 0.040190 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.081022, -2.337988, 0.159191);
		glVertex3f( -0.077678, -2.337988, 0.025502);
		glVertex3f( 0.067225, -2.351081, -0.177770);
	glEnd();

	glNormal3f( -0.064820, -0.997733, 0.018061 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.077678, -2.337988, 0.025502);
		glVertex3f( -0.083137, -2.341792, -0.204237);
		glVertex3f( 0.067225, -2.351081, -0.177770);
	glEnd();

	glNormal3f( 0.033631, -0.999310, 0.015749 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.077678, -2.337988, 0.025502);
		glVertex3f( -0.191390, -2.341761, 0.028879);
		glVertex3f( -0.083137, -2.341792, -0.204237);
	glEnd();

	glNormal3f( 0.033445, -0.999397, 0.009373 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.077678, -2.337988, 0.025502);
		glVertex3f( -0.175762, -2.337987, 0.375499);
		glVertex3f( -0.191390, -2.341761, 0.028879);
	glEnd();

	glNormal3f( -0.504169, -0.863007, 0.032127 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.175762, -2.337987, 0.375499);
		glVertex3f( -0.251525, -2.294080, 0.366024);
		glVertex3f( -0.191390, -2.341761, 0.028879);
	glEnd();

	glNormal3f( -0.502957, -0.864141, 0.017187 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.175762, -2.337987, 0.375499);
		glVertex3f( -0.219626, -2.305496, 0.725497);
		glVertex3f( -0.251525, -2.294080, 0.366024);
	glEnd();

	glNormal3f( -0.112832, -0.990562, 0.077816 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.175762, -2.337987, 0.375499);
		glVertex3f( -0.080257, -2.321747, 0.720708);
		glVertex3f( -0.219626, -2.305496, 0.725497);
	glEnd();

	glNormal3f( -0.112621, -0.990191, 0.082689 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.080257, -2.321747, 0.720708);
		glVertex3f( -0.108440, -2.297644, 0.970953);
		glVertex3f( -0.219626, -2.305496, 0.725497);
	glEnd();

	glNormal3f( 0.364379, -0.929695, -0.053799 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.195860, -2.305496, 0.375499);
		glVertex3f( 0.081022, -2.337988, 0.159191);
		glVertex3f( 0.161559, -2.297644, 0.007491);
	glEnd();

	glNormal3f( 0.190353, -0.980626, 0.046241 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.195860, -2.305496, 0.375499);
		glVertex3f( 0.082647, -2.317467, 0.587681);
		glVertex3f( 0.081022, -2.337988, 0.159191);
	glEnd();

	glNormal3f( 0.032007, -0.998349, 0.047691 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.082647, -2.317467, 0.587681);
		glVertex3f( -0.035024, -2.331634, 0.370079);
		glVertex3f( 0.081022, -2.337988, 0.159191);
	glEnd();

	glNormal3f( -0.035272, -0.995145, 0.091878 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.080257, -2.321747, 0.720708);
		glVertex3f( 0.037159, -2.305496, 0.941807);
		glVertex3f( -0.108440, -2.297644, 0.970953);
	glEnd();

	glNormal3f( 0.060034, -0.997336, 0.041425 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.080257, -2.321747, 0.720708);
		glVertex3f( 0.082647, -2.317467, 0.587681);
		glVertex3f( 0.037159, -2.305496, 0.941807);
	glEnd();

	glNormal3f( 0.145364, -0.988007, 0.052070 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.082647, -2.317467, 0.587681);
		glVertex3f( 0.161559, -2.297644, 0.743507);
		glVertex3f( 0.037159, -2.305496, 0.941807);
	glEnd();

	glNormal3f( 0.680815, -0.429576, 0.593258 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.073367, -2.152257, 0.013712);
		glVertex3f( 0.120390, -2.047928, 0.035293);
		glVertex3f( -0.075684, -2.156659, 0.181573);
	glEnd();

	glNormal3f( 0.947792, -0.149986, 0.281414 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.239130, -1.110626, 0.134936);
		glVertex3f( 0.120390, -2.047928, 0.035293);
		glVertex3f( 0.236373, -1.485196, -0.055412);
	glEnd();

	glNormal3f( -0.036537, -0.997612, -0.058604 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.073367, -2.152257, 0.013712);
		glVertex3f( -0.075684, -2.156659, 0.181573);
		glVertex3f( -0.164643, -2.146573, 0.065341);
	glEnd();

	glNormal3f( -0.101689, -0.924650, -0.366990 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.073367, -2.152257, 0.013712);
		glVertex3f( -0.164643, -2.146573, 0.065341);
		glVertex3f( -0.160515, -2.075418, -0.115080);
	glEnd();

	glNormal3f( -0.275070, -0.958691, -0.072446 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.073367, -2.152257, 0.013712);
		glVertex3f( -0.160515, -2.075418, -0.115080);
		glVertex3f( 0.098626, -2.145005, -0.178166);
	glEnd();

	glNormal3f( 0.874859, -0.224544, 0.429187 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.239130, -1.110626, 0.134936);
		glVertex3f( 0.236373, -1.485196, -0.055412);
		glVertex3f( 0.312811, -0.908162, 0.090671);
	glEnd();

	glNormal3f( -0.208417, -0.163879, 0.964213 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055736, -1.327385, 0.236566);
		glVertex3f( 0.080912, -1.095477, 0.305518);
		glVertex3f( 0.000000, -0.436674, 0.400000);
	glEnd();

	glNormal3f( -0.985712, -0.134720, -0.101107 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.263200, -1.213591, -0.014660);
		glVertex3f( -0.255228, -1.380301, 0.129750);
		glVertex3f( -0.337082, -0.761398, 0.103099);
	glEnd();

	glNormal3f( -0.658861, -0.166573, -0.733590 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.063578, -1.338965, -0.242372);
		glVertex3f( -0.195969, -1.223078, -0.149782);
		glVertex3f( -0.151483, -0.813235, -0.282797);
	glEnd();

	glNormal3f( 0.313768, -0.097542, -0.944476 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.180351, -1.467941, -0.237933);
		glVertex3f( 0.072261, -2.126201, -0.205860);
		glVertex3f( 0.197834, -0.893732, -0.291427);
	glEnd();

	glNormal3f( 0.792788, -0.159924, 0.588142 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.239130, -1.110626, 0.134936);
		glVertex3f( 0.312811, -0.908162, 0.090671);
		glVertex3f( 0.235114, -0.436674, 0.323607);
	glEnd();

	glNormal3f( -0.315323, -0.152143, 0.936709 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055736, -1.327385, 0.236566);
		glVertex3f( 0.000000, -0.436674, 0.400000);
		glVertex3f( -0.226699, -0.713576, 0.278711);
	glEnd();

	glNormal3f( -0.986792, -0.161967, 0.002841 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.263200, -1.213591, -0.014660);
		glVertex3f( -0.337082, -0.761398, 0.103099);
		glVertex3f( -0.345391, -0.715025, -0.139333);
	glEnd();

	glNormal3f( -0.226845, -0.112319, -0.967432 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.063578, -1.338965, -0.242372);
		glVertex3f( -0.151483, -0.813235, -0.282797);
		glVertex3f( 0.096354, -1.021547, -0.316725);
	glEnd();

	glNormal3f( 0.736562, -0.084939, -0.671015 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.180351, -1.467941, -0.237933);
		glVertex3f( 0.197834, -0.893732, -0.291427);
		glVertex3f( 0.337303, -0.795417, -0.150779);
	glEnd();

	glNormal3f( 0.487005, 0.450287, 0.748377 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.110555, -0.123620, 0.340260);
		glVertex3f( 0.275276, -0.068659, 0.199999);
		glVertex3f( 0.064982, 0.158784, 0.199998);
	glEnd();

	glNormal3f( -0.561260, 0.450287, 0.694427 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.289443, -0.123620, 0.210290);
		glVertex3f( -0.105148, -0.068658, 0.323605);
		glVertex3f( -0.170129, 0.158784, 0.123605);
	glEnd();

	glNormal3f( -0.833881, 0.450287, -0.319193 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.289443, -0.123620, -0.210290);
		glVertex3f( -0.340259, -0.068659, 0.000000);
		glVertex3f( -0.170129, 0.158784, -0.123605);
	glEnd();

	glNormal3f( 0.037355, 0.286071, -0.957480 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.097272, -0.399649, -0.365584);
		glVertex3f( -0.094245, -0.262444, -0.332062);
		glVertex3f( 0.064982, 0.158784, -0.199998);
	glEnd();

	glNormal3f( 0.862244, 0.450284, -0.231906 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.357771, -0.123623, 0.000000);
		glVertex3f( 0.275276, -0.068659, -0.199999);
		glVertex3f( 0.210292, 0.158782, 0.000000);
	glEnd();

	glNormal3f( 0.423559, 0.851997, -0.307731 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.210292, 0.158782, 0.000000);
		glVertex3f( 0.064982, 0.158784, -0.199998);
		glVertex3f( 0.000000, 0.263326, 0.000000);
	glEnd();

	glNormal3f( 0.647829, 0.598983, -0.470677 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.210292, 0.158782, 0.000000);
		glVertex3f( 0.275276, -0.068659, -0.199999);
		glVertex3f( 0.064982, 0.158784, -0.199998);
	glEnd();

	glNormal3f( 0.310086, 0.286708, -0.906446 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.275276, -0.068659, -0.199999);
		glVertex3f( 0.097272, -0.399649, -0.365584);
		glVertex3f( 0.064982, 0.158784, -0.199998);
	glEnd();

	glNormal3f( -0.161787, 0.851999, -0.497919 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.064982, 0.158784, -0.199998);
		glVertex3f( -0.170129, 0.158784, -0.123605);
		glVertex3f( 0.000000, 0.263326, 0.000000);
	glEnd();

	glNormal3f( -0.285421, 0.383295, -0.878419 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.064982, 0.158784, -0.199998);
		glVertex3f( -0.094245, -0.262444, -0.332062);
		glVertex3f( -0.170129, 0.158784, -0.123605);
	glEnd();

	glNormal3f( -0.274588, 0.386302, -0.880552 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.094245, -0.262444, -0.332062);
		glVertex3f( -0.289443, -0.123620, -0.210290);
		glVertex3f( -0.170129, 0.158784, -0.123605);
	glEnd();

	glNormal3f( -0.523542, 0.852000, 0.000000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.170129, 0.158784, -0.123605);
		glVertex3f( -0.170129, 0.158784, 0.123605);
		glVertex3f( 0.000000, 0.263326, 0.000000);
	glEnd();

	glNormal3f( -0.800763, 0.598981, 0.000000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.170129, 0.158784, -0.123605);
		glVertex3f( -0.340259, -0.068659, 0.000000);
		glVertex3f( -0.170129, 0.158784, 0.123605);
	glEnd();

	glNormal3f( -0.833881, 0.450287, 0.319193 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.340259, -0.068659, 0.000000);
		glVertex3f( -0.289443, -0.123620, 0.210290);
		glVertex3f( -0.170129, 0.158784, 0.123605);
	glEnd();

	glNormal3f( -0.161787, 0.851999, 0.497919 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.170129, 0.158784, 0.123605);
		glVertex3f( 0.064982, 0.158784, 0.199998);
		glVertex3f( 0.000000, 0.263326, 0.000000);
	glEnd();

	glNormal3f( -0.247453, 0.598984, 0.761568 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.170129, 0.158784, 0.123605);
		glVertex3f( -0.105148, -0.068658, 0.323605);
		glVertex3f( 0.064982, 0.158784, 0.199998);
	glEnd();

	glNormal3f( 0.045885, 0.450287, 0.891704 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.105148, -0.068658, 0.323605);
		glVertex3f( 0.110555, -0.123620, 0.340260);
		glVertex3f( 0.064982, 0.158784, 0.199998);
	glEnd();

	glNormal3f( 0.423559, 0.851997, 0.307731 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.064982, 0.158784, 0.199998);
		glVertex3f( 0.210292, 0.158782, 0.000000);
		glVertex3f( 0.000000, 0.263326, 0.000000);
	glEnd();

	glNormal3f( 0.647829, 0.598983, 0.470677 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.064982, 0.158784, 0.199998);
		glVertex3f( 0.275276, -0.068659, 0.199999);
		glVertex3f( 0.210292, 0.158782, 0.000000);
	glEnd();

	glNormal3f( 0.862244, 0.450284, 0.231906 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.275276, -0.068659, 0.199999);
		glVertex3f( 0.357771, -0.123623, 0.000000);
		glVertex3f( 0.210292, 0.158782, 0.000000);
	glEnd();

	glNormal3f( 0.928255, 0.054305, -0.367959 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.337303, -0.795417, -0.150779);
		glVertex3f( 0.275276, -0.068659, -0.199999);
		glVertex3f( 0.357771, -0.123623, 0.000000);
	glEnd();

	glNormal3f( 0.705726, 0.012257, -0.708379 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.337303, -0.795417, -0.150779);
		glVertex3f( 0.197834, -0.893732, -0.291427);
		glVertex3f( 0.275276, -0.068659, -0.199999);
	glEnd();

	glNormal3f( 0.659332, 0.021396, -0.751548 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.197834, -0.893732, -0.291427);
		glVertex3f( 0.097272, -0.399649, -0.365584);
		glVertex3f( 0.275276, -0.068659, -0.199999);
	glEnd();

	glNormal3f( -0.224486, -0.075994, -0.971510 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.096354, -1.021547, -0.316725);
		glVertex3f( -0.094245, -0.262444, -0.332062);
		glVertex3f( 0.097272, -0.399649, -0.365584);
	glEnd();

	glNormal3f( -0.190994, -0.067741, -0.979251 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.096354, -1.021547, -0.316725);
		glVertex3f( -0.151483, -0.813235, -0.282797);
		glVertex3f( -0.094245, -0.262444, -0.332062);
	glEnd();

	glNormal3f( -0.539039, -0.019301, -0.842060 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.151483, -0.813235, -0.282797);
		glVertex3f( -0.289443, -0.123620, -0.210290);
		glVertex3f( -0.094245, -0.262444, -0.332062);
	glEnd();

	glNormal3f( -0.966397, 0.061477, -0.249596 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.345391, -0.715025, -0.139333);
		glVertex3f( -0.340259, -0.068659, 0.000000);
		glVertex3f( -0.289443, -0.123620, -0.210290);
	glEnd();

	glNormal3f( -0.999409, 0.000529, 0.034356 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.345391, -0.715025, -0.139333);
		glVertex3f( -0.337082, -0.761398, 0.103099);
		glVertex3f( -0.340259, -0.068659, 0.000000);
	glEnd();

	glNormal3f( -0.969615, 0.031655, 0.242579 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.337082, -0.761398, 0.103099);
		glVertex3f( -0.289443, -0.123620, 0.210290);
		glVertex3f( -0.340259, -0.068659, 0.000000);
	glEnd();

	glNormal3f( -0.532262, 0.041458, 0.845564 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.226699, -0.713576, 0.278711);
		glVertex3f( -0.105148, -0.068658, 0.323605);
		glVertex3f( -0.289443, -0.123620, 0.210290);
	glEnd();

	glNormal3f( -0.504359, 0.035000, 0.862785 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.226699, -0.713576, 0.278711);
		glVertex3f( 0.000000, -0.436674, 0.400000);
		glVertex3f( -0.105148, -0.068658, 0.323605);
	glEnd();

	glNormal3f( -0.025709, 0.196139, 0.980239 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.436674, 0.400000);
		glVertex3f( 0.110555, -0.123620, 0.340260);
		glVertex3f( -0.105148, -0.068658, 0.323605);
	glEnd();

	glNormal3f( 0.596963, 0.196140, 0.777923 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.235114, -0.436674, 0.323607);
		glVertex3f( 0.275276, -0.068659, 0.199999);
		glVertex3f( 0.110555, -0.123620, 0.340260);
	glEnd();

	glNormal3f( 0.949612, 0.001641, 0.313424 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.235114, -0.436674, 0.323607);
		glVertex3f( 0.312811, -0.908162, 0.090671);
		glVertex3f( 0.275276, -0.068659, 0.199999);
	glEnd();

	glNormal3f( 0.923574, -0.008626, 0.383323 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.312811, -0.908162, 0.090671);
		glVertex3f( 0.357771, -0.123623, 0.000000);
		glVertex3f( 0.275276, -0.068659, 0.199999);
	glEnd();

	glNormal3f( 0.328507, -0.074457, -0.941562 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.197834, -0.893732, -0.291427);
		glVertex3f( 0.096354, -1.021547, -0.316725);
		glVertex3f( 0.097272, -0.399649, -0.365584);
	glEnd();

	glNormal3f( 0.358519, -0.100960, -0.928047 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.197834, -0.893732, -0.291427);
		glVertex3f( 0.072261, -2.126201, -0.205860);
		glVertex3f( 0.096354, -1.021547, -0.316725);
	glEnd();

	glNormal3f( -0.266511, -0.090493, -0.959574 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.072261, -2.126201, -0.205860);
		glVertex3f( -0.063578, -1.338965, -0.242372);
		glVertex3f( 0.096354, -1.021547, -0.316725);
	glEnd();

	glNormal3f( -0.606668, -0.037878, -0.794052 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.151483, -0.813235, -0.282797);
		glVertex3f( -0.345391, -0.715025, -0.139333);
		glVertex3f( -0.289443, -0.123620, -0.210290);
	glEnd();

	glNormal3f( -0.640951, -0.173130, -0.747802 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.151483, -0.813235, -0.282797);
		glVertex3f( -0.195969, -1.223078, -0.149782);
		glVertex3f( -0.345391, -0.715025, -0.139333);
	glEnd();

	glNormal3f( -0.874064, -0.248484, -0.417455 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.195969, -1.223078, -0.149782);
		glVertex3f( -0.263200, -1.213591, -0.014660);
		glVertex3f( -0.345391, -0.715025, -0.139333);
	glEnd();

	glNormal3f( -0.842953, -0.027338, 0.537292 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.337082, -0.761398, 0.103099);
		glVertex3f( -0.226699, -0.713576, 0.278711);
		glVertex3f( -0.289443, -0.123620, 0.210290);
	glEnd();

	glNormal3f( -0.832670, -0.086574, 0.546960 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.337082, -0.761398, 0.103099);
		glVertex3f( -0.255228, -1.380301, 0.129750);
		glVertex3f( -0.226699, -0.713576, 0.278711);
	glEnd();

	glNormal3f( -0.426868, -0.179748, 0.886270 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.255228, -1.380301, 0.129750);
		glVertex3f( -0.055736, -1.327385, 0.236566);
		glVertex3f( -0.226699, -0.713576, 0.278711);
	glEnd();

	glNormal3f( 0.308211, 0.072172, 0.948576 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.436674, 0.400000);
		glVertex3f( 0.235114, -0.436674, 0.323607);
		glVertex3f( 0.110555, -0.123620, 0.340260);
	glEnd();

	glNormal3f( 0.307531, -0.097969, 0.946481 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.436674, 0.400000);
		glVertex3f( 0.080912, -1.095477, 0.305518);
		glVertex3f( 0.235114, -0.436674, 0.323607);
	glEnd();

	glNormal3f( 0.712222, -0.185296, 0.677056 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.080912, -1.095477, 0.305518);
		glVertex3f( 0.239130, -1.110626, 0.134936);
		glVertex3f( 0.235114, -0.436674, 0.323607);
	glEnd();

	glNormal3f( 0.995751, -0.047979, 0.078605 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.312811, -0.908162, 0.090671);
		glVertex3f( 0.337303, -0.795417, -0.150779);
		glVertex3f( 0.357771, -0.123623, 0.000000);
	glEnd();

	glNormal3f( 0.989539, -0.139949, 0.035030 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.312811, -0.908162, 0.090671);
		glVertex3f( 0.236373, -1.485196, -0.055412);
		glVertex3f( 0.337303, -0.795417, -0.150779);
	glEnd();

	glNormal3f( 0.935678, -0.178957, -0.304107 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.236373, -1.485196, -0.055412);
		glVertex3f( 0.180351, -1.467941, -0.237933);
		glVertex3f( 0.337303, -0.795417, -0.150779);
	glEnd();

	glNormal3f( 0.665604, -0.144966, -0.732090 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.098626, -2.145005, -0.178166);
		glVertex3f( 0.072261, -2.126201, -0.205860);
		glVertex3f( 0.180351, -1.467941, -0.237933);
	glEnd();

	glNormal3f( -0.316005, -0.897245, -0.308372 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.098626, -2.145005, -0.178166);
		glVertex3f( -0.160515, -2.075418, -0.115080);
		glVertex3f( 0.072261, -2.126201, -0.205860);
	glEnd();

	glNormal3f( -0.381636, -0.108426, -0.917931 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.160515, -2.075418, -0.115080);
		glVertex3f( -0.063578, -1.338965, -0.242372);
		glVertex3f( 0.072261, -2.126201, -0.205860);
	glEnd();

	glNormal3f( -0.605482, -0.057503, -0.793779 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.160515, -2.075418, -0.115080);
		glVertex3f( -0.195969, -1.223078, -0.149782);
		glVertex3f( -0.063578, -1.338965, -0.242372);
	glEnd();

	glNormal3f( -0.998273, -0.043146, -0.039858 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.160515, -2.075418, -0.115080);
		glVertex3f( -0.164643, -2.146573, 0.065341);
		glVertex3f( -0.195969, -1.223078, -0.149782);
	glEnd();

	glNormal3f( -0.891186, -0.131373, -0.434198 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.164643, -2.146573, 0.065341);
		glVertex3f( -0.263200, -1.213591, -0.014660);
		glVertex3f( -0.195969, -1.223078, -0.149782);
	glEnd();

	glNormal3f( -0.991106, -0.110992, -0.073417 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.164643, -2.146573, 0.065341);
		glVertex3f( -0.255228, -1.380301, 0.129750);
		glVertex3f( -0.263200, -1.213591, -0.014660);
	glEnd();

	glNormal3f( -0.791859, -0.143505, 0.593604 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.164643, -2.146573, 0.065341);
		glVertex3f( -0.075684, -2.156659, 0.181573);
		glVertex3f( -0.255228, -1.380301, 0.129750);
	glEnd();

	glNormal3f( -0.461650, -0.047636, 0.885782 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.075684, -2.156659, 0.181573);
		glVertex3f( -0.055736, -1.327385, 0.236566);
		glVertex3f( -0.255228, -1.380301, 0.129750);
	glEnd();

	glNormal3f( 0.942696, -0.140502, -0.302626 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.236373, -1.485196, -0.055412);
		glVertex3f( 0.098626, -2.145005, -0.178166);
		glVertex3f( 0.180351, -1.467941, -0.237933);
	glEnd();

	glNormal3f( 0.979146, -0.203018, -0.007506 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.236373, -1.485196, -0.055412);
		glVertex3f( 0.120390, -2.047928, 0.035293);
		glVertex3f( 0.098626, -2.145005, -0.178166);
	glEnd();

	glNormal3f( 0.898811, -0.426255, 0.102208 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.120390, -2.047928, 0.035293);
		glVertex3f( 0.073367, -2.152257, 0.013712);
		glVertex3f( 0.098626, -2.145005, -0.178166);
	glEnd();

	glNormal3f( -0.377838, -0.052212, 0.924398 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.075684, -2.156659, 0.181573);
		glVertex3f( 0.080912, -1.095477, 0.305518);
		glVertex3f( -0.055736, -1.327385, 0.236566);
	glEnd();

	glNormal3f( 0.650857, -0.182130, 0.737030 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.075684, -2.156659, 0.181573);
		glVertex3f( 0.120390, -2.047928, 0.035293);
		glVertex3f( 0.080912, -1.095477, 0.305518);
	glEnd();

	glNormal3f( 0.716134, -0.162873, 0.678693 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.120390, -2.047928, 0.035293);
		glVertex3f( 0.239130, -1.110626, 0.134936);
		glVertex3f( 0.080912, -1.095477, 0.305518);
	glEnd();
}