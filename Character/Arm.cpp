#include "Arm.h"

void Arm::setRotate( float x, float y, float z ){
	rotateX = x;
	rotateY = y;
	rotateZ = z;
}
void Arm::setScale( float x, float y, float z ){
	scaleX = x;
	scaleY = y;
	scaleZ = z;
}
void Arm::setArmPosition( float x, float y, float z ){
	posX = x;
	posY = y;
	posZ = z;
}
void Arm::setColor( float r, float g, float b ){
	colorR = r;
	colorG = g;
	colorB = b;
}
void Arm::setMirror( bool m ){
	mirror = m;
}
void Arm::draw(){
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
void Arm::privateDraw(){
	glNormal3f( -0.412100, -0.734900, 0.538600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.864160, -2.627635, 0.931565);
		glVertex3f( 0.870006, -2.613621, 0.955160);
		glVertex3f( 0.843177, -2.609375, 0.940427);
	glEnd();

	glNormal3f( 0.285700, -0.186000, 0.940100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.887642, -2.569053, 0.958616);
		glVertex3f( 0.870006, -2.613621, 0.955160);
		glVertex3f( 0.906067, -2.588477, 0.949174);
	glEnd();

	glNormal3f( -0.576700, -0.780200, 0.242300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.864160, -2.627635, 0.931565);
		glVertex3f( 0.843177, -2.609375, 0.940427);
		glVertex3f( 0.846167, -2.620490, 0.911749);
	glEnd();

	glNormal3f( -0.362100, -0.932100, -0.007300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.864160, -2.627635, 0.931565);
		glVertex3f( 0.846167, -2.620490, 0.911749);
		glVertex3f( 0.874845, -2.631606, 0.908759);
	glEnd();

	glNormal3f( 0.229700, -0.934900, 0.270400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.864160, -2.627635, 0.931565);
		glVertex3f( 0.874845, -2.631606, 0.908759);
		glVertex3f( 0.885472, -2.621531, 0.934567);
	glEnd();

	glNormal3f( 0.593900, 0.182500, 0.783500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.887642, -2.569053, 0.958616);
		glVertex3f( 0.906067, -2.588477, 0.949174);
		glVertex3f( 0.904436, -2.526218, 0.935909);
	glEnd();

	glNormal3f( -0.656400, 0.298200, 0.693000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.841997, -2.561830, 0.933551);
		glVertex3f( 0.859666, -2.570491, 0.954013);
		glVertex3f( 0.862506, -2.514445, 0.932585);
	glEnd();

	glNormal3f( -0.906900, 0.102900, -0.408600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.847085, -2.580740, 0.884761);
		glVertex3f( 0.835827, -2.577361, 0.910602);
		glVertex3f( 0.847267, -2.520503, 0.899525);
	glEnd();

	glNormal3f( 0.415800, -0.130500, -0.900000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.892079, -2.594835, 0.889603);
		glVertex3f( 0.867495, -2.599593, 0.878934);
		glVertex3f( 0.873385, -2.534273, 0.872186);
	glEnd();

	glNormal3f( 0.942100, -0.291800, -0.165400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.913233, -2.585041, 0.932601);
		glVertex3f( 0.904494, -2.599836, 0.908925);
		glVertex3f( 0.919577, -2.543535, 0.895518);
	glEnd();

	glNormal3f( 0.391000, 0.306700, 0.867800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.887642, -2.569053, 0.958616);
		glVertex3f( 0.904436, -2.526218, 0.935909);
		glVertex3f( 0.885577, -2.515426, 0.940592);
	glEnd();

	glNormal3f( -0.781200, 0.348700, 0.517900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.841997, -2.561830, 0.933551);
		glVertex3f( 0.862506, -2.514445, 0.932585);
		glVertex3f( 0.854820, -2.513246, 0.920184);
	glEnd();

	glNormal3f( -0.904600, 0.104000, -0.413300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.847085, -2.580740, 0.884761);
		glVertex3f( 0.847267, -2.520503, 0.899525);
		glVertex3f( 0.858423, -2.523023, 0.874476);
	glEnd();

	glNormal3f( 0.204100, -0.211900, -0.955800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.892079, -2.594835, 0.889603);
		glVertex3f( 0.873385, -2.534273, 0.872186);
		glVertex3f( 0.898997, -2.539155, 0.878738);
	glEnd();

	glNormal3f( 0.983600, -0.177900, -0.030900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.913233, -2.585041, 0.932601);
		glVertex3f( 0.919577, -2.543535, 0.895518);
		glVertex3f( 0.921383, -2.537812, 0.920075);
	glEnd();

	glNormal3f( 0.082700, 0.533600, 0.841700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.892474, -2.473702, 0.922161);
		glVertex3f( 0.916270, -2.473318, 0.919579);
		glVertex3f( 0.911653, -2.381596, 0.861883);
	glEnd();

	glNormal3f( -0.850900, 0.386600, -0.355600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.867409, -2.480926, 0.876516);
		glVertex3f( 0.868018, -2.457802, 0.900198);
		glVertex3f( 0.889109, -2.448814, 0.859499);
	glEnd();

	glNormal3f( -0.435500, -0.247500, -0.865500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.898405, -2.497973, 0.848292);
		glVertex3f( 0.882281, -2.484877, 0.852660);
		glVertex3f( 0.910715, -2.468010, 0.833528);
	glEnd();

	glNormal3f( 0.498700, -0.656200, -0.566300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.931793, -2.500342, 0.869954);
		glVertex3f( 0.920208, -2.497042, 0.855928);
		glVertex3f( 0.945622, -2.473289, 0.850786);
	glEnd();

	glNormal3f( 0.946500, -0.001200, 0.322800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.933450, -2.491961, 0.913519);
		glVertex3f( 0.940610, -2.494607, 0.892515);
		glVertex3f( 0.941099, -2.455641, 0.891227);
	glEnd();

	glNormal3f( 0.944200, 0.327300, -0.037300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.941099, -2.455641, 0.891227);
		glVertex3f( 0.945622, -2.473289, 0.850786);
		glVertex3f( 0.922615, -2.408373, 0.838068);
	glEnd();

	glNormal3f( 0.993300, -0.008700, 0.114900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.941099, -2.455641, 0.891227);
		glVertex3f( 0.940610, -2.494607, 0.892515);
		glVertex3f( 0.945622, -2.473289, 0.850786);
	glEnd();

	glNormal3f( 0.817900, -0.546200, -0.180800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.940610, -2.494607, 0.892515);
		glVertex3f( 0.931793, -2.500342, 0.869954);
		glVertex3f( 0.945622, -2.473289, 0.850786);
	glEnd();

	glNormal3f( 0.440700, -0.019600, -0.897400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.945622, -2.473289, 0.850786);
		glVertex3f( 0.910715, -2.468010, 0.833528);
		glVertex3f( 0.922615, -2.408373, 0.838068);
	glEnd();

	glNormal3f( 0.317200, -0.512200, -0.798200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.945622, -2.473289, 0.850786);
		glVertex3f( 0.920208, -2.497042, 0.855928);
		glVertex3f( 0.910715, -2.468010, 0.833528);
	glEnd();

	glNormal3f( 0.302300, -0.518400, -0.799900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.920208, -2.497042, 0.855928);
		glVertex3f( 0.898405, -2.497973, 0.848292);
		glVertex3f( 0.910715, -2.468010, 0.833528);
	glEnd();

	glNormal3f( -0.681300, 0.189800, -0.707000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.910715, -2.468010, 0.833528);
		glVertex3f( 0.889109, -2.448814, 0.859499);
		glVertex3f( 0.922615, -2.408373, 0.838068);
	glEnd();

	glNormal3f( -0.640100, 0.258400, -0.723500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.910715, -2.468010, 0.833528);
		glVertex3f( 0.882281, -2.484877, 0.852660);
		glVertex3f( 0.889109, -2.448814, 0.859499);
	glEnd();

	glNormal3f( -0.801200, 0.254400, -0.541600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.882281, -2.484877, 0.852660);
		glVertex3f( 0.867409, -2.480926, 0.876516);
		glVertex3f( 0.889109, -2.448814, 0.859499);
	glEnd();

	glNormal3f( -0.726500, 0.266100, -0.633600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.889109, -2.448814, 0.859499);
		glVertex3f( 0.911653, -2.381596, 0.861883);
		glVertex3f( 0.922615, -2.408373, 0.838068);
	glEnd();

	glNormal3f( -0.871200, 0.305800, -0.383900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.889109, -2.448814, 0.859499);
		glVertex3f( 0.868018, -2.457802, 0.900198);
		glVertex3f( 0.911653, -2.381596, 0.861883);
	glEnd();

	glNormal3f( -0.317100, 0.564700, 0.761900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.868018, -2.457802, 0.900198);
		glVertex3f( 0.892474, -2.473702, 0.922161);
		glVertex3f( 0.911653, -2.381596, 0.861883);
	glEnd();

	glNormal3f( 0.928000, 0.372400, 0.008400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.911653, -2.381596, 0.861883);
		glVertex3f( 0.941099, -2.455641, 0.891227);
		glVertex3f( 0.922615, -2.408373, 0.838068);
	glEnd();

	glNormal3f( 0.487600, 0.482300, 0.727700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.911653, -2.381596, 0.861883);
		glVertex3f( 0.916270, -2.473318, 0.919579);
		glVertex3f( 0.941099, -2.455641, 0.891227);
	glEnd();

	glNormal3f( 0.604700, 0.320200, 0.729200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.916270, -2.473318, 0.919579);
		glVertex3f( 0.933450, -2.491961, 0.913519);
		glVertex3f( 0.941099, -2.455641, 0.891227);
	glEnd();

	glNormal3f( 0.920800, -0.194000, 0.338300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.921383, -2.537812, 0.920075);
		glVertex3f( 0.940610, -2.494607, 0.892515);
		glVertex3f( 0.933450, -2.491961, 0.913519);
	glEnd();

	glNormal3f( 0.919000, -0.393600, 0.024200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.921383, -2.537812, 0.920075);
		glVertex3f( 0.919577, -2.543535, 0.895518);
		glVertex3f( 0.940610, -2.494607, 0.892515);
	glEnd();

	glNormal3f( 0.885100, -0.395500, -0.245400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.919577, -2.543535, 0.895518);
		glVertex3f( 0.931793, -2.500342, 0.869954);
		glVertex3f( 0.940610, -2.494607, 0.892515);
	glEnd();

	glNormal3f( 0.545600, -0.594600, -0.590600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.898997, -2.539155, 0.878738);
		glVertex3f( 0.920208, -2.497042, 0.855928);
		glVertex3f( 0.931793, -2.500342, 0.869954);
	glEnd();

	glNormal3f( 0.117900, -0.518200, -0.847100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.898997, -2.539155, 0.878738);
		glVertex3f( 0.873385, -2.534273, 0.872186);
		glVertex3f( 0.920208, -2.497042, 0.855928);
	glEnd();

	glNormal3f( 0.274900, -0.653600, -0.705100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.873385, -2.534273, 0.872186);
		glVertex3f( 0.898405, -2.497973, 0.848292);
		glVertex3f( 0.920208, -2.497042, 0.855928);
	glEnd();

	glNormal3f( -0.426200, -0.233300, -0.874000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.858423, -2.523023, 0.874476);
		glVertex3f( 0.882281, -2.484877, 0.852660);
		glVertex3f( 0.898405, -2.497973, 0.848292);
	glEnd();

	glNormal3f( -0.859400, 0.301300, -0.413100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.858423, -2.523023, 0.874476);
		glVertex3f( 0.847267, -2.520503, 0.899525);
		glVertex3f( 0.882281, -2.484877, 0.852660);
	glEnd();

	glNormal3f( -0.834900, 0.111500, -0.539000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.847267, -2.520503, 0.899525);
		glVertex3f( 0.867409, -2.480926, 0.876516);
		glVertex3f( 0.882281, -2.484877, 0.852660);
	glEnd();

	glNormal3f( -0.972700, 0.178000, -0.148700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.854820, -2.513246, 0.920184);
		glVertex3f( 0.868018, -2.457802, 0.900198);
		glVertex3f( 0.867409, -2.480926, 0.876516);
	glEnd();

	glNormal3f( -0.773300, 0.369700, 0.515100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.854820, -2.513246, 0.920184);
		glVertex3f( 0.862506, -2.514445, 0.932585);
		glVertex3f( 0.868018, -2.457802, 0.900198);
	glEnd();

	glNormal3f( -0.387800, 0.485700, 0.783400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.862506, -2.514445, 0.932585);
		glVertex3f( 0.892474, -2.473702, 0.922161);
		glVertex3f( 0.868018, -2.457802, 0.900198);
	glEnd();

	glNormal3f( 0.093100, 0.389400, 0.916300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.885577, -2.515426, 0.940592);
		glVertex3f( 0.916270, -2.473318, 0.919579);
		glVertex3f( 0.892474, -2.473702, 0.922161);
	glEnd();

	glNormal3f( 0.345000, 0.205500, 0.915800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.885577, -2.515426, 0.940592);
		glVertex3f( 0.904436, -2.526218, 0.935909);
		glVertex3f( 0.916270, -2.473318, 0.919579);
	glEnd();

	glNormal3f( 0.478000, 0.159700, 0.863700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.904436, -2.526218, 0.935909);
		glVertex3f( 0.933450, -2.491961, 0.913519);
		glVertex3f( 0.916270, -2.473318, 0.919579);
	glEnd();

	glNormal3f( 0.457000, -0.545200, -0.702800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.919577, -2.543535, 0.895518);
		glVertex3f( 0.898997, -2.539155, 0.878738);
		glVertex3f( 0.931793, -2.500342, 0.869954);
	glEnd();

	glNormal3f( 0.553200, -0.330300, -0.764700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.919577, -2.543535, 0.895518);
		glVertex3f( 0.904494, -2.599836, 0.908925);
		glVertex3f( 0.898997, -2.539155, 0.878738);
	glEnd();

	glNormal3f( 0.797100, -0.209500, -0.566300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.904494, -2.599836, 0.908925);
		glVertex3f( 0.892079, -2.594835, 0.889603);
		glVertex3f( 0.898997, -2.539155, 0.878738);
	glEnd();

	glNormal3f( -0.372200, -0.317600, -0.872100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.873385, -2.534273, 0.872186);
		glVertex3f( 0.858423, -2.523023, 0.874476);
		glVertex3f( 0.898405, -2.497973, 0.848292);
	glEnd();

	glNormal3f( -0.210400, -0.081700, -0.974200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.873385, -2.534273, 0.872186);
		glVertex3f( 0.867495, -2.599593, 0.878934);
		glVertex3f( 0.858423, -2.523023, 0.874476);
	glEnd();

	glNormal3f( -0.354400, -0.096100, -0.930200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.867495, -2.599593, 0.878934);
		glVertex3f( 0.847085, -2.580740, 0.884761);
		glVertex3f( 0.858423, -2.523023, 0.874476);
	glEnd();

	glNormal3f( -0.850300, 0.509400, 0.131900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.847267, -2.520503, 0.899525);
		glVertex3f( 0.854820, -2.513246, 0.920184);
		glVertex3f( 0.867409, -2.480926, 0.876516);
	glEnd();

	glNormal3f( -0.936100, 0.238700, 0.258400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.847267, -2.520503, 0.899525);
		glVertex3f( 0.835827, -2.577361, 0.910602);
		glVertex3f( 0.854820, -2.513246, 0.920184);
	glEnd();

	glNormal3f( -0.959200, 0.273200, 0.073000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.835827, -2.577361, 0.910602);
		glVertex3f( 0.841997, -2.561830, 0.933551);
		glVertex3f( 0.854820, -2.513246, 0.920184);
	glEnd();

	glNormal3f( -0.280400, 0.426300, 0.860100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.862506, -2.514445, 0.932585);
		glVertex3f( 0.885577, -2.515426, 0.940592);
		glVertex3f( 0.892474, -2.473702, 0.922161);
	glEnd();

	glNormal3f( -0.293100, 0.354400, 0.888000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.862506, -2.514445, 0.932585);
		glVertex3f( 0.859666, -2.570491, 0.954013);
		glVertex3f( 0.885577, -2.515426, 0.940592);
	glEnd();

	glNormal3f( -0.169800, 0.308100, 0.936100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.859666, -2.570491, 0.954013);
		glVertex3f( 0.887642, -2.569053, 0.958616);
		glVertex3f( 0.885577, -2.515426, 0.940592);
	glEnd();

	glNormal3f( 0.656900, -0.065500, 0.751100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.904436, -2.526218, 0.935909);
		glVertex3f( 0.921383, -2.537812, 0.920075);
		glVertex3f( 0.933450, -2.491961, 0.913519);
	glEnd();

	glNormal3f( 0.730300, 0.160600, 0.664000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.904436, -2.526218, 0.935909);
		glVertex3f( 0.906067, -2.588477, 0.949174);
		glVertex3f( 0.921383, -2.537812, 0.920075);
	glEnd();

	glNormal3f( 0.920600, -0.056400, 0.386400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.906067, -2.588477, 0.949174);
		glVertex3f( 0.913233, -2.585041, 0.932601);
		glVertex3f( 0.921383, -2.537812, 0.920075);
	glEnd();

	glNormal3f( 0.795300, -0.600700, 0.081800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.885472, -2.621531, 0.934567);
		glVertex3f( 0.904494, -2.599836, 0.908925);
		glVertex3f( 0.913233, -2.585041, 0.932601);
	glEnd();

	glNormal3f( 0.730800, -0.681800, -0.034700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.885472, -2.621531, 0.934567);
		glVertex3f( 0.874845, -2.631606, 0.908759);
		glVertex3f( 0.904494, -2.599836, 0.908925);
	glEnd();

	glNormal3f( 0.615300, -0.571300, -0.543200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.874845, -2.631606, 0.908759);
		glVertex3f( 0.892079, -2.594835, 0.889603);
		glVertex3f( 0.904494, -2.599836, 0.908925);
	glEnd();

	glNormal3f( 0.417900, -0.566100, -0.710600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.874845, -2.631606, 0.908759);
		glVertex3f( 0.867495, -2.599593, 0.878934);
		glVertex3f( 0.892079, -2.594835, 0.889603);
	glEnd();

	glNormal3f( -0.332500, -0.682600, -0.650800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.874845, -2.631606, 0.908759);
		glVertex3f( 0.846167, -2.620490, 0.911749);
		glVertex3f( 0.867495, -2.599593, 0.878934);
	glEnd();

	glNormal3f( -0.598100, -0.440700, -0.669400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.846167, -2.620490, 0.911749);
		glVertex3f( 0.847085, -2.580740, 0.884761);
		glVertex3f( 0.867495, -2.599593, 0.878934);
	glEnd();

	glNormal3f( -0.903500, -0.226300, -0.364000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.846167, -2.620490, 0.911749);
		glVertex3f( 0.835827, -2.577361, 0.910602);
		glVertex3f( 0.847085, -2.580740, 0.884761);
	glEnd();

	glNormal3f( -0.972300, -0.233400, -0.010900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.846167, -2.620490, 0.911749);
		glVertex3f( 0.843177, -2.609375, 0.940427);
		glVertex3f( 0.835827, -2.577361, 0.910602);
	glEnd();

	glNormal3f( -0.967700, 0.012400, 0.251800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.843177, -2.609375, 0.940427);
		glVertex3f( 0.841997, -2.561830, 0.933551);
		glVertex3f( 0.835827, -2.577361, 0.910602);
	glEnd();

	glNormal3f( 0.782400, -0.583600, 0.217400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.906067, -2.588477, 0.949174);
		glVertex3f( 0.885472, -2.621531, 0.934567);
		glVertex3f( 0.913233, -2.585041, 0.932601);
	glEnd();

	glNormal3f( 0.516700, -0.594300, 0.616300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.906067, -2.588477, 0.949174);
		glVertex3f( 0.870006, -2.613621, 0.955160);
		glVertex3f( 0.885472, -2.621531, 0.934567);
	glEnd();

	glNormal3f( 0.181600, -0.864600, 0.468500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.870006, -2.613621, 0.955160);
		glVertex3f( 0.864160, -2.627635, 0.931565);
		glVertex3f( 0.885472, -2.621531, 0.934567);
	glEnd();

	glNormal3f( -0.737800, 0.078600, 0.670400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.843177, -2.609375, 0.940427);
		glVertex3f( 0.859666, -2.570491, 0.954013);
		glVertex3f( 0.841997, -2.561830, 0.933551);
	glEnd();

	glNormal3f( -0.490600, -0.094600, 0.866200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.843177, -2.609375, 0.940427);
		glVertex3f( 0.870006, -2.613621, 0.955160);
		glVertex3f( 0.859666, -2.570491, 0.954013);
	glEnd();

	glNormal3f( -0.161700, -0.012500, 0.986800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.870006, -2.613621, 0.955160);
		glVertex3f( 0.887642, -2.569053, 0.958616);
		glVertex3f( 0.859666, -2.570491, 0.954013);
	glEnd();

	glNormal3f( -0.249500, -0.931700, -0.263900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.742735, -2.782119, 0.609412);
		glVertex3f( 0.754867, -2.778755, 0.586070);
		glVertex3f( 0.771503, -2.787349, 0.600684);
	glEnd();

	glNormal3f( -0.337000, -0.134500, -0.931800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.801646, -2.716388, 0.560152);
		glVertex3f( 0.754867, -2.778755, 0.586070);
		glVertex3f( 0.772485, -2.714309, 0.570399);
	glEnd();

	glNormal3f( -0.034400, -0.903200, 0.427900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.742735, -2.782119, 0.609412);
		glVertex3f( 0.771503, -2.787349, 0.600684);
		glVertex3f( 0.760155, -2.775859, 0.624026);
	glEnd();

	glNormal3f( -0.390800, -0.580400, 0.714500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.742735, -2.782119, 0.609412);
		glVertex3f( 0.760155, -2.775859, 0.624026);
		glVertex3f( 0.736506, -2.760164, 0.623838);
	glEnd();

	glNormal3f( -0.966400, -0.127700, -0.223000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.742735, -2.782119, 0.609412);
		glVertex3f( 0.736506, -2.760164, 0.623838);
		glVertex3f( 0.741886, -2.758471, 0.599547);
	glEnd();

	glNormal3f( -0.322700, 0.107700, -0.940300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.801646, -2.716388, 0.560152);
		glVertex3f( 0.772485, -2.714309, 0.570399);
		glVertex3f( 0.849515, -2.637483, 0.552764);
	glEnd();

	glNormal3f( 0.632900, -0.607600, -0.479800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.829948, -2.731009, 0.585015);
		glVertex3f( 0.810750, -2.739705, 0.570702);
		glVertex3f( 0.879541, -2.659717, 0.560146);
	glEnd();

	glNormal3f( 0.618100, -0.322800, 0.716800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.810642, -2.711461, 0.624727);
		glVertex3f( 0.816037, -2.736809, 0.608658);
		glVertex3f( 0.881497, -2.655803, 0.588697);
	glEnd();

	glNormal3f( -0.317100, 0.537500, 0.781400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.776521, -2.690148, 0.616581);
		glVertex3f( 0.781040, -2.709624, 0.631812);
		glVertex3f( 0.858265, -2.627460, 0.606637);
	glEnd();

	glNormal3f( -0.802600, 0.544600, -0.243300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.775792, -2.691931, 0.578293);
		glVertex3f( 0.763798, -2.698691, 0.602733);
		glVertex3f( 0.827496, -2.613319, 0.583688);
	glEnd();

	glNormal3f( -0.160600, 0.005000, -0.987000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.801646, -2.716388, 0.560152);
		glVertex3f( 0.849515, -2.637483, 0.552764);
		glVertex3f( 0.868963, -2.645964, 0.549555);
	glEnd();

	glNormal3f( 0.762100, -0.607900, -0.222800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.829948, -2.731009, 0.585015);
		glVertex3f( 0.879541, -2.659717, 0.560146);
		glVertex3f( 0.885183, -2.656195, 0.569834);
	glEnd();

	glNormal3f( 0.617000, -0.320000, 0.719000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.810642, -2.711461, 0.624727);
		glVertex3f( 0.881497, -2.655803, 0.588697);
		glVertex3f( 0.877087, -2.630182, 0.603887);
	glEnd();

	glNormal3f( -0.180500, 0.379300, 0.907500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.776521, -2.690148, 0.616581);
		glVertex3f( 0.858265, -2.627460, 0.606637);
		glVertex3f( 0.842209, -2.614655, 0.598092);
	glEnd();

	glNormal3f( -0.749800, 0.521100, -0.407600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.775792, -2.691931, 0.578293);
		glVertex3f( 0.827496, -2.613319, 0.583688);
		glVertex3f( 0.831030, -2.623419, 0.564276);
	glEnd();

	glNormal3f( 0.458700, -0.003500, -0.888600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.918681, -2.580304, 0.542194);
		glVertex3f( 0.910638, -2.556629, 0.537948);
		glVertex3f( 0.956054, -2.490946, 0.561129);
	glEnd();

	glNormal3f( 0.879500, -0.394100, 0.266800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.924240, -2.577259, 0.582103);
		glVertex3f( 0.934965, -2.569345, 0.558435);
		glVertex3f( 0.956761, -2.509936, 0.574334);
	glEnd();

	glNormal3f( 0.211400, -0.019800, 0.977200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.895356, -2.547497, 0.600865);
		glVertex3f( 0.916603, -2.550754, 0.596203);
		glVertex3f( 0.928511, -2.492620, 0.594807);
	glEnd();

	glNormal3f( -0.739000, 0.409400, 0.535000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.877800, -2.536035, 0.579182);
		glVertex3f( 0.887589, -2.532506, 0.590006);
		glVertex3f( 0.907371, -2.479767, 0.576971);
	glEnd();

	glNormal3f( -0.492600, 0.442700, -0.749200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.882508, -2.557289, 0.545889);
		glVertex3f( 0.878978, -2.538363, 0.559393);
		glVertex3f( 0.940451, -2.484818, 0.550614);
	glEnd();

	glNormal3f( 0.614200, 0.361500, 0.701500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.940451, -2.484818, 0.550614);
		glVertex3f( 0.907371, -2.479767, 0.576971);
		glVertex3f( 0.927686, -2.493223, 0.566120);
	glEnd();

	glNormal3f( -0.507700, 0.463800, -0.726100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.940451, -2.484818, 0.550614);
		glVertex3f( 0.878978, -2.538363, 0.559393);
		glVertex3f( 0.907371, -2.479767, 0.576971);
	glEnd();

	glNormal3f( -0.881900, 0.459300, -0.106500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.878978, -2.538363, 0.559393);
		glVertex3f( 0.877800, -2.536035, 0.579182);
		glVertex3f( 0.907371, -2.479767, 0.576971);
	glEnd();

	glNormal3f( 0.539500, 0.841300, -0.033200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.907371, -2.479767, 0.576971);
		glVertex3f( 0.928511, -2.492620, 0.594807);
		glVertex3f( 0.927686, -2.493223, 0.566120);
	glEnd();

	glNormal3f( -0.456600, 0.371100, 0.808600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.907371, -2.479767, 0.576971);
		glVertex3f( 0.887589, -2.532506, 0.590006);
		glVertex3f( 0.928511, -2.492620, 0.594807);
	glEnd();

	glNormal3f( -0.447600, 0.360800, 0.818200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.887589, -2.532506, 0.590006);
		glVertex3f( 0.895356, -2.547497, 0.600865);
		glVertex3f( 0.928511, -2.492620, 0.594807);
	glEnd();

	glNormal3f( 0.505000, 0.862500, -0.032700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.928511, -2.492620, 0.594807);
		glVertex3f( 0.956761, -2.509936, 0.574334);
		glVertex3f( 0.927686, -2.493223, 0.566120);
	glEnd();

	glNormal3f( 0.546700, -0.092000, 0.832200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.928511, -2.492620, 0.594807);
		glVertex3f( 0.916603, -2.550754, 0.596203);
		glVertex3f( 0.956761, -2.509936, 0.574334);
	glEnd();

	glNormal3f( 0.627600, -0.216900, 0.747700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.916603, -2.550754, 0.596203);
		glVertex3f( 0.924240, -2.577259, 0.582103);
		glVertex3f( 0.956761, -2.509936, 0.574334);
	glEnd();

	glNormal3f( 0.097600, 0.570600, 0.815400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.956761, -2.509936, 0.574334);
		glVertex3f( 0.956054, -2.490946, 0.561129);
		glVertex3f( 0.927686, -2.493223, 0.566120);
	glEnd();

	glNormal3f( 0.897700, -0.228500, -0.376700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.956761, -2.509936, 0.574334);
		glVertex3f( 0.934965, -2.569345, 0.558435);
		glVertex3f( 0.956054, -2.490946, 0.561129);
	glEnd();

	glNormal3f( 0.752900, -0.180800, -0.632900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.934965, -2.569345, 0.558435);
		glVertex3f( 0.918681, -2.580304, 0.542194);
		glVertex3f( 0.956054, -2.490946, 0.561129);
	glEnd();

	glNormal3f( 0.015400, 0.873700, 0.486300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.956054, -2.490946, 0.561129);
		glVertex3f( 0.940451, -2.484818, 0.550614);
		glVertex3f( 0.927686, -2.493223, 0.566120);
	glEnd();

	glNormal3f( 0.536900, -0.074700, -0.840300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.956054, -2.490946, 0.561129);
		glVertex3f( 0.910638, -2.556629, 0.537948);
		glVertex3f( 0.940451, -2.484818, 0.550614);
	glEnd();

	glNormal3f( -0.267200, 0.273900, -0.923900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.910638, -2.556629, 0.537948);
		glVertex3f( 0.882508, -2.557289, 0.545889);
		glVertex3f( 0.940451, -2.484818, 0.550614);
	glEnd();

	glNormal3f( -0.673400, 0.342000, -0.655400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.831030, -2.623419, 0.564276);
		glVertex3f( 0.878978, -2.538363, 0.559393);
		glVertex3f( 0.882508, -2.557289, 0.545889);
	glEnd();

	glNormal3f( -0.816100, 0.438400, -0.376600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.831030, -2.623419, 0.564276);
		glVertex3f( 0.827496, -2.613319, 0.583688);
		glVertex3f( 0.878978, -2.538363, 0.559393);
	glEnd();

	glNormal3f( -0.835700, 0.537400, -0.113000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.827496, -2.613319, 0.583688);
		glVertex3f( 0.877800, -2.536035, 0.579182);
		glVertex3f( 0.878978, -2.538363, 0.559393);
	glEnd();

	glNormal3f( -0.729500, 0.453400, 0.512100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.842209, -2.614655, 0.598092);
		glVertex3f( 0.887589, -2.532506, 0.590006);
		glVertex3f( 0.877800, -2.536035, 0.579182);
	glEnd();

	glNormal3f( -0.290800, 0.251500, 0.923200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.842209, -2.614655, 0.598092);
		glVertex3f( 0.858265, -2.627460, 0.606637);
		glVertex3f( 0.887589, -2.532506, 0.590006);
	glEnd();

	glNormal3f( -0.527400, 0.302000, 0.794100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.858265, -2.627460, 0.606637);
		glVertex3f( 0.895356, -2.547497, 0.600865);
		glVertex3f( 0.887589, -2.532506, 0.590006);
	glEnd();

	glNormal3f( 0.212700, -0.011300, 0.977100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.877087, -2.630182, 0.603887);
		glVertex3f( 0.916603, -2.550754, 0.596203);
		glVertex3f( 0.895356, -2.547497, 0.600865);
	glEnd();

	glNormal3f( 0.689100, -0.278100, 0.669200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.877087, -2.630182, 0.603887);
		glVertex3f( 0.881497, -2.655803, 0.588697);
		glVertex3f( 0.916603, -2.550754, 0.596203);
	glEnd();

	glNormal3f( 0.576200, -0.248200, 0.778700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.881497, -2.655803, 0.588697);
		glVertex3f( 0.924240, -2.577259, 0.582103);
		glVertex3f( 0.916603, -2.550754, 0.596203);
	glEnd();

	glNormal3f( 0.856400, -0.460100, 0.234200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.885183, -2.656195, 0.569834);
		glVertex3f( 0.934965, -2.569345, 0.558435);
		glVertex3f( 0.924240, -2.577259, 0.582103);
	glEnd();

	glNormal3f( 0.813300, -0.504300, -0.290200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.885183, -2.656195, 0.569834);
		glVertex3f( 0.879541, -2.659717, 0.560146);
		glVertex3f( 0.934965, -2.569345, 0.558435);
	glEnd();

	glNormal3f( 0.760800, -0.474900, -0.442300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.879541, -2.659717, 0.560146);
		glVertex3f( 0.918681, -2.580304, 0.542194);
		glVertex3f( 0.934965, -2.569345, 0.558435);
	glEnd();

	glNormal3f( 0.060400, -0.156300, -0.985900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.868963, -2.645964, 0.549555);
		glVertex3f( 0.910638, -2.556629, 0.537948);
		glVertex3f( 0.918681, -2.580304, 0.542194);
	glEnd();

	glNormal3f( -0.181000, -0.043200, -0.982500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.868963, -2.645964, 0.549555);
		glVertex3f( 0.849515, -2.637483, 0.552764);
		glVertex3f( 0.910638, -2.556629, 0.537948);
	glEnd();

	glNormal3f( -0.272200, 0.029500, -0.961800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.849515, -2.637483, 0.552764);
		glVertex3f( 0.882508, -2.557289, 0.545889);
		glVertex3f( 0.910638, -2.556629, 0.537948);
	glEnd();

	glNormal3f( -0.609300, 0.435300, 0.662800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.827496, -2.613319, 0.583688);
		glVertex3f( 0.842209, -2.614655, 0.598092);
		glVertex3f( 0.877800, -2.536035, 0.579182);
	glEnd();

	glNormal3f( -0.556500, 0.553400, 0.619700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.827496, -2.613319, 0.583688);
		glVertex3f( 0.763798, -2.698691, 0.602733);
		glVertex3f( 0.842209, -2.614655, 0.598092);
	glEnd();

	glNormal3f( -0.704400, 0.670200, 0.233800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.763798, -2.698691, 0.602733);
		glVertex3f( 0.776521, -2.690148, 0.616581);
		glVertex3f( 0.842209, -2.614655, 0.598092);
	glEnd();

	glNormal3f( 0.145200, 0.004100, 0.989400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.858265, -2.627460, 0.606637);
		glVertex3f( 0.877087, -2.630182, 0.603887);
		glVertex3f( 0.895356, -2.547497, 0.600865);
	glEnd();

	glNormal3f( 0.163600, 0.145200, 0.975800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.858265, -2.627460, 0.606637);
		glVertex3f( 0.781040, -2.709624, 0.631812);
		glVertex3f( 0.877087, -2.630182, 0.603887);
	glEnd();

	glNormal3f( 0.235700, 0.056100, 0.970200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.781040, -2.709624, 0.631812);
		glVertex3f( 0.810642, -2.711461, 0.624727);
		glVertex3f( 0.877087, -2.630182, 0.603887);
	glEnd();

	glNormal3f( 0.870300, -0.458600, 0.179600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.881497, -2.655803, 0.588697);
		glVertex3f( 0.885183, -2.656195, 0.569834);
		glVertex3f( 0.924240, -2.577259, 0.582103);
	glEnd();

	glNormal3f( 0.786600, -0.594700, 0.166100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.881497, -2.655803, 0.588697);
		glVertex3f( 0.816037, -2.736809, 0.608658);
		glVertex3f( 0.885183, -2.656195, 0.569834);
	glEnd();

	glNormal3f( 0.788600, -0.513600, 0.338000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.816037, -2.736809, 0.608658);
		glVertex3f( 0.829948, -2.731009, 0.585015);
		glVertex3f( 0.885183, -2.656195, 0.569834);
	glEnd();

	glNormal3f( 0.367200, -0.373600, -0.851800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.879541, -2.659717, 0.560146);
		glVertex3f( 0.868963, -2.645964, 0.549555);
		glVertex3f( 0.918681, -2.580304, 0.542194);
	glEnd();

	glNormal3f( 0.334200, -0.400100, -0.853400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.879541, -2.659717, 0.560146);
		glVertex3f( 0.810750, -2.739705, 0.570702);
		glVertex3f( 0.868963, -2.645964, 0.549555);
	glEnd();

	glNormal3f( 0.206200, -0.335400, -0.919200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.810750, -2.739705, 0.570702);
		glVertex3f( 0.801646, -2.716388, 0.560152);
		glVertex3f( 0.868963, -2.645964, 0.549555);
	glEnd();

	glNormal3f( -0.461100, 0.114300, -0.880000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.849515, -2.637483, 0.552764);
		glVertex3f( 0.831030, -2.623419, 0.564276);
		glVertex3f( 0.882508, -2.557289, 0.545889);
	glEnd();

	glNormal3f( -0.403800, 0.200000, -0.892700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.849515, -2.637483, 0.552764);
		glVertex3f( 0.772485, -2.714309, 0.570399);
		glVertex3f( 0.831030, -2.623419, 0.564276);
	glEnd();

	glNormal3f( -0.607000, 0.342600, -0.717100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.772485, -2.714309, 0.570399);
		glVertex3f( 0.775792, -2.691931, 0.578293);
		glVertex3f( 0.831030, -2.623419, 0.564276);
	glEnd();

	glNormal3f( -0.878100, 0.339800, -0.336900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.741886, -2.758471, 0.599547);
		glVertex3f( 0.763798, -2.698691, 0.602733);
		glVertex3f( 0.775792, -2.691931, 0.578293);
	glEnd();

	glNormal3f( -0.920500, 0.347000, -0.179700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.741886, -2.758471, 0.599547);
		glVertex3f( 0.736506, -2.760164, 0.623838);
		glVertex3f( 0.763798, -2.698691, 0.602733);
	glEnd();

	glNormal3f( -0.772400, 0.484100, 0.411100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.736506, -2.760164, 0.623838);
		glVertex3f( 0.776521, -2.690148, 0.616581);
		glVertex3f( 0.763798, -2.698691, 0.602733);
	glEnd();

	glNormal3f( -0.588800, 0.408800, 0.697300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.736506, -2.760164, 0.623838);
		glVertex3f( 0.781040, -2.709624, 0.631812);
		glVertex3f( 0.776521, -2.690148, 0.616581);
	glEnd();

	glNormal3f( -0.070600, -0.094500, 0.993000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.736506, -2.760164, 0.623838);
		glVertex3f( 0.760155, -2.775859, 0.624026);
		glVertex3f( 0.781040, -2.709624, 0.631812);
	glEnd();

	glNormal3f( 0.218300, -0.181500, 0.958900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.760155, -2.775859, 0.624026);
		glVertex3f( 0.810642, -2.711461, 0.624727);
		glVertex3f( 0.781040, -2.709624, 0.631812);
	glEnd();

	glNormal3f( 0.487800, -0.390900, 0.780500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.760155, -2.775859, 0.624026);
		glVertex3f( 0.816037, -2.736809, 0.608658);
		glVertex3f( 0.810642, -2.711461, 0.624727);
	glEnd();

	glNormal3f( 0.570400, -0.592400, 0.568900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.760155, -2.775859, 0.624026);
		glVertex3f( 0.771503, -2.787349, 0.600684);
		glVertex3f( 0.816037, -2.736809, 0.608658);
	glEnd();

	glNormal3f( 0.705700, -0.661800, 0.252900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.771503, -2.787349, 0.600684);
		glVertex3f( 0.829948, -2.731009, 0.585015);
		glVertex3f( 0.816037, -2.736809, 0.608658);
	glEnd();

	glNormal3f( -0.844000, 0.285000, -0.454300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.772485, -2.714309, 0.570399);
		glVertex3f( 0.741886, -2.758471, 0.599547);
		glVertex3f( 0.775792, -2.691931, 0.578293);
	glEnd();

	glNormal3f( -0.704700, 0.020200, -0.709200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.772485, -2.714309, 0.570399);
		glVertex3f( 0.754867, -2.778755, 0.586070);
		glVertex3f( 0.741886, -2.758471, 0.599547);
	glEnd();

	glNormal3f( -0.850000, -0.228500, -0.474700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.754867, -2.778755, 0.586070);
		glVertex3f( 0.742735, -2.782119, 0.609412);
		glVertex3f( 0.741886, -2.758471, 0.599547);
	glEnd();

	glNormal3f( 0.594900, -0.717700, -0.361900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.771503, -2.787349, 0.600684);
		glVertex3f( 0.810750, -2.739705, 0.570702);
		glVertex3f( 0.829948, -2.731009, 0.585015);
	glEnd();

	glNormal3f( 0.271000, -0.662600, -0.698200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.771503, -2.787349, 0.600684);
		glVertex3f( 0.754867, -2.778755, 0.586070);
		glVertex3f( 0.810750, -2.739705, 0.570702);
	glEnd();

	glNormal3f( 0.029600, -0.402400, -0.915000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.754867, -2.778755, 0.586070);
		glVertex3f( 0.801646, -2.716388, 0.560152);
		glVertex3f( 0.810750, -2.739705, 0.570702);
	glEnd();

	glNormal3f( -0.065000, -0.988000, -0.140200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.754950, -2.850484, 0.663826);
		glVertex3f( 0.772732, -2.848241, 0.639781);
		glVertex3f( 0.785691, -2.853016, 0.667424);
	glEnd();

	glNormal3f( 0.043000, -0.361100, -0.931500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.819356, -2.783782, 0.616945);
		glVertex3f( 0.772732, -2.848241, 0.639781);
		glVertex3f( 0.788113, -2.784238, 0.615679);
	glEnd();

	glNormal3f( -0.123100, -0.899800, 0.418700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.754950, -2.850484, 0.663826);
		glVertex3f( 0.785691, -2.853016, 0.667424);
		glVertex3f( 0.767298, -2.840515, 0.688880);
	glEnd();

	glNormal3f( -0.614200, -0.581100, 0.533900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.754950, -2.850484, 0.663826);
		glVertex3f( 0.767298, -2.840515, 0.688880);
		glVertex3f( 0.742971, -2.828016, 0.674497);
	glEnd();

	glNormal3f( -0.882800, -0.298300, -0.362900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.754950, -2.850484, 0.663826);
		glVertex3f( 0.742971, -2.828016, 0.674497);
		glVertex3f( 0.754619, -2.828369, 0.646454);
	glEnd();

	glNormal3f( 0.041200, -0.051400, -0.997800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.819356, -2.783782, 0.616945);
		glVertex3f( 0.788113, -2.784238, 0.615679);
		glVertex3f( 0.860486, -2.700826, 0.614374);
	glEnd();

	glNormal3f( 0.803600, -0.573400, -0.159500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.841403, -2.791905, 0.663976);
		glVertex3f( 0.827474, -2.804464, 0.638952);
		glVertex3f( 0.889647, -2.718178, 0.641981);
	glEnd();

	glNormal3f( 0.443800, -0.211700, 0.870700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.810110, -2.770638, 0.700478);
		glVertex3f( 0.822039, -2.796738, 0.688051);
		glVertex3f( 0.883439, -2.710909, 0.677627);
	glEnd();

	glNormal3f( -0.645300, 0.606000, 0.465100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.777271, -2.754790, 0.670196);
		glVertex3f( 0.779320, -2.771739, 0.695124);
		glVertex3f( 0.853433, -2.683875, 0.683468);
	glEnd();

	glNormal3f( -0.778300, 0.458200, -0.429300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.787113, -2.760885, 0.622587);
		glVertex3f( 0.769480, -2.766338, 0.648739);
		glVertex3f( 0.828520, -2.676322, 0.637763);
	glEnd();

	glNormal3f( 0.264400, -0.160600, -0.950900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.819356, -2.783782, 0.616945);
		glVertex3f( 0.860486, -2.700826, 0.614374);
		glVertex3f( 0.880994, -2.707114, 0.621139);
	glEnd();

	glNormal3f( 0.842500, -0.536400, 0.049800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.841403, -2.791905, 0.663976);
		glVertex3f( 0.889647, -2.718178, 0.641981);
		glVertex3f( 0.892164, -2.712927, 0.655961);
	glEnd();

	glNormal3f( 0.441500, -0.208200, 0.872800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.810110, -2.770638, 0.700478);
		glVertex3f( 0.883439, -2.710909, 0.677627);
		glVertex3f( 0.872678, -2.684514, 0.689366);
	glEnd();

	glNormal3f( -0.580100, 0.503100, 0.640600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.777271, -2.754790, 0.670196);
		glVertex3f( 0.853433, -2.683875, 0.683468);
		glVertex3f( 0.839002, -2.674203, 0.662805);
	glEnd();

	glNormal3f( -0.689400, 0.440700, -0.574900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.787113, -2.760885, 0.622587);
		glVertex3f( 0.828520, -2.676322, 0.637763);
		glVertex3f( 0.838144, -2.687991, 0.617275);
	glEnd();

	glNormal3f( 0.663100, -0.187500, -0.724600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.925131, -2.636984, 0.622099);
		glVertex3f( 0.916299, -2.615116, 0.608357);
		glVertex3f( 0.943897, -2.560309, 0.619428);
	glEnd();

	glNormal3f( 0.846000, -0.282100, 0.452500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.919417, -2.628861, 0.673726);
		glVertex3f( 0.935503, -2.622343, 0.647712);
		glVertex3f( 0.946838, -2.559283, 0.665830);
	glEnd();

	glNormal3f( -0.200500, 0.150400, 0.968100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.883577, -2.601043, 0.677672);
		glVertex3f( 0.905742, -2.602118, 0.682428);
		glVertex3f( 0.912298, -2.543468, 0.674676);
	glEnd();

	glNormal3f( -0.906900, 0.371100, 0.199700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.871378, -2.594340, 0.640235);
		glVertex3f( 0.877608, -2.588438, 0.657560);
		glVertex3f( 0.895453, -2.535414, 0.640076);
	glEnd();

	glNormal3f( -0.437500, 0.294600, -0.849600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.886934, -2.618400, 0.605248);
		glVertex3f( 0.878102, -2.598683, 0.616633);
		glVertex3f( 0.923840, -2.550946, 0.609633);
	glEnd();

	glNormal3f( 0.444700, 0.894700, -0.041800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.923840, -2.550946, 0.609633);
		glVertex3f( 0.895453, -2.535414, 0.640076);
		glVertex3f( 0.919334, -2.547348, 0.638730);
	glEnd();

	glNormal3f( -0.547800, 0.418600, -0.724400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.923840, -2.550946, 0.609633);
		glVertex3f( 0.878102, -2.598683, 0.616633);
		glVertex3f( 0.895453, -2.535414, 0.640076);
	glEnd();

	glNormal3f( -0.878500, 0.358100, -0.316200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.878102, -2.598683, 0.616633);
		glVertex3f( 0.871378, -2.594340, 0.640235);
		glVertex3f( 0.895453, -2.535414, 0.640076);
	glEnd();

	glNormal3f( 0.446600, 0.894700, -0.009100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.895453, -2.535414, 0.640076);
		glVertex3f( 0.912298, -2.543468, 0.674676);
		glVertex3f( 0.919334, -2.547348, 0.638730);
	glEnd();

	glNormal3f( -0.775100, 0.417300, 0.474500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.895453, -2.535414, 0.640076);
		glVertex3f( 0.877608, -2.588438, 0.657560);
		glVertex3f( 0.912298, -2.543468, 0.674676);
	glEnd();

	glNormal3f( -0.771600, 0.410200, 0.486100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.877608, -2.588438, 0.657560);
		glVertex3f( 0.883577, -2.601043, 0.677672);
		glVertex3f( 0.912298, -2.543468, 0.674676);
	glEnd();

	glNormal3f( 0.412500, 0.910800, -0.017500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.912298, -2.543468, 0.674676);
		glVertex3f( 0.946838, -2.559283, 0.665830);
		glVertex3f( 0.919334, -2.547348, 0.638730);
	glEnd();

	glNormal3f( 0.287200, 0.093900, 0.953300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.912298, -2.543468, 0.674676);
		glVertex3f( 0.905742, -2.602118, 0.682428);
		glVertex3f( 0.946838, -2.559283, 0.665830);
	glEnd();

	glNormal3f( 0.435100, -0.069600, 0.897700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.905742, -2.602118, 0.682428);
		glVertex3f( 0.919417, -2.628861, 0.673726);
		glVertex3f( 0.946838, -2.559283, 0.665830);
	glEnd();

	glNormal3f( 0.436700, 0.898400, -0.047500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.946838, -2.559283, 0.665830);
		glVertex3f( 0.943897, -2.560309, 0.619428);
		glVertex3f( 0.919334, -2.547348, 0.638730);
	glEnd();

	glNormal3f( 0.985300, -0.160200, -0.058900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.946838, -2.559283, 0.665830);
		glVertex3f( 0.935503, -2.622343, 0.647712);
		glVertex3f( 0.943897, -2.560309, 0.619428);
	glEnd();

	glNormal3f( 0.939900, -0.238600, -0.244200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.935503, -2.622343, 0.647712);
		glVertex3f( 0.925131, -2.636984, 0.622099);
		glVertex3f( 0.943897, -2.560309, 0.619428);
	glEnd();

	glNormal3f( 0.439700, 0.897100, -0.042800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.943897, -2.560309, 0.619428);
		glVertex3f( 0.923840, -2.550946, 0.609633);
		glVertex3f( 0.919334, -2.547348, 0.638730);
	glEnd();

	glNormal3f( 0.426400, -0.032100, -0.903900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.943897, -2.560309, 0.619428);
		glVertex3f( 0.916299, -2.615116, 0.608357);
		glVertex3f( 0.923840, -2.550946, 0.609633);
	glEnd();

	glNormal3f( 0.104400, 0.007500, -0.994500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.916299, -2.615116, 0.608357);
		glVertex3f( 0.886934, -2.618400, 0.605248);
		glVertex3f( 0.923840, -2.550946, 0.609633);
	glEnd();

	glNormal3f( -0.531800, 0.232100, -0.814500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.838144, -2.687991, 0.617275);
		glVertex3f( 0.878102, -2.598683, 0.616633);
		glVertex3f( 0.886934, -2.618400, 0.605248);
	glEnd();

	glNormal3f( -0.763300, 0.337600, -0.550800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.838144, -2.687991, 0.617275);
		glVertex3f( 0.828520, -2.676322, 0.637763);
		glVertex3f( 0.878102, -2.598683, 0.616633);
	glEnd();

	glNormal3f( -0.835600, 0.446500, -0.320200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.828520, -2.676322, 0.637763);
		glVertex3f( 0.871378, -2.594340, 0.640235);
		glVertex3f( 0.878102, -2.598683, 0.616633);
	glEnd();

	glNormal3f( -0.892700, 0.412900, 0.180400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.839002, -2.674203, 0.662805);
		glVertex3f( 0.877608, -2.588438, 0.657560);
		glVertex3f( 0.871378, -2.594340, 0.640235);
	glEnd();

	glNormal3f( -0.684700, 0.347400, 0.640800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.839002, -2.674203, 0.662805);
		glVertex3f( 0.853433, -2.683875, 0.683468);
		glVertex3f( 0.877608, -2.588438, 0.657560);
	glEnd();

	glNormal3f( -0.826700, 0.332600, 0.453800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.853433, -2.683875, 0.683468);
		glVertex3f( 0.883577, -2.601043, 0.677672);
		glVertex3f( 0.877608, -2.588438, 0.657560);
	glEnd();

	glNormal3f( -0.199600, 0.161500, 0.966500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.872678, -2.684514, 0.689366);
		glVertex3f( 0.905742, -2.602118, 0.682428);
		glVertex3f( 0.883577, -2.601043, 0.677672);
	glEnd();

	glNormal3f( 0.541300, -0.147500, 0.827800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.872678, -2.684514, 0.689366);
		glVertex3f( 0.883439, -2.710909, 0.677627);
		glVertex3f( 0.905742, -2.602118, 0.682428);
	glEnd();

	glNormal3f( 0.363000, -0.115200, 0.924600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.883439, -2.710909, 0.677627);
		glVertex3f( 0.919417, -2.628861, 0.673726);
		glVertex3f( 0.905742, -2.602118, 0.682428);
	glEnd();

	glNormal3f( 0.831400, -0.359100, 0.424100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.892164, -2.712927, 0.655961);
		glVertex3f( 0.935503, -2.622343, 0.647712);
		glVertex3f( 0.919417, -2.628861, 0.673726);
	glEnd();

	glNormal3f( 0.902100, -0.431600, -0.000300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.892164, -2.712927, 0.655961);
		glVertex3f( 0.889647, -2.718178, 0.641981);
		glVertex3f( 0.935503, -2.622343, 0.647712);
	glEnd();

	glNormal3f( 0.898100, -0.422400, -0.122200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.889647, -2.718178, 0.641981);
		glVertex3f( 0.925131, -2.636984, 0.622099);
		glVertex3f( 0.935503, -2.622343, 0.647712);
	glEnd();

	glNormal3f( 0.502600, -0.305300, -0.808800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.880994, -2.707114, 0.621139);
		glVertex3f( 0.916299, -2.615116, 0.608357);
		glVertex3f( 0.925131, -2.636984, 0.622099);
	glEnd();

	glNormal3f( 0.242600, -0.224200, -0.943900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.880994, -2.707114, 0.621139);
		glVertex3f( 0.860486, -2.700826, 0.614374);
		glVertex3f( 0.916299, -2.615116, 0.608357);
	glEnd();

	glNormal3f( 0.120400, -0.147300, -0.981700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.860486, -2.700826, 0.614374);
		glVertex3f( 0.886934, -2.618400, 0.605248);
		glVertex3f( 0.916299, -2.615116, 0.608357);
	glEnd();

	glNormal3f( -0.844400, 0.431900, 0.316900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.828520, -2.676322, 0.637763);
		glVertex3f( 0.839002, -2.674203, 0.662805);
		glVertex3f( 0.871378, -2.594340, 0.640235);
	glEnd();

	glNormal3f( -0.786000, 0.550000, 0.282500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.828520, -2.676322, 0.637763);
		glVertex3f( 0.769480, -2.766338, 0.648739);
		glVertex3f( 0.839002, -2.674203, 0.662805);
	glEnd();

	glNormal3f( -0.794900, 0.605500, -0.037200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.769480, -2.766338, 0.648739);
		glVertex3f( 0.777271, -2.754790, 0.670196);
		glVertex3f( 0.839002, -2.674203, 0.662805);
	glEnd();

	glNormal3f( -0.283600, 0.169300, 0.943900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.853433, -2.683875, 0.683468);
		glVertex3f( 0.872678, -2.684514, 0.689366);
		glVertex3f( 0.883577, -2.601043, 0.677672);
	glEnd();

	glNormal3f( -0.264800, 0.342900, 0.901300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.853433, -2.683875, 0.683468);
		glVertex3f( 0.779320, -2.771739, 0.695124);
		glVertex3f( 0.872678, -2.684514, 0.689366);
	glEnd();

	glNormal3f( -0.174600, 0.249700, 0.952500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.779320, -2.771739, 0.695124);
		glVertex3f( 0.810110, -2.770638, 0.700478);
		glVertex3f( 0.872678, -2.684514, 0.689366);
	glEnd();

	glNormal3f( 0.854600, -0.356800, 0.377400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.883439, -2.710909, 0.677627);
		glVertex3f( 0.892164, -2.712927, 0.655961);
		glVertex3f( 0.919417, -2.628861, 0.673726);
	glEnd();

	glNormal3f( 0.778600, -0.513100, 0.361300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.883439, -2.710909, 0.677627);
		glVertex3f( 0.822039, -2.796738, 0.688051);
		glVertex3f( 0.892164, -2.712927, 0.655961);
	glEnd();

	glNormal3f( 0.744700, -0.426600, 0.513300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.822039, -2.796738, 0.688051);
		glVertex3f( 0.841403, -2.791905, 0.663976);
		glVertex3f( 0.892164, -2.712927, 0.655961);
	glEnd();

	glNormal3f( 0.718600, -0.444900, -0.534500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.889647, -2.718178, 0.641981);
		glVertex3f( 0.880994, -2.707114, 0.621139);
		glVertex3f( 0.925131, -2.636984, 0.622099);
	glEnd();

	glNormal3f( 0.691100, -0.479000, -0.541200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.889647, -2.718178, 0.641981);
		glVertex3f( 0.827474, -2.804464, 0.638952);
		glVertex3f( 0.880994, -2.707114, 0.621139);
	glEnd();

	glNormal3f( 0.608600, -0.453700, -0.650900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.827474, -2.804464, 0.638952);
		glVertex3f( 0.819356, -2.783782, 0.616945);
		glVertex3f( 0.880994, -2.707114, 0.621139);
	glEnd();

	glNormal3f( -0.160900, -0.057400, -0.985300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.860486, -2.700826, 0.614374);
		glVertex3f( 0.838144, -2.687991, 0.617275);
		glVertex3f( 0.886934, -2.618400, 0.605248);
	glEnd();

	glNormal3f( -0.092100, 0.064300, -0.993700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.860486, -2.700826, 0.614374);
		glVertex3f( 0.788113, -2.784238, 0.615679);
		glVertex3f( 0.838144, -2.687991, 0.617275);
	glEnd();

	glNormal3f( -0.431700, 0.238800, -0.869900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.788113, -2.784238, 0.615679);
		glVertex3f( 0.787113, -2.760885, 0.622587);
		glVertex3f( 0.838144, -2.687991, 0.617275);
	glEnd();

	glNormal3f( -0.829700, 0.217700, -0.514000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.754619, -2.828369, 0.646454);
		glVertex3f( 0.769480, -2.766338, 0.648739);
		glVertex3f( 0.787113, -2.760885, 0.622587);
	glEnd();

	glNormal3f( -0.897900, 0.229000, -0.375900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.754619, -2.828369, 0.646454);
		glVertex3f( 0.742971, -2.828016, 0.674497);
		glVertex3f( 0.769480, -2.766338, 0.648739);
	glEnd();

	glNormal3f( -0.899100, 0.426800, 0.096800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.742971, -2.828016, 0.674497);
		glVertex3f( 0.777271, -2.754790, 0.670196);
		glVertex3f( 0.769480, -2.766338, 0.648739);
	glEnd();

	glNormal3f( -0.840000, 0.414100, 0.350600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.742971, -2.828016, 0.674497);
		glVertex3f( 0.779320, -2.771739, 0.695124);
		glVertex3f( 0.777271, -2.754790, 0.670196);
	glEnd();

	glNormal3f( -0.505100, 0.010000, 0.863000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.742971, -2.828016, 0.674497);
		glVertex3f( 0.767298, -2.840515, 0.688880);
		glVertex3f( 0.779320, -2.771739, 0.695124);
	glEnd();

	glNormal3f( -0.169000, -0.059800, 0.983800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.767298, -2.840515, 0.688880);
		glVertex3f( 0.810110, -2.770638, 0.700478);
		glVertex3f( 0.779320, -2.771739, 0.695124);
	glEnd();

	glNormal3f( 0.264400, -0.313400, 0.912100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.767298, -2.840515, 0.688880);
		glVertex3f( 0.822039, -2.796738, 0.688051);
		glVertex3f( 0.810110, -2.770638, 0.700478);
	glEnd();

	glNormal3f( 0.449500, -0.548700, 0.704900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.767298, -2.840515, 0.688880);
		glVertex3f( 0.785691, -2.853016, 0.667424);
		glVertex3f( 0.822039, -2.796738, 0.688051);
	glEnd();

	glNormal3f( 0.680000, -0.595800, 0.427300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.785691, -2.853016, 0.667424);
		glVertex3f( 0.841403, -2.791905, 0.663976);
		glVertex3f( 0.822039, -2.796738, 0.688051);
	glEnd();

	glNormal3f( -0.769200, 0.150700, -0.621000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.788113, -2.784238, 0.615679);
		glVertex3f( 0.754619, -2.828369, 0.646454);
		glVertex3f( 0.787113, -2.760885, 0.622587);
	glEnd();

	glNormal3f( -0.516400, -0.190300, -0.834900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.788113, -2.784238, 0.615679);
		glVertex3f( 0.772732, -2.848241, 0.639781);
		glVertex3f( 0.754619, -2.828369, 0.646454);
	glEnd();

	glNormal3f( -0.698000, -0.448800, -0.558000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.772732, -2.848241, 0.639781);
		glVertex3f( 0.754950, -2.850484, 0.663826);
		glVertex3f( 0.754619, -2.828369, 0.646454);
	glEnd();

	glNormal3f( 0.735100, -0.674200, -0.070800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.785691, -2.853016, 0.667424);
		glVertex3f( 0.827474, -2.804464, 0.638952);
		glVertex3f( 0.841403, -2.791905, 0.663976);
	glEnd();

	glNormal3f( 0.570900, -0.721300, -0.392200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.785691, -2.853016, 0.667424);
		glVertex3f( 0.772732, -2.848241, 0.639781);
		glVertex3f( 0.827474, -2.804464, 0.638952);
	glEnd();

	glNormal3f( 0.442400, -0.566300, -0.695400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.772732, -2.848241, 0.639781);
		glVertex3f( 0.819356, -2.783782, 0.616945);
		glVertex3f( 0.827474, -2.804464, 0.638952);
	glEnd();

	glNormal3f( -0.065000, -0.988000, -0.140200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.757966, -2.840670, 0.743921);
		glVertex3f( 0.775747, -2.838427, 0.719876);
		glVertex3f( 0.788706, -2.843202, 0.747519);
	glEnd();

	glNormal3f( 0.043000, -0.361100, -0.931500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.822371, -2.773968, 0.697040);
		glVertex3f( 0.775747, -2.838427, 0.719876);
		glVertex3f( 0.791129, -2.774424, 0.695774);
	glEnd();

	glNormal3f( -0.123100, -0.899800, 0.418700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.757966, -2.840670, 0.743921);
		glVertex3f( 0.788706, -2.843202, 0.747519);
		glVertex3f( 0.770313, -2.830701, 0.768975);
	glEnd();

	glNormal3f( -0.614200, -0.581100, 0.533900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.757966, -2.840670, 0.743921);
		glVertex3f( 0.770313, -2.830701, 0.768975);
		glVertex3f( 0.745987, -2.818202, 0.754592);
	glEnd();

	glNormal3f( -0.882800, -0.298300, -0.362900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.757966, -2.840670, 0.743921);
		glVertex3f( 0.745987, -2.818202, 0.754592);
		glVertex3f( 0.757635, -2.818555, 0.726549);
	glEnd();

	glNormal3f( 0.041200, -0.051300, -0.997800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.822371, -2.773968, 0.697040);
		glVertex3f( 0.791129, -2.774424, 0.695774);
		glVertex3f( 0.863502, -2.691012, 0.694469);
	glEnd();

	glNormal3f( 0.803600, -0.573400, -0.159500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.844418, -2.782091, 0.744071);
		glVertex3f( 0.830489, -2.794650, 0.719047);
		glVertex3f( 0.892663, -2.708364, 0.722076);
	glEnd();

	glNormal3f( 0.443800, -0.211700, 0.870700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.813126, -2.760824, 0.780573);
		glVertex3f( 0.825055, -2.786924, 0.768146);
		glVertex3f( 0.886454, -2.701095, 0.757722);
	glEnd();

	glNormal3f( -0.645300, 0.606000, 0.465100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.780287, -2.744976, 0.750291);
		glVertex3f( 0.782335, -2.761925, 0.775219);
		glVertex3f( 0.856449, -2.674061, 0.763563);
	glEnd();

	glNormal3f( -0.778300, 0.458200, -0.429300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.790128, -2.751071, 0.702682);
		glVertex3f( 0.772495, -2.756524, 0.728834);
		glVertex3f( 0.831536, -2.666508, 0.717858);
	glEnd();

	glNormal3f( 0.264400, -0.160600, -0.950900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.822371, -2.773968, 0.697040);
		glVertex3f( 0.863502, -2.691012, 0.694469);
		glVertex3f( 0.884009, -2.697300, 0.701234);
	glEnd();

	glNormal3f( 0.842500, -0.536400, 0.049800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.844418, -2.782091, 0.744071);
		glVertex3f( 0.892663, -2.708364, 0.722076);
		glVertex3f( 0.895179, -2.703113, 0.736056);
	glEnd();

	glNormal3f( 0.441500, -0.208200, 0.872800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.813126, -2.760824, 0.780573);
		glVertex3f( 0.886454, -2.701095, 0.757722);
		glVertex3f( 0.875694, -2.674700, 0.769461);
	glEnd();

	glNormal3f( -0.580100, 0.503100, 0.640600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.780287, -2.744976, 0.750291);
		glVertex3f( 0.856449, -2.674061, 0.763563);
		glVertex3f( 0.842018, -2.664389, 0.742900);
	glEnd();

	glNormal3f( -0.689400, 0.440700, -0.574900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.790128, -2.751071, 0.702682);
		glVertex3f( 0.831536, -2.666508, 0.717858);
		glVertex3f( 0.841159, -2.678177, 0.697370);
	glEnd();

	glNormal3f( 0.593000, -0.243000, -0.767700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.928147, -2.627170, 0.702194);
		glVertex3f( 0.919315, -2.605302, 0.688452);
		glVertex3f( 0.940510, -2.531599, 0.681496);
	glEnd();

	glNormal3f( 0.855800, -0.186900, 0.482400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.922432, -2.619047, 0.753821);
		glVertex3f( 0.938518, -2.612529, 0.727807);
		glVertex3f( 0.947480, -2.527431, 0.744871);
	glEnd();

	glNormal3f( -0.200500, 0.150400, 0.968100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.886593, -2.591229, 0.757767);
		glVertex3f( 0.908757, -2.592304, 0.762523);
		glVertex3f( 0.915314, -2.533654, 0.754771);
	glEnd();

	glNormal3f( -0.906900, 0.371100, 0.199700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.874394, -2.584526, 0.720330);
		glVertex3f( 0.880624, -2.578624, 0.737655);
		glVertex3f( 0.898469, -2.525600, 0.720172);
	glEnd();

	glNormal3f( -0.437500, 0.294600, -0.849600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.889950, -2.608586, 0.685343);
		glVertex3f( 0.881117, -2.588869, 0.696728);
		glVertex3f( 0.926856, -2.541131, 0.689728);
	glEnd();

	glNormal3f( 0.444700, 0.894700, -0.041800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.926856, -2.541131, 0.689728);
		glVertex3f( 0.898469, -2.525600, 0.720172);
		glVertex3f( 0.922350, -2.537534, 0.718825);
	glEnd();

	glNormal3f( -0.547800, 0.418600, -0.724400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.926856, -2.541131, 0.689728);
		glVertex3f( 0.881117, -2.588869, 0.696728);
		glVertex3f( 0.898469, -2.525600, 0.720172);
	glEnd();

	glNormal3f( -0.878500, 0.358100, -0.316200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.881117, -2.588869, 0.696728);
		glVertex3f( 0.874394, -2.584526, 0.720330);
		glVertex3f( 0.898469, -2.525600, 0.720172);
	glEnd();

	glNormal3f( 0.446600, 0.894700, -0.009100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.898469, -2.525600, 0.720172);
		glVertex3f( 0.915314, -2.533654, 0.754771);
		glVertex3f( 0.922350, -2.537534, 0.718825);
	glEnd();

	glNormal3f( -0.775100, 0.417300, 0.474500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.898469, -2.525600, 0.720172);
		glVertex3f( 0.880624, -2.578624, 0.737655);
		glVertex3f( 0.915314, -2.533654, 0.754771);
	glEnd();

	glNormal3f( -0.771600, 0.410200, 0.486100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.880624, -2.578624, 0.737655);
		glVertex3f( 0.886593, -2.591229, 0.757767);
		glVertex3f( 0.915314, -2.533654, 0.754771);
	glEnd();

	glNormal3f( -0.231900, 0.961300, -0.149100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.915314, -2.533654, 0.754771);
		glVertex3f( 0.947480, -2.527431, 0.744871);
		glVertex3f( 0.922350, -2.537534, 0.718825);
	glEnd();

	glNormal3f( 0.275900, 0.095600, 0.956400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.915314, -2.533654, 0.754771);
		glVertex3f( 0.908757, -2.592304, 0.762523);
		glVertex3f( 0.947480, -2.527431, 0.744871);
	glEnd();

	glNormal3f( 0.474100, -0.043700, 0.879400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.908757, -2.592304, 0.762523);
		glVertex3f( 0.922432, -2.619047, 0.753821);
		glVertex3f( 0.947480, -2.527431, 0.744871);
	glEnd();

	glNormal3f( -0.352500, 0.935500, -0.022800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.947480, -2.527431, 0.744871);
		glVertex3f( 0.940510, -2.531599, 0.681496);
		glVertex3f( 0.922350, -2.537534, 0.718825);
	glEnd();

	glNormal3f( 0.991100, -0.083600, -0.103500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.947480, -2.527431, 0.744871);
		glVertex3f( 0.938518, -2.612529, 0.727807);
		glVertex3f( 0.940510, -2.531599, 0.681496);
	glEnd();

	glNormal3f( 0.943200, -0.182200, -0.277800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.938518, -2.612529, 0.727807);
		glVertex3f( 0.928147, -2.627170, 0.702194);
		glVertex3f( 0.940510, -2.531599, 0.681496);
	glEnd();

	glNormal3f( -0.636700, 0.747100, -0.191000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.940510, -2.531599, 0.681496);
		glVertex3f( 0.926856, -2.541131, 0.689728);
		glVertex3f( 0.922350, -2.537534, 0.718825);
	glEnd();

	glNormal3f( -0.555900, 0.081800, -0.827200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.940510, -2.531599, 0.681496);
		glVertex3f( 0.919315, -2.605302, 0.688452);
		glVertex3f( 0.926856, -2.541131, 0.689728);
	glEnd();

	glNormal3f( 0.104400, 0.007500, -0.994500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.919315, -2.605302, 0.688452);
		glVertex3f( 0.889950, -2.608586, 0.685343);
		glVertex3f( 0.926856, -2.541131, 0.689728);
	glEnd();

	glNormal3f( -0.531800, 0.232100, -0.814500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.841159, -2.678177, 0.697370);
		glVertex3f( 0.881117, -2.588869, 0.696728);
		glVertex3f( 0.889950, -2.608586, 0.685343);
	glEnd();

	glNormal3f( -0.763300, 0.337600, -0.550800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.841159, -2.678177, 0.697370);
		glVertex3f( 0.831536, -2.666508, 0.717858);
		glVertex3f( 0.881117, -2.588869, 0.696728);
	glEnd();

	glNormal3f( -0.835600, 0.446500, -0.320200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.831536, -2.666508, 0.717858);
		glVertex3f( 0.874394, -2.584526, 0.720330);
		glVertex3f( 0.881117, -2.588869, 0.696728);
	glEnd();

	glNormal3f( -0.892700, 0.412900, 0.180400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.842018, -2.664389, 0.742900);
		glVertex3f( 0.880624, -2.578624, 0.737655);
		glVertex3f( 0.874394, -2.584526, 0.720330);
	glEnd();

	glNormal3f( -0.684700, 0.347400, 0.640800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.842018, -2.664389, 0.742900);
		glVertex3f( 0.856449, -2.674061, 0.763563);
		glVertex3f( 0.880624, -2.578624, 0.737655);
	glEnd();

	glNormal3f( -0.826700, 0.332600, 0.453800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.856449, -2.674061, 0.763563);
		glVertex3f( 0.886593, -2.591229, 0.757767);
		glVertex3f( 0.880624, -2.578624, 0.737655);
	glEnd();

	glNormal3f( -0.199600, 0.161500, 0.966500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.875694, -2.674700, 0.769461);
		glVertex3f( 0.908757, -2.592304, 0.762523);
		glVertex3f( 0.886593, -2.591229, 0.757767);
	glEnd();

	glNormal3f( 0.541300, -0.147500, 0.827800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.875694, -2.674700, 0.769461);
		glVertex3f( 0.886454, -2.701095, 0.757722);
		glVertex3f( 0.908757, -2.592304, 0.762523);
	glEnd();

	glNormal3f( 0.363000, -0.115200, 0.924600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.886454, -2.701095, 0.757722);
		glVertex3f( 0.922432, -2.619047, 0.753821);
		glVertex3f( 0.908757, -2.592304, 0.762523);
	glEnd();

	glNormal3f( 0.831400, -0.359100, 0.424100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.895179, -2.703113, 0.736056);
		glVertex3f( 0.938518, -2.612529, 0.727807);
		glVertex3f( 0.922432, -2.619047, 0.753821);
	glEnd();

	glNormal3f( 0.902100, -0.431600, -0.000300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.895179, -2.703113, 0.736056);
		glVertex3f( 0.892663, -2.708364, 0.722076);
		glVertex3f( 0.938518, -2.612529, 0.727807);
	glEnd();

	glNormal3f( 0.898100, -0.422400, -0.122200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.892663, -2.708364, 0.722076);
		glVertex3f( 0.928147, -2.627170, 0.702194);
		glVertex3f( 0.938518, -2.612529, 0.727807);
	glEnd();

	glNormal3f( 0.502600, -0.305300, -0.808800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.884009, -2.697300, 0.701234);
		glVertex3f( 0.919315, -2.605302, 0.688452);
		glVertex3f( 0.928147, -2.627170, 0.702194);
	glEnd();

	glNormal3f( 0.242600, -0.224200, -0.943900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.884009, -2.697300, 0.701234);
		glVertex3f( 0.863502, -2.691012, 0.694469);
		glVertex3f( 0.919315, -2.605302, 0.688452);
	glEnd();

	glNormal3f( 0.120400, -0.147300, -0.981700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.863502, -2.691012, 0.694469);
		glVertex3f( 0.889950, -2.608586, 0.685343);
		glVertex3f( 0.919315, -2.605302, 0.688452);
	glEnd();

	glNormal3f( -0.844400, 0.431900, 0.316900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.831536, -2.666508, 0.717858);
		glVertex3f( 0.842018, -2.664389, 0.742900);
		glVertex3f( 0.874394, -2.584526, 0.720330);
	glEnd();

	glNormal3f( -0.786000, 0.550000, 0.282500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.831536, -2.666508, 0.717858);
		glVertex3f( 0.772495, -2.756524, 0.728834);
		glVertex3f( 0.842018, -2.664389, 0.742900);
	glEnd();

	glNormal3f( -0.794900, 0.605500, -0.037200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.772495, -2.756524, 0.728834);
		glVertex3f( 0.780287, -2.744976, 0.750291);
		glVertex3f( 0.842018, -2.664389, 0.742900);
	glEnd();

	glNormal3f( -0.283600, 0.169300, 0.943900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.856449, -2.674061, 0.763563);
		glVertex3f( 0.875694, -2.674700, 0.769461);
		glVertex3f( 0.886593, -2.591229, 0.757767);
	glEnd();

	glNormal3f( -0.264800, 0.342900, 0.901300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.856449, -2.674061, 0.763563);
		glVertex3f( 0.782335, -2.761925, 0.775219);
		glVertex3f( 0.875694, -2.674700, 0.769461);
	glEnd();

	glNormal3f( -0.174600, 0.249700, 0.952500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.782335, -2.761925, 0.775219);
		glVertex3f( 0.813126, -2.760824, 0.780573);
		glVertex3f( 0.875694, -2.674700, 0.769461);
	glEnd();

	glNormal3f( 0.854600, -0.356800, 0.377400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.886454, -2.701095, 0.757722);
		glVertex3f( 0.895179, -2.703113, 0.736056);
		glVertex3f( 0.922432, -2.619047, 0.753821);
	glEnd();

	glNormal3f( 0.778600, -0.513100, 0.361300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.886454, -2.701095, 0.757722);
		glVertex3f( 0.825055, -2.786924, 0.768146);
		glVertex3f( 0.895179, -2.703113, 0.736056);
	glEnd();

	glNormal3f( 0.744700, -0.426500, 0.513300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.825055, -2.786924, 0.768146);
		glVertex3f( 0.844418, -2.782091, 0.744071);
		glVertex3f( 0.895179, -2.703113, 0.736056);
	glEnd();

	glNormal3f( 0.718600, -0.444900, -0.534500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.892663, -2.708364, 0.722076);
		glVertex3f( 0.884009, -2.697300, 0.701234);
		glVertex3f( 0.928147, -2.627170, 0.702194);
	glEnd();

	glNormal3f( 0.691100, -0.479000, -0.541200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.892663, -2.708364, 0.722076);
		glVertex3f( 0.830489, -2.794650, 0.719047);
		glVertex3f( 0.884009, -2.697300, 0.701234);
	glEnd();

	glNormal3f( 0.608600, -0.453700, -0.650900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.830489, -2.794650, 0.719047);
		glVertex3f( 0.822371, -2.773968, 0.697040);
		glVertex3f( 0.884009, -2.697300, 0.701234);
	glEnd();

	glNormal3f( -0.160900, -0.057400, -0.985300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.863502, -2.691012, 0.694469);
		glVertex3f( 0.841159, -2.678177, 0.697370);
		glVertex3f( 0.889950, -2.608586, 0.685343);
	glEnd();

	glNormal3f( -0.092100, 0.064300, -0.993700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.863502, -2.691012, 0.694469);
		glVertex3f( 0.791129, -2.774424, 0.695774);
		glVertex3f( 0.841159, -2.678177, 0.697370);
	glEnd();

	glNormal3f( -0.431700, 0.238800, -0.869800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.791129, -2.774424, 0.695774);
		glVertex3f( 0.790128, -2.751071, 0.702682);
		glVertex3f( 0.841159, -2.678177, 0.697370);
	glEnd();

	glNormal3f( -0.829700, 0.217700, -0.514000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.757635, -2.818555, 0.726549);
		glVertex3f( 0.772495, -2.756524, 0.728834);
		glVertex3f( 0.790128, -2.751071, 0.702682);
	glEnd();

	glNormal3f( -0.897900, 0.229000, -0.375900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.757635, -2.818555, 0.726549);
		glVertex3f( 0.745987, -2.818202, 0.754592);
		glVertex3f( 0.772495, -2.756524, 0.728834);
	glEnd();

	glNormal3f( -0.899100, 0.426800, 0.096800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.745987, -2.818202, 0.754592);
		glVertex3f( 0.780287, -2.744976, 0.750291);
		glVertex3f( 0.772495, -2.756524, 0.728834);
	glEnd();

	glNormal3f( -0.840000, 0.414100, 0.350600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.745987, -2.818202, 0.754592);
		glVertex3f( 0.782335, -2.761925, 0.775219);
		glVertex3f( 0.780287, -2.744976, 0.750291);
	glEnd();

	glNormal3f( -0.505100, 0.010000, 0.863000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.745987, -2.818202, 0.754592);
		glVertex3f( 0.770313, -2.830701, 0.768975);
		glVertex3f( 0.782335, -2.761925, 0.775219);
	glEnd();

	glNormal3f( -0.169000, -0.059800, 0.983800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.770313, -2.830701, 0.768975);
		glVertex3f( 0.813126, -2.760824, 0.780573);
		glVertex3f( 0.782335, -2.761925, 0.775219);
	glEnd();

	glNormal3f( 0.264400, -0.313400, 0.912100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.770313, -2.830701, 0.768975);
		glVertex3f( 0.825055, -2.786924, 0.768146);
		glVertex3f( 0.813126, -2.760824, 0.780573);
	glEnd();

	glNormal3f( 0.449400, -0.548700, 0.705000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.770313, -2.830701, 0.768975);
		glVertex3f( 0.788706, -2.843202, 0.747519);
		glVertex3f( 0.825055, -2.786924, 0.768146);
	glEnd();

	glNormal3f( 0.680000, -0.595800, 0.427300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.788706, -2.843202, 0.747519);
		glVertex3f( 0.844418, -2.782091, 0.744071);
		glVertex3f( 0.825055, -2.786924, 0.768146);
	glEnd();

	glNormal3f( -0.769200, 0.150700, -0.621000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.791129, -2.774424, 0.695774);
		glVertex3f( 0.757635, -2.818555, 0.726549);
		glVertex3f( 0.790128, -2.751071, 0.702682);
	glEnd();

	glNormal3f( -0.516400, -0.190300, -0.834900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.791129, -2.774424, 0.695774);
		glVertex3f( 0.775747, -2.838427, 0.719876);
		glVertex3f( 0.757635, -2.818555, 0.726549);
	glEnd();

	glNormal3f( -0.698000, -0.448800, -0.558000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.775747, -2.838427, 0.719876);
		glVertex3f( 0.757966, -2.840670, 0.743921);
		glVertex3f( 0.757635, -2.818555, 0.726549);
	glEnd();

	glNormal3f( 0.735100, -0.674200, -0.070800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.788706, -2.843202, 0.747519);
		glVertex3f( 0.830489, -2.794650, 0.719047);
		glVertex3f( 0.844418, -2.782091, 0.744071);
	glEnd();

	glNormal3f( 0.570900, -0.721300, -0.392200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.788706, -2.843202, 0.747519);
		glVertex3f( 0.775747, -2.838427, 0.719876);
		glVertex3f( 0.830489, -2.794650, 0.719047);
	glEnd();

	glNormal3f( 0.442400, -0.566300, -0.695400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.775747, -2.838427, 0.719876);
		glVertex3f( 0.822371, -2.773968, 0.697040);
		glVertex3f( 0.830489, -2.794650, 0.719047);
	glEnd();

	glNormal3f( -0.147500, -0.981500, -0.121900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.782392, -2.817312, 0.834609);
		glVertex3f( 0.799399, -2.817265, 0.813646);
		glVertex3f( 0.811686, -2.822039, 0.837231);
	glEnd();

	glNormal3f( -0.006800, -0.355100, -0.934800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.838403, -2.766781, 0.794188);
		glVertex3f( 0.799399, -2.817265, 0.813646);
		glVertex3f( 0.808855, -2.764518, 0.793543);
	glEnd();

	glNormal3f( -0.181000, -0.893900, 0.410100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.782392, -2.817312, 0.834609);
		glVertex3f( 0.811686, -2.822039, 0.837231);
		glVertex3f( 0.792877, -2.809539, 0.856178);
	glEnd();

	glNormal3f( -0.583700, -0.630900, 0.511100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.782392, -2.817312, 0.834609);
		glVertex3f( 0.792877, -2.809539, 0.856178);
		glVertex3f( 0.768966, -2.797040, 0.844303);
	glEnd();

	glNormal3f( -0.845900, -0.382300, -0.371900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.782392, -2.817312, 0.834609);
		glVertex3f( 0.768966, -2.797040, 0.844303);
		glVertex3f( 0.780441, -2.798732, 0.819945);
	glEnd();

	glNormal3f( 0.019300, -0.033700, -0.999200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.838403, -2.766781, 0.794188);
		glVertex3f( 0.808855, -2.764518, 0.793543);
		glVertex3f( 0.870328, -2.699819, 0.792548);
	glEnd();

	glNormal3f( 0.790400, -0.591000, -0.161600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.859307, -2.774904, 0.834313);
		glVertex3f( 0.847544, -2.784743, 0.812757);
		glVertex3f( 0.899043, -2.716670, 0.815688);
	glEnd();

	glNormal3f( 0.406200, -0.192000, 0.893400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.827308, -2.753638, 0.866548);
		glVertex3f( 0.841022, -2.777018, 0.855288);
		glVertex3f( 0.892022, -2.709456, 0.846622);
	glEnd();

	glNormal3f( -0.597500, 0.624100, 0.503500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.795275, -2.737789, 0.841132);
		glVertex3f( 0.798303, -2.752018, 0.862361);
		glVertex3f( 0.861194, -2.683831, 0.852477);
	glEnd();

	glNormal3f( -0.747700, 0.445100, -0.492700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.805812, -2.744484, 0.799845);
		glVertex3f( 0.789190, -2.747243, 0.822577);
		glVertex3f( 0.837604, -2.675929, 0.813529);
	glEnd();

	glNormal3f( 0.219800, -0.128500, -0.967000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.838403, -2.766781, 0.794188);
		glVertex3f( 0.870328, -2.699819, 0.792548);
		glVertex3f( 0.890200, -2.706821, 0.797996);
	glEnd();

	glNormal3f( 0.835100, -0.544100, 0.080400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.859307, -2.774904, 0.834313);
		glVertex3f( 0.899043, -2.716670, 0.815688);
		glVertex3f( 0.900777, -2.712223, 0.827783);
	glEnd();

	glNormal3f( 0.404200, -0.188400, 0.895000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.827308, -2.753638, 0.866548);
		glVertex3f( 0.892022, -2.709456, 0.846622);
		glVertex3f( 0.879400, -2.685935, 0.857275);
	glEnd();

	glNormal3f( -0.526400, 0.498200, 0.689000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.795275, -2.737789, 0.841132);
		glVertex3f( 0.861194, -2.683831, 0.852477);
		glVertex3f( 0.846993, -2.674669, 0.835003);
	glEnd();

	glNormal3f( -0.644800, 0.425700, -0.634800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.805812, -2.744484, 0.799845);
		glVertex3f( 0.837604, -2.675929, 0.813529);
		glVertex3f( 0.848018, -2.686960, 0.795555);
	glEnd();

	glNormal3f( 0.627000, -0.129300, -0.768200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.926019, -2.650967, 0.799176);
		glVertex3f( 0.915981, -2.631819, 0.787762);
		glVertex3f( 0.937290, -2.587435, 0.797685);
	glEnd();

	glNormal3f( 0.826000, -0.237500, 0.511200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.919161, -2.642844, 0.843896);
		glVertex3f( 0.934225, -2.639046, 0.821321);
		glVertex3f( 0.939315, -2.586157, 0.837673);
	glEnd();

	glNormal3f( -0.159400, 0.122800, 0.979500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.882766, -2.616081, 0.848212);
		glVertex3f( 0.903792, -2.618821, 0.851978);
		glVertex3f( 0.905106, -2.569639, 0.846027);
	glEnd();

	glNormal3f( -0.917500, 0.338200, 0.209200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.871176, -2.609870, 0.816199);
		glVertex3f( 0.876324, -2.605141, 0.831133);
		glVertex3f( 0.888958, -2.561843, 0.816546);
	glEnd();

	glNormal3f( -0.393400, 0.279200, -0.875900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.888480, -2.632146, 0.785460);
		glVertex3f( 0.878261, -2.614470, 0.795685);
		glVertex3f( 0.917625, -2.577901, 0.789661);
	glEnd();

	glNormal3f( 0.455200, 0.889200, -0.045700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.917625, -2.577901, 0.789661);
		glVertex3f( 0.888958, -2.561843, 0.816546);
		glVertex3f( 0.912626, -2.574046, 0.814870);
	glEnd();

	glNormal3f( -0.494200, 0.405300, -0.769100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.917625, -2.577901, 0.789661);
		glVertex3f( 0.878261, -2.614470, 0.795685);
		glVertex3f( 0.888958, -2.561843, 0.816546);
	glEnd();

	glNormal3f( -0.869200, 0.324500, -0.373000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.878261, -2.614470, 0.795685);
		glVertex3f( 0.871176, -2.609870, 0.816199);
		glVertex3f( 0.888958, -2.561843, 0.816546);
	glEnd();

	glNormal3f( 0.457300, 0.889200, -0.015400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.888958, -2.561843, 0.816546);
		glVertex3f( 0.905106, -2.569639, 0.846027);
		glVertex3f( 0.912626, -2.574046, 0.814870);
	glEnd();

	glNormal3f( -0.757200, 0.395900, 0.519500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.888958, -2.561843, 0.816546);
		glVertex3f( 0.876324, -2.605141, 0.831133);
		glVertex3f( 0.905106, -2.569639, 0.846027);
	glEnd();

	glNormal3f( -0.753000, 0.387200, 0.532000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.876324, -2.605141, 0.831133);
		glVertex3f( 0.882766, -2.616081, 0.848212);
		glVertex3f( 0.905106, -2.569639, 0.846027);
	glEnd();

	glNormal3f( 0.430000, 0.902500, -0.023900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.905106, -2.569639, 0.846027);
		glVertex3f( 0.939315, -2.586157, 0.837673);
		glVertex3f( 0.912626, -2.574046, 0.814870);
	glEnd();

	glNormal3f( 0.284600, 0.107700, 0.952600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.905106, -2.569639, 0.846027);
		glVertex3f( 0.903792, -2.618821, 0.851978);
		glVertex3f( 0.939315, -2.586157, 0.837673);
	glEnd();

	glNormal3f( 0.408600, -0.045200, 0.911600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.903792, -2.618821, 0.851978);
		glVertex3f( 0.919161, -2.642844, 0.843896);
		glVertex3f( 0.939315, -2.586157, 0.837673);
	glEnd();

	glNormal3f( 0.448700, 0.892200, -0.051200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.939315, -2.586157, 0.837673);
		glVertex3f( 0.937290, -2.587435, 0.797685);
		glVertex3f( 0.912626, -2.574046, 0.814870);
	glEnd();

	glNormal3f( 0.995600, -0.081000, -0.047800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.939315, -2.586157, 0.837673);
		glVertex3f( 0.934225, -2.639046, 0.821321);
		glVertex3f( 0.937290, -2.587435, 0.797685);
	glEnd();

	glNormal3f( 0.950200, -0.174600, -0.258100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.934225, -2.639046, 0.821321);
		glVertex3f( 0.926019, -2.650967, 0.799176);
		glVertex3f( 0.937290, -2.587435, 0.797685);
	glEnd();

	glNormal3f( 0.451200, 0.891200, -0.046800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.937290, -2.587435, 0.797685);
		glVertex3f( 0.917625, -2.577901, 0.789661);
		glVertex3f( 0.912626, -2.574046, 0.814870);
	glEnd();

	glNormal3f( 0.386300, 0.020700, -0.922100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.937290, -2.587435, 0.797685);
		glVertex3f( 0.915981, -2.631819, 0.787762);
		glVertex3f( 0.917625, -2.577901, 0.789661);
	glEnd();

	glNormal3f( 0.083000, 0.032600, -0.996000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.915981, -2.631819, 0.787762);
		glVertex3f( 0.888480, -2.632146, 0.785460);
		glVertex3f( 0.917625, -2.577901, 0.789661);
	glEnd();

	glNormal3f( -0.490500, 0.206200, -0.846700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.848018, -2.686960, 0.795555);
		glVertex3f( 0.878261, -2.614470, 0.795685);
		glVertex3f( 0.888480, -2.632146, 0.785460);
	glEnd();

	glNormal3f( -0.730300, 0.305800, -0.610800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.848018, -2.686960, 0.795555);
		glVertex3f( 0.837604, -2.675929, 0.813529);
		glVertex3f( 0.878261, -2.614470, 0.795685);
	glEnd();

	glNormal3f( -0.818500, 0.431300, -0.379400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.837604, -2.675929, 0.813529);
		glVertex3f( 0.871176, -2.609870, 0.816199);
		glVertex3f( 0.878261, -2.614470, 0.795685);
	glEnd();

	glNormal3f( -0.901300, 0.390700, 0.187000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.846993, -2.674669, 0.835003);
		glVertex3f( 0.876324, -2.605141, 0.831133);
		glVertex3f( 0.871176, -2.609870, 0.816199);
	glEnd();

	glNormal3f( -0.650200, 0.312800, 0.692400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.846993, -2.674669, 0.835003);
		glVertex3f( 0.861194, -2.683831, 0.852477);
		glVertex3f( 0.876324, -2.605141, 0.831133);
	glEnd();

	glNormal3f( -0.818200, 0.291700, 0.495400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.861194, -2.683831, 0.852477);
		glVertex3f( 0.882766, -2.616081, 0.848212);
		glVertex3f( 0.876324, -2.605141, 0.831133);
	glEnd();

	glNormal3f( -0.157700, 0.134500, 0.978300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.879400, -2.685935, 0.857275);
		glVertex3f( 0.903792, -2.618821, 0.851978);
		glVertex3f( 0.882766, -2.616081, 0.848212);
	glEnd();

	glNormal3f( 0.505300, -0.116100, 0.855100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.879400, -2.685935, 0.857275);
		glVertex3f( 0.892022, -2.709456, 0.846622);
		glVertex3f( 0.903792, -2.618821, 0.851978);
	glEnd();

	glNormal3f( 0.337300, -0.099100, 0.936200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.892022, -2.709456, 0.846622);
		glVertex3f( 0.919161, -2.642844, 0.843896);
		glVertex3f( 0.903792, -2.618821, 0.851978);
	glEnd();

	glNormal3f( 0.810400, -0.327600, 0.485700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.900777, -2.712223, 0.827783);
		glVertex3f( 0.934225, -2.639046, 0.821321);
		glVertex3f( 0.919161, -2.642844, 0.843896);
	glEnd();

	glNormal3f( 0.910000, -0.414000, 0.021800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.900777, -2.712223, 0.827783);
		glVertex3f( 0.899043, -2.716670, 0.815688);
		glVertex3f( 0.934225, -2.639046, 0.821321);
	glEnd();

	glNormal3f( 0.907500, -0.402600, -0.119500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.899043, -2.716670, 0.815688);
		glVertex3f( 0.926019, -2.650967, 0.799176);
		glVertex3f( 0.934225, -2.639046, 0.821321);
	glEnd();

	glNormal3f( 0.450500, -0.270900, -0.850700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.890200, -2.706821, 0.797996);
		glVertex3f( 0.915981, -2.631819, 0.787762);
		glVertex3f( 0.926019, -2.650967, 0.799176);
	glEnd();

	glNormal3f( 0.193700, -0.197700, -0.960900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.890200, -2.706821, 0.797996);
		glVertex3f( 0.870328, -2.699819, 0.792548);
		glVertex3f( 0.915981, -2.631819, 0.787762);
	glEnd();

	glNormal3f( 0.084200, -0.126100, -0.988400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.870328, -2.699819, 0.792548);
		glVertex3f( 0.888480, -2.632146, 0.785460);
		glVertex3f( 0.915981, -2.631819, 0.787762);
	glEnd();

	glNormal3f( -0.842600, 0.414300, 0.344100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.837604, -2.675929, 0.813529);
		glVertex3f( 0.846993, -2.674669, 0.835003);
		glVertex3f( 0.871176, -2.609870, 0.816199);
	glEnd();

	glNormal3f( -0.769900, 0.561200, 0.303700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.837604, -2.675929, 0.813529);
		glVertex3f( 0.789190, -2.747243, 0.822577);
		glVertex3f( 0.846993, -2.674669, 0.835003);
	glEnd();

	glNormal3f( -0.775000, 0.628600, -0.066100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.789190, -2.747243, 0.822577);
		glVertex3f( 0.795275, -2.737789, 0.841132);
		glVertex3f( 0.846993, -2.674669, 0.835003);
	glEnd();

	glNormal3f( -0.237700, 0.136200, 0.961700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.861194, -2.683831, 0.852477);
		glVertex3f( 0.879400, -2.685935, 0.857275);
		glVertex3f( 0.882766, -2.616081, 0.848212);
	glEnd();

	glNormal3f( -0.205900, 0.323800, 0.923400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.861194, -2.683831, 0.852477);
		glVertex3f( 0.798303, -2.752018, 0.862361);
		glVertex3f( 0.879400, -2.685935, 0.857275);
	glEnd();

	glNormal3f( -0.126500, 0.229500, 0.965100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.798303, -2.752018, 0.862361);
		glVertex3f( 0.827308, -2.753638, 0.866548);
		glVertex3f( 0.879400, -2.685935, 0.857275);
	glEnd();

	glNormal3f( 0.838900, -0.323900, 0.437400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.892022, -2.709456, 0.846622);
		glVertex3f( 0.900777, -2.712223, 0.827783);
		glVertex3f( 0.919161, -2.642844, 0.843896);
	glEnd();

	glNormal3f( 0.748500, -0.510800, 0.422900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.892022, -2.709456, 0.846622);
		glVertex3f( 0.841022, -2.777018, 0.855288);
		glVertex3f( 0.900777, -2.712223, 0.827783);
	glEnd();

	glNormal3f( 0.708100, -0.408400, 0.576100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.841022, -2.777018, 0.855288);
		glVertex3f( 0.859307, -2.774904, 0.834313);
		glVertex3f( 0.900777, -2.712223, 0.827783);
	glEnd();

	glNormal3f( 0.689100, -0.429600, -0.583600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.899043, -2.716670, 0.815688);
		glVertex3f( 0.890200, -2.706821, 0.797996);
		glVertex3f( 0.926019, -2.650967, 0.799176);
	glEnd();

	glNormal3f( 0.655900, -0.470800, -0.590000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.899043, -2.716670, 0.815688);
		glVertex3f( 0.847544, -2.784743, 0.812757);
		glVertex3f( 0.890200, -2.706821, 0.797996);
	glEnd();

	glNormal3f( 0.560700, -0.439800, -0.701500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.847544, -2.784743, 0.812757);
		glVertex3f( 0.838403, -2.766781, 0.794188);
		glVertex3f( 0.890200, -2.706821, 0.797996);
	glEnd();

	glNormal3f( -0.166400, -0.058500, -0.984300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.870328, -2.699819, 0.792548);
		glVertex3f( 0.848018, -2.686960, 0.795555);
		glVertex3f( 0.888480, -2.632146, 0.785460);
	glEnd();

	glNormal3f( -0.092200, 0.072300, -0.993100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.870328, -2.699819, 0.792548);
		glVertex3f( 0.808855, -2.764518, 0.793543);
		glVertex3f( 0.848018, -2.686960, 0.795555);
	glEnd();

	glNormal3f( -0.392300, 0.221300, -0.892800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.808855, -2.764518, 0.793543);
		glVertex3f( 0.805812, -2.744484, 0.799845);
		glVertex3f( 0.848018, -2.686960, 0.795555);
	glEnd();

	glNormal3f( -0.805500, 0.165900, -0.568900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.780441, -2.798732, 0.819945);
		glVertex3f( 0.789190, -2.747243, 0.822577);
		glVertex3f( 0.805812, -2.744484, 0.799845);
	glEnd();

	glNormal3f( -0.886400, 0.172600, -0.429600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.780441, -2.798732, 0.819945);
		glVertex3f( 0.768966, -2.797040, 0.844303);
		glVertex3f( 0.789190, -2.747243, 0.822577);
	glEnd();

	glNormal3f( -0.908500, 0.408200, 0.090000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.768966, -2.797040, 0.844303);
		glVertex3f( 0.795275, -2.737789, 0.841132);
		glVertex3f( 0.789190, -2.747243, 0.822577);
	glEnd();

	glNormal3f( -0.836800, 0.392000, 0.382100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.768966, -2.797040, 0.844303);
		glVertex3f( 0.798303, -2.752018, 0.862361);
		glVertex3f( 0.795275, -2.737789, 0.841132);
	glEnd();

	glNormal3f( -0.465500, -0.051100, 0.883600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.768966, -2.797040, 0.844303);
		glVertex3f( 0.792877, -2.809539, 0.856178);
		glVertex3f( 0.798303, -2.752018, 0.862361);
	glEnd();

	glNormal3f( -0.147300, -0.092000, 0.984800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.792877, -2.809539, 0.856178);
		glVertex3f( 0.827308, -2.753638, 0.866548);
		glVertex3f( 0.798303, -2.752018, 0.862361);
	glEnd();

	glNormal3f( 0.227200, -0.311100, 0.922800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.792877, -2.809539, 0.856178);
		glVertex3f( 0.841022, -2.777018, 0.855288);
		glVertex3f( 0.827308, -2.753638, 0.866548);
	glEnd();

	glNormal3f( 0.384100, -0.548200, 0.742900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.792877, -2.809539, 0.856178);
		glVertex3f( 0.811686, -2.822039, 0.837231);
		glVertex3f( 0.841022, -2.777018, 0.855288);
	glEnd();

	glNormal3f( 0.629100, -0.605500, 0.487400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.811686, -2.822039, 0.837231);
		glVertex3f( 0.859307, -2.774904, 0.834313);
		glVertex3f( 0.841022, -2.777018, 0.855288);
	glEnd();

	glNormal3f( -0.738100, 0.097900, -0.667500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.808855, -2.764518, 0.793543);
		glVertex3f( 0.780441, -2.798732, 0.819945);
		glVertex3f( 0.805812, -2.744484, 0.799845);
	glEnd();

	glNormal3f( -0.500700, -0.228400, -0.834900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.808855, -2.764518, 0.793543);
		glVertex3f( 0.799399, -2.817265, 0.813646);
		glVertex3f( 0.780441, -2.798732, 0.819945);
	glEnd();

	glNormal3f( -0.671400, -0.501300, -0.545800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.799399, -2.817265, 0.813646);
		glVertex3f( 0.782392, -2.817312, 0.834609);
		glVertex3f( 0.780441, -2.798732, 0.819945);
	glEnd();

	glNormal3f( 0.700500, -0.711300, -0.057600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.811686, -2.822039, 0.837231);
		glVertex3f( 0.847544, -2.784743, 0.812757);
		glVertex3f( 0.859307, -2.774904, 0.834313);
	glEnd();

	glNormal3f( 0.503800, -0.757200, -0.415800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.811686, -2.822039, 0.837231);
		glVertex3f( 0.799399, -2.817265, 0.813646);
		glVertex3f( 0.847544, -2.784743, 0.812757);
	glEnd();

	glNormal3f( 0.371100, -0.569400, -0.733500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.799399, -2.817265, 0.813646);
		glVertex3f( 0.838403, -2.766781, 0.794188);
		glVertex3f( 0.847544, -2.784743, 0.812757);
	glEnd();

	glNormal3f( 0.841400, -0.533000, -0.088900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.931333, -2.637053, 0.684365);
		glVertex3f( 0.949672, -2.598708, 0.628056);
		glVertex3f( 0.970005, -2.586992, 0.750173);
	glEnd();

	glNormal3f( 0.515000, -0.637600, -0.573000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.957956, -2.529428, 0.558407);
		glVertex3f( 0.949672, -2.598708, 0.628056);
		glVertex3f( 0.905384, -2.549057, 0.532998);
	glEnd();

	glNormal3f( 0.652600, -0.736700, 0.176900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.931333, -2.637053, 0.684365);
		glVertex3f( 0.970005, -2.586992, 0.750173);
		glVertex3f( 0.905384, -2.630286, 0.808274);
	glEnd();

	glNormal3f( -0.290600, -0.956800, -0.008600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.931333, -2.637053, 0.684365);
		glVertex3f( 0.905384, -2.630286, 0.808274);
		glVertex3f( 0.862850, -2.616728, 0.737120);
	glEnd();

	glNormal3f( -0.219600, -0.971500, 0.089200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.931333, -2.637053, 0.684365);
		glVertex3f( 0.862850, -2.616728, 0.737120);
		glVertex3f( 0.874483, -2.630287, 0.618064);
	glEnd();

	glNormal3f( 0.462900, -0.099700, -0.880800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.957956, -2.529428, 0.558407);
		glVertex3f( 0.905384, -2.549057, 0.532998);
		glVertex3f( 0.925956, -2.423826, 0.529634);
	glEnd();

	glNormal3f( 0.990200, -0.138700, -0.013000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.990449, -2.529428, 0.758406);
		glVertex3f( 0.986285, -2.549058, 0.650554);
		glVertex3f( 1.005384, -2.417624, 0.703128);
	glEnd();

	glNormal3f( 0.661500, -0.184800, 0.726800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.905384, -2.529428, 0.882013);
		glVertex3f( 0.957751, -2.547323, 0.829798);
		glVertex3f( 0.924879, -2.425724, 0.890630);
	glEnd();

	glNormal3f( -0.990600, -0.135600, 0.017200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.856257, -2.507096, 0.764572);
		glVertex3f( 0.859395, -2.522211, 0.826171);
		glVertex3f( 0.844507, -2.413982, 0.821899);
	glEnd();

	glNormal3f( -0.989000, -0.015900, 0.147400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.852001, -2.523983, 0.560039);
		glVertex3f( 0.867344, -2.520672, 0.663373);
		glVertex3f( 0.854258, -2.410177, 0.587491);
	glEnd();

	glNormal3f( 0.679600, 0.006000, -0.733600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.957956, -2.529428, 0.558407);
		glVertex3f( 0.925956, -2.423826, 0.529634);
		glVertex3f( 0.986285, -2.417624, 0.585571);
	glEnd();

	glNormal3f( 0.946500, 0.032200, 0.320900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.990449, -2.529428, 0.758406);
		glVertex3f( 1.005384, -2.417624, 0.703128);
		glVertex3f( 0.968002, -2.435897, 0.815211);
	glEnd();

	glNormal3f( 0.039000, -0.090000, 0.995200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.905384, -2.529428, 0.882013);
		glVertex3f( 0.924879, -2.425724, 0.890630);
		glVertex3f( 0.874483, -2.417624, 0.893340);
	glEnd();

	glNormal3f( -0.993300, -0.067500, -0.094000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.856257, -2.507096, 0.764572);
		glVertex3f( 0.844507, -2.413982, 0.821899);
		glVertex3f( 0.856293, -2.402929, 0.689354);
	glEnd();

	glNormal3f( -0.969800, 0.075200, -0.232000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.852001, -2.523983, 0.560039);
		glVertex3f( 0.854258, -2.410177, 0.587491);
		glVertex3f( 0.869398, -2.419393, 0.521216);
	glEnd();

	glNormal3f( 0.809600, 0.382100, -0.445500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.990449, -2.305819, 0.647850);
		glVertex3f( 0.949304, -2.296990, 0.580652);
		glVertex3f( 0.955383, -2.204960, 0.670637);
	glEnd();

	glNormal3f( 0.845100, 0.363300, 0.392100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.955866, -2.309416, 0.842778);
		glVertex3f( 0.986285, -2.286189, 0.755702);
		glVertex3f( 0.936285, -2.204960, 0.788193);
	glEnd();

	glNormal3f( -0.104300, 0.522800, 0.846000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.852811, -2.305819, 0.847849);
		glVertex3f( 0.900609, -2.297198, 0.848415);
		glVertex3f( 0.874483, -2.204960, 0.788193);
	glEnd();

	glNormal3f( -0.980300, 0.196600, 0.018200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.834275, -2.308143, 0.648424);
		glVertex3f( 0.840683, -2.286189, 0.756519);
		glVertex3f( 0.855384, -2.204960, 0.670637);
	glEnd();

	glNormal3f( -0.001800, 0.568100, -0.823000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.900614, -2.315077, 0.553276);
		glVertex3f( 0.853782, -2.294333, 0.567695);
		glVertex3f( 0.896967, -2.219913, 0.618973);
	glEnd();

	glNormal3f( -0.301900, 0.823000, -0.481200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.896967, -2.219913, 0.618973);
		glVertex3f( 0.855384, -2.204960, 0.670637);
		glVertex3f( 0.905384, -2.167624, 0.703128);
	glEnd();

	glNormal3f( -0.472100, 0.669300, -0.573700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.896967, -2.219913, 0.618973);
		glVertex3f( 0.853782, -2.294333, 0.567695);
		glVertex3f( 0.855384, -2.204960, 0.670637);
	glEnd();

	glNormal3f( -0.953000, 0.235900, -0.189900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.853782, -2.294333, 0.567695);
		glVertex3f( 0.834275, -2.308143, 0.648424);
		glVertex3f( 0.855384, -2.204960, 0.670637);
	glEnd();

	glNormal3f( -0.637400, 0.763500, 0.103600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.855384, -2.204960, 0.670637);
		glVertex3f( 0.874483, -2.204960, 0.788193);
		glVertex3f( 0.905384, -2.167624, 0.703128);
	glEnd();

	glNormal3f( -0.932200, 0.328800, 0.151400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.855384, -2.204960, 0.670637);
		glVertex3f( 0.840683, -2.286189, 0.756519);
		glVertex3f( 0.874483, -2.204960, 0.788193);
	glEnd();

	glNormal3f( -0.930500, 0.312800, 0.190800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.840683, -2.286189, 0.756519);
		glVertex3f( 0.852811, -2.305819, 0.847849);
		glVertex3f( 0.874483, -2.204960, 0.788193);
	glEnd();

	glNormal3f( 0.000000, 0.915700, 0.401900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.874483, -2.204960, 0.788193);
		glVertex3f( 0.936285, -2.204960, 0.788193);
		glVertex3f( 0.905384, -2.167624, 0.703128);
	glEnd();

	glNormal3f( 0.000000, 0.546700, 0.837300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.874483, -2.204960, 0.788193);
		glVertex3f( 0.900609, -2.297198, 0.848415);
		glVertex3f( 0.936285, -2.204960, 0.788193);
	glEnd();

	glNormal3f( 0.193900, 0.482700, 0.854100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.900609, -2.297198, 0.848415);
		glVertex3f( 0.955866, -2.309416, 0.842778);
		glVertex3f( 0.936285, -2.204960, 0.788193);
	glEnd();

	glNormal3f( 0.637400, 0.763500, 0.103600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.936285, -2.204960, 0.788193);
		glVertex3f( 0.955383, -2.204960, 0.670637);
		glVertex3f( 0.905384, -2.167624, 0.703128);
	glEnd();

	glNormal3f( 0.867300, 0.477500, 0.140900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.936285, -2.204960, 0.788193);
		glVertex3f( 0.986285, -2.286189, 0.755702);
		glVertex3f( 0.955383, -2.204960, 0.670637);
	glEnd();

	glNormal3f( 0.942600, 0.333200, -0.024200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.986285, -2.286189, 0.755702);
		glVertex3f( 0.990449, -2.305819, 0.647850);
		glVertex3f( 0.955383, -2.204960, 0.670637);
	glEnd();

	glNormal3f( 0.260300, 0.808200, -0.528200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.955383, -2.204960, 0.670637);
		glVertex3f( 0.896967, -2.219913, 0.618973);
		glVertex3f( 0.905384, -2.167624, 0.703128);
	glEnd();

	glNormal3f( 0.426200, 0.617900, -0.660700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.955383, -2.204960, 0.670637);
		glVertex3f( 0.949304, -2.296990, 0.580652);
		glVertex3f( 0.896967, -2.219913, 0.618973);
	glEnd();

	glNormal3f( 0.239600, 0.557800, -0.794700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.949304, -2.296990, 0.580652);
		glVertex3f( 0.900614, -2.315077, 0.553276);
		glVertex3f( 0.896967, -2.219913, 0.618973);
	glEnd();

	glNormal3f( -0.141600, 0.329300, -0.933600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.869398, -2.419393, 0.521216);
		glVertex3f( 0.853782, -2.294333, 0.567695);
		glVertex3f( 0.900614, -2.315077, 0.553276);
	glEnd();

	glNormal3f( -0.975300, -0.041100, -0.217100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.869398, -2.419393, 0.521216);
		glVertex3f( 0.854258, -2.410177, 0.587491);
		glVertex3f( 0.853782, -2.294333, 0.567695);
	glEnd();

	glNormal3f( -0.969200, -0.045300, -0.242000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.854258, -2.410177, 0.587491);
		glVertex3f( 0.834275, -2.308143, 0.648424);
		glVertex3f( 0.853782, -2.294333, 0.567695);
	glEnd();

	glNormal3f( -0.977900, -0.185800, 0.095700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.856293, -2.402929, 0.689354);
		glVertex3f( 0.840683, -2.286189, 0.756519);
		glVertex3f( 0.834275, -2.308143, 0.648424);
	glEnd();

	glNormal3f( -0.992400, -0.078200, -0.094800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.856293, -2.402929, 0.689354);
		glVertex3f( 0.844507, -2.413982, 0.821899);
		glVertex3f( 0.840683, -2.286189, 0.756519);
	glEnd();

	glNormal3f( -0.989200, 0.042300, 0.140400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.844507, -2.413982, 0.821899);
		glVertex3f( 0.852811, -2.305819, 0.847849);
		glVertex3f( 0.840683, -2.286189, 0.756519);
	glEnd();

	glNormal3f( -0.076500, 0.363000, 0.928600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.874483, -2.417624, 0.893340);
		glVertex3f( 0.900609, -2.297198, 0.848415);
		glVertex3f( 0.852811, -2.305819, 0.847849);
	glEnd();

	glNormal3f( 0.103200, 0.327900, 0.939100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.874483, -2.417624, 0.893340);
		glVertex3f( 0.924879, -2.425724, 0.890630);
		glVertex3f( 0.900609, -2.297198, 0.848415);
	glEnd();

	glNormal3f( 0.168900, 0.336200, 0.926500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.924879, -2.425724, 0.890630);
		glVertex3f( 0.955866, -2.309416, 0.842778);
		glVertex3f( 0.900609, -2.297198, 0.848415);
	glEnd();

	glNormal3f( 0.942400, 0.017600, 0.333900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.968002, -2.435897, 0.815211);
		glVertex3f( 0.986285, -2.286189, 0.755702);
		glVertex3f( 0.955866, -2.309416, 0.842778);
	glEnd();

	glNormal3f( 0.948100, 0.010600, 0.317900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.968002, -2.435897, 0.815211);
		glVertex3f( 1.005384, -2.417624, 0.703128);
		glVertex3f( 0.986285, -2.286189, 0.755702);
	glEnd();

	glNormal3f( 0.990200, 0.138700, 0.013000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.005384, -2.417624, 0.703128);
		glVertex3f( 0.990449, -2.305819, 0.647850);
		glVertex3f( 0.986285, -2.286189, 0.755702);
	glEnd();

	glNormal3f( 0.841900, 0.238300, -0.484200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.986285, -2.417624, 0.585571);
		glVertex3f( 0.949304, -2.296990, 0.580652);
		glVertex3f( 0.990449, -2.305819, 0.647850);
	glEnd();

	glNormal3f( 0.660100, 0.172600, -0.731100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.986285, -2.417624, 0.585571);
		glVertex3f( 0.925956, -2.423826, 0.529634);
		glVertex3f( 0.949304, -2.296990, 0.580652);
	glEnd();

	glNormal3f( 0.388800, 0.281300, -0.877300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.925956, -2.423826, 0.529634);
		glVertex3f( 0.900614, -2.315077, 0.553276);
		glVertex3f( 0.949304, -2.296990, 0.580652);
	glEnd();

	glNormal3f( -0.976700, -0.211900, 0.034600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.854258, -2.410177, 0.587491);
		glVertex3f( 0.856293, -2.402929, 0.689354);
		glVertex3f( 0.834275, -2.308143, 0.648424);
	glEnd();

	glNormal3f( -0.994700, -0.099300, 0.026900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.854258, -2.410177, 0.587491);
		glVertex3f( 0.867344, -2.520672, 0.663373);
		glVertex3f( 0.856293, -2.402929, 0.689354);
	glEnd();

	glNormal3f( -0.992500, -0.071300, -0.099200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.867344, -2.520672, 0.663373);
		glVertex3f( 0.856257, -2.507096, 0.764572);
		glVertex3f( 0.856293, -2.402929, 0.689354);
	glEnd();

	glNormal3f( -0.922300, -0.021800, 0.385900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.844507, -2.413982, 0.821899);
		glVertex3f( 0.874483, -2.417624, 0.893340);
		glVertex3f( 0.852811, -2.305819, 0.847849);
	glEnd();

	glNormal3f( -0.918400, -0.111400, 0.379700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.844507, -2.413982, 0.821899);
		glVertex3f( 0.859395, -2.522211, 0.826171);
		glVertex3f( 0.874483, -2.417624, 0.893340);
	glEnd();

	glNormal3f( -0.760100, -0.270000, 0.591100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.859395, -2.522211, 0.826171);
		glVertex3f( 0.905384, -2.529428, 0.882013);
		glVertex3f( 0.874483, -2.417624, 0.893340);
	glEnd();

	glNormal3f( 0.866300, -0.025600, 0.498800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.924879, -2.425724, 0.890630);
		glVertex3f( 0.968002, -2.435897, 0.815211);
		glVertex3f( 0.955866, -2.309416, 0.842778);
	glEnd();

	glNormal3f( 0.867200, -0.014600, 0.497800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.924879, -2.425724, 0.890630);
		glVertex3f( 0.957751, -2.547323, 0.829798);
		glVertex3f( 0.968002, -2.435897, 0.815211);
	glEnd();

	glNormal3f( 0.911600, -0.030200, 0.409900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.957751, -2.547323, 0.829798);
		glVertex3f( 0.990449, -2.529428, 0.758406);
		glVertex3f( 0.968002, -2.435897, 0.815211);
	glEnd();

	glNormal3f( 0.985700, 0.052500, -0.160100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.005384, -2.417624, 0.703128);
		glVertex3f( 0.986285, -2.417624, 0.585571);
		glVertex3f( 0.990449, -2.305819, 0.647850);
	glEnd();

	glNormal3f( 0.984000, -0.079000, -0.159900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.005384, -2.417624, 0.703128);
		glVertex3f( 0.986285, -2.549058, 0.650554);
		glVertex3f( 0.986285, -2.417624, 0.585571);
	glEnd();

	glNormal3f( 0.933700, -0.158600, -0.320900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.986285, -2.549058, 0.650554);
		glVertex3f( 0.957956, -2.529428, 0.558407);
		glVertex3f( 0.986285, -2.417624, 0.585571);
	glEnd();

	glNormal3f( 0.161500, 0.245400, -0.955900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.925956, -2.423826, 0.529634);
		glVertex3f( 0.869398, -2.419393, 0.521216);
		glVertex3f( 0.900614, -2.315077, 0.553276);
	glEnd();

	glNormal3f( 0.143200, -0.050100, -0.988400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.925956, -2.423826, 0.529634);
		glVertex3f( 0.905384, -2.549057, 0.532998);
		glVertex3f( 0.869398, -2.419393, 0.521216);
	glEnd();

	glNormal3f( -0.520900, -0.219500, -0.824900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.905384, -2.549057, 0.532998);
		glVertex3f( 0.852001, -2.523983, 0.560039);
		glVertex3f( 0.869398, -2.419393, 0.521216);
	glEnd();

	glNormal3f( -0.980700, -0.125700, 0.149600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.874483, -2.630287, 0.618064);
		glVertex3f( 0.867344, -2.520672, 0.663373);
		glVertex3f( 0.852001, -2.523983, 0.560039);
	glEnd();

	glNormal3f( -0.995200, -0.025800, -0.094300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.874483, -2.630287, 0.618064);
		glVertex3f( 0.862850, -2.616728, 0.737120);
		glVertex3f( 0.867344, -2.520672, 0.663373);
	glEnd();

	glNormal3f( -0.994000, -0.033600, -0.104400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.862850, -2.616728, 0.737120);
		glVertex3f( 0.856257, -2.507096, 0.764572);
		glVertex3f( 0.867344, -2.520672, 0.663373);
	glEnd();

	glNormal3f( -0.997100, -0.068500, 0.034000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.862850, -2.616728, 0.737120);
		glVertex3f( 0.859395, -2.522211, 0.826171);
		glVertex3f( 0.856257, -2.507096, 0.764572);
	glEnd();

	glNormal3f( -0.813900, -0.413900, 0.407700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.862850, -2.616728, 0.737120);
		glVertex3f( 0.905384, -2.630286, 0.808274);
		glVertex3f( 0.859395, -2.522211, 0.826171);
	glEnd();

	glNormal3f( -0.731500, -0.402400, 0.550400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.905384, -2.630286, 0.808274);
		glVertex3f( 0.905384, -2.529428, 0.882013);
		glVertex3f( 0.859395, -2.522211, 0.826171);
	glEnd();

	glNormal3f( 0.516500, -0.505400, 0.691200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.905384, -2.630286, 0.808274);
		glVertex3f( 0.957751, -2.547323, 0.829798);
		glVertex3f( 0.905384, -2.529428, 0.882013);
	glEnd();

	glNormal3f( 0.728700, -0.561600, 0.391900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.905384, -2.630286, 0.808274);
		glVertex3f( 0.970005, -2.586992, 0.750173);
		glVertex3f( 0.957751, -2.547323, 0.829798);
	glEnd();

	glNormal3f( 0.879800, -0.357300, 0.313400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.970005, -2.586992, 0.750173);
		glVertex3f( 0.990449, -2.529428, 0.758406);
		glVertex3f( 0.957751, -2.547323, 0.829798);
	glEnd();

	glNormal3f( -0.565600, -0.484100, -0.667700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.905384, -2.549057, 0.532998);
		glVertex3f( 0.874483, -2.630287, 0.618064);
		glVertex3f( 0.852001, -2.523983, 0.560039);
	glEnd();

	glNormal3f( 0.382700, -0.733600, -0.561500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.905384, -2.549057, 0.532998);
		glVertex3f( 0.949672, -2.598708, 0.628056);
		glVertex3f( 0.874483, -2.630287, 0.618064);
	glEnd();

	glNormal3f( 0.398000, -0.813400, -0.424300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.949672, -2.598708, 0.628056);
		glVertex3f( 0.931333, -2.637053, 0.684365);
		glVertex3f( 0.874483, -2.630287, 0.618064);
	glEnd();

	glNormal3f( 0.940900, -0.337800, 0.025100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.970005, -2.586992, 0.750173);
		glVertex3f( 0.986285, -2.549058, 0.650554);
		glVertex3f( 0.990449, -2.529428, 0.758406);
	glEnd();

	glNormal3f( 0.819500, -0.567100, -0.082000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.970005, -2.586992, 0.750173);
		glVertex3f( 0.949672, -2.598708, 0.628056);
		glVertex3f( 0.986285, -2.549058, 0.650554);
	glEnd();

	glNormal3f( 0.822800, -0.448800, -0.348600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.949672, -2.598708, 0.628056);
		glVertex3f( 0.957956, -2.529428, 0.558407);
		glVertex3f( 0.986285, -2.549058, 0.650554);
	glEnd();

	glNormal3f( -0.876900, -0.117900, 0.466000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.725321, -1.735472, 0.548403);
		glVertex3f( 0.896024, -2.172131, 0.759142);
		glVertex3f( 0.794860, -1.705907, 0.686749);
	glEnd();

	glNormal3f( 0.425200, -0.243500, 0.871700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.019637, -2.112211, 0.715586);
		glVertex3f( 0.896024, -2.172131, 0.759142);
		glVertex3f( 0.848349, -2.364488, 0.728658);
	glEnd();

	glNormal3f( -0.754700, -0.451700, 0.475900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.725321, -1.735472, 0.548403);
		glVertex3f( 0.794860, -1.705907, 0.686749);
		glVertex3f( 0.621067, -1.600607, 0.511065);
	glEnd();

	glNormal3f( -0.801800, -0.571500, 0.174400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.725321, -1.735472, 0.548403);
		glVertex3f( 0.621067, -1.600607, 0.511065);
		glVertex3f( 0.677948, -1.720051, 0.381164);
	glEnd();

	glNormal3f( -0.956100, 0.089000, 0.279000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.725321, -1.735472, 0.548403);
		glVertex3f( 0.677948, -1.720051, 0.381164);
		glVertex3f( 0.691279, -1.957043, 0.502450);
	glEnd();

	glNormal3f( 0.781200, -0.511900, 0.357400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.019637, -2.112211, 0.715586);
		glVertex3f( 0.848349, -2.364488, 0.728658);
		glVertex3f( 0.996645, -2.212234, 0.622577);
	glEnd();

	glNormal3f( -0.032700, 0.348600, 0.936700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.903237, -1.490959, 0.669459);
		glVertex3f( 0.934823, -1.683784, 0.742330);
		glVertex3f( 1.008092, -1.351604, 0.621249);
	glEnd();

	glNormal3f( -0.806200, 0.448600, 0.385700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.612623, -1.394014, 0.410206);
		glVertex3f( 0.686705, -1.389444, 0.559740);
		glVertex3f( 0.717911, -1.177672, 0.378686);
	glEnd();

	glNormal3f( -0.799100, -0.192400, -0.569600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.709395, -1.597224, 0.189202);
		glVertex3f( 0.611705, -1.519346, 0.299934);
		glVertex3f( 0.728439, -1.377399, 0.088214);
	glEnd();

	glNormal3f( -0.946300, -0.259600, -0.192800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.853836, -1.947042, 0.460082);
		glVertex3f( 0.835621, -1.702148, 0.219650);
		glVertex3f( 0.848691, -1.682578, 0.129129);
	glEnd();

	glNormal3f( 0.981800, -0.185000, -0.043800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.019637, -2.112211, 0.715586);
		glVertex3f( 0.996645, -2.212234, 0.622577);
		glVertex3f( 1.155214, -1.343546, 0.508591);
	glEnd();

	glNormal3f( -0.147300, 0.420500, 0.895200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.903237, -1.490959, 0.669459);
		glVertex3f( 1.008092, -1.351604, 0.621249);
		glVertex3f( 0.849792, -1.167210, 0.508591);
	glEnd();

	glNormal3f( -0.896300, 0.441700, 0.037900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.612623, -1.394014, 0.410206);
		glVertex3f( 0.717911, -1.177672, 0.378686);
		glVertex3f( 0.671559, -1.257956, 0.218119);
	glEnd();

	glNormal3f( -0.536700, -0.313400, -0.783400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.709395, -1.597224, 0.189202);
		glVertex3f( 0.728439, -1.377399, 0.088214);
		glVertex3f( 0.866827, -1.490376, 0.038595);
	glEnd();

	glNormal3f( -0.830100, -0.441800, -0.340200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.853836, -1.947042, 0.460082);
		glVertex3f( 0.848691, -1.682578, 0.129129);
		glVertex3f( 0.943549, -2.232191, 0.611532);
	glEnd();

	glNormal3f( 0.805300, 0.430700, 0.407500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.174259, -1.123721, 0.407603);
		glVertex3f( 1.271949, -1.201598, 0.296872);
		glVertex3f( 1.205706, -1.000894, 0.215642);
	glEnd();

	glNormal3f( -0.106600, 0.926400, 0.361300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.890083, -1.015930, 0.323185);
		glVertex3f( 1.048033, -1.018797, 0.377156);
		glVertex3f( 1.038673, -0.937537, 0.166023);
	glEnd();

	glNormal3f( -0.591100, 0.626800, -0.507600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.811225, -1.152518, 0.050010);
		glVertex3f( 0.834647, -1.035724, 0.166969);
		glVertex3f( 0.992321, -1.017820, 0.005456);
	glEnd();

	glNormal3f( 0.021300, -0.053900, -0.998300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.046662, -1.344726, -0.034408);
		glVertex3f( 0.926681, -1.228984, -0.043219);
		glVertex3f( 1.130707, -1.130797, -0.044164);
	glEnd();

	glNormal3f( 0.903300, -0.342400, -0.258500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.005652, -2.068654, 0.444190);
		glVertex3f( 1.120065, -1.464669, 0.043848);
		glVertex3f( 1.262587, -1.120337, 0.085740);
	glEnd();

	glNormal3f( 0.653400, 0.314400, -0.688600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.262587, -1.120337, 0.085740);
		glVertex3f( 1.130707, -1.130797, -0.044164);
		glVertex3f( 1.158333, -0.985472, 0.048403);
	glEnd();

	glNormal3f( 0.695200, -0.203900, -0.689300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.262587, -1.120337, 0.085740);
		glVertex3f( 1.120065, -1.464669, 0.043848);
		glVertex3f( 1.130707, -1.130797, -0.044164);
	glEnd();

	glNormal3f( 0.502400, -0.235300, -0.832000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.120065, -1.464669, 0.043848);
		glVertex3f( 1.046662, -1.344726, -0.034408);
		glVertex3f( 1.130707, -1.130797, -0.044164);
	glEnd();

	glNormal3f( 0.118500, 0.517300, -0.847500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.130707, -1.130797, -0.044164);
		glVertex3f( 0.992321, -1.017820, 0.005456);
		glVertex3f( 1.158333, -0.985472, 0.048403);
	glEnd();

	glNormal3f( -0.130000, 0.260900, -0.956600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.130707, -1.130797, -0.044164);
		glVertex3f( 0.926681, -1.228984, -0.043219);
		glVertex3f( 0.992321, -1.017820, 0.005456);
	glEnd();

	glNormal3f( -0.450300, 0.331100, -0.829200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.926681, -1.228984, -0.043219);
		glVertex3f( 0.811225, -1.152518, 0.050010);
		glVertex3f( 0.992321, -1.017820, 0.005456);
	glEnd();

	glNormal3f( -0.063700, 0.899800, -0.431500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.992321, -1.017820, 0.005456);
		glVertex3f( 1.038673, -0.937537, 0.166023);
		glVertex3f( 1.158333, -0.985472, 0.048403);
	glEnd();

	glNormal3f( -0.413600, 0.856500, -0.308800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.992321, -1.017820, 0.005456);
		glVertex3f( 0.834647, -1.035724, 0.166969);
		glVertex3f( 1.038673, -0.937537, 0.166023);
	glEnd();

	glNormal3f( -0.433200, 0.900400, 0.039600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.834647, -1.035724, 0.166969);
		glVertex3f( 0.890083, -1.015930, 0.323185);
		glVertex3f( 1.038673, -0.937537, 0.166023);
	glEnd();

	glNormal3f( 0.358600, 0.933300, -0.015500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.038673, -0.937537, 0.166023);
		glVertex3f( 1.205706, -1.000894, 0.215642);
		glVertex3f( 1.158333, -0.985472, 0.048403);
	glEnd();

	glNormal3f( 0.244000, 0.908600, 0.338900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.038673, -0.937537, 0.166023);
		glVertex3f( 1.048033, -1.018797, 0.377156);
		glVertex3f( 1.205706, -1.000894, 0.215642);
	glEnd();

	glNormal3f( 0.462600, 0.710400, 0.530400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.048033, -1.018797, 0.377156);
		glVertex3f( 1.174259, -1.123721, 0.407603);
		glVertex3f( 1.205706, -1.000894, 0.215642);
	glEnd();

	glNormal3f( 0.801800, 0.571500, -0.174400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.205706, -1.000894, 0.215642);
		glVertex3f( 1.262587, -1.120337, 0.085740);
		glVertex3f( 1.158333, -0.985472, 0.048403);
	glEnd();

	glNormal3f( 0.934000, 0.345300, 0.091500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.205706, -1.000894, 0.215642);
		glVertex3f( 1.271949, -1.201598, 0.296872);
		glVertex3f( 1.262587, -1.120337, 0.085740);
	glEnd();

	glNormal3f( 0.935100, -0.314800, -0.162600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.271949, -1.201598, 0.296872);
		glVertex3f( 1.005652, -2.068654, 0.444190);
		glVertex3f( 1.262587, -1.120337, 0.085740);
	glEnd();

	glNormal3f( -0.875500, -0.140600, -0.462300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.943549, -2.232191, 0.611532);
		glVertex3f( 1.120065, -1.464669, 0.043848);
		glVertex3f( 1.005652, -2.068654, 0.444190);
	glEnd();

	glNormal3f( 0.256500, -0.612200, -0.747900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.943549, -2.232191, 0.611532);
		glVertex3f( 0.848691, -1.682578, 0.129129);
		glVertex3f( 1.120065, -1.464669, 0.043848);
	glEnd();

	glNormal3f( 0.121400, -0.489200, -0.863700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.848691, -1.682578, 0.129129);
		glVertex3f( 1.046662, -1.344726, -0.034408);
		glVertex3f( 1.120065, -1.464669, 0.043848);
	glEnd();

	glNormal3f( -0.177800, -0.256600, -0.950000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.866827, -1.490376, 0.038595);
		glVertex3f( 0.926681, -1.228984, -0.043219);
		glVertex3f( 1.046662, -1.344726, -0.034408);
	glEnd();

	glNormal3f( -0.452800, -0.170300, -0.875200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.866827, -1.490376, 0.038595);
		glVertex3f( 0.728439, -1.377399, 0.088214);
		glVertex3f( 0.926681, -1.228984, -0.043219);
	glEnd();

	glNormal3f( -0.592700, 0.082100, -0.801300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.728439, -1.377399, 0.088214);
		glVertex3f( 0.811225, -1.152518, 0.050010);
		glVertex3f( 0.926681, -1.228984, -0.043219);
	glEnd();

	glNormal3f( -0.793100, 0.503000, -0.343500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.671559, -1.257956, 0.218119);
		glVertex3f( 0.834647, -1.035724, 0.166969);
		glVertex3f( 0.811225, -1.152518, 0.050010);
	glEnd();

	glNormal3f( -0.811100, 0.582100, -0.056900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.671559, -1.257956, 0.218119);
		glVertex3f( 0.717911, -1.177672, 0.378686);
		glVertex3f( 0.834647, -1.035724, 0.166969);
	glEnd();

	glNormal3f( -0.654200, 0.743700, 0.137900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.717911, -1.177672, 0.378686);
		glVertex3f( 0.890083, -1.015930, 0.323185);
		glVertex3f( 0.834647, -1.035724, 0.166969);
	glEnd();

	glNormal3f( -0.189400, 0.780500, 0.595700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.849792, -1.167210, 0.508591);
		glVertex3f( 1.048033, -1.018797, 0.377156);
		glVertex3f( 0.890083, -1.015930, 0.323185);
	glEnd();

	glNormal3f( 0.101100, 0.580500, 0.808000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.849792, -1.167210, 0.508591);
		glVertex3f( 1.008092, -1.351604, 0.621249);
		glVertex3f( 1.048033, -1.018797, 0.377156);
	glEnd();

	glNormal3f( 0.265500, 0.549300, 0.792400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.008092, -1.351604, 0.621249);
		glVertex3f( 1.174259, -1.123721, 0.407603);
		glVertex3f( 1.048033, -1.018797, 0.377156);
	glEnd();

	glNormal3f( 0.799100, 0.192500, 0.569600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.155214, -1.343546, 0.508591);
		glVertex3f( 1.271949, -1.201598, 0.296872);
		glVertex3f( 1.174259, -1.123721, 0.407603);
	glEnd();

	glNormal3f( 0.899500, -0.108700, 0.423100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.155214, -1.343546, 0.508591);
		glVertex3f( 0.996645, -2.212234, 0.622577);
		glVertex3f( 1.271949, -1.201598, 0.296872);
	glEnd();

	glNormal3f( 0.923900, -0.319500, -0.210500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.996645, -2.212234, 0.622577);
		glVertex3f( 1.005652, -2.068654, 0.444190);
		glVertex3f( 1.271949, -1.201598, 0.296872);
	glEnd();

	glNormal3f( -0.024000, -0.424200, -0.905300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.848691, -1.682578, 0.129129);
		glVertex3f( 0.866827, -1.490376, 0.038595);
		glVertex3f( 1.046662, -1.344726, -0.034408);
	glEnd();

	glNormal3f( -0.990200, 0.029100, -0.136700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.848691, -1.682578, 0.129129);
		glVertex3f( 0.835621, -1.702148, 0.219650);
		glVertex3f( 0.866827, -1.490376, 0.038595);
	glEnd();

	glNormal3f( -0.311400, -0.590600, -0.744500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.835621, -1.702148, 0.219650);
		glVertex3f( 0.709395, -1.597224, 0.189202);
		glVertex3f( 0.866827, -1.490376, 0.038595);
	glEnd();

	glNormal3f( -0.812300, 0.206400, -0.545500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.728439, -1.377399, 0.088214);
		glVertex3f( 0.671559, -1.257956, 0.218119);
		glVertex3f( 0.811225, -1.152518, 0.050010);
	glEnd();

	glNormal3f( -0.891400, 0.063600, -0.448800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.728439, -1.377399, 0.088214);
		glVertex3f( 0.611705, -1.519346, 0.299934);
		glVertex3f( 0.671559, -1.257956, 0.218119);
	glEnd();

	glNormal3f( -0.969600, 0.165600, -0.180200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.611705, -1.519346, 0.299934);
		glVertex3f( 0.612623, -1.394014, 0.410206);
		glVertex3f( 0.671559, -1.257956, 0.218119);
	glEnd();

	glNormal3f( -0.519300, 0.714000, 0.469700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.717911, -1.177672, 0.378686);
		glVertex3f( 0.849792, -1.167210, 0.508591);
		glVertex3f( 0.890083, -1.015930, 0.323185);
	glEnd();

	glNormal3f( -0.599400, 0.569400, 0.562600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.717911, -1.177672, 0.378686);
		glVertex3f( 0.686705, -1.389444, 0.559740);
		glVertex3f( 0.849792, -1.167210, 0.508591);
	glEnd();

	glNormal3f( -0.261400, 0.394600, 0.880900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.686705, -1.389444, 0.559740);
		glVertex3f( 0.903237, -1.490959, 0.669459);
		glVertex3f( 0.849792, -1.167210, 0.508591);
	glEnd();

	glNormal3f( 0.569100, 0.302000, 0.764800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.008092, -1.351604, 0.621249);
		glVertex3f( 1.155214, -1.343546, 0.508591);
		glVertex3f( 1.174259, -1.123721, 0.407603);
	glEnd();

	glNormal3f( 0.595100, 0.156100, 0.788300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.008092, -1.351604, 0.621249);
		glVertex3f( 0.934823, -1.683784, 0.742330);
		glVertex3f( 1.155214, -1.343546, 0.508591);
	glEnd();

	glNormal3f( 0.660800, 0.084300, 0.745800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.934823, -1.683784, 0.742330);
		glVertex3f( 1.019637, -2.112211, 0.715586);
		glVertex3f( 1.155214, -1.343546, 0.508591);
	glEnd();

	glNormal3f( 0.390700, -0.726600, -0.565100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.996645, -2.212234, 0.622577);
		glVertex3f( 0.943549, -2.232191, 0.611532);
		glVertex3f( 1.005652, -2.068654, 0.444190);
	glEnd();

	glNormal3f( 0.392700, -0.751700, -0.529800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.996645, -2.212234, 0.622577);
		glVertex3f( 0.848349, -2.364488, 0.728658);
		glVertex3f( 0.943549, -2.232191, 0.611532);
	glEnd();

	glNormal3f( -0.277300, -0.517300, -0.809700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.848349, -2.364488, 0.728658);
		glVertex3f( 0.853836, -1.947042, 0.460082);
		glVertex3f( 0.943549, -2.232191, 0.611532);
	glEnd();

	glNormal3f( -0.139800, -0.699000, -0.701400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.691279, -1.957043, 0.502450);
		glVertex3f( 0.835621, -1.702148, 0.219650);
		glVertex3f( 0.853836, -1.947042, 0.460082);
	glEnd();

	glNormal3f( -0.641200, -0.377900, -0.667900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.691279, -1.957043, 0.502450);
		glVertex3f( 0.677948, -1.720051, 0.381164);
		glVertex3f( 0.835621, -1.702148, 0.219650);
	glEnd();

	glNormal3f( -0.462600, -0.710400, -0.530400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.677948, -1.720051, 0.381164);
		glVertex3f( 0.709395, -1.597224, 0.189202);
		glVertex3f( 0.835621, -1.702148, 0.219650);
	glEnd();

	glNormal3f( -0.805300, -0.430700, -0.407500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.677948, -1.720051, 0.381164);
		glVertex3f( 0.611705, -1.519346, 0.299934);
		glVertex3f( 0.709395, -1.597224, 0.189202);
	glEnd();

	glNormal3f( -0.934000, -0.345300, -0.091500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.677948, -1.720051, 0.381164);
		glVertex3f( 0.621067, -1.600607, 0.511065);
		glVertex3f( 0.611705, -1.519346, 0.299934);
	glEnd();

	glNormal3f( -0.999100, -0.023700, 0.035200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.621067, -1.600607, 0.511065);
		glVertex3f( 0.612623, -1.394014, 0.410206);
		glVertex3f( 0.611705, -1.519346, 0.299934);
	glEnd();

	glNormal3f( -0.884300, 0.175100, 0.432800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.621067, -1.600607, 0.511065);
		glVertex3f( 0.686705, -1.389444, 0.559740);
		glVertex3f( 0.612623, -1.394014, 0.410206);
	glEnd();

	glNormal3f( -0.694700, 0.050500, 0.717500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.621067, -1.600607, 0.511065);
		glVertex3f( 0.794860, -1.705907, 0.686749);
		glVertex3f( 0.686705, -1.389444, 0.559740);
	glEnd();

	glNormal3f( -0.343800, 0.246200, 0.906200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.794860, -1.705907, 0.686749);
		glVertex3f( 0.903237, -1.490959, 0.669459);
		glVertex3f( 0.686705, -1.389444, 0.559740);
	glEnd();

	glNormal3f( -0.183100, -0.530200, -0.827800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.848349, -2.364488, 0.728658);
		glVertex3f( 0.691279, -1.957043, 0.502450);
		glVertex3f( 0.853836, -1.947042, 0.460082);
	glEnd();

	glNormal3f( -0.745500, 0.079900, 0.661600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.848349, -2.364488, 0.728658);
		glVertex3f( 0.896024, -2.172131, 0.759142);
		glVertex3f( 0.691279, -1.957043, 0.502450);
	glEnd();

	glNormal3f( -0.785000, -0.007900, 0.619500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.896024, -2.172131, 0.759142);
		glVertex3f( 0.725321, -1.735472, 0.548403);
		glVertex3f( 0.691279, -1.957043, 0.502450);
	glEnd();

	glNormal3f( -0.391900, 0.268400, 0.880000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.794860, -1.705907, 0.686749);
		glVertex3f( 0.934823, -1.683784, 0.742330);
		glVertex3f( 0.903237, -1.490959, 0.669459);
	glEnd();

	glNormal3f( -0.376800, 0.061800, 0.924200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.794860, -1.705907, 0.686749);
		glVertex3f( 0.896024, -2.172131, 0.759142);
		glVertex3f( 0.934823, -1.683784, 0.742330);
	glEnd();

	glNormal3f( 0.329600, 0.006300, 0.944100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.896024, -2.172131, 0.759142);
		glVertex3f( 1.019637, -2.112211, 0.715586);
		glVertex3f( 0.934823, -1.683784, 0.742330);
	glEnd();

	glNormal3f( -0.511700, -0.768900, 0.383400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.305148, -0.678839, 0.171010);
		glVertex3f( 0.915420, -0.995559, 0.350320);
		glVertex3f( 0.380881, -0.609204, 0.411707);
	glEnd();

	glNormal3f( 0.424000, -0.365000, 0.828800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.043906, -0.871663, 0.339152);
		glVertex3f( 0.915420, -0.995559, 0.350320);
		glVertex3f( 1.006903, -1.205525, 0.211047);
	glEnd();

	glNormal3f( -0.273200, -0.897700, 0.345700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.305148, -0.678839, 0.171010);
		glVertex3f( 0.380881, -0.609204, 0.411707);
		glVertex3f( 0.042283, -0.608668, 0.145470);
	glEnd();

	glNormal3f( -0.268000, -0.953200, 0.139700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.305148, -0.678839, 0.171010);
		glVertex3f( 0.042283, -0.608668, 0.145470);
		glVertex3f( 0.223920, -0.694174, -0.089450);
	glEnd();

	glNormal3f( -0.731900, -0.627700, 0.265200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.305148, -0.678839, 0.171010);
		glVertex3f( 0.223920, -0.694174, -0.089450);
		glVertex3f( 0.440656, -0.909483, -0.000887);
	glEnd();

	glNormal3f( 0.893400, -0.243800, 0.377400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.043906, -0.871663, 0.339152);
		glVertex3f( 1.006903, -1.205525, 0.211047);
		glVertex3f( 1.094072, -0.981692, 0.149324);
	glEnd();

	glNormal3f( -0.194400, -0.019100, 0.980700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.358187, -0.345528, 0.502316);
		glVertex3f( 0.564464, -0.509932, 0.539999);
		glVertex3f( 0.393403, -0.156458, 0.512968);
	glEnd();

	glNormal3f( -0.889700, -0.202700, 0.409100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.142066, -0.419115, 0.076478);
		glVertex3f( -0.038947, -0.370503, 0.324828);
		glVertex3f( -0.170381, -0.156148, 0.145188);
	glEnd();

	glNormal3f( -0.574600, -0.566600, -0.590600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.166954, -0.564587, -0.323195);
		glVertex3f( -0.038947, -0.541512, -0.145016);
		glVertex3f( 0.011255, -0.347343, -0.380114);
	glEnd();

	glNormal3f( -0.571000, -0.804900, -0.161600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.666951, -0.811665, -0.021807);
		glVertex3f( 0.436582, -0.594358, -0.290205);
		glVertex3f( 0.439138, -0.570710, -0.417027);
	glEnd();

	glNormal3f( 0.871900, 0.486900, -0.051800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.043906, -0.871663, 0.339152);
		glVertex3f( 1.094072, -0.981692, 0.149324);
		glVertex3f( 0.599040, -0.070643, 0.380114);
	glEnd();

	glNormal3f( -0.326800, 0.007600, 0.945100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.358187, -0.345528, 0.502316);
		glVertex3f( 0.393403, -0.156458, 0.512968);
		glVertex3f( 0.011255, -0.070643, 0.380114);
	glEnd();

	glNormal3f( -0.992100, -0.118100, 0.043000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.142066, -0.419115, 0.076478);
		glVertex3f( -0.170381, -0.156148, 0.145188);
		glVertex3f( -0.170381, -0.261837, -0.145188);
	glEnd();

	glNormal3f( -0.306600, -0.440800, -0.843700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.166954, -0.564587, -0.323195);
		glVertex3f( 0.011255, -0.347343, -0.380114);
		glVertex3f( 0.305148, -0.380003, -0.469846);
	glEnd();

	glNormal3f( -0.409000, -0.864700, -0.291400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.666951, -0.811665, -0.021807);
		glVertex3f( 0.439138, -0.570710, -0.417027);
		glVertex3f( 1.034065, -1.030118, 0.111114);
	glEnd();

	glNormal3f( 0.408900, 0.836700, 0.364200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.443342, 0.146601, 0.323195);
		glVertex3f( 0.649242, 0.123527, 0.145016);
		glVertex3f( 0.386375, 0.276188, 0.089450);
	glEnd();

	glNormal3f( -0.471300, 0.821200, 0.321600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.056656, 0.091036, 0.170531);
		glVertex3f( 0.173713, 0.176372, 0.290205);
		glVertex3f( 0.092486, 0.243528, -0.000283);
	glEnd();

	glNormal3f( -0.700200, 0.530100, -0.478200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.056656, -0.088773, -0.323489);
		glVertex3f( -0.120176, 0.038022, -0.089906);
		glVertex3f( 0.092486, 0.137840, -0.290658);
	glEnd();

	glNormal3f( 0.038500, 0.365700, -0.929900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.443342, -0.144338, -0.476153);
		glVertex3f( 0.173713, -0.100326, -0.470018);
		glVertex3f( 0.386375, 0.105180, -0.380391);
	glEnd();

	glNormal3f( 0.899600, 0.342200, -0.271400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.987423, -0.844361, -0.060400);
		glVertex3f( 0.649242, -0.216284, -0.389336);
		glVertex3f( 0.568012, 0.190683, -0.145470);
	glEnd();

	glNormal3f( 0.268000, 0.820000, -0.505700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.568012, 0.190683, -0.145470);
		glVertex3f( 0.386375, 0.105180, -0.380391);
		glVertex3f( 0.305148, 0.260854, -0.171010);
	glEnd();

	glNormal3f( 0.588300, 0.498800, -0.636400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.568012, 0.190683, -0.145470);
		glVertex3f( 0.649242, -0.216284, -0.389336);
		glVertex3f( 0.386375, 0.105180, -0.380391);
	glEnd();

	glNormal3f( 0.472000, 0.407700, -0.781600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.649242, -0.216284, -0.389336);
		glVertex3f( 0.443342, -0.144338, -0.476153);
		glVertex3f( 0.386375, 0.105180, -0.380391);
	glEnd();

	glNormal3f( -0.102400, 0.778900, -0.618800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.386375, 0.105180, -0.380391);
		glVertex3f( 0.092486, 0.137840, -0.290658);
		glVertex3f( 0.305148, 0.260854, -0.171010);
	glEnd();

	glNormal3f( -0.187600, 0.549300, -0.814300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.386375, 0.105180, -0.380391);
		glVertex3f( 0.173713, -0.100326, -0.470018);
		glVertex3f( 0.092486, 0.137840, -0.290658);
	glEnd();

	glNormal3f( -0.471300, 0.422400, -0.774300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.173713, -0.100326, -0.470018);
		glVertex3f( -0.056656, -0.088773, -0.323489);
		glVertex3f( 0.092486, 0.137840, -0.290658);
	glEnd();

	glNormal3f( -0.331300, 0.886600, -0.322700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.092486, 0.137840, -0.290658);
		glVertex3f( 0.092486, 0.243528, -0.000283);
		glVertex3f( 0.305148, 0.260854, -0.171010);
	glEnd();

	glNormal3f( -0.607100, 0.746700, -0.271800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.092486, 0.137840, -0.290658);
		glVertex3f( -0.120176, 0.038022, -0.089906);
		glVertex3f( 0.092486, 0.243528, -0.000283);
	glEnd();

	glNormal3f( -0.700200, 0.713500, 0.025600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.120176, 0.038022, -0.089906);
		glVertex3f( -0.056656, 0.091036, 0.170531);
		glVertex3f( 0.092486, 0.243528, -0.000283);
	glEnd();

	glNormal3f( -0.102400, 0.994400, -0.026600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.092486, 0.243528, -0.000283);
		glVertex3f( 0.386375, 0.276188, 0.089450);
		glVertex3f( 0.305148, 0.260854, -0.171010);
	glEnd();

	glNormal3f( -0.187600, 0.944200, 0.270700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.092486, 0.243528, -0.000283);
		glVertex3f( 0.173713, 0.176372, 0.290205);
		glVertex3f( 0.386375, 0.276188, 0.089450);
	glEnd();

	glNormal3f( 0.038500, 0.877900, 0.477300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.173713, 0.176372, 0.290205);
		glVertex3f( 0.443342, 0.146601, 0.323195);
		glVertex3f( 0.386375, 0.276188, 0.089450);
	glEnd();

	glNormal3f( 0.268000, 0.953200, -0.139700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.386375, 0.276188, 0.089450);
		glVertex3f( 0.568012, 0.190683, -0.145470);
		glVertex3f( 0.305148, 0.260854, -0.171010);
	glEnd();

	glNormal3f( 0.491100, 0.868800, 0.063500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.386375, 0.276188, 0.089450);
		glVertex3f( 0.649242, 0.123527, 0.145016);
		glVertex3f( 0.568012, 0.190683, -0.145470);
	glEnd();

	glNormal3f( 0.917600, 0.357500, -0.173900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.649242, 0.123527, 0.145016);
		glVertex3f( 0.987423, -0.844361, -0.060400);
		glVertex3f( 0.568012, 0.190683, -0.145470);
	glEnd();

	glNormal3f( -0.651700, -0.596300, -0.468600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.034065, -1.030118, 0.111114);
		glVertex3f( 0.649242, -0.216284, -0.389336);
		glVertex3f( 0.987423, -0.844361, -0.060400);
	glEnd();

	glNormal3f( 0.528000, -0.249500, -0.811800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.034065, -1.030118, 0.111114);
		glVertex3f( 0.439138, -0.570710, -0.417027);
		glVertex3f( 0.649242, -0.216284, -0.389336);
	glEnd();

	glNormal3f( 0.345500, -0.132200, -0.929000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.439138, -0.570710, -0.417027);
		glVertex3f( 0.443342, -0.144338, -0.476153);
		glVertex3f( 0.649242, -0.216284, -0.389336);
	glEnd();

	glNormal3f( -0.024700, -0.012200, -0.999600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.305148, -0.380003, -0.469846);
		glVertex3f( 0.173713, -0.100326, -0.470018);
		glVertex3f( 0.443342, -0.144338, -0.476153);
	glEnd();

	glNormal3f( -0.303500, -0.143200, -0.942000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.305148, -0.380003, -0.469846);
		glVertex3f( 0.011255, -0.347343, -0.380114);
		glVertex3f( 0.173713, -0.100326, -0.470018);
	glEnd();

	glNormal3f( -0.534600, 0.044400, -0.844000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.011255, -0.347343, -0.380114);
		glVertex3f( -0.056656, -0.088773, -0.323489);
		glVertex3f( 0.173713, -0.100326, -0.470018);
	glEnd();

	glNormal3f( -0.905000, 0.218800, -0.364900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.170381, -0.261837, -0.145188);
		glVertex3f( -0.120176, 0.038022, -0.089906);
		glVertex3f( -0.056656, -0.088773, -0.323489);
	glEnd();

	glNormal3f( -0.982200, 0.176300, -0.064200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.170381, -0.261837, -0.145188);
		glVertex3f( -0.170381, -0.156148, 0.145188);
		glVertex3f( -0.120176, 0.038022, -0.089906);
	glEnd();

	glNormal3f( -0.905000, 0.402100, 0.138900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.170381, -0.156148, 0.145188);
		glVertex3f( -0.056656, 0.091036, 0.170531);
		glVertex3f( -0.120176, 0.038022, -0.089906);
	glEnd();

	glNormal3f( -0.534600, 0.576500, 0.618000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.011255, -0.070643, 0.380114);
		glVertex3f( 0.173713, 0.176372, 0.290205);
		glVertex3f( -0.056656, 0.091036, 0.170531);
	glEnd();

	glNormal3f( -0.201600, 0.449400, 0.870300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.011255, -0.070643, 0.380114);
		glVertex3f( 0.393403, -0.156458, 0.512968);
		glVertex3f( 0.173713, 0.176372, 0.290205);
	glEnd();

	glNormal3f( -0.044100, 0.535400, 0.843400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.393403, -0.156458, 0.512968);
		glVertex3f( 0.443342, 0.146601, 0.323195);
		glVertex3f( 0.173713, 0.176372, 0.290205);
	glEnd();

	glNormal3f( 0.574600, 0.566600, 0.590600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.599040, -0.070643, 0.380114);
		glVertex3f( 0.649242, 0.123527, 0.145016);
		glVertex3f( 0.443342, 0.146601, 0.323195);
	glEnd();

	glNormal3f( 0.826600, 0.334400, 0.452700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.599040, -0.070643, 0.380114);
		glVertex3f( 1.094072, -0.981692, 0.149324);
		glVertex3f( 0.649242, 0.123527, 0.145016);
	glEnd();

	glNormal3f( 0.904800, 0.363300, -0.222200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.094072, -0.981692, 0.149324);
		glVertex3f( 0.987423, -0.844361, -0.060400);
		glVertex3f( 0.649242, 0.123527, 0.145016);
	glEnd();

	glNormal3f( 0.188800, -0.136700, -0.972500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.439138, -0.570710, -0.417027);
		glVertex3f( 0.305148, -0.380003, -0.469846);
		glVertex3f( 0.443342, -0.144338, -0.476153);
	glEnd();

	glNormal3f( -0.794800, -0.593500, -0.126700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.439138, -0.570710, -0.417027);
		glVertex3f( 0.436582, -0.594358, -0.290205);
		glVertex3f( 0.305148, -0.380003, -0.469846);
	glEnd();

	glNormal3f( 0.024700, -0.633200, -0.773600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.436582, -0.594358, -0.290205);
		glVertex3f( 0.166954, -0.564587, -0.323195);
		glVertex3f( 0.305148, -0.380003, -0.469846);
	glEnd();

	glNormal3f( -0.802600, -0.081400, -0.590900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.011255, -0.347343, -0.380114);
		glVertex3f( -0.170381, -0.261837, -0.145188);
		glVertex3f( -0.056656, -0.088773, -0.323489);
	glEnd();

	glNormal3f( -0.794700, -0.373700, -0.478400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.011255, -0.347343, -0.380114);
		glVertex3f( -0.038947, -0.541512, -0.145016);
		glVertex3f( -0.170381, -0.261837, -0.145188);
	glEnd();

	glNormal3f( -0.889700, -0.418200, -0.183100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.038947, -0.541512, -0.145016);
		glVertex3f( -0.142066, -0.419115, 0.076478);
		glVertex3f( -0.170381, -0.261837, -0.145188);
	glEnd();

	glNormal3f( -0.802600, 0.317500, 0.505000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.170381, -0.156148, 0.145188);
		glVertex3f( 0.011255, -0.070643, 0.380114);
		glVertex3f( -0.056656, 0.091036, 0.170531);
	glEnd();

	glNormal3f( -0.794700, 0.021200, 0.606700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.170381, -0.156148, 0.145188);
		glVertex3f( -0.038947, -0.370503, 0.324828);
		glVertex3f( 0.011255, -0.070643, 0.380114);
	glEnd();

	glNormal3f( -0.400700, -0.100800, 0.910700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.038947, -0.370503, 0.324828);
		glVertex3f( 0.358187, -0.345528, 0.502316);
		glVertex3f( 0.011255, -0.070643, 0.380114);
	glEnd();

	glNormal3f( 0.339400, 0.458400, 0.821400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.393403, -0.156458, 0.512968);
		glVertex3f( 0.599040, -0.070643, 0.380114);
		glVertex3f( 0.443342, 0.146601, 0.323195);
	glEnd();

	glNormal3f( 0.437200, 0.277000, 0.855600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.393403, -0.156458, 0.512968);
		glVertex3f( 0.564464, -0.509932, 0.539999);
		glVertex3f( 0.599040, -0.070643, 0.380114);
	glEnd();

	glNormal3f( 0.529900, 0.252900, 0.809500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.564464, -0.509932, 0.539999);
		glVertex3f( 1.043906, -0.871663, 0.339152);
		glVertex3f( 0.599040, -0.070643, 0.380114);
	glEnd();

	glNormal3f( 0.696300, -0.384700, -0.606000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.094072, -0.981692, 0.149324);
		glVertex3f( 1.034065, -1.030118, 0.111114);
		glVertex3f( 0.987423, -0.844361, -0.060400);
	glEnd();

	glNormal3f( 0.705600, -0.430100, -0.563100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.094072, -0.981692, 0.149324);
		glVertex3f( 1.006903, -1.205525, 0.211047);
		glVertex3f( 1.034065, -1.030118, 0.111114);
	glEnd();

	glNormal3f( 0.018300, -0.497100, -0.867500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.006903, -1.205525, 0.211047);
		glVertex3f( 0.666951, -0.811665, -0.021807);
		glVertex3f( 1.034065, -1.030118, 0.111114);
	glEnd();

	glNormal3f( 0.218000, -0.658500, -0.720300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.440656, -0.909483, -0.000887);
		glVertex3f( 0.436582, -0.594358, -0.290205);
		glVertex3f( 0.666951, -0.811665, -0.021807);
	glEnd();

	glNormal3f( -0.350700, -0.635800, -0.687600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.440656, -0.909483, -0.000887);
		glVertex3f( 0.223920, -0.694174, -0.089450);
		glVertex3f( 0.436582, -0.594358, -0.290205);
	glEnd();

	glNormal3f( -0.038500, -0.877900, -0.477300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.223920, -0.694174, -0.089450);
		glVertex3f( 0.166954, -0.564587, -0.323195);
		glVertex3f( 0.436582, -0.594358, -0.290205);
	glEnd();

	glNormal3f( -0.408900, -0.836700, -0.364200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.223920, -0.694174, -0.089450);
		glVertex3f( -0.038947, -0.541512, -0.145016);
		glVertex3f( 0.166954, -0.564587, -0.323195);
	glEnd();

	glNormal3f( -0.491100, -0.868800, -0.063500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.223920, -0.694174, -0.089450);
		glVertex3f( 0.042283, -0.608668, 0.145470);
		glVertex3f( -0.038947, -0.541512, -0.145016);
	glEnd();

	glNormal3f( -0.724000, -0.688400, 0.043300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.042283, -0.608668, 0.145470);
		glVertex3f( -0.142066, -0.419115, 0.076478);
		glVertex3f( -0.038947, -0.541512, -0.145016);
	glEnd();

	glNormal3f( -0.724000, -0.555200, 0.409300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.042283, -0.608668, 0.145470);
		glVertex3f( -0.038947, -0.370503, 0.324828);
		glVertex3f( -0.142066, -0.419115, 0.076478);
	glEnd();

	glNormal3f( -0.482700, -0.625900, 0.612600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.042283, -0.608668, 0.145470);
		glVertex3f( 0.380881, -0.609204, 0.411707);
		glVertex3f( -0.038947, -0.370503, 0.324828);
	glEnd();

	glNormal3f( -0.367700, -0.330400, 0.869300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.380881, -0.609204, 0.411707);
		glVertex3f( 0.358187, -0.345528, 0.502316);
		glVertex3f( -0.038947, -0.370503, 0.324828);
	glEnd();

	glNormal3f( 0.106100, -0.436600, -0.893400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.006903, -1.205525, 0.211047);
		glVertex3f( 0.440656, -0.909483, -0.000887);
		glVertex3f( 0.666951, -0.811665, -0.021807);
	glEnd();

	glNormal3f( -0.537600, -0.616100, 0.575700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.006903, -1.205525, 0.211047);
		glVertex3f( 0.915420, -0.995559, 0.350320);
		glVertex3f( 0.440656, -0.909483, -0.000887);
	glEnd();

	glNormal3f( -0.508900, -0.686300, 0.519700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.915420, -0.995559, 0.350320);
		glVertex3f( 0.305148, -0.678839, 0.171010);
		glVertex3f( 0.440656, -0.909483, -0.000887);
	glEnd();

	glNormal3f( -0.415900, -0.327400, 0.848500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.380881, -0.609204, 0.411707);
		glVertex3f( 0.564464, -0.509932, 0.539999);
		glVertex3f( 0.358187, -0.345528, 0.502316);
	glEnd();

	glNormal3f( -0.282700, -0.519300, 0.806500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.380881, -0.609204, 0.411707);
		glVertex3f( 0.915420, -0.995559, 0.350320);
		glVertex3f( 0.564464, -0.509932, 0.539999);
	glEnd();

	glNormal3f( 0.259100, -0.183200, 0.948300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.915420, -0.995559, 0.350320);
		glVertex3f( 1.043906, -0.871663, 0.339152);
		glVertex3f( 0.564464, -0.509932, 0.539999);
	glEnd();

	glNormal3f( -0.470900, -0.881000, -0.046400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.153073, -0.369552, 0.000000);
		glVertex3f( -0.217958, -0.332588, -0.043355);
		glVertex3f( -0.150132, -0.369552, -0.029863);
	glEnd();

	glNormal3f( -0.290200, 0.956500, -0.028600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.078036, 0.392314, 0.000000);
		glVertex3f( -0.150132, 0.369552, -0.029863);
		glVertex3f( -0.153073, 0.369552, 0.000000);
	glEnd();

	glNormal3f( -0.990400, 0.097600, -0.097500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.400000, 0.000000, 0.000000);
		glVertex3f( -0.384776, 0.078036, -0.076537);
		glVertex3f( -0.392314, 0.000000, -0.078036);
	glEnd();

	glNormal3f( -0.952700, 0.289000, -0.093800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.369552, 0.153073, 0.000000);
		glVertex3f( -0.384776, 0.078036, -0.076537);
		glVertex3f( -0.392314, 0.078036, 0.000000);
	glEnd();

	glNormal3f( -0.633200, -0.771500, -0.062400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.222228, -0.332588, 0.000000);
		glVertex3f( -0.277408, -0.282843, -0.055180);
		glVertex3f( -0.217958, -0.332588, -0.043355);
	glEnd();

	glNormal3f( -0.098000, 0.995100, -0.009700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.078036, 0.392314, 0.000000);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( -0.076537, 0.392314, -0.015224);
	glEnd();

	glNormal3f( -0.878600, 0.469600, -0.086500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.332588, 0.222228, 0.000000);
		glVertex3f( -0.362451, 0.153073, -0.072096);
		glVertex3f( -0.369552, 0.153073, 0.000000);
	glEnd();

	glNormal3f( -0.770800, -0.632600, -0.075900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.282843, -0.282843, 0.000000);
		glVertex3f( -0.326197, -0.222228, -0.064885);
		glVertex3f( -0.277408, -0.282843, -0.055180);
	glEnd();

	glNormal3f( -0.878600, -0.469600, -0.086500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.332588, -0.222228, 0.000000);
		glVertex3f( -0.362451, -0.153073, -0.072096);
		glVertex3f( -0.326197, -0.222228, -0.064885);
	glEnd();

	glNormal3f( -0.770800, 0.632600, -0.075900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.282843, 0.282843, 0.000000);
		glVertex3f( -0.326197, 0.222228, -0.064885);
		glVertex3f( -0.332588, 0.222228, 0.000000);
	glEnd();

	glNormal3f( -0.952700, -0.289000, -0.093800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.392314, -0.078036, 0.000000);
		glVertex3f( -0.362451, -0.153073, -0.072096);
		glVertex3f( -0.369552, -0.153073, 0.000000);
	glEnd();

	glNormal3f( -0.098000, -0.995100, -0.009700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( -0.078036, -0.392314, 0.000000);
		glVertex3f( -0.076537, -0.392314, -0.015224);
	glEnd();

	glNormal3f( -0.290200, -0.956500, -0.028600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.078036, -0.392314, 0.000000);
		glVertex3f( -0.150132, -0.369552, -0.029863);
		glVertex3f( -0.076537, -0.392314, -0.015224);
	glEnd();

	glNormal3f( -0.633200, 0.771500, -0.062400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.282843, 0.282843, 0.000000);
		glVertex3f( -0.217958, 0.332588, -0.043355);
		glVertex3f( -0.277408, 0.282843, -0.055180);
	glEnd();

	glNormal3f( -0.470900, 0.881000, -0.046400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.153073, 0.369552, 0.000000);
		glVertex3f( -0.217958, 0.332588, -0.043355);
		glVertex3f( -0.222228, 0.332588, 0.000000);
	glEnd();

	glNormal3f( -0.990400, -0.097500, -0.097500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.400000, 0.000000, 0.000000);
		glVertex3f( -0.384776, -0.078036, -0.076537);
		glVertex3f( -0.392314, -0.078036, 0.000000);
	glEnd();

	glNormal3f( -0.279000, -0.956500, -0.084600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.150132, -0.369552, -0.029863);
		glVertex3f( -0.072096, -0.392314, -0.029863);
		glVertex3f( -0.076537, -0.392314, -0.015224);
	glEnd();

	glNormal3f( -0.608800, 0.771500, -0.184700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.217958, 0.332588, -0.043355);
		glVertex3f( -0.261313, 0.282843, -0.108239);
		glVertex3f( -0.277408, 0.282843, -0.055180);
	glEnd();

	glNormal3f( -0.452800, 0.881000, -0.137400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.217958, 0.332588, -0.043355);
		glVertex3f( -0.141421, 0.369552, -0.058579);
		glVertex3f( -0.205312, 0.332588, -0.085043);
	glEnd();

	glNormal3f( -0.952400, -0.097500, -0.288900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.384776, -0.078036, -0.076537);
		glVertex3f( -0.369552, 0.000000, -0.153073);
		glVertex3f( -0.362451, -0.078036, -0.150132);
	glEnd();

	glNormal3f( -0.452800, -0.881000, -0.137400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.150132, -0.369552, -0.029863);
		glVertex3f( -0.205312, -0.332588, -0.085043);
		glVertex3f( -0.141421, -0.369552, -0.058579);
	glEnd();

	glNormal3f( -0.279000, 0.956500, -0.084600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.150132, 0.369552, -0.029863);
		glVertex3f( -0.072096, 0.392314, -0.029863);
		glVertex3f( -0.141421, 0.369552, -0.058579);
	glEnd();

	glNormal3f( -0.952400, 0.097600, -0.288900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.384776, 0.078036, -0.076537);
		glVertex3f( -0.369552, 0.000000, -0.153073);
		glVertex3f( -0.392314, 0.000000, -0.078036);
	glEnd();

	glNormal3f( -0.916100, 0.289000, -0.277900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.384776, 0.078036, -0.076537);
		glVertex3f( -0.341421, 0.153073, -0.141421);
		glVertex3f( -0.362451, 0.078036, -0.150132);
	glEnd();

	glNormal3f( -0.608800, -0.771500, -0.184700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.217958, -0.332588, -0.043355);
		glVertex3f( -0.261313, -0.282843, -0.108239);
		glVertex3f( -0.205312, -0.332588, -0.085043);
	glEnd();

	glNormal3f( -0.094200, 0.995100, -0.028600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.076537, 0.392314, -0.015224);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( -0.072096, 0.392314, -0.029863);
	glEnd();

	glNormal3f( -0.844800, 0.469600, -0.256300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.326197, 0.222228, -0.064885);
		glVertex3f( -0.341421, 0.153073, -0.141421);
		glVertex3f( -0.362451, 0.153073, -0.072096);
	glEnd();

	glNormal3f( -0.741200, -0.632600, -0.224800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.277408, -0.282843, -0.055180);
		glVertex3f( -0.307271, -0.222228, -0.127276);
		glVertex3f( -0.261313, -0.282843, -0.108239);
	glEnd();

	glNormal3f( -0.844800, -0.469600, -0.256300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.326197, -0.222228, -0.064885);
		glVertex3f( -0.341421, -0.153073, -0.141421);
		glVertex3f( -0.307271, -0.222228, -0.127276);
	glEnd();

	glNormal3f( -0.741200, 0.632600, -0.224800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.277408, 0.282843, -0.055180);
		glVertex3f( -0.307271, 0.222228, -0.127276);
		glVertex3f( -0.326197, 0.222228, -0.064885);
	glEnd();

	glNormal3f( -0.916100, -0.289000, -0.277900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.362451, -0.153073, -0.072096);
		glVertex3f( -0.362451, -0.078036, -0.150132);
		glVertex3f( -0.341421, -0.153073, -0.141421);
	glEnd();

	glNormal3f( -0.094200, -0.995100, -0.028600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( -0.076537, -0.392314, -0.015224);
		glVertex3f( -0.072096, -0.392314, -0.029863);
	glEnd();

	glNormal3f( -0.683100, 0.632600, -0.365100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.261313, 0.282843, -0.108239);
		glVertex3f( -0.276537, 0.222228, -0.184776);
		glVertex3f( -0.307271, 0.222228, -0.127276);
	glEnd();

	glNormal3f( -0.778600, -0.469600, -0.416200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.341421, -0.153073, -0.141421);
		glVertex3f( -0.276537, -0.222228, -0.184776);
		glVertex3f( -0.307271, -0.222228, -0.127276);
	glEnd();

	glNormal3f( -0.844300, -0.289000, -0.451300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.362451, -0.078036, -0.150132);
		glVertex3f( -0.307271, -0.153073, -0.205312);
		glVertex3f( -0.341421, -0.153073, -0.141421);
	glEnd();

	glNormal3f( -0.086900, -0.995100, -0.046400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( -0.072096, -0.392314, -0.029863);
		glVertex3f( -0.064885, -0.392314, -0.043355);
	glEnd();

	glNormal3f( -0.561100, 0.771500, -0.299900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.205312, 0.332588, -0.085043);
		glVertex3f( -0.235175, 0.282843, -0.157139);
		glVertex3f( -0.261313, 0.282843, -0.108239);
	glEnd();

	glNormal3f( -0.877700, -0.097500, -0.469100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.362451, -0.078036, -0.150132);
		glVertex3f( -0.332588, 0.000000, -0.222228);
		glVertex3f( -0.326197, -0.078036, -0.217958);
	glEnd();

	glNormal3f( -0.257100, -0.956500, -0.137400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.072096, -0.392314, -0.029863);
		glVertex3f( -0.127276, -0.369552, -0.085043);
		glVertex3f( -0.064885, -0.392314, -0.043355);
	glEnd();

	glNormal3f( -0.417300, -0.881000, -0.223000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.141421, -0.369552, -0.058579);
		glVertex3f( -0.184776, -0.332588, -0.123463);
		glVertex3f( -0.127276, -0.369552, -0.085043);
	glEnd();

	glNormal3f( -0.417300, 0.881000, -0.223100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.141421, 0.369552, -0.058579);
		glVertex3f( -0.184776, 0.332588, -0.123463);
		glVertex3f( -0.205312, 0.332588, -0.085043);
	glEnd();

	glNormal3f( -0.257100, 0.956500, -0.137400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.072096, 0.392314, -0.029863);
		glVertex3f( -0.127276, 0.369552, -0.085043);
		glVertex3f( -0.141421, 0.369552, -0.058579);
	glEnd();

	glNormal3f( -0.877700, 0.097500, -0.469100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.362451, 0.078036, -0.150132);
		glVertex3f( -0.332588, 0.000000, -0.222228);
		glVertex3f( -0.369552, 0.000000, -0.153073);
	glEnd();

	glNormal3f( -0.561100, -0.771500, -0.299900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.205312, -0.332588, -0.085043);
		glVertex3f( -0.235175, -0.282843, -0.157139);
		glVertex3f( -0.184776, -0.332588, -0.123463);
	glEnd();

	glNormal3f( -0.086900, 0.995100, -0.046400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.072096, 0.392314, -0.029863);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( -0.064885, 0.392314, -0.043355);
	glEnd();

	glNormal3f( -0.844300, 0.289000, -0.451300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.362451, 0.078036, -0.150132);
		glVertex3f( -0.307271, 0.153073, -0.205312);
		glVertex3f( -0.326197, 0.078036, -0.217958);
	glEnd();

	glNormal3f( -0.778600, 0.469600, -0.416200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.341421, 0.153073, -0.141421);
		glVertex3f( -0.276537, 0.222228, -0.184776);
		glVertex3f( -0.307271, 0.153073, -0.205312);
	glEnd();

	glNormal3f( -0.683100, -0.632600, -0.365100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.261313, -0.282843, -0.108239);
		glVertex3f( -0.276537, -0.222228, -0.184776);
		glVertex3f( -0.235175, -0.282843, -0.157139);
	glEnd();

	glNormal3f( -0.598700, -0.632600, -0.491300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.235175, -0.282843, -0.157139);
		glVertex3f( -0.235175, -0.222228, -0.235175);
		glVertex3f( -0.200000, -0.282843, -0.200000);
	glEnd();

	glNormal3f( -0.682500, 0.469600, -0.560100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.276537, 0.222228, -0.184776);
		glVertex3f( -0.261313, 0.153073, -0.261313);
		glVertex3f( -0.307271, 0.153073, -0.205312);
	glEnd();

	glNormal3f( -0.598700, 0.632600, -0.491300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.235175, 0.282843, -0.157139);
		glVertex3f( -0.235175, 0.222228, -0.235175);
		glVertex3f( -0.276537, 0.222228, -0.184776);
	glEnd();

	glNormal3f( -0.682500, -0.469600, -0.560100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.276537, -0.222228, -0.184776);
		glVertex3f( -0.261313, -0.153073, -0.261313);
		glVertex3f( -0.235175, -0.222228, -0.235175);
	glEnd();

	glNormal3f( -0.076100, -0.995100, -0.062500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( -0.064885, -0.392314, -0.043355);
		glVertex3f( -0.055180, -0.392314, -0.055180);
	glEnd();

	glNormal3f( -0.491800, 0.771500, -0.403600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.184776, 0.332588, -0.123463);
		glVertex3f( -0.200000, 0.282843, -0.200000);
		glVertex3f( -0.235175, 0.282843, -0.157139);
	glEnd();

	glNormal3f( -0.740000, -0.289000, -0.607300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.307271, -0.153073, -0.205312);
		glVertex3f( -0.277408, -0.078036, -0.277408);
		glVertex3f( -0.261313, -0.153073, -0.261313);
	glEnd();

	glNormal3f( -0.769300, -0.097500, -0.631400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.326197, -0.078036, -0.217958);
		glVertex3f( -0.282843, 0.000000, -0.282843);
		glVertex3f( -0.277408, -0.078036, -0.277408);
	glEnd();

	glNormal3f( -0.225400, -0.956500, -0.185000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.064885, -0.392314, -0.043355);
		glVertex3f( -0.108239, -0.369552, -0.108239);
		glVertex3f( -0.055180, -0.392314, -0.055180);
	glEnd();

	glNormal3f( -0.365800, 0.881000, -0.300200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.127276, 0.369552, -0.085043);
		glVertex3f( -0.157139, 0.332588, -0.157139);
		glVertex3f( -0.184776, 0.332588, -0.123463);
	glEnd();

	glNormal3f( -0.769300, 0.097600, -0.631400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.326197, 0.078036, -0.217958);
		glVertex3f( -0.282843, 0.000000, -0.282843);
		glVertex3f( -0.332588, 0.000000, -0.222228);
	glEnd();

	glNormal3f( -0.365800, -0.881000, -0.300200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.127276, -0.369552, -0.085043);
		glVertex3f( -0.157139, -0.332588, -0.157139);
		glVertex3f( -0.108239, -0.369552, -0.108239);
	glEnd();

	glNormal3f( -0.491800, -0.771500, -0.403600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.235175, -0.282843, -0.157139);
		glVertex3f( -0.157139, -0.332588, -0.157139);
		glVertex3f( -0.184776, -0.332588, -0.123463);
	glEnd();

	glNormal3f( -0.225400, 0.956500, -0.185000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.064885, 0.392314, -0.043355);
		glVertex3f( -0.108239, 0.369552, -0.108239);
		glVertex3f( -0.127276, 0.369552, -0.085043);
	glEnd();

	glNormal3f( -0.076100, 0.995100, -0.062500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.064885, 0.392314, -0.043355);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( -0.055180, 0.392314, -0.055180);
	glEnd();

	glNormal3f( -0.740000, 0.289000, -0.607300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.326197, 0.078036, -0.217958);
		glVertex3f( -0.261313, 0.153073, -0.261313);
		glVertex3f( -0.277408, 0.078036, -0.277408);
	glEnd();

	glNormal3f( -0.185000, 0.956500, -0.225400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055180, 0.392314, -0.055180);
		glVertex3f( -0.085043, 0.369552, -0.127276);
		glVertex3f( -0.108239, 0.369552, -0.108239);
	glEnd();

	glNormal3f( -0.607300, 0.289000, -0.740000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.277408, 0.078036, -0.277408);
		glVertex3f( -0.205312, 0.153073, -0.307271);
		glVertex3f( -0.217958, 0.078036, -0.326197);
	glEnd();

	glNormal3f( -0.403600, -0.771500, -0.491800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.200000, -0.282843, -0.200000);
		glVertex3f( -0.123463, -0.332588, -0.184776);
		glVertex3f( -0.157139, -0.332588, -0.157139);
	glEnd();

	glNormal3f( -0.491300, -0.632600, -0.598700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.200000, -0.282843, -0.200000);
		glVertex3f( -0.184776, -0.222228, -0.276537);
		glVertex3f( -0.157139, -0.282843, -0.235175);
	glEnd();

	glNormal3f( -0.062500, 0.995100, -0.076100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055180, 0.392314, -0.055180);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( -0.043354, 0.392314, -0.064885);
	glEnd();

	glNormal3f( -0.560100, 0.469600, -0.682500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.235175, 0.222228, -0.235175);
		glVertex3f( -0.205312, 0.153073, -0.307271);
		glVertex3f( -0.261313, 0.153073, -0.261313);
	glEnd();

	glNormal3f( -0.560100, -0.469600, -0.682500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.235175, -0.222228, -0.235175);
		glVertex3f( -0.205312, -0.153073, -0.307271);
		glVertex3f( -0.184776, -0.222228, -0.276537);
	glEnd();

	glNormal3f( -0.062500, -0.995100, -0.076100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( -0.055180, -0.392314, -0.055180);
		glVertex3f( -0.043354, -0.392314, -0.064885);
	glEnd();

	glNormal3f( -0.491300, 0.632600, -0.598700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.200000, 0.282843, -0.200000);
		glVertex3f( -0.184776, 0.222228, -0.276537);
		glVertex3f( -0.235175, 0.222228, -0.235175);
	glEnd();

	glNormal3f( -0.403600, 0.771500, -0.491800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.200000, 0.282843, -0.200000);
		glVertex3f( -0.123463, 0.332588, -0.184776);
		glVertex3f( -0.157139, 0.282843, -0.235175);
	glEnd();

	glNormal3f( -0.607300, -0.289000, -0.740000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.261313, -0.153073, -0.261313);
		glVertex3f( -0.217958, -0.078036, -0.326197);
		glVertex3f( -0.205312, -0.153073, -0.307271);
	glEnd();

	glNormal3f( -0.185000, -0.956600, -0.225400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055180, -0.392314, -0.055180);
		glVertex3f( -0.085043, -0.369552, -0.127276);
		glVertex3f( -0.043354, -0.392314, -0.064885);
	glEnd();

	glNormal3f( -0.300200, 0.881000, -0.365800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.108239, 0.369552, -0.108239);
		glVertex3f( -0.123463, 0.332588, -0.184776);
		glVertex3f( -0.157139, 0.332588, -0.157139);
	glEnd();

	glNormal3f( -0.631400, -0.097500, -0.769300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.277408, -0.078036, -0.277408);
		glVertex3f( -0.222228, 0.000000, -0.332588);
		glVertex3f( -0.217958, -0.078036, -0.326197);
	glEnd();

	glNormal3f( -0.631400, 0.097500, -0.769300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.277408, 0.078036, -0.277408);
		glVertex3f( -0.222228, 0.000000, -0.332588);
		glVertex3f( -0.282843, 0.000000, -0.282843);
	glEnd();

	glNormal3f( -0.300200, -0.881000, -0.365800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.157139, -0.332588, -0.157139);
		glVertex3f( -0.085043, -0.369552, -0.127276);
		glVertex3f( -0.108239, -0.369552, -0.108239);
	glEnd();

	glNormal3f( -0.223000, -0.881000, -0.417300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.123463, -0.332588, -0.184776);
		glVertex3f( -0.058579, -0.369552, -0.141421);
		glVertex3f( -0.085043, -0.369552, -0.127276);
	glEnd();

	glNormal3f( -0.137400, 0.956500, -0.257100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.085043, 0.369552, -0.127276);
		glVertex3f( -0.029863, 0.392314, -0.072096);
		glVertex3f( -0.058579, 0.369552, -0.141421);
	glEnd();

	glNormal3f( -0.469100, 0.097600, -0.877700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.217958, 0.078036, -0.326197);
		glVertex3f( -0.153073, 0.000000, -0.369552);
		glVertex3f( -0.222228, 0.000000, -0.332588);
	glEnd();

	glNormal3f( -0.451300, 0.289000, -0.844300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.217958, 0.078036, -0.326197);
		glVertex3f( -0.141421, 0.153073, -0.341421);
		glVertex3f( -0.150132, 0.078036, -0.362451);
	glEnd();

	glNormal3f( -0.299900, -0.771500, -0.561100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.157139, -0.282843, -0.235175);
		glVertex3f( -0.085043, -0.332588, -0.205312);
		glVertex3f( -0.123463, -0.332588, -0.184776);
	glEnd();

	glNormal3f( -0.046400, 0.995100, -0.086900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.043354, 0.392314, -0.064885);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( -0.029863, 0.392314, -0.072096);
	glEnd();

	glNormal3f( -0.416200, 0.469600, -0.778600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.184776, 0.222228, -0.276537);
		glVertex3f( -0.141421, 0.153073, -0.341421);
		glVertex3f( -0.205312, 0.153073, -0.307271);
	glEnd();

	glNormal3f( -0.365100, -0.632600, -0.683100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.157139, -0.282843, -0.235175);
		glVertex3f( -0.127276, -0.222228, -0.307271);
		glVertex3f( -0.108239, -0.282843, -0.261313);
	glEnd();

	glNormal3f( -0.416200, -0.469600, -0.778600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.184776, -0.222228, -0.276537);
		glVertex3f( -0.141421, -0.153073, -0.341421);
		glVertex3f( -0.127276, -0.222228, -0.307271);
	glEnd();

	glNormal3f( -0.365100, 0.632600, -0.683100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.157139, 0.282843, -0.235175);
		glVertex3f( -0.127276, 0.222228, -0.307271);
		glVertex3f( -0.184776, 0.222228, -0.276537);
	glEnd();

	glNormal3f( -0.451300, -0.289000, -0.844300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.205312, -0.153073, -0.307271);
		glVertex3f( -0.150132, -0.078036, -0.362451);
		glVertex3f( -0.141421, -0.153073, -0.341421);
	glEnd();

	glNormal3f( -0.046400, -0.995100, -0.086900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( -0.043354, -0.392314, -0.064885);
		glVertex3f( -0.029863, -0.392314, -0.072096);
	glEnd();

	glNormal3f( -0.137400, -0.956500, -0.257100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.043354, -0.392314, -0.064885);
		glVertex3f( -0.058579, -0.369552, -0.141421);
		glVertex3f( -0.029863, -0.392314, -0.072096);
	glEnd();

	glNormal3f( -0.299900, 0.771500, -0.561100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.157139, 0.282843, -0.235175);
		glVertex3f( -0.085043, 0.332588, -0.205312);
		glVertex3f( -0.108239, 0.282843, -0.261313);
	glEnd();

	glNormal3f( -0.223000, 0.881000, -0.417300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.085043, 0.369552, -0.127276);
		glVertex3f( -0.085043, 0.332588, -0.205312);
		glVertex3f( -0.123463, 0.332588, -0.184776);
	glEnd();

	glNormal3f( -0.469100, -0.097500, -0.877700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.217958, -0.078036, -0.326197);
		glVertex3f( -0.153073, 0.000000, -0.369552);
		glVertex3f( -0.150132, -0.078036, -0.362451);
	glEnd();

	glNormal3f( -0.184700, 0.771500, -0.608800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.108239, 0.282843, -0.261313);
		glVertex3f( -0.043354, 0.332588, -0.217958);
		glVertex3f( -0.055180, 0.282843, -0.277408);
	glEnd();

	glNormal3f( -0.288900, -0.097500, -0.952400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.150132, -0.078036, -0.362451);
		glVertex3f( -0.078036, 0.000000, -0.392314);
		glVertex3f( -0.076537, -0.078036, -0.384776);
	glEnd();

	glNormal3f( -0.084600, -0.956500, -0.279000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.029863, -0.392314, -0.072096);
		glVertex3f( -0.029863, -0.369552, -0.150132);
		glVertex3f( -0.015224, -0.392314, -0.076537);
	glEnd();

	glNormal3f( -0.137400, -0.881000, -0.452800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.085043, -0.332588, -0.205312);
		glVertex3f( -0.029863, -0.369552, -0.150132);
		glVertex3f( -0.058579, -0.369552, -0.141421);
	glEnd();

	glNormal3f( -0.137400, 0.881000, -0.452800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.058579, 0.369552, -0.141421);
		glVertex3f( -0.043354, 0.332588, -0.217958);
		glVertex3f( -0.085043, 0.332588, -0.205312);
	glEnd();

	glNormal3f( -0.084600, 0.956500, -0.279000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.029863, 0.392314, -0.072096);
		glVertex3f( -0.029863, 0.369552, -0.150132);
		glVertex3f( -0.058579, 0.369552, -0.141421);
	glEnd();

	glNormal3f( -0.288900, 0.097500, -0.952400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.150132, 0.078036, -0.362451);
		glVertex3f( -0.078036, 0.000000, -0.392314);
		glVertex3f( -0.153073, 0.000000, -0.369552);
	glEnd();

	glNormal3f( -0.184700, -0.771500, -0.608800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.108239, -0.282843, -0.261313);
		glVertex3f( -0.043354, -0.332588, -0.217958);
		glVertex3f( -0.085043, -0.332588, -0.205312);
	glEnd();

	glNormal3f( -0.028600, 0.995100, -0.094200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.029863, 0.392314, -0.072096);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( -0.015224, 0.392314, -0.076537);
	glEnd();

	glNormal3f( -0.277900, 0.289000, -0.916100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.150132, 0.078036, -0.362451);
		glVertex3f( -0.072096, 0.153073, -0.362451);
		glVertex3f( -0.076537, 0.078036, -0.384776);
	glEnd();

	glNormal3f( -0.256300, 0.469600, -0.844800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.127276, 0.222228, -0.307271);
		glVertex3f( -0.072096, 0.153073, -0.362451);
		glVertex3f( -0.141421, 0.153073, -0.341421);
	glEnd();

	glNormal3f( -0.224800, -0.632600, -0.741200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.108239, -0.282843, -0.261313);
		glVertex3f( -0.064885, -0.222228, -0.326197);
		glVertex3f( -0.055180, -0.282843, -0.277408);
	glEnd();

	glNormal3f( -0.224800, 0.632600, -0.741200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.108239, 0.282843, -0.261313);
		glVertex3f( -0.064885, 0.222228, -0.326197);
		glVertex3f( -0.127276, 0.222228, -0.307271);
	glEnd();

	glNormal3f( -0.256300, -0.469600, -0.844800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.127276, -0.222228, -0.307271);
		glVertex3f( -0.072096, -0.153073, -0.362451);
		glVertex3f( -0.064885, -0.222228, -0.326197);
	glEnd();

	glNormal3f( -0.277900, -0.289000, -0.916100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.141421, -0.153073, -0.341421);
		glVertex3f( -0.076537, -0.078036, -0.384776);
		glVertex3f( -0.072096, -0.153073, -0.362451);
	glEnd();

	glNormal3f( -0.028600, -0.995100, -0.094200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( -0.029863, -0.392314, -0.072096);
		glVertex3f( -0.015224, -0.392314, -0.076537);
	glEnd();

	glNormal3f( -0.075900, 0.632600, -0.770800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055180, 0.282843, -0.277408);
		glVertex3f( 0.000000, 0.222228, -0.332588);
		glVertex3f( -0.064885, 0.222228, -0.326197);
	glEnd();

	glNormal3f( -0.086500, -0.469600, -0.878600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.064885, -0.222228, -0.326197);
		glVertex3f( 0.000000, -0.153073, -0.369552);
		glVertex3f( 0.000000, -0.222228, -0.332588);
	glEnd();

	glNormal3f( -0.009700, -0.995100, -0.098000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( -0.015224, -0.392314, -0.076537);
		glVertex3f( 0.000000, -0.392314, -0.078036);
	glEnd();

	glNormal3f( -0.062400, 0.771500, -0.633200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055180, 0.282843, -0.277408);
		glVertex3f( 0.000000, 0.332588, -0.222228);
		glVertex3f( 0.000000, 0.282843, -0.282843);
	glEnd();

	glNormal3f( -0.093800, -0.289000, -0.952700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.072096, -0.153073, -0.362451);
		glVertex3f( 0.000000, -0.078036, -0.392314);
		glVertex3f( 0.000000, -0.153073, -0.369552);
	glEnd();

	glNormal3f( -0.097500, -0.097500, -0.990400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.076537, -0.078036, -0.384776);
		glVertex3f( 0.000000, 0.000000, -0.400000);
		glVertex3f( 0.000000, -0.078036, -0.392314);
	glEnd();

	glNormal3f( -0.028600, -0.956500, -0.290200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.015224, -0.392314, -0.076537);
		glVertex3f( 0.000000, -0.369552, -0.153073);
		glVertex3f( 0.000000, -0.392314, -0.078036);
	glEnd();

	glNormal3f( -0.046400, 0.881000, -0.470900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.029863, 0.369552, -0.150132);
		glVertex3f( 0.000000, 0.332588, -0.222228);
		glVertex3f( -0.043354, 0.332588, -0.217958);
	glEnd();

	glNormal3f( -0.097500, 0.097500, -0.990400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.076537, 0.078036, -0.384776);
		glVertex3f( 0.000000, 0.000000, -0.400000);
		glVertex3f( -0.078036, 0.000000, -0.392314);
	glEnd();

	glNormal3f( -0.046400, -0.881000, -0.470900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.043354, -0.332588, -0.217958);
		glVertex3f( 0.000000, -0.369552, -0.153073);
		glVertex3f( -0.029863, -0.369552, -0.150132);
	glEnd();

	glNormal3f( -0.062400, -0.771500, -0.633200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.043354, -0.332588, -0.217958);
		glVertex3f( 0.000000, -0.282843, -0.282843);
		glVertex3f( 0.000000, -0.332588, -0.222228);
	glEnd();

	glNormal3f( -0.028600, 0.956500, -0.290200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.029863, 0.369552, -0.150132);
		glVertex3f( 0.000000, 0.392314, -0.078036);
		glVertex3f( 0.000000, 0.369552, -0.153073);
	glEnd();

	glNormal3f( -0.009700, 0.995100, -0.098000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.015224, 0.392314, -0.076537);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( 0.000000, 0.392314, -0.078036);
	glEnd();

	glNormal3f( -0.093800, 0.289000, -0.952700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.076537, 0.078036, -0.384776);
		glVertex3f( 0.000000, 0.153073, -0.369552);
		glVertex3f( 0.000000, 0.078036, -0.392314);
	glEnd();

	glNormal3f( -0.075900, -0.632600, -0.770800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055180, -0.282843, -0.277408);
		glVertex3f( 0.000000, -0.222228, -0.332588);
		glVertex3f( 0.000000, -0.282843, -0.282843);
	glEnd();

	glNormal3f( -0.086500, 0.469600, -0.878600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.064885, 0.222228, -0.326197);
		glVertex3f( 0.000000, 0.153073, -0.369552);
		glVertex3f( -0.072096, 0.153073, -0.362451);
	glEnd();

	glNormal3f( 0.009700, 0.995100, -0.098000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.392314, -0.078036);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( 0.015224, 0.392314, -0.076537);
	glEnd();

	glNormal3f( 0.086500, 0.469600, -0.878600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.222228, -0.332588);
		glVertex3f( 0.072096, 0.153073, -0.362451);
		glVertex3f( 0.000000, 0.153073, -0.369552);
	glEnd();

	glNormal3f( 0.086500, -0.469600, -0.878600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.222228, -0.332588);
		glVertex3f( 0.072096, -0.153073, -0.362451);
		glVertex3f( 0.064885, -0.222228, -0.326197);
	glEnd();

	glNormal3f( 0.009700, -0.995100, -0.098000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( 0.000000, -0.392314, -0.078036);
		glVertex3f( 0.015224, -0.392314, -0.076537);
	glEnd();

	glNormal3f( 0.075900, 0.632600, -0.770800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.282843, -0.282843);
		glVertex3f( 0.064885, 0.222228, -0.326197);
		glVertex3f( 0.000000, 0.222228, -0.332588);
	glEnd();

	glNormal3f( 0.062400, 0.771500, -0.633200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.282843, -0.282843);
		glVertex3f( 0.043355, 0.332588, -0.217958);
		glVertex3f( 0.055180, 0.282843, -0.277408);
	glEnd();

	glNormal3f( 0.093800, -0.289000, -0.952700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.153073, -0.369552);
		glVertex3f( 0.076537, -0.078036, -0.384776);
		glVertex3f( 0.072096, -0.153073, -0.362451);
	glEnd();

	glNormal3f( 0.028600, -0.956500, -0.290200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.392314, -0.078036);
		glVertex3f( 0.029863, -0.369552, -0.150132);
		glVertex3f( 0.015224, -0.392314, -0.076537);
	glEnd();

	glNormal3f( 0.046400, 0.881000, -0.470900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.369552, -0.153073);
		glVertex3f( 0.043355, 0.332588, -0.217958);
		glVertex3f( 0.000000, 0.332588, -0.222228);
	glEnd();

	glNormal3f( 0.097500, -0.097500, -0.990400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.078036, -0.392314);
		glVertex3f( 0.078036, 0.000000, -0.392314);
		glVertex3f( 0.076537, -0.078036, -0.384776);
	glEnd();

	glNormal3f( 0.097500, 0.097500, -0.990400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.078036, -0.392314);
		glVertex3f( 0.078036, 0.000000, -0.392314);
		glVertex3f( 0.000000, 0.000000, -0.400000);
	glEnd();

	glNormal3f( 0.046400, -0.881000, -0.470900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.332588, -0.222228);
		glVertex3f( 0.029863, -0.369552, -0.150132);
		glVertex3f( 0.000000, -0.369552, -0.153073);
	glEnd();

	glNormal3f( 0.028600, 0.956500, -0.290200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.369552, -0.153073);
		glVertex3f( 0.015224, 0.392314, -0.076537);
		glVertex3f( 0.029863, 0.369552, -0.150132);
	glEnd();

	glNormal3f( 0.093800, 0.289000, -0.952700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.078036, -0.392314);
		glVertex3f( 0.072096, 0.153073, -0.362451);
		glVertex3f( 0.076537, 0.078036, -0.384776);
	glEnd();

	glNormal3f( 0.062400, -0.771500, -0.633200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.282843, -0.282843);
		glVertex3f( 0.043355, -0.332588, -0.217958);
		glVertex3f( 0.000000, -0.332588, -0.222228);
	glEnd();

	glNormal3f( 0.075900, -0.632600, -0.770800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.282843, -0.282843);
		glVertex3f( 0.064885, -0.222228, -0.326197);
		glVertex3f( 0.055180, -0.282843, -0.277408);
	glEnd();

	glNormal3f( 0.288900, 0.097500, -0.952400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.076537, 0.078036, -0.384776);
		glVertex3f( 0.153074, 0.000000, -0.369552);
		glVertex3f( 0.078036, 0.000000, -0.392314);
	glEnd();

	glNormal3f( 0.277900, 0.289000, -0.916100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.076537, 0.078036, -0.384776);
		glVertex3f( 0.141422, 0.153073, -0.341421);
		glVertex3f( 0.150132, 0.078036, -0.362451);
	glEnd();

	glNormal3f( 0.184700, -0.771500, -0.608800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.043355, -0.332588, -0.217958);
		glVertex3f( 0.108239, -0.282843, -0.261313);
		glVertex3f( 0.085043, -0.332588, -0.205312);
	glEnd();

	glNormal3f( 0.028600, 0.995100, -0.094200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.015224, 0.392314, -0.076537);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( 0.029863, 0.392314, -0.072096);
	glEnd();

	glNormal3f( 0.256300, 0.469600, -0.844800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.064885, 0.222228, -0.326197);
		glVertex3f( 0.141422, 0.153073, -0.341421);
		glVertex3f( 0.072096, 0.153073, -0.362451);
	glEnd();

	glNormal3f( 0.224800, -0.632600, -0.741200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.055180, -0.282843, -0.277408);
		glVertex3f( 0.127276, -0.222228, -0.307271);
		glVertex3f( 0.108239, -0.282843, -0.261313);
	glEnd();

	glNormal3f( 0.256300, -0.469600, -0.844800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.064885, -0.222228, -0.326197);
		glVertex3f( 0.141422, -0.153073, -0.341421);
		glVertex3f( 0.127276, -0.222228, -0.307271);
	glEnd();

	glNormal3f( 0.224800, 0.632600, -0.741200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.055180, 0.282843, -0.277408);
		glVertex3f( 0.127276, 0.222228, -0.307271);
		glVertex3f( 0.064885, 0.222228, -0.326197);
	glEnd();

	glNormal3f( 0.277900, -0.289000, -0.916100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.072096, -0.153073, -0.362451);
		glVertex3f( 0.150132, -0.078036, -0.362451);
		glVertex3f( 0.141422, -0.153073, -0.341421);
	glEnd();

	glNormal3f( 0.028600, -0.995100, -0.094200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( 0.015224, -0.392314, -0.076537);
		glVertex3f( 0.029863, -0.392314, -0.072096);
	glEnd();

	glNormal3f( 0.084600, -0.956500, -0.279000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.015224, -0.392314, -0.076537);
		glVertex3f( 0.058579, -0.369552, -0.141421);
		glVertex3f( 0.029863, -0.392314, -0.072096);
	glEnd();

	glNormal3f( 0.184700, 0.771500, -0.608800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.043355, 0.332588, -0.217958);
		glVertex3f( 0.108239, 0.282843, -0.261313);
		glVertex3f( 0.055180, 0.282843, -0.277408);
	glEnd();

	glNormal3f( 0.137400, 0.881000, -0.452800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.029863, 0.369552, -0.150132);
		glVertex3f( 0.085043, 0.332588, -0.205312);
		glVertex3f( 0.043355, 0.332588, -0.217958);
	glEnd();

	glNormal3f( 0.288900, -0.097500, -0.952400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.076537, -0.078036, -0.384776);
		glVertex3f( 0.153074, 0.000000, -0.369552);
		glVertex3f( 0.150132, -0.078036, -0.362451);
	glEnd();

	glNormal3f( 0.137400, -0.881000, -0.452800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.029863, -0.369552, -0.150132);
		glVertex3f( 0.085043, -0.332588, -0.205312);
		glVertex3f( 0.058579, -0.369552, -0.141421);
	glEnd();

	glNormal3f( 0.084600, 0.956500, -0.279000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.029863, 0.369552, -0.150132);
		glVertex3f( 0.029863, 0.392314, -0.072096);
		glVertex3f( 0.058579, 0.369552, -0.141421);
	glEnd();

	glNormal3f( 0.223000, -0.881000, -0.417300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.058579, -0.369552, -0.141421);
		glVertex3f( 0.123464, -0.332588, -0.184776);
		glVertex3f( 0.085043, -0.369552, -0.127276);
	glEnd();

	glNormal3f( 0.223000, 0.881000, -0.417300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.058579, 0.369552, -0.141421);
		glVertex3f( 0.123464, 0.332588, -0.184776);
		glVertex3f( 0.085043, 0.332588, -0.205312);
	glEnd();

	glNormal3f( 0.137400, 0.956500, -0.257100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.058579, 0.369552, -0.141421);
		glVertex3f( 0.043355, 0.392314, -0.064885);
		glVertex3f( 0.085043, 0.369552, -0.127276);
	glEnd();

	glNormal3f( 0.469100, 0.097500, -0.877700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.150132, 0.078036, -0.362451);
		glVertex3f( 0.222228, 0.000000, -0.332588);
		glVertex3f( 0.153074, 0.000000, -0.369552);
	glEnd();

	glNormal3f( 0.299900, -0.771500, -0.561100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.085043, -0.332588, -0.205312);
		glVertex3f( 0.157139, -0.282843, -0.235175);
		glVertex3f( 0.123464, -0.332588, -0.184776);
	glEnd();

	glNormal3f( 0.046400, 0.995100, -0.086900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.029863, 0.392314, -0.072096);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( 0.043355, 0.392314, -0.064885);
	glEnd();

	glNormal3f( 0.451300, 0.289000, -0.844300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.150132, 0.078036, -0.362451);
		glVertex3f( 0.205312, 0.153073, -0.307271);
		glVertex3f( 0.217958, 0.078036, -0.326197);
	glEnd();

	glNormal3f( 0.416200, 0.469600, -0.778600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.127276, 0.222228, -0.307271);
		glVertex3f( 0.205312, 0.153073, -0.307271);
		glVertex3f( 0.141422, 0.153073, -0.341421);
	glEnd();

	glNormal3f( 0.365100, -0.632600, -0.683100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.108239, -0.282843, -0.261313);
		glVertex3f( 0.184776, -0.222228, -0.276537);
		glVertex3f( 0.157139, -0.282843, -0.235175);
	glEnd();

	glNormal3f( 0.365100, 0.632600, -0.683100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.108239, 0.282843, -0.261313);
		glVertex3f( 0.184776, 0.222228, -0.276537);
		glVertex3f( 0.127276, 0.222228, -0.307271);
	glEnd();

	glNormal3f( 0.416200, -0.469600, -0.778600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.127276, -0.222228, -0.307271);
		glVertex3f( 0.205312, -0.153073, -0.307271);
		glVertex3f( 0.184776, -0.222228, -0.276537);
	glEnd();

	glNormal3f( 0.451300, -0.289000, -0.844300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.141422, -0.153073, -0.341421);
		glVertex3f( 0.217958, -0.078036, -0.326197);
		glVertex3f( 0.205312, -0.153073, -0.307271);
	glEnd();

	glNormal3f( 0.046400, -0.995100, -0.086900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( 0.029863, -0.392314, -0.072096);
		glVertex3f( 0.043355, -0.392314, -0.064885);
	glEnd();

	glNormal3f( 0.299900, 0.771500, -0.561100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.085043, 0.332588, -0.205312);
		glVertex3f( 0.157139, 0.282843, -0.235175);
		glVertex3f( 0.108239, 0.282843, -0.261313);
	glEnd();

	glNormal3f( 0.469100, -0.097500, -0.877700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.150132, -0.078036, -0.362451);
		glVertex3f( 0.222228, 0.000000, -0.332588);
		glVertex3f( 0.217958, -0.078036, -0.326197);
	glEnd();

	glNormal3f( 0.137400, -0.956500, -0.257100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.029863, -0.392314, -0.072096);
		glVertex3f( 0.085043, -0.369552, -0.127276);
		glVertex3f( 0.043355, -0.392314, -0.064885);
	glEnd();

	glNormal3f( 0.403600, 0.771500, -0.491800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.157139, 0.282843, -0.235175);
		glVertex3f( 0.157139, 0.332588, -0.157139);
		glVertex3f( 0.200000, 0.282843, -0.200000);
	glEnd();

	glNormal3f( 0.607300, -0.289000, -0.740000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.205312, -0.153073, -0.307271);
		glVertex3f( 0.277408, -0.078036, -0.277408);
		glVertex3f( 0.261313, -0.153073, -0.261313);
	glEnd();

	glNormal3f( 0.631400, -0.097500, -0.769300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.217958, -0.078036, -0.326197);
		glVertex3f( 0.282843, 0.000000, -0.282843);
		glVertex3f( 0.277408, -0.078036, -0.277408);
	glEnd();

	glNormal3f( 0.185000, -0.956500, -0.225400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.085043, -0.369552, -0.127276);
		glVertex3f( 0.055180, -0.392314, -0.055180);
		glVertex3f( 0.043355, -0.392314, -0.064885);
	glEnd();

	glNormal3f( 0.300200, 0.881000, -0.365800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.085043, 0.369552, -0.127276);
		glVertex3f( 0.157139, 0.332588, -0.157139);
		glVertex3f( 0.123464, 0.332588, -0.184776);
	glEnd();

	glNormal3f( 0.631400, 0.097500, -0.769300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.217958, 0.078036, -0.326197);
		glVertex3f( 0.282843, 0.000000, -0.282843);
		glVertex3f( 0.222228, 0.000000, -0.332588);
	glEnd();

	glNormal3f( 0.300200, -0.881000, -0.365800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.123464, -0.332588, -0.184776);
		glVertex3f( 0.108239, -0.369552, -0.108239);
		glVertex3f( 0.085043, -0.369552, -0.127276);
	glEnd();

	glNormal3f( 0.403600, -0.771500, -0.491800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.157139, -0.282843, -0.235175);
		glVertex3f( 0.157139, -0.332588, -0.157139);
		glVertex3f( 0.123464, -0.332588, -0.184776);
	glEnd();

	glNormal3f( 0.185000, 0.956500, -0.225400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.043355, 0.392314, -0.064885);
		glVertex3f( 0.108239, 0.369552, -0.108239);
		glVertex3f( 0.085043, 0.369552, -0.127276);
	glEnd();

	glNormal3f( 0.062500, 0.995100, -0.076100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.043355, 0.392314, -0.064885);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( 0.055180, 0.392314, -0.055180);
	glEnd();

	glNormal3f( 0.607300, 0.289000, -0.740000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.217958, 0.078036, -0.326197);
		glVertex3f( 0.261313, 0.153073, -0.261313);
		glVertex3f( 0.277408, 0.078036, -0.277408);
	glEnd();

	glNormal3f( 0.491300, -0.632600, -0.598700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.157139, -0.282843, -0.235175);
		glVertex3f( 0.235175, -0.222228, -0.235175);
		glVertex3f( 0.200000, -0.282843, -0.200000);
	glEnd();

	glNormal3f( 0.560100, 0.469600, -0.682500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.184776, 0.222228, -0.276537);
		glVertex3f( 0.261313, 0.153073, -0.261313);
		glVertex3f( 0.205312, 0.153073, -0.307271);
	glEnd();

	glNormal3f( 0.491300, 0.632600, -0.598700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.157139, 0.282843, -0.235175);
		glVertex3f( 0.235175, 0.222228, -0.235175);
		glVertex3f( 0.184776, 0.222228, -0.276537);
	glEnd();

	glNormal3f( 0.560100, -0.469600, -0.682500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.184776, -0.222228, -0.276537);
		glVertex3f( 0.261313, -0.153073, -0.261313);
		glVertex3f( 0.235175, -0.222228, -0.235175);
	glEnd();

	glNormal3f( 0.062500, -0.995100, -0.076100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( 0.043355, -0.392314, -0.064885);
		glVertex3f( 0.055180, -0.392314, -0.055180);
	glEnd();

	glNormal3f( 0.682500, -0.469600, -0.560100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.235175, -0.222228, -0.235175);
		glVertex3f( 0.307271, -0.153073, -0.205312);
		glVertex3f( 0.276537, -0.222228, -0.184776);
	glEnd();

	glNormal3f( 0.076100, -0.995100, -0.062500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( 0.055180, -0.392314, -0.055180);
		glVertex3f( 0.064885, -0.392314, -0.043355);
	glEnd();

	glNormal3f( 0.598700, 0.632600, -0.491300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.200000, 0.282843, -0.200000);
		glVertex3f( 0.276537, 0.222228, -0.184776);
		glVertex3f( 0.235175, 0.222228, -0.235175);
	glEnd();

	glNormal3f( 0.491800, 0.771500, -0.403600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.200000, 0.282843, -0.200000);
		glVertex3f( 0.184776, 0.332588, -0.123463);
		glVertex3f( 0.235175, 0.282843, -0.157139);
	glEnd();

	glNormal3f( 0.740000, -0.289000, -0.607300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.261313, -0.153073, -0.261313);
		glVertex3f( 0.326197, -0.078036, -0.217958);
		glVertex3f( 0.307271, -0.153073, -0.205312);
	glEnd();

	glNormal3f( 0.225400, -0.956500, -0.185000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.055180, -0.392314, -0.055180);
		glVertex3f( 0.127276, -0.369552, -0.085043);
		glVertex3f( 0.064885, -0.392314, -0.043355);
	glEnd();

	glNormal3f( 0.365800, 0.881000, -0.300200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.108239, 0.369552, -0.108239);
		glVertex3f( 0.184776, 0.332588, -0.123463);
		glVertex3f( 0.157139, 0.332588, -0.157139);
	glEnd();

	glNormal3f( 0.769300, -0.097500, -0.631400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.282843, 0.000000, -0.282843);
		glVertex3f( 0.326197, -0.078036, -0.217958);
		glVertex3f( 0.277408, -0.078036, -0.277408);
	glEnd();

	glNormal3f( 0.769300, 0.097500, -0.631400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.277408, 0.078036, -0.277408);
		glVertex3f( 0.332588, 0.000000, -0.222228);
		glVertex3f( 0.282843, 0.000000, -0.282843);
	glEnd();

	glNormal3f( 0.365800, -0.881000, -0.300200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.157139, -0.332588, -0.157139);
		glVertex3f( 0.127276, -0.369552, -0.085043);
		glVertex3f( 0.108239, -0.369552, -0.108239);
	glEnd();

	glNormal3f( 0.225400, 0.956500, -0.185000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.108239, 0.369552, -0.108239);
		glVertex3f( 0.064885, 0.392314, -0.043355);
		glVertex3f( 0.127276, 0.369552, -0.085043);
	glEnd();

	glNormal3f( 0.740000, 0.289000, -0.607300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.277408, 0.078036, -0.277408);
		glVertex3f( 0.307271, 0.153073, -0.205312);
		glVertex3f( 0.326197, 0.078036, -0.217958);
	glEnd();

	glNormal3f( 0.491800, -0.771500, -0.403600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.157139, -0.332588, -0.157139);
		glVertex3f( 0.235175, -0.282843, -0.157139);
		glVertex3f( 0.184776, -0.332588, -0.123463);
	glEnd();

	glNormal3f( 0.598700, -0.632600, -0.491300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.200000, -0.282843, -0.200000);
		glVertex3f( 0.276537, -0.222228, -0.184776);
		glVertex3f( 0.235175, -0.282843, -0.157139);
	glEnd();

	glNormal3f( 0.076100, 0.995100, -0.062500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.055180, 0.392314, -0.055180);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( 0.064885, 0.392314, -0.043355);
	glEnd();

	glNormal3f( 0.682500, 0.469600, -0.560100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.235175, 0.222228, -0.235175);
		glVertex3f( 0.307271, 0.153073, -0.205312);
		glVertex3f( 0.261313, 0.153073, -0.261313);
	glEnd();

	glNormal3f( 0.086900, 0.995100, -0.046400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.064885, 0.392314, -0.043355);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( 0.072096, 0.392314, -0.029863);
	glEnd();

	glNormal3f( 0.778600, 0.469600, -0.416200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.276537, 0.222228, -0.184776);
		glVertex3f( 0.341421, 0.153073, -0.141421);
		glVertex3f( 0.307271, 0.153073, -0.205312);
	glEnd();

	glNormal3f( 0.683100, -0.632600, -0.365100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.235175, -0.282843, -0.157139);
		glVertex3f( 0.307271, -0.222228, -0.127276);
		glVertex3f( 0.261313, -0.282843, -0.108239);
	glEnd();

	glNormal3f( 0.778600, -0.469600, -0.416200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.276537, -0.222228, -0.184776);
		glVertex3f( 0.341422, -0.153073, -0.141421);
		glVertex3f( 0.307271, -0.222228, -0.127276);
	glEnd();

	glNormal3f( 0.683100, 0.632600, -0.365100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.235175, 0.282843, -0.157139);
		glVertex3f( 0.307271, 0.222228, -0.127276);
		glVertex3f( 0.276537, 0.222228, -0.184776);
	glEnd();

	glNormal3f( 0.844300, -0.289000, -0.451300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.326197, -0.078036, -0.217958);
		glVertex3f( 0.341422, -0.153073, -0.141421);
		glVertex3f( 0.307271, -0.153073, -0.205312);
	glEnd();

	glNormal3f( 0.086900, -0.995100, -0.046400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( 0.064885, -0.392314, -0.043355);
		glVertex3f( 0.072096, -0.392314, -0.029863);
	glEnd();

	glNormal3f( 0.257100, -0.956500, -0.137400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.064885, -0.392314, -0.043355);
		glVertex3f( 0.141421, -0.369552, -0.058579);
		glVertex3f( 0.072096, -0.392314, -0.029863);
	glEnd();

	glNormal3f( 0.561100, 0.771500, -0.299900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.235175, 0.282843, -0.157139);
		glVertex3f( 0.205312, 0.332588, -0.085043);
		glVertex3f( 0.261313, 0.282843, -0.108239);
	glEnd();

	glNormal3f( 0.417300, 0.881000, -0.223000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.127276, 0.369552, -0.085043);
		glVertex3f( 0.205312, 0.332588, -0.085043);
		glVertex3f( 0.184776, 0.332588, -0.123463);
	glEnd();

	glNormal3f( 0.877700, -0.097500, -0.469100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.332588, 0.000000, -0.222228);
		glVertex3f( 0.362451, -0.078036, -0.150132);
		glVertex3f( 0.326197, -0.078036, -0.217958);
	glEnd();

	glNormal3f( 0.417300, -0.881000, -0.223000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.127276, -0.369552, -0.085043);
		glVertex3f( 0.205312, -0.332588, -0.085043);
		glVertex3f( 0.141421, -0.369552, -0.058579);
	glEnd();

	glNormal3f( 0.257100, 0.956500, -0.137400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.064885, 0.392314, -0.043355);
		glVertex3f( 0.141422, 0.369552, -0.058579);
		glVertex3f( 0.127276, 0.369552, -0.085043);
	glEnd();

	glNormal3f( 0.877700, 0.097500, -0.469100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.326197, 0.078036, -0.217958);
		glVertex3f( 0.369552, 0.000000, -0.153073);
		glVertex3f( 0.332588, 0.000000, -0.222228);
	glEnd();

	glNormal3f( 0.844300, 0.289000, -0.451300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.326197, 0.078036, -0.217958);
		glVertex3f( 0.341421, 0.153073, -0.141421);
		glVertex3f( 0.362451, 0.078036, -0.150132);
	glEnd();

	glNormal3f( 0.561100, -0.771500, -0.299900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.184776, -0.332588, -0.123463);
		glVertex3f( 0.261313, -0.282843, -0.108239);
		glVertex3f( 0.205312, -0.332588, -0.085043);
	glEnd();

	glNormal3f( 0.608800, -0.771500, -0.184700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.205312, -0.332588, -0.085043);
		glVertex3f( 0.277408, -0.282843, -0.055180);
		glVertex3f( 0.217958, -0.332588, -0.043355);
	glEnd();

	glNormal3f( 0.094200, 0.995100, -0.028600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.072096, 0.392314, -0.029863);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( 0.076537, 0.392314, -0.015224);
	glEnd();

	glNormal3f( 0.916100, 0.289000, -0.277900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.362451, 0.078036, -0.150132);
		glVertex3f( 0.362451, 0.153073, -0.072096);
		glVertex3f( 0.384776, 0.078036, -0.076537);
	glEnd();

	glNormal3f( 0.844800, 0.469600, -0.256300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.307271, 0.222228, -0.127276);
		glVertex3f( 0.362451, 0.153073, -0.072096);
		glVertex3f( 0.341421, 0.153073, -0.141421);
	glEnd();

	glNormal3f( 0.741200, -0.632600, -0.224800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.261313, -0.282843, -0.108239);
		glVertex3f( 0.326197, -0.222228, -0.064885);
		glVertex3f( 0.277408, -0.282843, -0.055180);
	glEnd();

	glNormal3f( 0.741200, 0.632600, -0.224800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.261313, 0.282843, -0.108239);
		glVertex3f( 0.326197, 0.222228, -0.064885);
		glVertex3f( 0.307271, 0.222228, -0.127276);
	glEnd();

	glNormal3f( 0.844800, -0.469600, -0.256300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.307271, -0.222228, -0.127276);
		glVertex3f( 0.362451, -0.153073, -0.072096);
		glVertex3f( 0.326197, -0.222228, -0.064885);
	glEnd();

	glNormal3f( 0.916100, -0.289000, -0.277900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.341422, -0.153073, -0.141421);
		glVertex3f( 0.384776, -0.078036, -0.076537);
		glVertex3f( 0.362451, -0.153073, -0.072096);
	glEnd();

	glNormal3f( 0.094200, -0.995100, -0.028600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( 0.072096, -0.392314, -0.029863);
		glVertex3f( 0.076537, -0.392314, -0.015224);
	glEnd();

	glNormal3f( 0.608800, 0.771500, -0.184700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.205312, 0.332588, -0.085043);
		glVertex3f( 0.277408, 0.282843, -0.055180);
		glVertex3f( 0.261313, 0.282843, -0.108239);
	glEnd();

	glNormal3f( 0.952400, -0.097500, -0.288900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.369552, 0.000000, -0.153073);
		glVertex3f( 0.384776, -0.078036, -0.076537);
		glVertex3f( 0.362451, -0.078036, -0.150132);
	glEnd();

	glNormal3f( 0.279000, -0.956500, -0.084600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.072096, -0.392314, -0.029863);
		glVertex3f( 0.150132, -0.369552, -0.029863);
		glVertex3f( 0.076537, -0.392314, -0.015224);
	glEnd();

	glNormal3f( 0.452800, -0.881000, -0.137400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.205312, -0.332588, -0.085043);
		glVertex3f( 0.150132, -0.369552, -0.029863);
		glVertex3f( 0.141421, -0.369552, -0.058579);
	glEnd();

	glNormal3f( 0.452800, 0.881000, -0.137400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.205312, 0.332588, -0.085043);
		glVertex3f( 0.150132, 0.369552, -0.029863);
		glVertex3f( 0.217958, 0.332588, -0.043355);
	glEnd();

	glNormal3f( 0.279000, 0.956500, -0.084600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.141422, 0.369552, -0.058579);
		glVertex3f( 0.076537, 0.392314, -0.015224);
		glVertex3f( 0.150132, 0.369552, -0.029863);
	glEnd();

	glNormal3f( 0.952400, 0.097500, -0.288900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.362451, 0.078036, -0.150132);
		glVertex3f( 0.392314, 0.000000, -0.078036);
		glVertex3f( 0.369552, 0.000000, -0.153073);
	glEnd();

	glNormal3f( 0.470900, 0.881000, -0.046400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.150132, 0.369552, -0.029863);
		glVertex3f( 0.222228, 0.332588, 0.000000);
		glVertex3f( 0.217958, 0.332588, -0.043355);
	glEnd();

	glNormal3f( 0.990400, 0.097500, -0.097500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.384776, 0.078036, -0.076537);
		glVertex3f( 0.400000, 0.000000, 0.000000);
		glVertex3f( 0.392314, 0.000000, -0.078036);
	glEnd();

	glNormal3f( 0.470900, -0.881000, -0.046400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.150132, -0.369552, -0.029863);
		glVertex3f( 0.222228, -0.332588, 0.000000);
		glVertex3f( 0.153074, -0.369552, 0.000000);
	glEnd();

	glNormal3f( 0.633200, -0.771500, -0.062400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.217958, -0.332588, -0.043355);
		glVertex3f( 0.282843, -0.282843, 0.000000);
		glVertex3f( 0.222228, -0.332588, 0.000000);
	glEnd();

	glNormal3f( 0.290200, 0.956500, -0.028600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.150132, 0.369552, -0.029863);
		glVertex3f( 0.078036, 0.392314, 0.000000);
		glVertex3f( 0.153074, 0.369552, 0.000000);
	glEnd();

	glNormal3f( 0.098000, 0.995100, -0.009700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.076537, 0.392314, -0.015224);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( 0.078036, 0.392314, 0.000000);
	glEnd();

	glNormal3f( 0.952700, 0.289000, -0.093800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.384776, 0.078036, -0.076537);
		glVertex3f( 0.369552, 0.153073, 0.000000);
		glVertex3f( 0.392314, 0.078036, 0.000000);
	glEnd();

	glNormal3f( 0.770800, -0.632600, -0.075900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.277408, -0.282843, -0.055180);
		glVertex3f( 0.332588, -0.222228, 0.000000);
		glVertex3f( 0.282843, -0.282843, 0.000000);
	glEnd();

	glNormal3f( 0.878600, 0.469600, -0.086500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.326197, 0.222228, -0.064885);
		glVertex3f( 0.369552, 0.153073, 0.000000);
		glVertex3f( 0.362451, 0.153073, -0.072096);
	glEnd();

	glNormal3f( 0.770800, 0.632600, -0.075900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.277408, 0.282843, -0.055180);
		glVertex3f( 0.332588, 0.222228, 0.000000);
		glVertex3f( 0.326197, 0.222228, -0.064885);
	glEnd();

	glNormal3f( 0.878600, -0.469600, -0.086500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.326197, -0.222228, -0.064885);
		glVertex3f( 0.369552, -0.153073, 0.000000);
		glVertex3f( 0.332588, -0.222228, 0.000000);
	glEnd();

	glNormal3f( 0.098000, -0.995100, -0.009700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( 0.076537, -0.392314, -0.015224);
		glVertex3f( 0.078036, -0.392314, 0.000000);
	glEnd();

	glNormal3f( 0.633200, 0.771500, -0.062400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.217958, 0.332588, -0.043355);
		glVertex3f( 0.282843, 0.282843, 0.000000);
		glVertex3f( 0.277408, 0.282843, -0.055180);
	glEnd();

	glNormal3f( 0.952700, -0.289000, -0.093800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.384776, -0.078036, -0.076537);
		glVertex3f( 0.369552, -0.153073, 0.000000);
		glVertex3f( 0.362451, -0.153073, -0.072096);
	glEnd();

	glNormal3f( 0.990400, -0.097500, -0.097500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.392314, 0.000000, -0.078036);
		glVertex3f( 0.392314, -0.078036, 0.000000);
		glVertex3f( 0.384776, -0.078036, -0.076537);
	glEnd();

	glNormal3f( 0.290200, -0.956500, -0.028600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.076537, -0.392314, -0.015224);
		glVertex3f( 0.153074, -0.369552, 0.000000);
		glVertex3f( 0.078036, -0.392314, 0.000000);
	glEnd();

	glNormal3f( 0.633200, 0.771500, 0.062400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.222228, 0.332588, 0.000000);
		glVertex3f( 0.277408, 0.282843, 0.055180);
		glVertex3f( 0.282843, 0.282843, 0.000000);
	glEnd();

	glNormal3f( 0.952700, -0.289000, 0.093800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.369552, -0.153073, 0.000000);
		glVertex3f( 0.384776, -0.078036, 0.076537);
		glVertex3f( 0.362451, -0.153073, 0.072096);
	glEnd();

	glNormal3f( 0.290200, -0.956500, 0.028600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.078036, -0.392314, 0.000000);
		glVertex3f( 0.150132, -0.369552, 0.029863);
		glVertex3f( 0.076537, -0.392314, 0.015224);
	glEnd();

	glNormal3f( 0.470900, 0.881000, 0.046400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.153074, 0.369552, 0.000000);
		glVertex3f( 0.217958, 0.332588, 0.043355);
		glVertex3f( 0.222228, 0.332588, 0.000000);
	glEnd();

	glNormal3f( 0.990400, -0.097500, 0.097500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.400000, 0.000000, 0.000000);
		glVertex3f( 0.384776, -0.078036, 0.076537);
		glVertex3f( 0.392314, -0.078036, 0.000000);
	glEnd();

	glNormal3f( 0.990400, 0.097600, 0.097500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.392314, 0.078036, 0.000000);
		glVertex3f( 0.392314, 0.000000, 0.078036);
		glVertex3f( 0.400000, 0.000000, 0.000000);
	glEnd();

	glNormal3f( 0.470900, -0.881000, 0.046400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.153074, -0.369552, 0.000000);
		glVertex3f( 0.217958, -0.332588, 0.043355);
		glVertex3f( 0.150132, -0.369552, 0.029863);
	glEnd();

	glNormal3f( 0.290200, 0.956500, 0.028600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.078036, 0.392314, 0.000000);
		glVertex3f( 0.150132, 0.369552, 0.029863);
		glVertex3f( 0.153074, 0.369552, 0.000000);
	glEnd();

	glNormal3f( 0.952700, 0.289000, 0.093800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.392314, 0.078036, 0.000000);
		glVertex3f( 0.362451, 0.153073, 0.072096);
		glVertex3f( 0.384776, 0.078036, 0.076537);
	glEnd();

	glNormal3f( 0.633200, -0.771500, 0.062400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.282843, -0.282843, 0.000000);
		glVertex3f( 0.217958, -0.332588, 0.043355);
		glVertex3f( 0.222228, -0.332588, 0.000000);
	glEnd();

	glNormal3f( 0.770800, -0.632600, 0.075900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.282843, -0.282843, 0.000000);
		glVertex3f( 0.326197, -0.222228, 0.064885);
		glVertex3f( 0.277408, -0.282843, 0.055180);
	glEnd();

	glNormal3f( 0.098000, 0.995100, 0.009700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.078036, 0.392314, 0.000000);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( 0.076537, 0.392314, 0.015224);
	glEnd();

	glNormal3f( 0.878600, 0.469600, 0.086500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.332588, 0.222228, 0.000000);
		glVertex3f( 0.362451, 0.153073, 0.072096);
		glVertex3f( 0.369552, 0.153073, 0.000000);
	glEnd();

	glNormal3f( 0.878600, -0.469600, 0.086500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.332588, -0.222228, 0.000000);
		glVertex3f( 0.362451, -0.153073, 0.072096);
		glVertex3f( 0.326197, -0.222228, 0.064885);
	glEnd();

	glNormal3f( 0.098000, -0.995100, 0.009700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( 0.078036, -0.392314, 0.000000);
		glVertex3f( 0.076537, -0.392314, 0.015224);
	glEnd();

	glNormal3f( 0.770800, 0.632600, 0.075900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.282843, 0.282843, 0.000000);
		glVertex3f( 0.326197, 0.222228, 0.064885);
		glVertex3f( 0.332588, 0.222228, 0.000000);
	glEnd();

	glNormal3f( 0.741200, 0.632600, 0.224800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.277408, 0.282843, 0.055180);
		glVertex3f( 0.307271, 0.222228, 0.127276);
		glVertex3f( 0.326197, 0.222228, 0.064885);
	glEnd();

	glNormal3f( 0.916100, -0.289000, 0.277900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.384776, -0.078036, 0.076537);
		glVertex3f( 0.341421, -0.153073, 0.141421);
		glVertex3f( 0.362451, -0.153073, 0.072096);
	glEnd();

	glNormal3f( 0.094200, -0.995100, 0.028600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( 0.076537, -0.392314, 0.015224);
		glVertex3f( 0.072096, -0.392314, 0.029863);
	glEnd();

	glNormal3f( 0.279000, -0.956500, 0.084600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.150132, -0.369552, 0.029863);
		glVertex3f( 0.072096, -0.392314, 0.029863);
		glVertex3f( 0.076537, -0.392314, 0.015224);
	glEnd();

	glNormal3f( 0.608800, 0.771500, 0.184700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.217958, 0.332588, 0.043355);
		glVertex3f( 0.261313, 0.282843, 0.108239);
		glVertex3f( 0.277408, 0.282843, 0.055180);
	glEnd();

	glNormal3f( 0.452800, 0.881000, 0.137400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.150132, 0.369552, 0.029863);
		glVertex3f( 0.205312, 0.332588, 0.085043);
		glVertex3f( 0.217958, 0.332588, 0.043355);
	glEnd();

	glNormal3f( 0.952400, -0.097500, 0.288900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.392314, 0.000000, 0.078036);
		glVertex3f( 0.362451, -0.078036, 0.150132);
		glVertex3f( 0.384776, -0.078036, 0.076537);
	glEnd();

	glNormal3f( 0.452800, -0.881000, 0.137400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.217958, -0.332588, 0.043355);
		glVertex3f( 0.141421, -0.369552, 0.058579);
		glVertex3f( 0.150132, -0.369552, 0.029863);
	glEnd();

	glNormal3f( 0.279000, 0.956500, 0.084600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.076537, 0.392314, 0.015224);
		glVertex3f( 0.141422, 0.369552, 0.058579);
		glVertex3f( 0.150132, 0.369552, 0.029863);
	glEnd();

	glNormal3f( 0.952400, 0.097500, 0.288900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.384776, 0.078036, 0.076537);
		glVertex3f( 0.369552, 0.000000, 0.153073);
		glVertex3f( 0.392314, 0.000000, 0.078036);
	glEnd();

	glNormal3f( 0.916100, 0.289000, 0.277900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.384776, 0.078036, 0.076537);
		glVertex3f( 0.341421, 0.153073, 0.141421);
		glVertex3f( 0.362451, 0.078036, 0.150132);
	glEnd();

	glNormal3f( 0.608800, -0.771500, 0.184700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.217958, -0.332588, 0.043355);
		glVertex3f( 0.261313, -0.282843, 0.108239);
		glVertex3f( 0.205312, -0.332588, 0.085043);
	glEnd();

	glNormal3f( 0.094200, 0.995100, 0.028600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.076537, 0.392314, 0.015224);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( 0.072096, 0.392314, 0.029863);
	glEnd();

	glNormal3f( 0.844800, 0.469600, 0.256300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.326197, 0.222228, 0.064885);
		glVertex3f( 0.341421, 0.153073, 0.141421);
		glVertex3f( 0.362451, 0.153073, 0.072096);
	glEnd();

	glNormal3f( 0.741200, -0.632600, 0.224800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.277408, -0.282843, 0.055180);
		glVertex3f( 0.307271, -0.222228, 0.127276);
		glVertex3f( 0.261313, -0.282843, 0.108239);
	glEnd();

	glNormal3f( 0.844800, -0.469600, 0.256300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.326197, -0.222228, 0.064885);
		glVertex3f( 0.341421, -0.153073, 0.141421);
		glVertex3f( 0.307271, -0.222228, 0.127276);
	glEnd();

	glNormal3f( 0.844300, 0.289000, 0.451300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.362451, 0.078036, 0.150132);
		glVertex3f( 0.307271, 0.153073, 0.205312);
		glVertex3f( 0.326197, 0.078036, 0.217958);
	glEnd();

	glNormal3f( 0.778600, 0.469600, 0.416200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.307271, 0.222228, 0.127276);
		glVertex3f( 0.307271, 0.153073, 0.205312);
		glVertex3f( 0.341421, 0.153073, 0.141421);
	glEnd();

	glNormal3f( 0.683100, -0.632600, 0.365100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.261313, -0.282843, 0.108239);
		glVertex3f( 0.276537, -0.222228, 0.184776);
		glVertex3f( 0.235175, -0.282843, 0.157139);
	glEnd();

	glNormal3f( 0.683100, 0.632600, 0.365100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.261313, 0.282843, 0.108239);
		glVertex3f( 0.276537, 0.222228, 0.184776);
		glVertex3f( 0.307271, 0.222228, 0.127276);
	glEnd();

	glNormal3f( 0.778600, -0.469600, 0.416200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.307271, -0.222228, 0.127276);
		glVertex3f( 0.307271, -0.153073, 0.205312);
		glVertex3f( 0.276537, -0.222228, 0.184776);
	glEnd();

	glNormal3f( 0.844300, -0.289000, 0.451300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.362451, -0.078036, 0.150132);
		glVertex3f( 0.307271, -0.153073, 0.205312);
		glVertex3f( 0.341421, -0.153073, 0.141421);
	glEnd();

	glNormal3f( 0.086900, -0.995100, 0.046400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( 0.072096, -0.392314, 0.029863);
		glVertex3f( 0.064885, -0.392314, 0.043355);
	glEnd();

	glNormal3f( 0.561100, 0.771500, 0.299900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.205312, 0.332588, 0.085043);
		glVertex3f( 0.235175, 0.282843, 0.157139);
		glVertex3f( 0.261313, 0.282843, 0.108239);
	glEnd();

	glNormal3f( 0.877700, -0.097500, 0.469100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.369552, 0.000000, 0.153073);
		glVertex3f( 0.326197, -0.078036, 0.217958);
		glVertex3f( 0.362451, -0.078036, 0.150132);
	glEnd();

	glNormal3f( 0.257100, -0.956500, 0.137400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.072096, -0.392314, 0.029863);
		glVertex3f( 0.127276, -0.369552, 0.085043);
		glVertex3f( 0.064885, -0.392314, 0.043355);
	glEnd();

	glNormal3f( 0.417300, -0.881000, 0.223000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.205312, -0.332588, 0.085043);
		glVertex3f( 0.127276, -0.369552, 0.085043);
		glVertex3f( 0.141421, -0.369552, 0.058579);
	glEnd();

	glNormal3f( 0.417300, 0.881000, 0.223100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.141422, 0.369552, 0.058579);
		glVertex3f( 0.184776, 0.332588, 0.123463);
		glVertex3f( 0.205312, 0.332588, 0.085043);
	glEnd();

	glNormal3f( 0.257100, 0.956500, 0.137400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.072096, 0.392314, 0.029863);
		glVertex3f( 0.127276, 0.369552, 0.085043);
		glVertex3f( 0.141422, 0.369552, 0.058579);
	glEnd();

	glNormal3f( 0.877700, 0.097500, 0.469100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.362451, 0.078036, 0.150132);
		glVertex3f( 0.332588, 0.000000, 0.222228);
		glVertex3f( 0.369552, 0.000000, 0.153073);
	glEnd();

	glNormal3f( 0.561100, -0.771500, 0.299900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.205312, -0.332588, 0.085043);
		glVertex3f( 0.235175, -0.282843, 0.157139);
		glVertex3f( 0.184776, -0.332588, 0.123463);
	glEnd();

	glNormal3f( 0.086900, 0.995100, 0.046400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.072096, 0.392314, 0.029863);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( 0.064885, 0.392314, 0.043355);
	glEnd();

	glNormal3f( 0.491800, -0.771500, 0.403600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.184776, -0.332588, 0.123463);
		glVertex3f( 0.200000, -0.282843, 0.200000);
		glVertex3f( 0.157139, -0.332588, 0.157139);
	glEnd();

	glNormal3f( 0.225400, 0.956500, 0.185000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.064885, 0.392314, 0.043355);
		glVertex3f( 0.108239, 0.369552, 0.108239);
		glVertex3f( 0.127276, 0.369552, 0.085043);
	glEnd();

	glNormal3f( 0.076100, 0.995100, 0.062500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.064885, 0.392314, 0.043355);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( 0.055180, 0.392314, 0.055180);
	glEnd();

	glNormal3f( 0.740000, 0.289000, 0.607300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.326197, 0.078036, 0.217958);
		glVertex3f( 0.261313, 0.153073, 0.261313);
		glVertex3f( 0.277408, 0.078036, 0.277408);
	glEnd();

	glNormal3f( 0.598700, -0.632600, 0.491300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.235175, -0.282843, 0.157139);
		glVertex3f( 0.235175, -0.222228, 0.235175);
		glVertex3f( 0.200000, -0.282843, 0.200000);
	glEnd();

	glNormal3f( 0.682500, 0.469600, 0.560100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.276537, 0.222228, 0.184776);
		glVertex3f( 0.261313, 0.153073, 0.261313);
		glVertex3f( 0.307271, 0.153073, 0.205312);
	glEnd();

	glNormal3f( 0.598700, 0.632600, 0.491300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.235175, 0.282843, 0.157139);
		glVertex3f( 0.235175, 0.222228, 0.235175);
		glVertex3f( 0.276537, 0.222228, 0.184776);
	glEnd();

	glNormal3f( 0.682500, -0.469600, 0.560100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.276537, -0.222228, 0.184776);
		glVertex3f( 0.261313, -0.153073, 0.261313);
		glVertex3f( 0.235175, -0.222228, 0.235175);
	glEnd();

	glNormal3f( 0.076100, -0.995100, 0.062500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( 0.064885, -0.392314, 0.043355);
		glVertex3f( 0.055180, -0.392314, 0.055180);
	glEnd();

	glNormal3f( 0.491800, 0.771500, 0.403600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.235175, 0.282843, 0.157139);
		glVertex3f( 0.157139, 0.332588, 0.157139);
		glVertex3f( 0.200000, 0.282843, 0.200000);
	glEnd();

	glNormal3f( 0.740000, -0.289000, 0.607300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.326197, -0.078036, 0.217958);
		glVertex3f( 0.261313, -0.153073, 0.261313);
		glVertex3f( 0.307271, -0.153073, 0.205312);
	glEnd();

	glNormal3f( 0.769300, -0.097500, 0.631400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.326197, -0.078036, 0.217958);
		glVertex3f( 0.282843, 0.000000, 0.282843);
		glVertex3f( 0.277408, -0.078036, 0.277408);
	glEnd();

	glNormal3f( 0.225400, -0.956500, 0.185000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.127276, -0.369552, 0.085043);
		glVertex3f( 0.055180, -0.392314, 0.055180);
		glVertex3f( 0.064885, -0.392314, 0.043355);
	glEnd();

	glNormal3f( 0.365800, 0.881000, 0.300200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.127276, 0.369552, 0.085043);
		glVertex3f( 0.157139, 0.332588, 0.157139);
		glVertex3f( 0.184776, 0.332588, 0.123463);
	glEnd();

	glNormal3f( 0.769300, 0.097500, 0.631400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.326197, 0.078036, 0.217958);
		glVertex3f( 0.282843, 0.000000, 0.282843);
		glVertex3f( 0.332588, 0.000000, 0.222228);
	glEnd();

	glNormal3f( 0.365800, -0.881000, 0.300200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.184776, -0.332588, 0.123463);
		glVertex3f( 0.108239, -0.369552, 0.108239);
		glVertex3f( 0.127276, -0.369552, 0.085043);
	glEnd();

	glNormal3f( 0.300200, 0.881000, 0.365800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.108239, 0.369552, 0.108239);
		glVertex3f( 0.123463, 0.332588, 0.184776);
		glVertex3f( 0.157139, 0.332588, 0.157139);
	glEnd();

	glNormal3f( 0.631400, -0.097500, 0.769300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.277408, -0.078036, 0.277408);
		glVertex3f( 0.222228, 0.000000, 0.332588);
		glVertex3f( 0.217958, -0.078036, 0.326197);
	glEnd();

	glNormal3f( 0.631400, 0.097500, 0.769300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.277408, 0.078036, 0.277408);
		glVertex3f( 0.222228, 0.000000, 0.332588);
		glVertex3f( 0.282843, 0.000000, 0.282843);
	glEnd();

	glNormal3f( 0.300200, -0.881000, 0.365800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.108239, -0.369552, 0.108239);
		glVertex3f( 0.123463, -0.332588, 0.184776);
		glVertex3f( 0.085043, -0.369552, 0.127276);
	glEnd();

	glNormal3f( 0.185000, 0.956500, 0.225400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.108239, 0.369552, 0.108239);
		glVertex3f( 0.043355, 0.392314, 0.064885);
		glVertex3f( 0.085043, 0.369552, 0.127276);
	glEnd();

	glNormal3f( 0.607300, 0.289000, 0.740000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.277408, 0.078036, 0.277408);
		glVertex3f( 0.205312, 0.153073, 0.307271);
		glVertex3f( 0.217958, 0.078036, 0.326197);
	glEnd();

	glNormal3f( 0.403600, -0.771500, 0.491800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.157139, -0.332588, 0.157139);
		glVertex3f( 0.157139, -0.282843, 0.235175);
		glVertex3f( 0.123463, -0.332588, 0.184776);
	glEnd();

	glNormal3f( 0.491300, -0.632600, 0.598700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.200000, -0.282843, 0.200000);
		glVertex3f( 0.184776, -0.222228, 0.276537);
		glVertex3f( 0.157139, -0.282843, 0.235175);
	glEnd();

	glNormal3f( 0.062500, 0.995100, 0.076100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.055180, 0.392314, 0.055180);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( 0.043355, 0.392314, 0.064885);
	glEnd();

	glNormal3f( 0.560100, 0.469600, 0.682500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.235175, 0.222228, 0.235175);
		glVertex3f( 0.205312, 0.153073, 0.307271);
		glVertex3f( 0.261313, 0.153073, 0.261313);
	glEnd();

	glNormal3f( 0.560100, -0.469600, 0.682500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.235175, -0.222228, 0.235175);
		glVertex3f( 0.205312, -0.153073, 0.307271);
		glVertex3f( 0.184776, -0.222228, 0.276537);
	glEnd();

	glNormal3f( 0.062500, -0.995100, 0.076100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( 0.055180, -0.392314, 0.055180);
		glVertex3f( 0.043355, -0.392314, 0.064885);
	glEnd();

	glNormal3f( 0.491300, 0.632600, 0.598700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.200000, 0.282843, 0.200000);
		glVertex3f( 0.184776, 0.222228, 0.276537);
		glVertex3f( 0.235175, 0.222228, 0.235175);
	glEnd();

	glNormal3f( 0.403600, 0.771500, 0.491800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.157139, 0.332588, 0.157139);
		glVertex3f( 0.157139, 0.282843, 0.235175);
		glVertex3f( 0.200000, 0.282843, 0.200000);
	glEnd();

	glNormal3f( 0.607300, -0.289000, 0.740000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.277408, -0.078036, 0.277408);
		glVertex3f( 0.205312, -0.153073, 0.307271);
		glVertex3f( 0.261313, -0.153073, 0.261313);
	glEnd();

	glNormal3f( 0.185000, -0.956500, 0.225400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.108239, -0.369552, 0.108239);
		glVertex3f( 0.043355, -0.392314, 0.064885);
		glVertex3f( 0.055180, -0.392314, 0.055180);
	glEnd();

	glNormal3f( 0.451300, -0.289000, 0.844300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.217958, -0.078036, 0.326197);
		glVertex3f( 0.141421, -0.153073, 0.341421);
		glVertex3f( 0.205312, -0.153073, 0.307271);
	glEnd();

	glNormal3f( 0.046400, -0.995100, 0.086900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( 0.043355, -0.392314, 0.064885);
		glVertex3f( 0.029863, -0.392314, 0.072096);
	glEnd();

	glNormal3f( 0.137400, -0.956500, 0.257100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.043355, -0.392314, 0.064885);
		glVertex3f( 0.058579, -0.369552, 0.141421);
		glVertex3f( 0.029863, -0.392314, 0.072096);
	glEnd();

	glNormal3f( 0.299900, 0.771500, 0.561100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.123463, 0.332588, 0.184776);
		glVertex3f( 0.108239, 0.282843, 0.261313);
		glVertex3f( 0.157139, 0.282843, 0.235175);
	glEnd();

	glNormal3f( 0.223000, 0.881000, 0.417300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.085043, 0.369552, 0.127276);
		glVertex3f( 0.085043, 0.332588, 0.205312);
		glVertex3f( 0.123463, 0.332588, 0.184776);
	glEnd();

	glNormal3f( 0.469100, -0.097500, 0.877700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.222228, 0.000000, 0.332588);
		glVertex3f( 0.150132, -0.078036, 0.362451);
		glVertex3f( 0.217958, -0.078036, 0.326197);
	glEnd();

	glNormal3f( 0.223000, -0.881000, 0.417300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.085043, -0.369552, 0.127276);
		glVertex3f( 0.085043, -0.332588, 0.205312);
		glVertex3f( 0.058579, -0.369552, 0.141421);
	glEnd();

	glNormal3f( 0.137400, 0.956500, 0.257100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.085043, 0.369552, 0.127276);
		glVertex3f( 0.029863, 0.392314, 0.072096);
		glVertex3f( 0.058579, 0.369552, 0.141421);
	glEnd();

	glNormal3f( 0.469100, 0.097500, 0.877700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.217958, 0.078036, 0.326197);
		glVertex3f( 0.153073, 0.000000, 0.369552);
		glVertex3f( 0.222228, 0.000000, 0.332588);
	glEnd();

	glNormal3f( 0.451300, 0.289000, 0.844300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.217958, 0.078036, 0.326197);
		glVertex3f( 0.141421, 0.153073, 0.341421);
		glVertex3f( 0.150132, 0.078036, 0.362451);
	glEnd();

	glNormal3f( 0.299900, -0.771500, 0.561100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.123463, -0.332588, 0.184776);
		glVertex3f( 0.108239, -0.282843, 0.261313);
		glVertex3f( 0.085043, -0.332588, 0.205312);
	glEnd();

	glNormal3f( 0.046400, 0.995100, 0.086900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.043355, 0.392314, 0.064885);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( 0.029863, 0.392314, 0.072096);
	glEnd();

	glNormal3f( 0.416200, 0.469600, 0.778600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.184776, 0.222228, 0.276537);
		glVertex3f( 0.141421, 0.153073, 0.341421);
		glVertex3f( 0.205312, 0.153073, 0.307271);
	glEnd();

	glNormal3f( 0.365100, -0.632600, 0.683100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.157139, -0.282843, 0.235175);
		glVertex3f( 0.127276, -0.222228, 0.307271);
		glVertex3f( 0.108239, -0.282843, 0.261313);
	glEnd();

	glNormal3f( 0.416200, -0.469600, 0.778600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.184776, -0.222228, 0.276537);
		glVertex3f( 0.141421, -0.153073, 0.341421);
		glVertex3f( 0.127276, -0.222228, 0.307271);
	glEnd();

	glNormal3f( 0.365100, 0.632600, 0.683100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.157139, 0.282843, 0.235175);
		glVertex3f( 0.127276, 0.222228, 0.307271);
		glVertex3f( 0.184776, 0.222228, 0.276537);
	glEnd();

	glNormal3f( 0.224800, 0.632600, 0.741200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.108239, 0.282843, 0.261313);
		glVertex3f( 0.064885, 0.222228, 0.326197);
		glVertex3f( 0.127276, 0.222228, 0.307271);
	glEnd();

	glNormal3f( 0.256300, -0.469600, 0.844800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.127276, -0.222228, 0.307271);
		glVertex3f( 0.072096, -0.153073, 0.362451);
		glVertex3f( 0.064885, -0.222228, 0.326197);
	glEnd();

	glNormal3f( 0.277900, -0.289000, 0.916100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.150132, -0.078036, 0.362451);
		glVertex3f( 0.072096, -0.153073, 0.362451);
		glVertex3f( 0.141421, -0.153073, 0.341421);
	glEnd();

	glNormal3f( 0.028600, -0.995100, 0.094200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( 0.029863, -0.392314, 0.072096);
		glVertex3f( 0.015224, -0.392314, 0.076537);
	glEnd();

	glNormal3f( 0.184700, 0.771500, 0.608800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.108239, 0.282843, 0.261313);
		glVertex3f( 0.043355, 0.332588, 0.217958);
		glVertex3f( 0.055180, 0.282843, 0.277408);
	glEnd();

	glNormal3f( 0.288900, -0.097500, 0.952400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.153073, 0.000000, 0.369552);
		glVertex3f( 0.076537, -0.078036, 0.384776);
		glVertex3f( 0.150132, -0.078036, 0.362451);
	glEnd();

	glNormal3f( 0.084600, -0.956500, 0.279000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.029863, -0.392314, 0.072096);
		glVertex3f( 0.029863, -0.369552, 0.150132);
		glVertex3f( 0.015224, -0.392314, 0.076537);
	glEnd();

	glNormal3f( 0.137400, -0.881000, 0.452800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.058579, -0.369552, 0.141421);
		glVertex3f( 0.043355, -0.332588, 0.217958);
		glVertex3f( 0.029863, -0.369552, 0.150132);
	glEnd();

	glNormal3f( 0.137400, 0.881000, 0.452800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.058579, 0.369552, 0.141421);
		glVertex3f( 0.043355, 0.332588, 0.217958);
		glVertex3f( 0.085043, 0.332588, 0.205312);
	glEnd();

	glNormal3f( 0.084600, 0.956500, 0.279000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.058579, 0.369552, 0.141421);
		glVertex3f( 0.015224, 0.392314, 0.076537);
		glVertex3f( 0.029863, 0.369552, 0.150132);
	glEnd();

	glNormal3f( 0.288900, 0.097500, 0.952400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.150132, 0.078036, 0.362451);
		glVertex3f( 0.078036, 0.000000, 0.392314);
		glVertex3f( 0.153073, 0.000000, 0.369552);
	glEnd();

	glNormal3f( 0.184700, -0.771500, 0.608800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.108239, -0.282843, 0.261313);
		glVertex3f( 0.043355, -0.332588, 0.217958);
		glVertex3f( 0.085043, -0.332588, 0.205312);
	glEnd();

	glNormal3f( 0.028600, 0.995100, 0.094200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.029863, 0.392314, 0.072096);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( 0.015224, 0.392314, 0.076537);
	glEnd();

	glNormal3f( 0.277900, 0.289000, 0.916100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.150132, 0.078036, 0.362451);
		glVertex3f( 0.072096, 0.153073, 0.362451);
		glVertex3f( 0.076537, 0.078036, 0.384776);
	glEnd();

	glNormal3f( 0.256300, 0.469600, 0.844800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.127276, 0.222228, 0.307271);
		glVertex3f( 0.072096, 0.153073, 0.362451);
		glVertex3f( 0.141421, 0.153073, 0.341421);
	glEnd();

	glNormal3f( 0.224800, -0.632600, 0.741200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.108239, -0.282843, 0.261313);
		glVertex3f( 0.064885, -0.222228, 0.326197);
		glVertex3f( 0.055180, -0.282843, 0.277408);
	glEnd();

	glNormal3f( 0.075900, -0.632600, 0.770800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.055180, -0.282843, 0.277408);
		glVertex3f( 0.000000, -0.222228, 0.332588);
		glVertex3f( 0.000000, -0.282843, 0.282843);
	glEnd();

	glNormal3f( 0.086500, 0.469600, 0.878600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.064885, 0.222228, 0.326197);
		glVertex3f( 0.000000, 0.153073, 0.369552);
		glVertex3f( 0.072096, 0.153073, 0.362451);
	glEnd();

	glNormal3f( 0.075900, 0.632600, 0.770800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.055180, 0.282843, 0.277408);
		glVertex3f( 0.000000, 0.222228, 0.332588);
		glVertex3f( 0.064885, 0.222228, 0.326197);
	glEnd();

	glNormal3f( 0.086500, -0.469600, 0.878600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.064885, -0.222228, 0.326197);
		glVertex3f( 0.000000, -0.153073, 0.369552);
		glVertex3f( 0.000000, -0.222228, 0.332588);
	glEnd();

	glNormal3f( 0.009700, -0.995100, 0.098000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( 0.015224, -0.392314, 0.076537);
		glVertex3f( 0.000000, -0.392314, 0.078036);
	glEnd();

	glNormal3f( 0.062400, 0.771500, 0.633200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.055180, 0.282843, 0.277408);
		glVertex3f( 0.000000, 0.332588, 0.222228);
		glVertex3f( 0.000000, 0.282843, 0.282843);
	glEnd();

	glNormal3f( 0.093800, -0.289000, 0.952700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.076537, -0.078036, 0.384776);
		glVertex3f( 0.000000, -0.153073, 0.369552);
		glVertex3f( 0.072096, -0.153073, 0.362451);
	glEnd();

	glNormal3f( 0.097500, -0.097500, 0.990400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.078036, 0.000000, 0.392314);
		glVertex3f( 0.000000, -0.078036, 0.392314);
		glVertex3f( 0.076537, -0.078036, 0.384776);
	glEnd();

	glNormal3f( 0.028600, -0.956500, 0.290200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.029863, -0.369552, 0.150132);
		glVertex3f( 0.000000, -0.392314, 0.078036);
		glVertex3f( 0.015224, -0.392314, 0.076537);
	glEnd();

	glNormal3f( 0.046400, 0.881000, 0.470900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.029863, 0.369552, 0.150132);
		glVertex3f( 0.000000, 0.332588, 0.222228);
		glVertex3f( 0.043355, 0.332588, 0.217958);
	glEnd();

	glNormal3f( 0.097500, 0.097500, 0.990400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.076537, 0.078036, 0.384776);
		glVertex3f( 0.000000, 0.000000, 0.400000);
		glVertex3f( 0.078036, 0.000000, 0.392314);
	glEnd();

	glNormal3f( 0.046400, -0.881000, 0.470900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.043355, -0.332588, 0.217958);
		glVertex3f( 0.000000, -0.369552, 0.153073);
		glVertex3f( 0.029863, -0.369552, 0.150132);
	glEnd();

	glNormal3f( 0.062400, -0.771500, 0.633200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.055180, -0.282843, 0.277408);
		glVertex3f( 0.000000, -0.332588, 0.222228);
		glVertex3f( 0.043355, -0.332588, 0.217958);
	glEnd();

	glNormal3f( 0.028600, 0.956500, 0.290200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.029863, 0.369552, 0.150132);
		glVertex3f( 0.000000, 0.392314, 0.078036);
		glVertex3f( 0.000000, 0.369552, 0.153073);
	glEnd();

	glNormal3f( 0.009700, 0.995100, 0.098000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.015224, 0.392314, 0.076537);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( 0.000000, 0.392314, 0.078036);
	glEnd();

	glNormal3f( 0.093800, 0.289000, 0.952700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.076537, 0.078036, 0.384776);
		glVertex3f( 0.000000, 0.153073, 0.369552);
		glVertex3f( 0.000000, 0.078036, 0.392314);
	glEnd();

	glNormal3f( -0.028600, 0.956500, 0.290200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.392314, 0.078036);
		glVertex3f( -0.029863, 0.369552, 0.150132);
		glVertex3f( 0.000000, 0.369552, 0.153073);
	glEnd();

	glNormal3f( -0.093800, 0.289000, 0.952700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.078036, 0.392314);
		glVertex3f( -0.072096, 0.153073, 0.362451);
		glVertex3f( -0.076537, 0.078036, 0.384776);
	glEnd();

	glNormal3f( -0.062400, -0.771500, 0.633200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.282843, 0.282843);
		glVertex3f( -0.043354, -0.332588, 0.217958);
		glVertex3f( 0.000000, -0.332588, 0.222228);
	glEnd();

	glNormal3f( -0.075900, -0.632600, 0.770800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.282843, 0.282843);
		glVertex3f( -0.064885, -0.222228, 0.326197);
		glVertex3f( -0.055180, -0.282843, 0.277408);
	glEnd();

	glNormal3f( -0.009700, 0.995100, 0.098000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.392314, 0.078036);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( -0.015224, 0.392314, 0.076537);
	glEnd();

	glNormal3f( -0.086500, 0.469600, 0.878600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.222228, 0.332588);
		glVertex3f( -0.072096, 0.153073, 0.362451);
		glVertex3f( 0.000000, 0.153073, 0.369552);
	glEnd();

	glNormal3f( -0.086500, -0.469600, 0.878600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.222228, 0.332588);
		glVertex3f( -0.072096, -0.153073, 0.362451);
		glVertex3f( -0.064885, -0.222228, 0.326197);
	glEnd();

	glNormal3f( -0.009700, -0.995100, 0.098000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( 0.000000, -0.392314, 0.078036);
		glVertex3f( -0.015224, -0.392314, 0.076537);
	glEnd();

	glNormal3f( -0.075900, 0.632600, 0.770800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.282843, 0.282843);
		glVertex3f( -0.064885, 0.222228, 0.326197);
		glVertex3f( 0.000000, 0.222228, 0.332588);
	glEnd();

	glNormal3f( -0.062400, 0.771500, 0.633200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.332588, 0.222228);
		glVertex3f( -0.055180, 0.282843, 0.277408);
		glVertex3f( 0.000000, 0.282843, 0.282843);
	glEnd();

	glNormal3f( -0.093800, -0.289000, 0.952700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.078036, 0.392314);
		glVertex3f( -0.072096, -0.153073, 0.362451);
		glVertex3f( 0.000000, -0.153073, 0.369552);
	glEnd();

	glNormal3f( -0.028600, -0.956500, 0.290200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.392314, 0.078036);
		glVertex3f( -0.029863, -0.369552, 0.150132);
		glVertex3f( -0.015224, -0.392314, 0.076537);
	glEnd();

	glNormal3f( -0.046400, 0.881000, 0.470900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.369552, 0.153073);
		glVertex3f( -0.043354, 0.332588, 0.217958);
		glVertex3f( 0.000000, 0.332588, 0.222228);
	glEnd();

	glNormal3f( -0.097500, -0.097500, 0.990400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.000000, 0.400000);
		glVertex3f( -0.076537, -0.078036, 0.384776);
		glVertex3f( 0.000000, -0.078036, 0.392314);
	glEnd();

	glNormal3f( -0.097500, 0.097500, 0.990400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.078036, 0.392314);
		glVertex3f( -0.078036, 0.000000, 0.392314);
		glVertex3f( 0.000000, 0.000000, 0.400000);
	glEnd();

	glNormal3f( -0.046400, -0.881000, 0.470900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.369552, 0.153073);
		glVertex3f( -0.043354, -0.332588, 0.217958);
		glVertex3f( -0.029863, -0.369552, 0.150132);
	glEnd();

	glNormal3f( -0.137400, 0.881000, 0.452800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.029863, 0.369552, 0.150132);
		glVertex3f( -0.085043, 0.332588, 0.205312);
		glVertex3f( -0.043354, 0.332588, 0.217958);
	glEnd();

	glNormal3f( -0.288900, -0.097500, 0.952400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.076537, -0.078036, 0.384776);
		glVertex3f( -0.153073, 0.000000, 0.369552);
		glVertex3f( -0.150132, -0.078036, 0.362451);
	glEnd();

	glNormal3f( -0.137400, -0.881000, 0.452800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.029863, -0.369552, 0.150132);
		glVertex3f( -0.085043, -0.332588, 0.205312);
		glVertex3f( -0.058579, -0.369552, 0.141421);
	glEnd();

	glNormal3f( -0.084600, 0.956500, 0.279000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.029863, 0.369552, 0.150132);
		glVertex3f( -0.029863, 0.392314, 0.072096);
		glVertex3f( -0.058579, 0.369552, 0.141421);
	glEnd();

	glNormal3f( -0.288900, 0.097500, 0.952400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.076537, 0.078036, 0.384776);
		glVertex3f( -0.153073, 0.000000, 0.369552);
		glVertex3f( -0.078036, 0.000000, 0.392314);
	glEnd();

	glNormal3f( -0.277900, 0.289000, 0.916100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.076537, 0.078036, 0.384776);
		glVertex3f( -0.141421, 0.153073, 0.341421);
		glVertex3f( -0.150132, 0.078036, 0.362451);
	glEnd();

	glNormal3f( -0.184700, -0.771500, 0.608800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055180, -0.282843, 0.277408);
		glVertex3f( -0.085043, -0.332588, 0.205312);
		glVertex3f( -0.043354, -0.332588, 0.217958);
	glEnd();

	glNormal3f( -0.028600, 0.995100, 0.094200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.015224, 0.392314, 0.076537);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( -0.029863, 0.392314, 0.072096);
	glEnd();

	glNormal3f( -0.256300, 0.469600, 0.844800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.064885, 0.222228, 0.326197);
		glVertex3f( -0.141421, 0.153073, 0.341421);
		glVertex3f( -0.072096, 0.153073, 0.362451);
	glEnd();

	glNormal3f( -0.224800, -0.632600, 0.741200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055180, -0.282843, 0.277408);
		glVertex3f( -0.127276, -0.222228, 0.307271);
		glVertex3f( -0.108239, -0.282843, 0.261312);
	glEnd();

	glNormal3f( -0.256300, -0.469600, 0.844800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.064885, -0.222228, 0.326197);
		glVertex3f( -0.141421, -0.153073, 0.341421);
		glVertex3f( -0.127276, -0.222228, 0.307271);
	glEnd();

	glNormal3f( -0.224800, 0.632600, 0.741200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055180, 0.282843, 0.277408);
		glVertex3f( -0.127276, 0.222228, 0.307271);
		glVertex3f( -0.064885, 0.222228, 0.326197);
	glEnd();

	glNormal3f( -0.277900, -0.289000, 0.916100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.076537, -0.078036, 0.384776);
		glVertex3f( -0.141421, -0.153073, 0.341421);
		glVertex3f( -0.072096, -0.153073, 0.362451);
	glEnd();

	glNormal3f( -0.028600, -0.995100, 0.094200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( -0.015224, -0.392314, 0.076537);
		glVertex3f( -0.029863, -0.392314, 0.072096);
	glEnd();

	glNormal3f( -0.084600, -0.956500, 0.279000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.029863, -0.369552, 0.150132);
		glVertex3f( -0.029863, -0.392314, 0.072096);
		glVertex3f( -0.015224, -0.392314, 0.076537);
	glEnd();

	glNormal3f( -0.184700, 0.771500, 0.608800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.043354, 0.332588, 0.217958);
		glVertex3f( -0.108239, 0.282843, 0.261312);
		glVertex3f( -0.055180, 0.282843, 0.277408);
	glEnd();

	glNormal3f( -0.046400, -0.995100, 0.086900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( -0.029863, -0.392314, 0.072096);
		glVertex3f( -0.043354, -0.392314, 0.064885);
	glEnd();

	glNormal3f( -0.299900, 0.771500, 0.561100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.085043, 0.332588, 0.205312);
		glVertex3f( -0.157139, 0.282843, 0.235175);
		glVertex3f( -0.108239, 0.282843, 0.261312);
	glEnd();

	glNormal3f( -0.469100, -0.097500, 0.877700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.153073, 0.000000, 0.369552);
		glVertex3f( -0.217958, -0.078036, 0.326197);
		glVertex3f( -0.150132, -0.078036, 0.362451);
	glEnd();

	glNormal3f( -0.137400, -0.956500, 0.257100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.029863, -0.392314, 0.072096);
		glVertex3f( -0.085043, -0.369552, 0.127276);
		glVertex3f( -0.043354, -0.392314, 0.064885);
	glEnd();

	glNormal3f( -0.223100, -0.881000, 0.417300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.058579, -0.369552, 0.141421);
		glVertex3f( -0.123463, -0.332588, 0.184776);
		glVertex3f( -0.085043, -0.369552, 0.127276);
	glEnd();

	glNormal3f( -0.223100, 0.881000, 0.417300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.058579, 0.369552, 0.141421);
		glVertex3f( -0.123463, 0.332588, 0.184776);
		glVertex3f( -0.085043, 0.332588, 0.205312);
	glEnd();

	glNormal3f( -0.137400, 0.956500, 0.257100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.029863, 0.392314, 0.072096);
		glVertex3f( -0.085043, 0.369552, 0.127276);
		glVertex3f( -0.058579, 0.369552, 0.141421);
	glEnd();

	glNormal3f( -0.469100, 0.097500, 0.877700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.150132, 0.078036, 0.362451);
		glVertex3f( -0.222228, 0.000000, 0.332588);
		glVertex3f( -0.153073, 0.000000, 0.369552);
	glEnd();

	glNormal3f( -0.299900, -0.771500, 0.561100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.108239, -0.282843, 0.261312);
		glVertex3f( -0.123463, -0.332588, 0.184776);
		glVertex3f( -0.085043, -0.332588, 0.205312);
	glEnd();

	glNormal3f( -0.046400, 0.995100, 0.086900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.029863, 0.392314, 0.072096);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( -0.043354, 0.392314, 0.064885);
	glEnd();

	glNormal3f( -0.451300, 0.289000, 0.844300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.150132, 0.078036, 0.362451);
		glVertex3f( -0.205312, 0.153073, 0.307271);
		glVertex3f( -0.217958, 0.078036, 0.326197);
	glEnd();

	glNormal3f( -0.416200, 0.469600, 0.778600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.127276, 0.222228, 0.307271);
		glVertex3f( -0.205312, 0.153073, 0.307271);
		glVertex3f( -0.141421, 0.153073, 0.341421);
	glEnd();

	glNormal3f( -0.365100, -0.632600, 0.683100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.108239, -0.282843, 0.261312);
		glVertex3f( -0.184776, -0.222228, 0.276537);
		glVertex3f( -0.157139, -0.282843, 0.235175);
	glEnd();

	glNormal3f( -0.365100, 0.632600, 0.683100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.108239, 0.282843, 0.261312);
		glVertex3f( -0.184776, 0.222228, 0.276537);
		glVertex3f( -0.127276, 0.222228, 0.307271);
	glEnd();

	glNormal3f( -0.416200, -0.469600, 0.778600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.127276, -0.222228, 0.307271);
		glVertex3f( -0.205312, -0.153073, 0.307271);
		glVertex3f( -0.184776, -0.222228, 0.276537);
	glEnd();

	glNormal3f( -0.451300, -0.289000, 0.844300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.150132, -0.078036, 0.362451);
		glVertex3f( -0.205312, -0.153073, 0.307271);
		glVertex3f( -0.141421, -0.153073, 0.341421);
	glEnd();

	glNormal3f( -0.560100, 0.469600, 0.682500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.184776, 0.222228, 0.276537);
		glVertex3f( -0.261312, 0.153073, 0.261312);
		glVertex3f( -0.205312, 0.153073, 0.307271);
	glEnd();

	glNormal3f( -0.491300, 0.632600, 0.598700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.157139, 0.282843, 0.235175);
		glVertex3f( -0.235175, 0.222228, 0.235175);
		glVertex3f( -0.184776, 0.222228, 0.276537);
	glEnd();

	glNormal3f( -0.560100, -0.469600, 0.682500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.184776, -0.222228, 0.276537);
		glVertex3f( -0.261312, -0.153073, 0.261312);
		glVertex3f( -0.235175, -0.222228, 0.235175);
	glEnd();

	glNormal3f( -0.062500, -0.995100, 0.076100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( -0.043354, -0.392314, 0.064885);
		glVertex3f( -0.055180, -0.392314, 0.055180);
	glEnd();

	glNormal3f( -0.403600, 0.771500, 0.491800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.123463, 0.332588, 0.184776);
		glVertex3f( -0.200000, 0.282843, 0.200000);
		glVertex3f( -0.157139, 0.282843, 0.235175);
	glEnd();

	glNormal3f( -0.607300, -0.289000, 0.740000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.217958, -0.078036, 0.326197);
		glVertex3f( -0.261312, -0.153073, 0.261312);
		glVertex3f( -0.205312, -0.153073, 0.307271);
	glEnd();

	glNormal3f( -0.631400, -0.097500, 0.769300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.222228, 0.000000, 0.332588);
		glVertex3f( -0.277408, -0.078036, 0.277408);
		glVertex3f( -0.217958, -0.078036, 0.326197);
	glEnd();

	glNormal3f( -0.185000, -0.956500, 0.225400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.043354, -0.392314, 0.064885);
		glVertex3f( -0.108239, -0.369552, 0.108239);
		glVertex3f( -0.055180, -0.392314, 0.055180);
	glEnd();

	glNormal3f( -0.300200, 0.881000, 0.365800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.085043, 0.369552, 0.127276);
		glVertex3f( -0.157139, 0.332588, 0.157139);
		glVertex3f( -0.123463, 0.332588, 0.184776);
	glEnd();

	glNormal3f( -0.631400, 0.097500, 0.769300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.222228, 0.000000, 0.332588);
		glVertex3f( -0.277408, 0.078036, 0.277408);
		glVertex3f( -0.282842, 0.000000, 0.282842);
	glEnd();

	glNormal3f( -0.300200, -0.881000, 0.365800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.085043, -0.369552, 0.127276);
		glVertex3f( -0.157139, -0.332588, 0.157139);
		glVertex3f( -0.108239, -0.369552, 0.108239);
	glEnd();

	glNormal3f( -0.403600, -0.771500, 0.491800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.123463, -0.332588, 0.184776);
		glVertex3f( -0.200000, -0.282843, 0.200000);
		glVertex3f( -0.157139, -0.332588, 0.157139);
	glEnd();

	glNormal3f( -0.185000, 0.956500, 0.225400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.085043, 0.369552, 0.127276);
		glVertex3f( -0.055180, 0.392314, 0.055180);
		glVertex3f( -0.108239, 0.369552, 0.108239);
	glEnd();

	glNormal3f( -0.062500, 0.995100, 0.076100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.043354, 0.392314, 0.064885);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( -0.055180, 0.392314, 0.055180);
	glEnd();

	glNormal3f( -0.607300, 0.289000, 0.740000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.217958, 0.078036, 0.326197);
		glVertex3f( -0.261312, 0.153073, 0.261312);
		glVertex3f( -0.277408, 0.078036, 0.277408);
	glEnd();

	glNormal3f( -0.491300, -0.632600, 0.598700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.157139, -0.282843, 0.235175);
		glVertex3f( -0.235175, -0.222228, 0.235175);
		glVertex3f( -0.200000, -0.282843, 0.200000);
	glEnd();

	glNormal3f( -0.598700, -0.632600, 0.491300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.200000, -0.282843, 0.200000);
		glVertex3f( -0.276537, -0.222228, 0.184776);
		glVertex3f( -0.235175, -0.282843, 0.157139);
	glEnd();

	glNormal3f( -0.076100, 0.995100, 0.062500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055180, 0.392314, 0.055180);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( -0.064885, 0.392314, 0.043355);
	glEnd();

	glNormal3f( -0.682500, 0.469600, 0.560100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.235175, 0.222228, 0.235175);
		glVertex3f( -0.307271, 0.153073, 0.205312);
		glVertex3f( -0.261312, 0.153073, 0.261312);
	glEnd();

	glNormal3f( -0.682500, -0.469600, 0.560100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.235175, -0.222228, 0.235175);
		glVertex3f( -0.307271, -0.153073, 0.205312);
		glVertex3f( -0.276537, -0.222228, 0.184776);
	glEnd();

	glNormal3f( -0.076100, -0.995100, 0.062500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( -0.055180, -0.392314, 0.055180);
		glVertex3f( -0.064885, -0.392314, 0.043355);
	glEnd();

	glNormal3f( -0.598700, 0.632600, 0.491300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.200000, 0.282843, 0.200000);
		glVertex3f( -0.276537, 0.222228, 0.184776);
		glVertex3f( -0.235175, 0.222228, 0.235175);
	glEnd();

	glNormal3f( -0.491800, 0.771500, 0.403600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.200000, 0.282843, 0.200000);
		glVertex3f( -0.184776, 0.332588, 0.123463);
		glVertex3f( -0.235175, 0.282843, 0.157139);
	glEnd();

	glNormal3f( -0.740000, -0.289000, 0.607300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.277408, -0.078036, 0.277408);
		glVertex3f( -0.307271, -0.153073, 0.205312);
		glVertex3f( -0.261312, -0.153073, 0.261312);
	glEnd();

	glNormal3f( -0.225400, -0.956500, 0.185000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055180, -0.392314, 0.055180);
		glVertex3f( -0.127276, -0.369552, 0.085043);
		glVertex3f( -0.064885, -0.392314, 0.043355);
	glEnd();

	glNormal3f( -0.365800, 0.881000, 0.300200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.108239, 0.369552, 0.108239);
		glVertex3f( -0.184776, 0.332588, 0.123463);
		glVertex3f( -0.157139, 0.332588, 0.157139);
	glEnd();

	glNormal3f( -0.769300, -0.097500, 0.631400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.282842, 0.000000, 0.282842);
		glVertex3f( -0.326197, -0.078036, 0.217958);
		glVertex3f( -0.277408, -0.078036, 0.277408);
	glEnd();

	glNormal3f( -0.769300, 0.097500, 0.631400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.282842, 0.000000, 0.282842);
		glVertex3f( -0.326197, 0.078036, 0.217958);
		glVertex3f( -0.332588, 0.000000, 0.222228);
	glEnd();

	glNormal3f( -0.365800, -0.881000, 0.300200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.157139, -0.332588, 0.157139);
		glVertex3f( -0.127276, -0.369552, 0.085043);
		glVertex3f( -0.108239, -0.369552, 0.108239);
	glEnd();

	glNormal3f( -0.225400, 0.956500, 0.185000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055180, 0.392314, 0.055180);
		glVertex3f( -0.127276, 0.369552, 0.085043);
		glVertex3f( -0.108239, 0.369552, 0.108239);
	glEnd();

	glNormal3f( -0.740000, 0.289000, 0.607300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.277408, 0.078036, 0.277408);
		glVertex3f( -0.307271, 0.153073, 0.205312);
		glVertex3f( -0.326197, 0.078036, 0.217958);
	glEnd();

	glNormal3f( -0.491800, -0.771500, 0.403600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.200000, -0.282843, 0.200000);
		glVertex3f( -0.184776, -0.332588, 0.123463);
		glVertex3f( -0.157139, -0.332588, 0.157139);
	glEnd();

	glNormal3f( -0.257100, 0.956500, 0.137400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.127276, 0.369552, 0.085043);
		glVertex3f( -0.072096, 0.392314, 0.029863);
		glVertex3f( -0.141421, 0.369552, 0.058579);
	glEnd();

	glNormal3f( -0.877700, 0.097600, 0.469100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.332588, 0.000000, 0.222228);
		glVertex3f( -0.362451, 0.078036, 0.150132);
		glVertex3f( -0.369552, 0.000000, 0.153073);
	glEnd();

	glNormal3f( -0.844300, 0.289000, 0.451300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.326197, 0.078036, 0.217958);
		glVertex3f( -0.341421, 0.153073, 0.141421);
		glVertex3f( -0.362451, 0.078036, 0.150132);
	glEnd();

	glNormal3f( -0.561100, -0.771500, 0.299900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.235175, -0.282843, 0.157139);
		glVertex3f( -0.205312, -0.332588, 0.085043);
		glVertex3f( -0.184776, -0.332588, 0.123463);
	glEnd();

	glNormal3f( -0.086900, 0.995100, 0.046400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.064885, 0.392314, 0.043355);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( -0.072096, 0.392314, 0.029863);
	glEnd();

	glNormal3f( -0.778600, 0.469600, 0.416200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.276537, 0.222228, 0.184776);
		glVertex3f( -0.341421, 0.153073, 0.141421);
		glVertex3f( -0.307271, 0.153073, 0.205312);
	glEnd();

	glNormal3f( -0.683100, -0.632600, 0.365100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.235175, -0.282843, 0.157139);
		glVertex3f( -0.307271, -0.222228, 0.127276);
		glVertex3f( -0.261312, -0.282843, 0.108239);
	glEnd();

	glNormal3f( -0.778600, -0.469600, 0.416200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.276537, -0.222228, 0.184776);
		glVertex3f( -0.341421, -0.153073, 0.141421);
		glVertex3f( -0.307271, -0.222228, 0.127276);
	glEnd();

	glNormal3f( -0.683100, 0.632600, 0.365100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.235175, 0.282843, 0.157139);
		glVertex3f( -0.307271, 0.222228, 0.127276);
		glVertex3f( -0.276537, 0.222228, 0.184776);
	glEnd();

	glNormal3f( -0.844300, -0.289000, 0.451300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.326197, -0.078036, 0.217958);
		glVertex3f( -0.341421, -0.153073, 0.141421);
		glVertex3f( -0.307271, -0.153073, 0.205312);
	glEnd();

	glNormal3f( -0.086900, -0.995100, 0.046400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( -0.064885, -0.392314, 0.043355);
		glVertex3f( -0.072096, -0.392314, 0.029863);
	glEnd();

	glNormal3f( -0.257100, -0.956500, 0.137400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.064885, -0.392314, 0.043355);
		glVertex3f( -0.141421, -0.369552, 0.058579);
		glVertex3f( -0.072096, -0.392314, 0.029863);
	glEnd();

	glNormal3f( -0.561100, 0.771500, 0.299900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.184776, 0.332588, 0.123463);
		glVertex3f( -0.261312, 0.282843, 0.108239);
		glVertex3f( -0.235175, 0.282843, 0.157139);
	glEnd();

	glNormal3f( -0.417300, 0.881000, 0.223100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.127276, 0.369552, 0.085043);
		glVertex3f( -0.205312, 0.332588, 0.085043);
		glVertex3f( -0.184776, 0.332588, 0.123463);
	glEnd();

	glNormal3f( -0.877700, -0.097500, 0.469100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.332588, 0.000000, 0.222228);
		glVertex3f( -0.362451, -0.078036, 0.150132);
		glVertex3f( -0.326197, -0.078036, 0.217958);
	glEnd();

	glNormal3f( -0.417300, -0.881000, 0.223100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.127276, -0.369552, 0.085043);
		glVertex3f( -0.205312, -0.332588, 0.085043);
		glVertex3f( -0.141421, -0.369552, 0.058579);
	glEnd();

	glNormal3f( -0.952400, -0.097500, 0.288900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.369552, 0.000000, 0.153073);
		glVertex3f( -0.384776, -0.078036, 0.076537);
		glVertex3f( -0.362451, -0.078036, 0.150132);
	glEnd();

	glNormal3f( -0.279000, -0.956500, 0.084600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.141421, -0.369552, 0.058579);
		glVertex3f( -0.076537, -0.392314, 0.015224);
		glVertex3f( -0.072096, -0.392314, 0.029863);
	glEnd();

	glNormal3f( -0.452800, -0.881000, 0.137400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.141421, -0.369552, 0.058579);
		glVertex3f( -0.217958, -0.332588, 0.043354);
		glVertex3f( -0.150132, -0.369552, 0.029863);
	glEnd();

	glNormal3f( -0.452800, 0.881000, 0.137400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.141421, 0.369552, 0.058579);
		glVertex3f( -0.217958, 0.332588, 0.043354);
		glVertex3f( -0.205312, 0.332588, 0.085043);
	glEnd();

	glNormal3f( -0.279000, 0.956500, 0.084600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.072096, 0.392314, 0.029863);
		glVertex3f( -0.150132, 0.369552, 0.029863);
		glVertex3f( -0.141421, 0.369552, 0.058579);
	glEnd();

	glNormal3f( -0.952400, 0.097500, 0.288900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.369552, 0.000000, 0.153073);
		glVertex3f( -0.384776, 0.078036, 0.076537);
		glVertex3f( -0.392314, 0.000000, 0.078036);
	glEnd();

	glNormal3f( -0.608800, -0.771500, 0.184700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.261312, -0.282843, 0.108239);
		glVertex3f( -0.217958, -0.332588, 0.043354);
		glVertex3f( -0.205312, -0.332588, 0.085043);
	glEnd();

	glNormal3f( -0.094200, 0.995100, 0.028600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.072096, 0.392314, 0.029863);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( -0.076537, 0.392314, 0.015224);
	glEnd();

	glNormal3f( -0.916100, 0.289000, 0.277900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.362451, 0.078036, 0.150132);
		glVertex3f( -0.362451, 0.153073, 0.072096);
		glVertex3f( -0.384776, 0.078036, 0.076537);
	glEnd();

	glNormal3f( -0.844800, 0.469600, 0.256300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.307271, 0.222228, 0.127276);
		glVertex3f( -0.362451, 0.153073, 0.072096);
		glVertex3f( -0.341421, 0.153073, 0.141421);
	glEnd();

	glNormal3f( -0.741200, -0.632600, 0.224800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.261312, -0.282843, 0.108239);
		glVertex3f( -0.326197, -0.222228, 0.064885);
		glVertex3f( -0.277408, -0.282843, 0.055180);
	glEnd();

	glNormal3f( -0.741200, 0.632600, 0.224800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.261312, 0.282843, 0.108239);
		glVertex3f( -0.326197, 0.222228, 0.064885);
		glVertex3f( -0.307271, 0.222228, 0.127276);
	glEnd();

	glNormal3f( -0.844800, -0.469600, 0.256300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.307271, -0.222228, 0.127276);
		glVertex3f( -0.362451, -0.153073, 0.072096);
		glVertex3f( -0.326197, -0.222228, 0.064885);
	glEnd();

	glNormal3f( -0.916100, -0.289000, 0.277900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.362451, -0.078036, 0.150132);
		glVertex3f( -0.362451, -0.153073, 0.072096);
		glVertex3f( -0.341421, -0.153073, 0.141421);
	glEnd();

	glNormal3f( -0.094200, -0.995100, 0.028600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( -0.072096, -0.392314, 0.029863);
		glVertex3f( -0.076537, -0.392314, 0.015224);
	glEnd();

	glNormal3f( -0.608800, 0.771500, 0.184700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.205312, 0.332588, 0.085043);
		glVertex3f( -0.277408, 0.282843, 0.055180);
		glVertex3f( -0.261312, 0.282843, 0.108239);
	glEnd();

	glNormal3f( -0.633200, 0.771500, 0.062400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.277408, 0.282843, 0.055180);
		glVertex3f( -0.222228, 0.332588, 0.000000);
		glVertex3f( -0.282843, 0.282843, 0.000000);
	glEnd();

	glNormal3f( -0.952700, -0.289000, 0.093800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.384776, -0.078036, 0.076537);
		glVertex3f( -0.369552, -0.153073, 0.000000);
		glVertex3f( -0.362451, -0.153073, 0.072096);
	glEnd();

	glNormal3f( -0.990400, -0.097500, 0.097600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.392314, 0.000000, 0.078036);
		glVertex3f( -0.392314, -0.078036, 0.000000);
		glVertex3f( -0.384776, -0.078036, 0.076537);
	glEnd();

	glNormal3f( -0.290200, -0.956500, 0.028600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.150132, -0.369552, 0.029863);
		glVertex3f( -0.078036, -0.392314, 0.000000);
		glVertex3f( -0.076537, -0.392314, 0.015224);
	glEnd();

	glNormal3f( -0.470900, 0.881000, 0.046400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.217958, 0.332588, 0.043354);
		glVertex3f( -0.153073, 0.369552, 0.000000);
		glVertex3f( -0.222228, 0.332588, 0.000000);
	glEnd();

	glNormal3f( -0.990400, 0.097500, 0.097600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.392314, 0.000000, 0.078036);
		glVertex3f( -0.392314, 0.078036, 0.000000);
		glVertex3f( -0.400000, 0.000000, 0.000000);
	glEnd();

	glNormal3f( -0.470900, -0.881000, 0.046400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.217958, -0.332588, 0.043354);
		glVertex3f( -0.153073, -0.369552, 0.000000);
		glVertex3f( -0.150132, -0.369552, 0.029863);
	glEnd();

	glNormal3f( -0.633200, -0.771500, 0.062400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.277408, -0.282843, 0.055180);
		glVertex3f( -0.222228, -0.332588, 0.000000);
		glVertex3f( -0.217958, -0.332588, 0.043354);
	glEnd();

	glNormal3f( -0.290200, 0.956500, 0.028600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.150132, 0.369552, 0.029863);
		glVertex3f( -0.078036, 0.392314, 0.000000);
		glVertex3f( -0.153073, 0.369552, 0.000000);
	glEnd();

	glNormal3f( -0.098000, 0.995100, 0.009700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.076537, 0.392314, 0.015224);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( -0.078036, 0.392314, 0.000000);
	glEnd();

	glNormal3f( -0.952700, 0.289000, 0.093800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.384776, 0.078036, 0.076537);
		glVertex3f( -0.369552, 0.153073, 0.000000);
		glVertex3f( -0.392314, 0.078036, 0.000000);
	glEnd();

	glNormal3f( -0.770800, -0.632600, 0.075900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.326197, -0.222228, 0.064885);
		glVertex3f( -0.282843, -0.282843, 0.000000);
		glVertex3f( -0.277408, -0.282843, 0.055180);
	glEnd();

	glNormal3f( -0.878600, 0.469600, 0.086500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.362451, 0.153073, 0.072096);
		glVertex3f( -0.332588, 0.222228, 0.000000);
		glVertex3f( -0.369552, 0.153073, 0.000000);
	glEnd();

	glNormal3f( -0.770800, 0.632600, 0.075900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.326197, 0.222228, 0.064885);
		glVertex3f( -0.282843, 0.282843, 0.000000);
		glVertex3f( -0.332588, 0.222228, 0.000000);
	glEnd();

	glNormal3f( -0.878600, -0.469600, 0.086500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.362451, -0.153073, 0.072096);
		glVertex3f( -0.332588, -0.222228, 0.000000);
		glVertex3f( -0.326197, -0.222228, 0.064885);
	glEnd();

	glNormal3f( -0.098000, -0.995100, 0.009700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( -0.076537, -0.392314, 0.015224);
		glVertex3f( -0.078036, -0.392314, 0.000000);
	glEnd();

	glNormal3f( -0.470900, -0.881000, -0.046400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.153073, -0.369552, 0.000000);
		glVertex3f( -0.222228, -0.332588, 0.000000);
		glVertex3f( -0.217958, -0.332588, -0.043355);
	glEnd();

	glNormal3f( -0.290200, 0.956500, -0.028600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.078036, 0.392314, 0.000000);
		glVertex3f( -0.076537, 0.392314, -0.015224);
		glVertex3f( -0.150132, 0.369552, -0.029863);
	glEnd();

	glNormal3f( -0.990400, 0.097500, -0.097500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.400000, 0.000000, 0.000000);
		glVertex3f( -0.392314, 0.078036, 0.000000);
		glVertex3f( -0.384776, 0.078036, -0.076537);
	glEnd();

	glNormal3f( -0.952700, 0.289000, -0.093800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.369552, 0.153073, 0.000000);
		glVertex3f( -0.362451, 0.153073, -0.072096);
		glVertex3f( -0.384776, 0.078036, -0.076537);
	glEnd();

	glNormal3f( -0.633200, -0.771500, -0.062400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.222228, -0.332588, 0.000000);
		glVertex3f( -0.282843, -0.282843, 0.000000);
		glVertex3f( -0.277408, -0.282843, -0.055180);
	glEnd();

	glNormal3f( -0.878600, 0.469600, -0.086500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.332588, 0.222228, 0.000000);
		glVertex3f( -0.326197, 0.222228, -0.064885);
		glVertex3f( -0.362451, 0.153073, -0.072096);
	glEnd();

	glNormal3f( -0.770800, -0.632600, -0.075900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.282843, -0.282843, 0.000000);
		glVertex3f( -0.332588, -0.222228, 0.000000);
		glVertex3f( -0.326197, -0.222228, -0.064885);
	glEnd();

	glNormal3f( -0.878600, -0.469600, -0.086500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.332588, -0.222228, 0.000000);
		glVertex3f( -0.369552, -0.153073, 0.000000);
		glVertex3f( -0.362451, -0.153073, -0.072096);
	glEnd();

	glNormal3f( -0.770800, 0.632600, -0.075900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.282843, 0.282843, 0.000000);
		glVertex3f( -0.277408, 0.282843, -0.055180);
		glVertex3f( -0.326197, 0.222228, -0.064885);
	glEnd();

	glNormal3f( -0.952700, -0.289000, -0.093800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.392314, -0.078036, 0.000000);
		glVertex3f( -0.384776, -0.078036, -0.076537);
		glVertex3f( -0.362451, -0.153073, -0.072096);
	glEnd();

	glNormal3f( -0.290200, -0.956500, -0.028600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.078036, -0.392314, 0.000000);
		glVertex3f( -0.153073, -0.369552, 0.000000);
		glVertex3f( -0.150132, -0.369552, -0.029863);
	glEnd();

	glNormal3f( -0.633200, 0.771500, -0.062400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.282843, 0.282843, 0.000000);
		glVertex3f( -0.222228, 0.332588, 0.000000);
		glVertex3f( -0.217958, 0.332588, -0.043355);
	glEnd();

	glNormal3f( -0.470900, 0.881000, -0.046400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.153073, 0.369552, 0.000000);
		glVertex3f( -0.150132, 0.369552, -0.029863);
		glVertex3f( -0.217958, 0.332588, -0.043355);
	glEnd();

	glNormal3f( -0.990400, -0.097500, -0.097500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.400000, 0.000000, 0.000000);
		glVertex3f( -0.392314, 0.000000, -0.078036);
		glVertex3f( -0.384776, -0.078036, -0.076537);
	glEnd();

	glNormal3f( -0.279000, -0.956500, -0.084600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.150132, -0.369552, -0.029863);
		glVertex3f( -0.141421, -0.369552, -0.058579);
		glVertex3f( -0.072096, -0.392314, -0.029863);
	glEnd();

	glNormal3f( -0.608800, 0.771500, -0.184700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.217958, 0.332588, -0.043355);
		glVertex3f( -0.205312, 0.332588, -0.085043);
		glVertex3f( -0.261313, 0.282843, -0.108239);
	glEnd();

	glNormal3f( -0.452800, 0.881000, -0.137400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.217958, 0.332588, -0.043355);
		glVertex3f( -0.150132, 0.369552, -0.029863);
		glVertex3f( -0.141421, 0.369552, -0.058579);
	glEnd();

	glNormal3f( -0.952400, -0.097500, -0.288900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.384776, -0.078036, -0.076537);
		glVertex3f( -0.392314, 0.000000, -0.078036);
		glVertex3f( -0.369552, 0.000000, -0.153073);
	glEnd();

	glNormal3f( -0.452800, -0.881000, -0.137400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.150132, -0.369552, -0.029863);
		glVertex3f( -0.217958, -0.332588, -0.043355);
		glVertex3f( -0.205312, -0.332588, -0.085043);
	glEnd();

	glNormal3f( -0.279000, 0.956500, -0.084600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.150132, 0.369552, -0.029863);
		glVertex3f( -0.076537, 0.392314, -0.015224);
		glVertex3f( -0.072096, 0.392314, -0.029863);
	glEnd();

	glNormal3f( -0.952400, 0.097500, -0.288900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.384776, 0.078036, -0.076537);
		glVertex3f( -0.362451, 0.078036, -0.150132);
		glVertex3f( -0.369552, 0.000000, -0.153073);
	glEnd();

	glNormal3f( -0.916100, 0.289000, -0.277900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.384776, 0.078036, -0.076537);
		glVertex3f( -0.362451, 0.153073, -0.072096);
		glVertex3f( -0.341421, 0.153073, -0.141421);
	glEnd();

	glNormal3f( -0.608800, -0.771500, -0.184700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.217958, -0.332588, -0.043355);
		glVertex3f( -0.277408, -0.282843, -0.055180);
		glVertex3f( -0.261313, -0.282843, -0.108239);
	glEnd();

	glNormal3f( -0.844800, 0.469600, -0.256300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.326197, 0.222228, -0.064885);
		glVertex3f( -0.307271, 0.222228, -0.127276);
		glVertex3f( -0.341421, 0.153073, -0.141421);
	glEnd();

	glNormal3f( -0.741200, -0.632600, -0.224800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.277408, -0.282843, -0.055180);
		glVertex3f( -0.326197, -0.222228, -0.064885);
		glVertex3f( -0.307271, -0.222228, -0.127276);
	glEnd();

	glNormal3f( -0.844800, -0.469600, -0.256300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.326197, -0.222228, -0.064885);
		glVertex3f( -0.362451, -0.153073, -0.072096);
		glVertex3f( -0.341421, -0.153073, -0.141421);
	glEnd();

	glNormal3f( -0.741200, 0.632600, -0.224800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.277408, 0.282843, -0.055180);
		glVertex3f( -0.261313, 0.282843, -0.108239);
		glVertex3f( -0.307271, 0.222228, -0.127276);
	glEnd();

	glNormal3f( -0.916100, -0.289000, -0.277900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.362451, -0.153073, -0.072096);
		glVertex3f( -0.384776, -0.078036, -0.076537);
		glVertex3f( -0.362451, -0.078036, -0.150132);
	glEnd();

	glNormal3f( -0.683100, 0.632600, -0.365100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.261313, 0.282843, -0.108239);
		glVertex3f( -0.235175, 0.282843, -0.157139);
		glVertex3f( -0.276537, 0.222228, -0.184776);
	glEnd();

	glNormal3f( -0.778600, -0.469600, -0.416200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.341421, -0.153073, -0.141421);
		glVertex3f( -0.307271, -0.153073, -0.205312);
		glVertex3f( -0.276537, -0.222228, -0.184776);
	glEnd();

	glNormal3f( -0.844300, -0.289000, -0.451300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.362451, -0.078036, -0.150132);
		glVertex3f( -0.326197, -0.078036, -0.217958);
		glVertex3f( -0.307271, -0.153073, -0.205312);
	glEnd();

	glNormal3f( -0.561100, 0.771500, -0.299900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.205312, 0.332588, -0.085043);
		glVertex3f( -0.184776, 0.332588, -0.123463);
		glVertex3f( -0.235175, 0.282843, -0.157139);
	glEnd();

	glNormal3f( -0.877700, -0.097500, -0.469100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.362451, -0.078036, -0.150132);
		glVertex3f( -0.369552, 0.000000, -0.153073);
		glVertex3f( -0.332588, 0.000000, -0.222228);
	glEnd();

	glNormal3f( -0.257100, -0.956500, -0.137400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.072096, -0.392314, -0.029863);
		glVertex3f( -0.141421, -0.369552, -0.058579);
		glVertex3f( -0.127276, -0.369552, -0.085043);
	glEnd();

	glNormal3f( -0.417300, -0.881000, -0.223000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.141421, -0.369552, -0.058579);
		glVertex3f( -0.205312, -0.332588, -0.085043);
		glVertex3f( -0.184776, -0.332588, -0.123463);
	glEnd();

	glNormal3f( -0.417300, 0.881000, -0.223000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.141421, 0.369552, -0.058579);
		glVertex3f( -0.127276, 0.369552, -0.085043);
		glVertex3f( -0.184776, 0.332588, -0.123463);
	glEnd();

	glNormal3f( -0.257100, 0.956500, -0.137400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.072096, 0.392314, -0.029863);
		glVertex3f( -0.064885, 0.392314, -0.043355);
		glVertex3f( -0.127276, 0.369552, -0.085043);
	glEnd();

	glNormal3f( -0.877700, 0.097500, -0.469100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.362451, 0.078036, -0.150132);
		glVertex3f( -0.326197, 0.078036, -0.217958);
		glVertex3f( -0.332588, 0.000000, -0.222228);
	glEnd();

	glNormal3f( -0.561100, -0.771500, -0.299900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.205312, -0.332588, -0.085043);
		glVertex3f( -0.261313, -0.282843, -0.108239);
		glVertex3f( -0.235175, -0.282843, -0.157139);
	glEnd();

	glNormal3f( -0.844300, 0.289000, -0.451300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.362451, 0.078036, -0.150132);
		glVertex3f( -0.341421, 0.153073, -0.141421);
		glVertex3f( -0.307271, 0.153073, -0.205312);
	glEnd();

	glNormal3f( -0.778600, 0.469600, -0.416200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.341421, 0.153073, -0.141421);
		glVertex3f( -0.307271, 0.222228, -0.127276);
		glVertex3f( -0.276537, 0.222228, -0.184776);
	glEnd();

	glNormal3f( -0.683100, -0.632600, -0.365100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.261313, -0.282843, -0.108239);
		glVertex3f( -0.307271, -0.222228, -0.127276);
		glVertex3f( -0.276537, -0.222228, -0.184776);
	glEnd();

	glNormal3f( -0.598700, -0.632600, -0.491300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.235175, -0.282843, -0.157139);
		glVertex3f( -0.276537, -0.222228, -0.184776);
		glVertex3f( -0.235175, -0.222228, -0.235175);
	glEnd();

	glNormal3f( -0.682500, 0.469600, -0.560100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.276537, 0.222228, -0.184776);
		glVertex3f( -0.235175, 0.222228, -0.235175);
		glVertex3f( -0.261313, 0.153073, -0.261313);
	glEnd();

	glNormal3f( -0.598700, 0.632600, -0.491300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.235175, 0.282843, -0.157139);
		glVertex3f( -0.200000, 0.282843, -0.200000);
		glVertex3f( -0.235175, 0.222228, -0.235175);
	glEnd();

	glNormal3f( -0.682500, -0.469600, -0.560100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.276537, -0.222228, -0.184776);
		glVertex3f( -0.307271, -0.153073, -0.205312);
		glVertex3f( -0.261313, -0.153073, -0.261313);
	glEnd();

	glNormal3f( -0.491800, 0.771500, -0.403600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.184776, 0.332588, -0.123463);
		glVertex3f( -0.157139, 0.332588, -0.157139);
		glVertex3f( -0.200000, 0.282843, -0.200000);
	glEnd();

	glNormal3f( -0.740000, -0.289000, -0.607300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.307271, -0.153073, -0.205312);
		glVertex3f( -0.326197, -0.078036, -0.217958);
		glVertex3f( -0.277408, -0.078036, -0.277408);
	glEnd();

	glNormal3f( -0.769300, -0.097500, -0.631400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.326197, -0.078036, -0.217958);
		glVertex3f( -0.332588, 0.000000, -0.222228);
		glVertex3f( -0.282843, 0.000000, -0.282843);
	glEnd();

	glNormal3f( -0.225400, -0.956500, -0.185000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.064885, -0.392314, -0.043355);
		glVertex3f( -0.127276, -0.369552, -0.085043);
		glVertex3f( -0.108239, -0.369552, -0.108239);
	glEnd();

	glNormal3f( -0.365800, 0.881000, -0.300200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.127276, 0.369552, -0.085043);
		glVertex3f( -0.108239, 0.369552, -0.108239);
		glVertex3f( -0.157139, 0.332588, -0.157139);
	glEnd();

	glNormal3f( -0.769300, 0.097500, -0.631400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.326197, 0.078036, -0.217958);
		glVertex3f( -0.277408, 0.078036, -0.277408);
		glVertex3f( -0.282843, 0.000000, -0.282843);
	glEnd();

	glNormal3f( -0.365800, -0.881000, -0.300200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.127276, -0.369552, -0.085043);
		glVertex3f( -0.184776, -0.332588, -0.123463);
		glVertex3f( -0.157139, -0.332588, -0.157139);
	glEnd();

	glNormal3f( -0.491800, -0.771500, -0.403600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.235175, -0.282843, -0.157139);
		glVertex3f( -0.200000, -0.282843, -0.200000);
		glVertex3f( -0.157139, -0.332588, -0.157139);
	glEnd();

	glNormal3f( -0.225400, 0.956500, -0.185000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.064885, 0.392314, -0.043355);
		glVertex3f( -0.055180, 0.392314, -0.055180);
		glVertex3f( -0.108239, 0.369552, -0.108239);
	glEnd();

	glNormal3f( -0.740000, 0.289000, -0.607300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.326197, 0.078036, -0.217958);
		glVertex3f( -0.307271, 0.153073, -0.205312);
		glVertex3f( -0.261313, 0.153073, -0.261313);
	glEnd();

	glNormal3f( -0.185000, 0.956500, -0.225400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055180, 0.392314, -0.055180);
		glVertex3f( -0.043354, 0.392314, -0.064885);
		glVertex3f( -0.085043, 0.369552, -0.127276);
	glEnd();

	glNormal3f( -0.607300, 0.289000, -0.740000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.277408, 0.078036, -0.277408);
		glVertex3f( -0.261313, 0.153073, -0.261313);
		glVertex3f( -0.205312, 0.153073, -0.307271);
	glEnd();

	glNormal3f( -0.403600, -0.771500, -0.491800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.200000, -0.282843, -0.200000);
		glVertex3f( -0.157139, -0.282843, -0.235175);
		glVertex3f( -0.123463, -0.332588, -0.184776);
	glEnd();

	glNormal3f( -0.491300, -0.632600, -0.598700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.200000, -0.282843, -0.200000);
		glVertex3f( -0.235175, -0.222228, -0.235175);
		glVertex3f( -0.184776, -0.222228, -0.276537);
	glEnd();

	glNormal3f( -0.560100, 0.469600, -0.682500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.235175, 0.222228, -0.235175);
		glVertex3f( -0.184776, 0.222228, -0.276537);
		glVertex3f( -0.205312, 0.153073, -0.307271);
	glEnd();

	glNormal3f( -0.560100, -0.469600, -0.682500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.235175, -0.222228, -0.235175);
		glVertex3f( -0.261313, -0.153073, -0.261313);
		glVertex3f( -0.205312, -0.153073, -0.307271);
	glEnd();

	glNormal3f( -0.491300, 0.632600, -0.598700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.200000, 0.282843, -0.200000);
		glVertex3f( -0.157139, 0.282843, -0.235175);
		glVertex3f( -0.184776, 0.222228, -0.276537);
	glEnd();

	glNormal3f( -0.403600, 0.771500, -0.491800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.200000, 0.282843, -0.200000);
		glVertex3f( -0.157139, 0.332588, -0.157139);
		glVertex3f( -0.123463, 0.332588, -0.184776);
	glEnd();

	glNormal3f( -0.607300, -0.289000, -0.740000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.261313, -0.153073, -0.261313);
		glVertex3f( -0.277408, -0.078036, -0.277408);
		glVertex3f( -0.217958, -0.078036, -0.326197);
	glEnd();

	glNormal3f( -0.185000, -0.956500, -0.225400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055180, -0.392314, -0.055180);
		glVertex3f( -0.108239, -0.369552, -0.108239);
		glVertex3f( -0.085043, -0.369552, -0.127276);
	glEnd();

	glNormal3f( -0.300200, 0.881000, -0.365800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.108239, 0.369552, -0.108239);
		glVertex3f( -0.085043, 0.369552, -0.127276);
		glVertex3f( -0.123463, 0.332588, -0.184776);
	glEnd();

	glNormal3f( -0.631400, -0.097500, -0.769300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.277408, -0.078036, -0.277408);
		glVertex3f( -0.282843, 0.000000, -0.282843);
		glVertex3f( -0.222228, 0.000000, -0.332588);
	glEnd();

	glNormal3f( -0.631400, 0.097500, -0.769300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.277408, 0.078036, -0.277408);
		glVertex3f( -0.217958, 0.078036, -0.326197);
		glVertex3f( -0.222228, 0.000000, -0.332588);
	glEnd();

	glNormal3f( -0.300200, -0.881000, -0.365800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.157139, -0.332588, -0.157139);
		glVertex3f( -0.123463, -0.332588, -0.184776);
		glVertex3f( -0.085043, -0.369552, -0.127276);
	glEnd();

	glNormal3f( -0.223000, -0.881000, -0.417300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.123463, -0.332588, -0.184776);
		glVertex3f( -0.085043, -0.332588, -0.205312);
		glVertex3f( -0.058579, -0.369552, -0.141421);
	glEnd();

	glNormal3f( -0.137400, 0.956500, -0.257100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.085043, 0.369552, -0.127276);
		glVertex3f( -0.043354, 0.392314, -0.064885);
		glVertex3f( -0.029863, 0.392314, -0.072096);
	glEnd();

	glNormal3f( -0.469100, 0.097500, -0.877700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.217958, 0.078036, -0.326197);
		glVertex3f( -0.150132, 0.078036, -0.362451);
		glVertex3f( -0.153073, 0.000000, -0.369552);
	glEnd();

	glNormal3f( -0.451300, 0.289000, -0.844300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.217958, 0.078036, -0.326197);
		glVertex3f( -0.205312, 0.153073, -0.307271);
		glVertex3f( -0.141421, 0.153073, -0.341421);
	glEnd();

	glNormal3f( -0.299900, -0.771500, -0.561100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.157139, -0.282843, -0.235175);
		glVertex3f( -0.108239, -0.282843, -0.261313);
		glVertex3f( -0.085043, -0.332588, -0.205312);
	glEnd();

	glNormal3f( -0.416200, 0.469600, -0.778600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.184776, 0.222228, -0.276537);
		glVertex3f( -0.127276, 0.222228, -0.307271);
		glVertex3f( -0.141421, 0.153073, -0.341421);
	glEnd();

	glNormal3f( -0.365100, -0.632600, -0.683100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.157139, -0.282843, -0.235175);
		glVertex3f( -0.184776, -0.222228, -0.276537);
		glVertex3f( -0.127276, -0.222228, -0.307271);
	glEnd();

	glNormal3f( -0.416200, -0.469600, -0.778600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.184776, -0.222228, -0.276537);
		glVertex3f( -0.205312, -0.153073, -0.307271);
		glVertex3f( -0.141421, -0.153073, -0.341421);
	glEnd();

	glNormal3f( -0.365100, 0.632600, -0.683100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.157139, 0.282843, -0.235175);
		glVertex3f( -0.108239, 0.282843, -0.261313);
		glVertex3f( -0.127276, 0.222228, -0.307271);
	glEnd();

	glNormal3f( -0.451300, -0.289000, -0.844300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.205312, -0.153073, -0.307271);
		glVertex3f( -0.217958, -0.078036, -0.326197);
		glVertex3f( -0.150132, -0.078036, -0.362451);
	glEnd();

	glNormal3f( -0.137400, -0.956500, -0.257100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.043354, -0.392314, -0.064885);
		glVertex3f( -0.085043, -0.369552, -0.127276);
		glVertex3f( -0.058579, -0.369552, -0.141421);
	glEnd();

	glNormal3f( -0.299900, 0.771500, -0.561100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.157139, 0.282843, -0.235175);
		glVertex3f( -0.123463, 0.332588, -0.184776);
		glVertex3f( -0.085043, 0.332588, -0.205312);
	glEnd();

	glNormal3f( -0.223000, 0.881000, -0.417300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.085043, 0.369552, -0.127276);
		glVertex3f( -0.058579, 0.369552, -0.141421);
		glVertex3f( -0.085043, 0.332588, -0.205312);
	glEnd();

	glNormal3f( -0.469100, -0.097500, -0.877700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.217958, -0.078036, -0.326197);
		glVertex3f( -0.222228, 0.000000, -0.332588);
		glVertex3f( -0.153073, 0.000000, -0.369552);
	glEnd();

	glNormal3f( -0.184700, 0.771500, -0.608800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.108239, 0.282843, -0.261313);
		glVertex3f( -0.085043, 0.332588, -0.205312);
		glVertex3f( -0.043354, 0.332588, -0.217958);
	glEnd();

	glNormal3f( -0.288900, -0.097500, -0.952400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.150132, -0.078036, -0.362451);
		glVertex3f( -0.153073, 0.000000, -0.369552);
		glVertex3f( -0.078036, 0.000000, -0.392314);
	glEnd();

	glNormal3f( -0.084600, -0.956500, -0.279000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.029863, -0.392314, -0.072096);
		glVertex3f( -0.058579, -0.369552, -0.141421);
		glVertex3f( -0.029863, -0.369552, -0.150132);
	glEnd();

	glNormal3f( -0.137400, -0.881000, -0.452800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.085043, -0.332588, -0.205312);
		glVertex3f( -0.043354, -0.332588, -0.217958);
		glVertex3f( -0.029863, -0.369552, -0.150132);
	glEnd();

	glNormal3f( -0.137400, 0.881000, -0.452800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.058579, 0.369552, -0.141421);
		glVertex3f( -0.029863, 0.369552, -0.150132);
		glVertex3f( -0.043354, 0.332588, -0.217958);
	glEnd();

	glNormal3f( -0.084600, 0.956500, -0.279000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.029863, 0.392314, -0.072096);
		glVertex3f( -0.015224, 0.392314, -0.076537);
		glVertex3f( -0.029863, 0.369552, -0.150132);
	glEnd();

	glNormal3f( -0.288900, 0.097500, -0.952400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.150132, 0.078036, -0.362451);
		glVertex3f( -0.076537, 0.078036, -0.384776);
		glVertex3f( -0.078036, 0.000000, -0.392314);
	glEnd();

	glNormal3f( -0.184700, -0.771500, -0.608800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.108239, -0.282843, -0.261313);
		glVertex3f( -0.055180, -0.282843, -0.277408);
		glVertex3f( -0.043354, -0.332588, -0.217958);
	glEnd();

	glNormal3f( -0.277900, 0.289000, -0.916100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.150132, 0.078036, -0.362451);
		glVertex3f( -0.141421, 0.153073, -0.341421);
		glVertex3f( -0.072096, 0.153073, -0.362451);
	glEnd();

	glNormal3f( -0.256300, 0.469600, -0.844800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.127276, 0.222228, -0.307271);
		glVertex3f( -0.064885, 0.222228, -0.326197);
		glVertex3f( -0.072096, 0.153073, -0.362451);
	glEnd();

	glNormal3f( -0.224800, -0.632600, -0.741200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.108239, -0.282843, -0.261313);
		glVertex3f( -0.127276, -0.222228, -0.307271);
		glVertex3f( -0.064885, -0.222228, -0.326197);
	glEnd();

	glNormal3f( -0.224800, 0.632600, -0.741200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.108239, 0.282843, -0.261313);
		glVertex3f( -0.055180, 0.282843, -0.277408);
		glVertex3f( -0.064885, 0.222228, -0.326197);
	glEnd();

	glNormal3f( -0.256300, -0.469600, -0.844800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.127276, -0.222228, -0.307271);
		glVertex3f( -0.141421, -0.153073, -0.341421);
		glVertex3f( -0.072096, -0.153073, -0.362451);
	glEnd();

	glNormal3f( -0.277900, -0.289000, -0.916100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.141421, -0.153073, -0.341421);
		glVertex3f( -0.150132, -0.078036, -0.362451);
		glVertex3f( -0.076537, -0.078036, -0.384776);
	glEnd();

	glNormal3f( -0.075900, 0.632600, -0.770800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055180, 0.282843, -0.277408);
		glVertex3f( 0.000000, 0.282843, -0.282843);
		glVertex3f( 0.000000, 0.222228, -0.332588);
	glEnd();

	glNormal3f( -0.086500, -0.469600, -0.878600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.064885, -0.222228, -0.326197);
		glVertex3f( -0.072096, -0.153073, -0.362451);
		glVertex3f( 0.000000, -0.153073, -0.369552);
	glEnd();

	glNormal3f( -0.062400, 0.771500, -0.633200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055180, 0.282843, -0.277408);
		glVertex3f( -0.043354, 0.332588, -0.217958);
		glVertex3f( 0.000000, 0.332588, -0.222228);
	glEnd();

	glNormal3f( -0.093800, -0.289000, -0.952700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.072096, -0.153073, -0.362451);
		glVertex3f( -0.076537, -0.078036, -0.384776);
		glVertex3f( 0.000000, -0.078036, -0.392314);
	glEnd();

	glNormal3f( -0.097600, -0.097500, -0.990400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.076537, -0.078036, -0.384776);
		glVertex3f( -0.078036, 0.000000, -0.392314);
		glVertex3f( 0.000000, 0.000000, -0.400000);
	glEnd();

	glNormal3f( -0.028600, -0.956500, -0.290200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.015224, -0.392314, -0.076537);
		glVertex3f( -0.029863, -0.369552, -0.150132);
		glVertex3f( 0.000000, -0.369552, -0.153073);
	glEnd();

	glNormal3f( -0.046400, 0.881000, -0.470900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.029863, 0.369552, -0.150132);
		glVertex3f( 0.000000, 0.369552, -0.153073);
		glVertex3f( 0.000000, 0.332588, -0.222228);
	glEnd();

	glNormal3f( -0.097500, 0.097500, -0.990400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.076537, 0.078036, -0.384776);
		glVertex3f( 0.000000, 0.078036, -0.392314);
		glVertex3f( 0.000000, 0.000000, -0.400000);
	glEnd();

	glNormal3f( -0.046400, -0.881000, -0.470900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.043354, -0.332588, -0.217958);
		glVertex3f( 0.000000, -0.332588, -0.222228);
		glVertex3f( 0.000000, -0.369552, -0.153073);
	glEnd();

	glNormal3f( -0.062400, -0.771500, -0.633200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.043354, -0.332588, -0.217958);
		glVertex3f( -0.055180, -0.282843, -0.277408);
		glVertex3f( 0.000000, -0.282843, -0.282843);
	glEnd();

	glNormal3f( -0.028600, 0.956500, -0.290200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.029863, 0.369552, -0.150132);
		glVertex3f( -0.015224, 0.392314, -0.076537);
		glVertex3f( 0.000000, 0.392314, -0.078036);
	glEnd();

	glNormal3f( -0.093800, 0.289000, -0.952700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.076537, 0.078036, -0.384776);
		glVertex3f( -0.072096, 0.153073, -0.362451);
		glVertex3f( 0.000000, 0.153073, -0.369552);
	glEnd();

	glNormal3f( -0.075900, -0.632600, -0.770800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055180, -0.282843, -0.277408);
		glVertex3f( -0.064885, -0.222228, -0.326197);
		glVertex3f( 0.000000, -0.222228, -0.332588);
	glEnd();

	glNormal3f( -0.086500, 0.469600, -0.878600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.064885, 0.222228, -0.326197);
		glVertex3f( 0.000000, 0.222228, -0.332588);
		glVertex3f( 0.000000, 0.153073, -0.369552);
	glEnd();

	glNormal3f( 0.086500, 0.469600, -0.878600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.222228, -0.332588);
		glVertex3f( 0.064885, 0.222228, -0.326197);
		glVertex3f( 0.072096, 0.153073, -0.362451);
	glEnd();

	glNormal3f( 0.086500, -0.469600, -0.878600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.222228, -0.332588);
		glVertex3f( 0.000000, -0.153073, -0.369552);
		glVertex3f( 0.072096, -0.153073, -0.362451);
	glEnd();

	glNormal3f( 0.075900, 0.632600, -0.770800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.282843, -0.282843);
		glVertex3f( 0.055180, 0.282843, -0.277408);
		glVertex3f( 0.064885, 0.222228, -0.326197);
	glEnd();

	glNormal3f( 0.062400, 0.771500, -0.633200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.282843, -0.282843);
		glVertex3f( 0.000000, 0.332588, -0.222228);
		glVertex3f( 0.043355, 0.332588, -0.217958);
	glEnd();

	glNormal3f( 0.093800, -0.289000, -0.952700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.153073, -0.369552);
		glVertex3f( 0.000000, -0.078036, -0.392314);
		glVertex3f( 0.076537, -0.078036, -0.384776);
	glEnd();

	glNormal3f( 0.028600, -0.956500, -0.290200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.392314, -0.078036);
		glVertex3f( 0.000000, -0.369552, -0.153073);
		glVertex3f( 0.029863, -0.369552, -0.150132);
	glEnd();

	glNormal3f( 0.046400, 0.881000, -0.470900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.369552, -0.153073);
		glVertex3f( 0.029863, 0.369552, -0.150132);
		glVertex3f( 0.043355, 0.332588, -0.217958);
	glEnd();

	glNormal3f( 0.097500, -0.097500, -0.990400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.078036, -0.392314);
		glVertex3f( 0.000000, 0.000000, -0.400000);
		glVertex3f( 0.078036, 0.000000, -0.392314);
	glEnd();

	glNormal3f( 0.097500, 0.097500, -0.990400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.078036, -0.392314);
		glVertex3f( 0.076537, 0.078036, -0.384776);
		glVertex3f( 0.078036, 0.000000, -0.392314);
	glEnd();

	glNormal3f( 0.046400, -0.881000, -0.470900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.332588, -0.222228);
		glVertex3f( 0.043355, -0.332588, -0.217958);
		glVertex3f( 0.029863, -0.369552, -0.150132);
	glEnd();

	glNormal3f( 0.028600, 0.956500, -0.290200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.369552, -0.153073);
		glVertex3f( 0.000000, 0.392314, -0.078036);
		glVertex3f( 0.015224, 0.392314, -0.076537);
	glEnd();

	glNormal3f( 0.093800, 0.289000, -0.952700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.078036, -0.392314);
		glVertex3f( 0.000000, 0.153073, -0.369552);
		glVertex3f( 0.072096, 0.153073, -0.362451);
	glEnd();

	glNormal3f( 0.062400, -0.771500, -0.633200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.282843, -0.282843);
		glVertex3f( 0.055180, -0.282843, -0.277408);
		glVertex3f( 0.043355, -0.332588, -0.217958);
	glEnd();

	glNormal3f( 0.075900, -0.632600, -0.770800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.282843, -0.282843);
		glVertex3f( 0.000000, -0.222228, -0.332588);
		glVertex3f( 0.064885, -0.222228, -0.326197);
	glEnd();

	glNormal3f( 0.288900, 0.097500, -0.952400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.076537, 0.078036, -0.384776);
		glVertex3f( 0.150132, 0.078036, -0.362451);
		glVertex3f( 0.153074, 0.000000, -0.369552);
	glEnd();

	glNormal3f( 0.277900, 0.289000, -0.916100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.076537, 0.078036, -0.384776);
		glVertex3f( 0.072096, 0.153073, -0.362451);
		glVertex3f( 0.141422, 0.153073, -0.341421);
	glEnd();

	glNormal3f( 0.184700, -0.771500, -0.608800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.043355, -0.332588, -0.217958);
		glVertex3f( 0.055180, -0.282843, -0.277408);
		glVertex3f( 0.108239, -0.282843, -0.261313);
	glEnd();

	glNormal3f( 0.256300, 0.469600, -0.844800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.064885, 0.222228, -0.326197);
		glVertex3f( 0.127276, 0.222228, -0.307271);
		glVertex3f( 0.141422, 0.153073, -0.341421);
	glEnd();

	glNormal3f( 0.224800, -0.632600, -0.741200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.055180, -0.282843, -0.277408);
		glVertex3f( 0.064885, -0.222228, -0.326197);
		glVertex3f( 0.127276, -0.222228, -0.307271);
	glEnd();

	glNormal3f( 0.256300, -0.469600, -0.844800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.064885, -0.222228, -0.326197);
		glVertex3f( 0.072096, -0.153073, -0.362451);
		glVertex3f( 0.141422, -0.153073, -0.341421);
	glEnd();

	glNormal3f( 0.224800, 0.632600, -0.741200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.055180, 0.282843, -0.277408);
		glVertex3f( 0.108239, 0.282843, -0.261313);
		glVertex3f( 0.127276, 0.222228, -0.307271);
	glEnd();

	glNormal3f( 0.277900, -0.289000, -0.916100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.072096, -0.153073, -0.362451);
		glVertex3f( 0.076537, -0.078036, -0.384776);
		glVertex3f( 0.150132, -0.078036, -0.362451);
	glEnd();

	glNormal3f( 0.084600, -0.956500, -0.279000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.015224, -0.392314, -0.076537);
		glVertex3f( 0.029863, -0.369552, -0.150132);
		glVertex3f( 0.058579, -0.369552, -0.141421);
	glEnd();

	glNormal3f( 0.184700, 0.771500, -0.608800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.043355, 0.332588, -0.217958);
		glVertex3f( 0.085043, 0.332588, -0.205312);
		glVertex3f( 0.108239, 0.282843, -0.261313);
	glEnd();

	glNormal3f( 0.137400, 0.881000, -0.452800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.029863, 0.369552, -0.150132);
		glVertex3f( 0.058579, 0.369552, -0.141421);
		glVertex3f( 0.085043, 0.332588, -0.205312);
	glEnd();

	glNormal3f( 0.288900, -0.097500, -0.952400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.076537, -0.078036, -0.384776);
		glVertex3f( 0.078036, 0.000000, -0.392314);
		glVertex3f( 0.153074, 0.000000, -0.369552);
	glEnd();

	glNormal3f( 0.137400, -0.881000, -0.452800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.029863, -0.369552, -0.150132);
		glVertex3f( 0.043355, -0.332588, -0.217958);
		glVertex3f( 0.085043, -0.332588, -0.205312);
	glEnd();

	glNormal3f( 0.084600, 0.956500, -0.279000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.029863, 0.369552, -0.150132);
		glVertex3f( 0.015224, 0.392314, -0.076537);
		glVertex3f( 0.029863, 0.392314, -0.072096);
	glEnd();

	glNormal3f( 0.223100, -0.881000, -0.417300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.058579, -0.369552, -0.141421);
		glVertex3f( 0.085043, -0.332588, -0.205312);
		glVertex3f( 0.123464, -0.332588, -0.184776);
	glEnd();

	glNormal3f( 0.223000, 0.881000, -0.417300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.058579, 0.369552, -0.141421);
		glVertex3f( 0.085043, 0.369552, -0.127276);
		glVertex3f( 0.123464, 0.332588, -0.184776);
	glEnd();

	glNormal3f( 0.137400, 0.956500, -0.257100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.058579, 0.369552, -0.141421);
		glVertex3f( 0.029863, 0.392314, -0.072096);
		glVertex3f( 0.043355, 0.392314, -0.064885);
	glEnd();

	glNormal3f( 0.469100, 0.097500, -0.877700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.150132, 0.078036, -0.362451);
		glVertex3f( 0.217958, 0.078036, -0.326197);
		glVertex3f( 0.222228, 0.000000, -0.332588);
	glEnd();

	glNormal3f( 0.299900, -0.771500, -0.561100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.085043, -0.332588, -0.205312);
		glVertex3f( 0.108239, -0.282843, -0.261313);
		glVertex3f( 0.157139, -0.282843, -0.235175);
	glEnd();

	glNormal3f( 0.451300, 0.289000, -0.844300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.150132, 0.078036, -0.362451);
		glVertex3f( 0.141422, 0.153073, -0.341421);
		glVertex3f( 0.205312, 0.153073, -0.307271);
	glEnd();

	glNormal3f( 0.416200, 0.469600, -0.778600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.127276, 0.222228, -0.307271);
		glVertex3f( 0.184776, 0.222228, -0.276537);
		glVertex3f( 0.205312, 0.153073, -0.307271);
	glEnd();

	glNormal3f( 0.365100, -0.632600, -0.683100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.108239, -0.282843, -0.261313);
		glVertex3f( 0.127276, -0.222228, -0.307271);
		glVertex3f( 0.184776, -0.222228, -0.276537);
	glEnd();

	glNormal3f( 0.365100, 0.632600, -0.683100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.108239, 0.282843, -0.261313);
		glVertex3f( 0.157139, 0.282843, -0.235175);
		glVertex3f( 0.184776, 0.222228, -0.276537);
	glEnd();

	glNormal3f( 0.416200, -0.469600, -0.778600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.127276, -0.222228, -0.307271);
		glVertex3f( 0.141422, -0.153073, -0.341421);
		glVertex3f( 0.205312, -0.153073, -0.307271);
	glEnd();

	glNormal3f( 0.451300, -0.289000, -0.844300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.141422, -0.153073, -0.341421);
		glVertex3f( 0.150132, -0.078036, -0.362451);
		glVertex3f( 0.217958, -0.078036, -0.326197);
	glEnd();

	glNormal3f( 0.299900, 0.771500, -0.561100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.085043, 0.332588, -0.205312);
		glVertex3f( 0.123464, 0.332588, -0.184776);
		glVertex3f( 0.157139, 0.282843, -0.235175);
	glEnd();

	glNormal3f( 0.469100, -0.097500, -0.877700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.150132, -0.078036, -0.362451);
		glVertex3f( 0.153074, 0.000000, -0.369552);
		glVertex3f( 0.222228, 0.000000, -0.332588);
	glEnd();

	glNormal3f( 0.137400, -0.956500, -0.257100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.029863, -0.392314, -0.072096);
		glVertex3f( 0.058579, -0.369552, -0.141421);
		glVertex3f( 0.085043, -0.369552, -0.127276);
	glEnd();

	glNormal3f( 0.403600, 0.771500, -0.491800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.157139, 0.282843, -0.235175);
		glVertex3f( 0.123464, 0.332588, -0.184776);
		glVertex3f( 0.157139, 0.332588, -0.157139);
	glEnd();

	glNormal3f( 0.607300, -0.289000, -0.740000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.205312, -0.153073, -0.307271);
		glVertex3f( 0.217958, -0.078036, -0.326197);
		glVertex3f( 0.277408, -0.078036, -0.277408);
	glEnd();

	glNormal3f( 0.631400, -0.097500, -0.769300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.217958, -0.078036, -0.326197);
		glVertex3f( 0.222228, 0.000000, -0.332588);
		glVertex3f( 0.282843, 0.000000, -0.282843);
	glEnd();

	glNormal3f( 0.185000, -0.956500, -0.225400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.085043, -0.369552, -0.127276);
		glVertex3f( 0.108239, -0.369552, -0.108239);
		glVertex3f( 0.055180, -0.392314, -0.055180);
	glEnd();

	glNormal3f( 0.300200, 0.881000, -0.365800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.085043, 0.369552, -0.127276);
		glVertex3f( 0.108239, 0.369552, -0.108239);
		glVertex3f( 0.157139, 0.332588, -0.157139);
	glEnd();

	glNormal3f( 0.631400, 0.097500, -0.769300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.217958, 0.078036, -0.326197);
		glVertex3f( 0.277408, 0.078036, -0.277408);
		glVertex3f( 0.282843, 0.000000, -0.282843);
	glEnd();

	glNormal3f( 0.300200, -0.881000, -0.365800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.123464, -0.332588, -0.184776);
		glVertex3f( 0.157139, -0.332588, -0.157139);
		glVertex3f( 0.108239, -0.369552, -0.108239);
	glEnd();

	glNormal3f( 0.403600, -0.771500, -0.491800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.157139, -0.282843, -0.235175);
		glVertex3f( 0.200000, -0.282843, -0.200000);
		glVertex3f( 0.157139, -0.332588, -0.157139);
	glEnd();

	glNormal3f( 0.185000, 0.956500, -0.225400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.043355, 0.392314, -0.064885);
		glVertex3f( 0.055180, 0.392314, -0.055180);
		glVertex3f( 0.108239, 0.369552, -0.108239);
	glEnd();

	glNormal3f( 0.607300, 0.289000, -0.740000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.217958, 0.078036, -0.326197);
		glVertex3f( 0.205312, 0.153073, -0.307271);
		glVertex3f( 0.261313, 0.153073, -0.261313);
	glEnd();

	glNormal3f( 0.491300, -0.632600, -0.598700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.157139, -0.282843, -0.235175);
		glVertex3f( 0.184776, -0.222228, -0.276537);
		glVertex3f( 0.235175, -0.222228, -0.235175);
	glEnd();

	glNormal3f( 0.560100, 0.469600, -0.682500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.184776, 0.222228, -0.276537);
		glVertex3f( 0.235175, 0.222228, -0.235175);
		glVertex3f( 0.261313, 0.153073, -0.261313);
	glEnd();

	glNormal3f( 0.491300, 0.632600, -0.598700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.157139, 0.282843, -0.235175);
		glVertex3f( 0.200000, 0.282843, -0.200000);
		glVertex3f( 0.235175, 0.222228, -0.235175);
	glEnd();

	glNormal3f( 0.560100, -0.469600, -0.682500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.184776, -0.222228, -0.276537);
		glVertex3f( 0.205312, -0.153073, -0.307271);
		glVertex3f( 0.261313, -0.153073, -0.261313);
	glEnd();

	glNormal3f( 0.682500, -0.469600, -0.560100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.235175, -0.222228, -0.235175);
		glVertex3f( 0.261313, -0.153073, -0.261313);
		glVertex3f( 0.307271, -0.153073, -0.205312);
	glEnd();

	glNormal3f( 0.598700, 0.632600, -0.491300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.200000, 0.282843, -0.200000);
		glVertex3f( 0.235175, 0.282843, -0.157139);
		glVertex3f( 0.276537, 0.222228, -0.184776);
	glEnd();

	glNormal3f( 0.491800, 0.771500, -0.403600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.200000, 0.282843, -0.200000);
		glVertex3f( 0.157139, 0.332588, -0.157139);
		glVertex3f( 0.184776, 0.332588, -0.123463);
	glEnd();

	glNormal3f( 0.740000, -0.289000, -0.607300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.261313, -0.153073, -0.261313);
		glVertex3f( 0.277408, -0.078036, -0.277408);
		glVertex3f( 0.326197, -0.078036, -0.217958);
	glEnd();

	glNormal3f( 0.225400, -0.956500, -0.185000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.055180, -0.392314, -0.055180);
		glVertex3f( 0.108239, -0.369552, -0.108239);
		glVertex3f( 0.127276, -0.369552, -0.085043);
	glEnd();

	glNormal3f( 0.365800, 0.881000, -0.300200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.108239, 0.369552, -0.108239);
		glVertex3f( 0.127276, 0.369552, -0.085043);
		glVertex3f( 0.184776, 0.332588, -0.123463);
	glEnd();

	glNormal3f( 0.769300, -0.097500, -0.631400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.282843, 0.000000, -0.282843);
		glVertex3f( 0.332588, 0.000000, -0.222228);
		glVertex3f( 0.326197, -0.078036, -0.217958);
	glEnd();

	glNormal3f( 0.769300, 0.097500, -0.631400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.277408, 0.078036, -0.277408);
		glVertex3f( 0.326197, 0.078036, -0.217958);
		glVertex3f( 0.332588, 0.000000, -0.222228);
	glEnd();

	glNormal3f( 0.365800, -0.881000, -0.300200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.157139, -0.332588, -0.157139);
		glVertex3f( 0.184776, -0.332588, -0.123463);
		glVertex3f( 0.127276, -0.369552, -0.085043);
	glEnd();

	glNormal3f( 0.225400, 0.956500, -0.185000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.108239, 0.369552, -0.108239);
		glVertex3f( 0.055180, 0.392314, -0.055180);
		glVertex3f( 0.064885, 0.392314, -0.043355);
	glEnd();

	glNormal3f( 0.740000, 0.289000, -0.607300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.277408, 0.078036, -0.277408);
		glVertex3f( 0.261313, 0.153073, -0.261313);
		glVertex3f( 0.307271, 0.153073, -0.205312);
	glEnd();

	glNormal3f( 0.491800, -0.771500, -0.403600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.157139, -0.332588, -0.157139);
		glVertex3f( 0.200000, -0.282843, -0.200000);
		glVertex3f( 0.235175, -0.282843, -0.157139);
	glEnd();

	glNormal3f( 0.598700, -0.632600, -0.491300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.200000, -0.282843, -0.200000);
		glVertex3f( 0.235175, -0.222228, -0.235175);
		glVertex3f( 0.276537, -0.222228, -0.184776);
	glEnd();

	glNormal3f( 0.682500, 0.469600, -0.560100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.235175, 0.222228, -0.235175);
		glVertex3f( 0.276537, 0.222228, -0.184776);
		glVertex3f( 0.307271, 0.153073, -0.205312);
	glEnd();

	glNormal3f( 0.778600, 0.469600, -0.416200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.276537, 0.222228, -0.184776);
		glVertex3f( 0.307271, 0.222228, -0.127276);
		glVertex3f( 0.341421, 0.153073, -0.141421);
	glEnd();

	glNormal3f( 0.683100, -0.632600, -0.365100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.235175, -0.282843, -0.157139);
		glVertex3f( 0.276537, -0.222228, -0.184776);
		glVertex3f( 0.307271, -0.222228, -0.127276);
	glEnd();

	glNormal3f( 0.778600, -0.469600, -0.416200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.276537, -0.222228, -0.184776);
		glVertex3f( 0.307271, -0.153073, -0.205312);
		glVertex3f( 0.341422, -0.153073, -0.141421);
	glEnd();

	glNormal3f( 0.683100, 0.632600, -0.365100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.235175, 0.282843, -0.157139);
		glVertex3f( 0.261313, 0.282843, -0.108239);
		glVertex3f( 0.307271, 0.222228, -0.127276);
	glEnd();

	glNormal3f( 0.844300, -0.289000, -0.451300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.326197, -0.078036, -0.217958);
		glVertex3f( 0.362451, -0.078036, -0.150132);
		glVertex3f( 0.341422, -0.153073, -0.141421);
	glEnd();

	glNormal3f( 0.257100, -0.956500, -0.137400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.064885, -0.392314, -0.043355);
		glVertex3f( 0.127276, -0.369552, -0.085043);
		glVertex3f( 0.141421, -0.369552, -0.058579);
	glEnd();

	glNormal3f( 0.561100, 0.771500, -0.299900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.235175, 0.282843, -0.157139);
		glVertex3f( 0.184776, 0.332588, -0.123463);
		glVertex3f( 0.205312, 0.332588, -0.085043);
	glEnd();

	glNormal3f( 0.417300, 0.881000, -0.223100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.127276, 0.369552, -0.085043);
		glVertex3f( 0.141422, 0.369552, -0.058579);
		glVertex3f( 0.205312, 0.332588, -0.085043);
	glEnd();

	glNormal3f( 0.877700, -0.097500, -0.469100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.332588, 0.000000, -0.222228);
		glVertex3f( 0.369552, 0.000000, -0.153073);
		glVertex3f( 0.362451, -0.078036, -0.150132);
	glEnd();

	glNormal3f( 0.417300, -0.881000, -0.223000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.127276, -0.369552, -0.085043);
		glVertex3f( 0.184776, -0.332588, -0.123463);
		glVertex3f( 0.205312, -0.332588, -0.085043);
	glEnd();

	glNormal3f( 0.257100, 0.956500, -0.137400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.064885, 0.392314, -0.043355);
		glVertex3f( 0.072096, 0.392314, -0.029863);
		glVertex3f( 0.141422, 0.369552, -0.058579);
	glEnd();

	glNormal3f( 0.877700, 0.097500, -0.469100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.326197, 0.078036, -0.217958);
		glVertex3f( 0.362451, 0.078036, -0.150132);
		glVertex3f( 0.369552, 0.000000, -0.153073);
	glEnd();

	glNormal3f( 0.844300, 0.289000, -0.451300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.326197, 0.078036, -0.217958);
		glVertex3f( 0.307271, 0.153073, -0.205312);
		glVertex3f( 0.341421, 0.153073, -0.141421);
	glEnd();

	glNormal3f( 0.561100, -0.771500, -0.299900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.184776, -0.332588, -0.123463);
		glVertex3f( 0.235175, -0.282843, -0.157139);
		glVertex3f( 0.261313, -0.282843, -0.108239);
	glEnd();

	glNormal3f( 0.608800, -0.771500, -0.184700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.205312, -0.332588, -0.085043);
		glVertex3f( 0.261313, -0.282843, -0.108239);
		glVertex3f( 0.277408, -0.282843, -0.055180);
	glEnd();

	glNormal3f( 0.916100, 0.289000, -0.277900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.362451, 0.078036, -0.150132);
		glVertex3f( 0.341421, 0.153073, -0.141421);
		glVertex3f( 0.362451, 0.153073, -0.072096);
	glEnd();

	glNormal3f( 0.844800, 0.469600, -0.256300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.307271, 0.222228, -0.127276);
		glVertex3f( 0.326197, 0.222228, -0.064885);
		glVertex3f( 0.362451, 0.153073, -0.072096);
	glEnd();

	glNormal3f( 0.741200, -0.632600, -0.224800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.261313, -0.282843, -0.108239);
		glVertex3f( 0.307271, -0.222228, -0.127276);
		glVertex3f( 0.326197, -0.222228, -0.064885);
	glEnd();

	glNormal3f( 0.741200, 0.632600, -0.224800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.261313, 0.282843, -0.108239);
		glVertex3f( 0.277408, 0.282843, -0.055180);
		glVertex3f( 0.326197, 0.222228, -0.064885);
	glEnd();

	glNormal3f( 0.844800, -0.469600, -0.256300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.307271, -0.222228, -0.127276);
		glVertex3f( 0.341422, -0.153073, -0.141421);
		glVertex3f( 0.362451, -0.153073, -0.072096);
	glEnd();

	glNormal3f( 0.916100, -0.289000, -0.277900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.341422, -0.153073, -0.141421);
		glVertex3f( 0.362451, -0.078036, -0.150132);
		glVertex3f( 0.384776, -0.078036, -0.076537);
	glEnd();

	glNormal3f( 0.608800, 0.771500, -0.184700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.205312, 0.332588, -0.085043);
		glVertex3f( 0.217958, 0.332588, -0.043355);
		glVertex3f( 0.277408, 0.282843, -0.055180);
	glEnd();

	glNormal3f( 0.952400, -0.097500, -0.288900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.369552, 0.000000, -0.153073);
		glVertex3f( 0.392314, 0.000000, -0.078036);
		glVertex3f( 0.384776, -0.078036, -0.076537);
	glEnd();

	glNormal3f( 0.279000, -0.956500, -0.084600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.072096, -0.392314, -0.029863);
		glVertex3f( 0.141421, -0.369552, -0.058579);
		glVertex3f( 0.150132, -0.369552, -0.029863);
	glEnd();

	glNormal3f( 0.452800, -0.881000, -0.137400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.205312, -0.332588, -0.085043);
		glVertex3f( 0.217958, -0.332588, -0.043355);
		glVertex3f( 0.150132, -0.369552, -0.029863);
	glEnd();

	glNormal3f( 0.452800, 0.881000, -0.137400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.205312, 0.332588, -0.085043);
		glVertex3f( 0.141422, 0.369552, -0.058579);
		glVertex3f( 0.150132, 0.369552, -0.029863);
	glEnd();

	glNormal3f( 0.279000, 0.956500, -0.084600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.141422, 0.369552, -0.058579);
		glVertex3f( 0.072096, 0.392314, -0.029863);
		glVertex3f( 0.076537, 0.392314, -0.015224);
	glEnd();

	glNormal3f( 0.952400, 0.097500, -0.288900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.362451, 0.078036, -0.150132);
		glVertex3f( 0.384776, 0.078036, -0.076537);
		glVertex3f( 0.392314, 0.000000, -0.078036);
	glEnd();

	glNormal3f( 0.470900, 0.881000, -0.046400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.150132, 0.369552, -0.029863);
		glVertex3f( 0.153074, 0.369552, 0.000000);
		glVertex3f( 0.222228, 0.332588, 0.000000);
	glEnd();

	glNormal3f( 0.990400, 0.097500, -0.097500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.384776, 0.078036, -0.076537);
		glVertex3f( 0.392314, 0.078036, 0.000000);
		glVertex3f( 0.400000, 0.000000, 0.000000);
	glEnd();

	glNormal3f( 0.470900, -0.881000, -0.046400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.150132, -0.369552, -0.029863);
		glVertex3f( 0.217958, -0.332588, -0.043355);
		glVertex3f( 0.222228, -0.332588, 0.000000);
	glEnd();

	glNormal3f( 0.633200, -0.771500, -0.062400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.217958, -0.332588, -0.043355);
		glVertex3f( 0.277408, -0.282843, -0.055180);
		glVertex3f( 0.282843, -0.282843, 0.000000);
	glEnd();

	glNormal3f( 0.290200, 0.956500, -0.028600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.150132, 0.369552, -0.029863);
		glVertex3f( 0.076537, 0.392314, -0.015224);
		glVertex3f( 0.078036, 0.392314, 0.000000);
	glEnd();

	glNormal3f( 0.952700, 0.289000, -0.093800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.384776, 0.078036, -0.076537);
		glVertex3f( 0.362451, 0.153073, -0.072096);
		glVertex3f( 0.369552, 0.153073, 0.000000);
	glEnd();

	glNormal3f( 0.770800, -0.632600, -0.075900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.277408, -0.282843, -0.055180);
		glVertex3f( 0.326197, -0.222228, -0.064885);
		glVertex3f( 0.332588, -0.222228, 0.000000);
	glEnd();

	glNormal3f( 0.878600, 0.469600, -0.086500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.326197, 0.222228, -0.064885);
		glVertex3f( 0.332588, 0.222228, 0.000000);
		glVertex3f( 0.369552, 0.153073, 0.000000);
	glEnd();

	glNormal3f( 0.770800, 0.632600, -0.075900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.277408, 0.282843, -0.055180);
		glVertex3f( 0.282843, 0.282843, 0.000000);
		glVertex3f( 0.332588, 0.222228, 0.000000);
	glEnd();

	glNormal3f( 0.878600, -0.469600, -0.086500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.326197, -0.222228, -0.064885);
		glVertex3f( 0.362451, -0.153073, -0.072096);
		glVertex3f( 0.369552, -0.153073, 0.000000);
	glEnd();

	glNormal3f( 0.633200, 0.771500, -0.062400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.217958, 0.332588, -0.043355);
		glVertex3f( 0.222228, 0.332588, 0.000000);
		glVertex3f( 0.282843, 0.282843, 0.000000);
	glEnd();

	glNormal3f( 0.952700, -0.289000, -0.093800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.384776, -0.078036, -0.076537);
		glVertex3f( 0.392314, -0.078036, 0.000000);
		glVertex3f( 0.369552, -0.153073, 0.000000);
	glEnd();

	glNormal3f( 0.990400, -0.097500, -0.097500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.392314, 0.000000, -0.078036);
		glVertex3f( 0.400000, 0.000000, 0.000000);
		glVertex3f( 0.392314, -0.078036, 0.000000);
	glEnd();

	glNormal3f( 0.290200, -0.956500, -0.028600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.076537, -0.392314, -0.015224);
		glVertex3f( 0.150132, -0.369552, -0.029863);
		glVertex3f( 0.153074, -0.369552, 0.000000);
	glEnd();

	glNormal3f( 0.633200, 0.771500, 0.062400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.222228, 0.332588, 0.000000);
		glVertex3f( 0.217958, 0.332588, 0.043355);
		glVertex3f( 0.277408, 0.282843, 0.055180);
	glEnd();

	glNormal3f( 0.952700, -0.289000, 0.093800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.369552, -0.153073, 0.000000);
		glVertex3f( 0.392314, -0.078036, 0.000000);
		glVertex3f( 0.384776, -0.078036, 0.076537);
	glEnd();

	glNormal3f( 0.290200, -0.956500, 0.028600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.078036, -0.392314, 0.000000);
		glVertex3f( 0.153074, -0.369552, 0.000000);
		glVertex3f( 0.150132, -0.369552, 0.029863);
	glEnd();

	glNormal3f( 0.470900, 0.881000, 0.046400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.153074, 0.369552, 0.000000);
		glVertex3f( 0.150132, 0.369552, 0.029863);
		glVertex3f( 0.217958, 0.332588, 0.043355);
	glEnd();

	glNormal3f( 0.990400, -0.097500, 0.097500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.400000, 0.000000, 0.000000);
		glVertex3f( 0.392314, 0.000000, 0.078036);
		glVertex3f( 0.384776, -0.078036, 0.076537);
	glEnd();

	glNormal3f( 0.990400, 0.097500, 0.097500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.392314, 0.078036, 0.000000);
		glVertex3f( 0.384776, 0.078036, 0.076537);
		glVertex3f( 0.392314, 0.000000, 0.078036);
	glEnd();

	glNormal3f( 0.470900, -0.881000, 0.046400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.153074, -0.369552, 0.000000);
		glVertex3f( 0.222228, -0.332588, 0.000000);
		glVertex3f( 0.217958, -0.332588, 0.043355);
	glEnd();

	glNormal3f( 0.290200, 0.956500, 0.028600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.078036, 0.392314, 0.000000);
		glVertex3f( 0.076537, 0.392314, 0.015224);
		glVertex3f( 0.150132, 0.369552, 0.029863);
	glEnd();

	glNormal3f( 0.952700, 0.289000, 0.093800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.392314, 0.078036, 0.000000);
		glVertex3f( 0.369552, 0.153073, 0.000000);
		glVertex3f( 0.362451, 0.153073, 0.072096);
	glEnd();

	glNormal3f( 0.633200, -0.771500, 0.062400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.282843, -0.282843, 0.000000);
		glVertex3f( 0.277408, -0.282843, 0.055180);
		glVertex3f( 0.217958, -0.332588, 0.043355);
	glEnd();

	glNormal3f( 0.770800, -0.632600, 0.075900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.282843, -0.282843, 0.000000);
		glVertex3f( 0.332588, -0.222228, 0.000000);
		glVertex3f( 0.326197, -0.222228, 0.064885);
	glEnd();

	glNormal3f( 0.878600, 0.469600, 0.086500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.332588, 0.222228, 0.000000);
		glVertex3f( 0.326197, 0.222228, 0.064885);
		glVertex3f( 0.362451, 0.153073, 0.072096);
	glEnd();

	glNormal3f( 0.878600, -0.469600, 0.086500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.332588, -0.222228, 0.000000);
		glVertex3f( 0.369552, -0.153073, 0.000000);
		glVertex3f( 0.362451, -0.153073, 0.072096);
	glEnd();

	glNormal3f( 0.770800, 0.632600, 0.075900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.282843, 0.282843, 0.000000);
		glVertex3f( 0.277408, 0.282843, 0.055180);
		glVertex3f( 0.326197, 0.222228, 0.064885);
	glEnd();

	glNormal3f( 0.741200, 0.632600, 0.224800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.277408, 0.282843, 0.055180);
		glVertex3f( 0.261313, 0.282843, 0.108239);
		glVertex3f( 0.307271, 0.222228, 0.127276);
	glEnd();

	glNormal3f( 0.916100, -0.289000, 0.277900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.384776, -0.078036, 0.076537);
		glVertex3f( 0.362451, -0.078036, 0.150132);
		glVertex3f( 0.341421, -0.153073, 0.141421);
	glEnd();

	glNormal3f( 0.279000, -0.956500, 0.084600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.150132, -0.369552, 0.029863);
		glVertex3f( 0.141421, -0.369552, 0.058579);
		glVertex3f( 0.072096, -0.392314, 0.029863);
	glEnd();

	glNormal3f( 0.608800, 0.771500, 0.184700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.217958, 0.332588, 0.043355);
		glVertex3f( 0.205312, 0.332588, 0.085043);
		glVertex3f( 0.261313, 0.282843, 0.108239);
	glEnd();

	glNormal3f( 0.452800, 0.881000, 0.137400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.150132, 0.369552, 0.029863);
		glVertex3f( 0.141422, 0.369552, 0.058579);
		glVertex3f( 0.205312, 0.332588, 0.085043);
	glEnd();

	glNormal3f( 0.952400, -0.097500, 0.288900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.392314, 0.000000, 0.078036);
		glVertex3f( 0.369552, 0.000000, 0.153073);
		glVertex3f( 0.362451, -0.078036, 0.150132);
	glEnd();

	glNormal3f( 0.452800, -0.881000, 0.137400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.217958, -0.332588, 0.043355);
		glVertex3f( 0.205312, -0.332588, 0.085043);
		glVertex3f( 0.141421, -0.369552, 0.058579);
	glEnd();

	glNormal3f( 0.279000, 0.956500, 0.084600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.076537, 0.392314, 0.015224);
		glVertex3f( 0.072096, 0.392314, 0.029863);
		glVertex3f( 0.141422, 0.369552, 0.058579);
	glEnd();

	glNormal3f( 0.952400, 0.097500, 0.288900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.384776, 0.078036, 0.076537);
		glVertex3f( 0.362451, 0.078036, 0.150132);
		glVertex3f( 0.369552, 0.000000, 0.153073);
	glEnd();

	glNormal3f( 0.916100, 0.289000, 0.277900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.384776, 0.078036, 0.076537);
		glVertex3f( 0.362451, 0.153073, 0.072096);
		glVertex3f( 0.341421, 0.153073, 0.141421);
	glEnd();

	glNormal3f( 0.608800, -0.771500, 0.184700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.217958, -0.332588, 0.043355);
		glVertex3f( 0.277408, -0.282843, 0.055180);
		glVertex3f( 0.261313, -0.282843, 0.108239);
	glEnd();

	glNormal3f( 0.844800, 0.469600, 0.256300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.326197, 0.222228, 0.064885);
		glVertex3f( 0.307271, 0.222228, 0.127276);
		glVertex3f( 0.341421, 0.153073, 0.141421);
	glEnd();

	glNormal3f( 0.741200, -0.632600, 0.224800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.277408, -0.282843, 0.055180);
		glVertex3f( 0.326197, -0.222228, 0.064885);
		glVertex3f( 0.307271, -0.222228, 0.127276);
	glEnd();

	glNormal3f( 0.844800, -0.469600, 0.256300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.326197, -0.222228, 0.064885);
		glVertex3f( 0.362451, -0.153073, 0.072096);
		glVertex3f( 0.341421, -0.153073, 0.141421);
	glEnd();

	glNormal3f( 0.844300, 0.289000, 0.451300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.362451, 0.078036, 0.150132);
		glVertex3f( 0.341421, 0.153073, 0.141421);
		glVertex3f( 0.307271, 0.153073, 0.205312);
	glEnd();

	glNormal3f( 0.778600, 0.469600, 0.416200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.307271, 0.222228, 0.127276);
		glVertex3f( 0.276537, 0.222228, 0.184776);
		glVertex3f( 0.307271, 0.153073, 0.205312);
	glEnd();

	glNormal3f( 0.683100, -0.632600, 0.365100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.261313, -0.282843, 0.108239);
		glVertex3f( 0.307271, -0.222228, 0.127276);
		glVertex3f( 0.276537, -0.222228, 0.184776);
	glEnd();

	glNormal3f( 0.683100, 0.632600, 0.365100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.261313, 0.282843, 0.108239);
		glVertex3f( 0.235175, 0.282843, 0.157139);
		glVertex3f( 0.276537, 0.222228, 0.184776);
	glEnd();

	glNormal3f( 0.778600, -0.469600, 0.416200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.307271, -0.222228, 0.127276);
		glVertex3f( 0.341421, -0.153073, 0.141421);
		glVertex3f( 0.307271, -0.153073, 0.205312);
	glEnd();

	glNormal3f( 0.844300, -0.289000, 0.451300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.362451, -0.078036, 0.150132);
		glVertex3f( 0.326197, -0.078036, 0.217958);
		glVertex3f( 0.307271, -0.153073, 0.205312);
	glEnd();

	glNormal3f( 0.561100, 0.771500, 0.299900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.205312, 0.332588, 0.085043);
		glVertex3f( 0.184776, 0.332588, 0.123463);
		glVertex3f( 0.235175, 0.282843, 0.157139);
	glEnd();

	glNormal3f( 0.877700, -0.097500, 0.469100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.369552, 0.000000, 0.153073);
		glVertex3f( 0.332588, 0.000000, 0.222228);
		glVertex3f( 0.326197, -0.078036, 0.217958);
	glEnd();

	glNormal3f( 0.257100, -0.956500, 0.137400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.072096, -0.392314, 0.029863);
		glVertex3f( 0.141421, -0.369552, 0.058579);
		glVertex3f( 0.127276, -0.369552, 0.085043);
	glEnd();

	glNormal3f( 0.417300, -0.881000, 0.223100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.205312, -0.332588, 0.085043);
		glVertex3f( 0.184776, -0.332588, 0.123463);
		glVertex3f( 0.127276, -0.369552, 0.085043);
	glEnd();

	glNormal3f( 0.417300, 0.881000, 0.223000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.141422, 0.369552, 0.058579);
		glVertex3f( 0.127276, 0.369552, 0.085043);
		glVertex3f( 0.184776, 0.332588, 0.123463);
	glEnd();

	glNormal3f( 0.257100, 0.956500, 0.137400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.072096, 0.392314, 0.029863);
		glVertex3f( 0.064885, 0.392314, 0.043355);
		glVertex3f( 0.127276, 0.369552, 0.085043);
	glEnd();

	glNormal3f( 0.877700, 0.097500, 0.469100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.362451, 0.078036, 0.150132);
		glVertex3f( 0.326197, 0.078036, 0.217958);
		glVertex3f( 0.332588, 0.000000, 0.222228);
	glEnd();

	glNormal3f( 0.561100, -0.771500, 0.299900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.205312, -0.332588, 0.085043);
		glVertex3f( 0.261313, -0.282843, 0.108239);
		glVertex3f( 0.235175, -0.282843, 0.157139);
	glEnd();

	glNormal3f( 0.491800, -0.771500, 0.403600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.184776, -0.332588, 0.123463);
		glVertex3f( 0.235175, -0.282843, 0.157139);
		glVertex3f( 0.200000, -0.282843, 0.200000);
	glEnd();

	glNormal3f( 0.225400, 0.956500, 0.185000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.064885, 0.392314, 0.043355);
		glVertex3f( 0.055180, 0.392314, 0.055180);
		glVertex3f( 0.108239, 0.369552, 0.108239);
	glEnd();

	glNormal3f( 0.740000, 0.289000, 0.607300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.326197, 0.078036, 0.217958);
		glVertex3f( 0.307271, 0.153073, 0.205312);
		glVertex3f( 0.261313, 0.153073, 0.261313);
	glEnd();

	glNormal3f( 0.598700, -0.632600, 0.491300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.235175, -0.282843, 0.157139);
		glVertex3f( 0.276537, -0.222228, 0.184776);
		glVertex3f( 0.235175, -0.222228, 0.235175);
	glEnd();

	glNormal3f( 0.682500, 0.469600, 0.560100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.276537, 0.222228, 0.184776);
		glVertex3f( 0.235175, 0.222228, 0.235175);
		glVertex3f( 0.261313, 0.153073, 0.261313);
	glEnd();

	glNormal3f( 0.598700, 0.632600, 0.491300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.235175, 0.282843, 0.157139);
		glVertex3f( 0.200000, 0.282843, 0.200000);
		glVertex3f( 0.235175, 0.222228, 0.235175);
	glEnd();

	glNormal3f( 0.682500, -0.469600, 0.560100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.276537, -0.222228, 0.184776);
		glVertex3f( 0.307271, -0.153073, 0.205312);
		glVertex3f( 0.261313, -0.153073, 0.261313);
	glEnd();

	glNormal3f( 0.491800, 0.771500, 0.403600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.235175, 0.282843, 0.157139);
		glVertex3f( 0.184776, 0.332588, 0.123463);
		glVertex3f( 0.157139, 0.332588, 0.157139);
	glEnd();

	glNormal3f( 0.740000, -0.289000, 0.607300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.326197, -0.078036, 0.217958);
		glVertex3f( 0.277408, -0.078036, 0.277408);
		glVertex3f( 0.261313, -0.153073, 0.261313);
	glEnd();

	glNormal3f( 0.769300, -0.097500, 0.631400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.326197, -0.078036, 0.217958);
		glVertex3f( 0.332588, 0.000000, 0.222228);
		glVertex3f( 0.282843, 0.000000, 0.282843);
	glEnd();

	glNormal3f( 0.225400, -0.956500, 0.185000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.127276, -0.369552, 0.085043);
		glVertex3f( 0.108239, -0.369552, 0.108239);
		glVertex3f( 0.055180, -0.392314, 0.055180);
	glEnd();

	glNormal3f( 0.365800, 0.881000, 0.300200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.127276, 0.369552, 0.085043);
		glVertex3f( 0.108239, 0.369552, 0.108239);
		glVertex3f( 0.157139, 0.332588, 0.157139);
	glEnd();

	glNormal3f( 0.769300, 0.097500, 0.631400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.326197, 0.078036, 0.217958);
		glVertex3f( 0.277408, 0.078036, 0.277408);
		glVertex3f( 0.282843, 0.000000, 0.282843);
	glEnd();

	glNormal3f( 0.365800, -0.881000, 0.300200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.184776, -0.332588, 0.123463);
		glVertex3f( 0.157139, -0.332588, 0.157139);
		glVertex3f( 0.108239, -0.369552, 0.108239);
	glEnd();

	glNormal3f( 0.300200, 0.881000, 0.365800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.108239, 0.369552, 0.108239);
		glVertex3f( 0.085043, 0.369552, 0.127276);
		glVertex3f( 0.123463, 0.332588, 0.184776);
	glEnd();

	glNormal3f( 0.631400, -0.097500, 0.769300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.277408, -0.078036, 0.277408);
		glVertex3f( 0.282843, 0.000000, 0.282843);
		glVertex3f( 0.222228, 0.000000, 0.332588);
	glEnd();

	glNormal3f( 0.631400, 0.097500, 0.769300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.277408, 0.078036, 0.277408);
		glVertex3f( 0.217958, 0.078036, 0.326197);
		glVertex3f( 0.222228, 0.000000, 0.332588);
	glEnd();

	glNormal3f( 0.300200, -0.881000, 0.365800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.108239, -0.369552, 0.108239);
		glVertex3f( 0.157139, -0.332588, 0.157139);
		glVertex3f( 0.123463, -0.332588, 0.184776);
	glEnd();

	glNormal3f( 0.185000, 0.956500, 0.225400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.108239, 0.369552, 0.108239);
		glVertex3f( 0.055180, 0.392314, 0.055180);
		glVertex3f( 0.043355, 0.392314, 0.064885);
	glEnd();

	glNormal3f( 0.607300, 0.289000, 0.740000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.277408, 0.078036, 0.277408);
		glVertex3f( 0.261313, 0.153073, 0.261313);
		glVertex3f( 0.205312, 0.153073, 0.307271);
	glEnd();

	glNormal3f( 0.403600, -0.771500, 0.491800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.157139, -0.332588, 0.157139);
		glVertex3f( 0.200000, -0.282843, 0.200000);
		glVertex3f( 0.157139, -0.282843, 0.235175);
	glEnd();

	glNormal3f( 0.491300, -0.632600, 0.598700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.200000, -0.282843, 0.200000);
		glVertex3f( 0.235175, -0.222228, 0.235175);
		glVertex3f( 0.184776, -0.222228, 0.276537);
	glEnd();

	glNormal3f( 0.560100, 0.469600, 0.682500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.235175, 0.222228, 0.235175);
		glVertex3f( 0.184776, 0.222228, 0.276537);
		glVertex3f( 0.205312, 0.153073, 0.307271);
	glEnd();

	glNormal3f( 0.560100, -0.469600, 0.682500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.235175, -0.222228, 0.235175);
		glVertex3f( 0.261313, -0.153073, 0.261313);
		glVertex3f( 0.205312, -0.153073, 0.307271);
	glEnd();

	glNormal3f( 0.491300, 0.632600, 0.598700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.200000, 0.282843, 0.200000);
		glVertex3f( 0.157139, 0.282843, 0.235175);
		glVertex3f( 0.184776, 0.222228, 0.276537);
	glEnd();

	glNormal3f( 0.403600, 0.771500, 0.491800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.157139, 0.332588, 0.157139);
		glVertex3f( 0.123463, 0.332588, 0.184776);
		glVertex3f( 0.157139, 0.282843, 0.235175);
	glEnd();

	glNormal3f( 0.607300, -0.289000, 0.740000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.277408, -0.078036, 0.277408);
		glVertex3f( 0.217958, -0.078036, 0.326197);
		glVertex3f( 0.205312, -0.153073, 0.307271);
	glEnd();

	glNormal3f( 0.185000, -0.956500, 0.225400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.108239, -0.369552, 0.108239);
		glVertex3f( 0.085043, -0.369552, 0.127276);
		glVertex3f( 0.043355, -0.392314, 0.064885);
	glEnd();

	glNormal3f( 0.451300, -0.289000, 0.844300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.217958, -0.078036, 0.326197);
		glVertex3f( 0.150132, -0.078036, 0.362451);
		glVertex3f( 0.141421, -0.153073, 0.341421);
	glEnd();

	glNormal3f( 0.137400, -0.956500, 0.257100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.043355, -0.392314, 0.064885);
		glVertex3f( 0.085043, -0.369552, 0.127276);
		glVertex3f( 0.058579, -0.369552, 0.141421);
	glEnd();

	glNormal3f( 0.299900, 0.771500, 0.561100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.123463, 0.332588, 0.184776);
		glVertex3f( 0.085043, 0.332588, 0.205312);
		glVertex3f( 0.108239, 0.282843, 0.261313);
	glEnd();

	glNormal3f( 0.223000, 0.881000, 0.417300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.085043, 0.369552, 0.127276);
		glVertex3f( 0.058579, 0.369552, 0.141421);
		glVertex3f( 0.085043, 0.332588, 0.205312);
	glEnd();

	glNormal3f( 0.469100, -0.097500, 0.877700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.222228, 0.000000, 0.332588);
		glVertex3f( 0.153073, 0.000000, 0.369552);
		glVertex3f( 0.150132, -0.078036, 0.362451);
	glEnd();

	glNormal3f( 0.223000, -0.881000, 0.417300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.085043, -0.369552, 0.127276);
		glVertex3f( 0.123463, -0.332588, 0.184776);
		glVertex3f( 0.085043, -0.332588, 0.205312);
	glEnd();

	glNormal3f( 0.137400, 0.956500, 0.257100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.085043, 0.369552, 0.127276);
		glVertex3f( 0.043355, 0.392314, 0.064885);
		glVertex3f( 0.029863, 0.392314, 0.072096);
	glEnd();

	glNormal3f( 0.469100, 0.097600, 0.877700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.217958, 0.078036, 0.326197);
		glVertex3f( 0.150132, 0.078036, 0.362451);
		glVertex3f( 0.153073, 0.000000, 0.369552);
	glEnd();

	glNormal3f( 0.451300, 0.289000, 0.844300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.217958, 0.078036, 0.326197);
		glVertex3f( 0.205312, 0.153073, 0.307271);
		glVertex3f( 0.141421, 0.153073, 0.341421);
	glEnd();

	glNormal3f( 0.299900, -0.771500, 0.561100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.123463, -0.332588, 0.184776);
		glVertex3f( 0.157139, -0.282843, 0.235175);
		glVertex3f( 0.108239, -0.282843, 0.261313);
	glEnd();

	glNormal3f( 0.416200, 0.469600, 0.778600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.184776, 0.222228, 0.276537);
		glVertex3f( 0.127276, 0.222228, 0.307271);
		glVertex3f( 0.141421, 0.153073, 0.341421);
	glEnd();

	glNormal3f( 0.365100, -0.632600, 0.683100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.157139, -0.282843, 0.235175);
		glVertex3f( 0.184776, -0.222228, 0.276537);
		glVertex3f( 0.127276, -0.222228, 0.307271);
	glEnd();

	glNormal3f( 0.416200, -0.469600, 0.778600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.184776, -0.222228, 0.276537);
		glVertex3f( 0.205312, -0.153073, 0.307271);
		glVertex3f( 0.141421, -0.153073, 0.341421);
	glEnd();

	glNormal3f( 0.365100, 0.632600, 0.683100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.157139, 0.282843, 0.235175);
		glVertex3f( 0.108239, 0.282843, 0.261313);
		glVertex3f( 0.127276, 0.222228, 0.307271);
	glEnd();

	glNormal3f( 0.224800, 0.632600, 0.741200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.108239, 0.282843, 0.261313);
		glVertex3f( 0.055180, 0.282843, 0.277408);
		glVertex3f( 0.064885, 0.222228, 0.326197);
	glEnd();

	glNormal3f( 0.256300, -0.469600, 0.844800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.127276, -0.222228, 0.307271);
		glVertex3f( 0.141421, -0.153073, 0.341421);
		glVertex3f( 0.072096, -0.153073, 0.362451);
	glEnd();

	glNormal3f( 0.277900, -0.289000, 0.916100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.150132, -0.078036, 0.362451);
		glVertex3f( 0.076537, -0.078036, 0.384776);
		glVertex3f( 0.072096, -0.153073, 0.362451);
	glEnd();

	glNormal3f( 0.184700, 0.771500, 0.608800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.108239, 0.282843, 0.261313);
		glVertex3f( 0.085043, 0.332588, 0.205312);
		glVertex3f( 0.043355, 0.332588, 0.217958);
	glEnd();

	glNormal3f( 0.288900, -0.097500, 0.952400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.153073, 0.000000, 0.369552);
		glVertex3f( 0.078036, 0.000000, 0.392314);
		glVertex3f( 0.076537, -0.078036, 0.384776);
	glEnd();

	glNormal3f( 0.084600, -0.956500, 0.279000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.029863, -0.392314, 0.072096);
		glVertex3f( 0.058579, -0.369552, 0.141421);
		glVertex3f( 0.029863, -0.369552, 0.150132);
	glEnd();

	glNormal3f( 0.137400, -0.881000, 0.452800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.058579, -0.369552, 0.141421);
		glVertex3f( 0.085043, -0.332588, 0.205312);
		glVertex3f( 0.043355, -0.332588, 0.217958);
	glEnd();

	glNormal3f( 0.137400, 0.881000, 0.452800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.058579, 0.369552, 0.141421);
		glVertex3f( 0.029863, 0.369552, 0.150132);
		glVertex3f( 0.043355, 0.332588, 0.217958);
	glEnd();

	glNormal3f( 0.084600, 0.956500, 0.279000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.058579, 0.369552, 0.141421);
		glVertex3f( 0.029863, 0.392314, 0.072096);
		glVertex3f( 0.015224, 0.392314, 0.076537);
	glEnd();

	glNormal3f( 0.288900, 0.097600, 0.952400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.150132, 0.078036, 0.362451);
		glVertex3f( 0.076537, 0.078036, 0.384776);
		glVertex3f( 0.078036, 0.000000, 0.392314);
	glEnd();

	glNormal3f( 0.184700, -0.771500, 0.608800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.108239, -0.282843, 0.261313);
		glVertex3f( 0.055180, -0.282843, 0.277408);
		glVertex3f( 0.043355, -0.332588, 0.217958);
	glEnd();

	glNormal3f( 0.277900, 0.289000, 0.916100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.150132, 0.078036, 0.362451);
		glVertex3f( 0.141421, 0.153073, 0.341421);
		glVertex3f( 0.072096, 0.153073, 0.362451);
	glEnd();

	glNormal3f( 0.256300, 0.469600, 0.844800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.127276, 0.222228, 0.307271);
		glVertex3f( 0.064885, 0.222228, 0.326197);
		glVertex3f( 0.072096, 0.153073, 0.362451);
	glEnd();

	glNormal3f( 0.224800, -0.632600, 0.741200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.108239, -0.282843, 0.261313);
		glVertex3f( 0.127276, -0.222228, 0.307271);
		glVertex3f( 0.064885, -0.222228, 0.326197);
	glEnd();

	glNormal3f( 0.075900, -0.632600, 0.770800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.055180, -0.282843, 0.277408);
		glVertex3f( 0.064885, -0.222228, 0.326197);
		glVertex3f( 0.000000, -0.222228, 0.332588);
	glEnd();

	glNormal3f( 0.086500, 0.469600, 0.878600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.064885, 0.222228, 0.326197);
		glVertex3f( 0.000000, 0.222228, 0.332588);
		glVertex3f( 0.000000, 0.153073, 0.369552);
	glEnd();

	glNormal3f( 0.075900, 0.632600, 0.770800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.055180, 0.282843, 0.277408);
		glVertex3f( 0.000000, 0.282843, 0.282843);
		glVertex3f( 0.000000, 0.222228, 0.332588);
	glEnd();

	glNormal3f( 0.086500, -0.469600, 0.878600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.064885, -0.222228, 0.326197);
		glVertex3f( 0.072096, -0.153073, 0.362451);
		glVertex3f( 0.000000, -0.153073, 0.369552);
	glEnd();

	glNormal3f( 0.062400, 0.771500, 0.633200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.055180, 0.282843, 0.277408);
		glVertex3f( 0.043355, 0.332588, 0.217958);
		glVertex3f( 0.000000, 0.332588, 0.222228);
	glEnd();

	glNormal3f( 0.093800, -0.289000, 0.952700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.076537, -0.078036, 0.384776);
		glVertex3f( 0.000000, -0.078036, 0.392314);
		glVertex3f( 0.000000, -0.153073, 0.369552);
	glEnd();

	glNormal3f( 0.097500, -0.097500, 0.990400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.078036, 0.000000, 0.392314);
		glVertex3f( 0.000000, 0.000000, 0.400000);
		glVertex3f( 0.000000, -0.078036, 0.392314);
	glEnd();

	glNormal3f( 0.028600, -0.956500, 0.290200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.029863, -0.369552, 0.150132);
		glVertex3f( 0.000000, -0.369552, 0.153073);
		glVertex3f( 0.000000, -0.392314, 0.078036);
	glEnd();

	glNormal3f( 0.046400, 0.881000, 0.470900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.029863, 0.369552, 0.150132);
		glVertex3f( 0.000000, 0.369552, 0.153073);
		glVertex3f( 0.000000, 0.332588, 0.222228);
	glEnd();

	glNormal3f( 0.097500, 0.097500, 0.990400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.076537, 0.078036, 0.384776);
		glVertex3f( 0.000000, 0.078036, 0.392314);
		glVertex3f( 0.000000, 0.000000, 0.400000);
	glEnd();

	glNormal3f( 0.046400, -0.881000, 0.470900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.043355, -0.332588, 0.217958);
		glVertex3f( 0.000000, -0.332588, 0.222228);
		glVertex3f( 0.000000, -0.369552, 0.153073);
	glEnd();

	glNormal3f( 0.062400, -0.771500, 0.633200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.055180, -0.282843, 0.277408);
		glVertex3f( 0.000000, -0.282843, 0.282843);
		glVertex3f( 0.000000, -0.332588, 0.222228);
	glEnd();

	glNormal3f( 0.028600, 0.956500, 0.290200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.029863, 0.369552, 0.150132);
		glVertex3f( 0.015224, 0.392314, 0.076537);
		glVertex3f( 0.000000, 0.392314, 0.078036);
	glEnd();

	glNormal3f( 0.093800, 0.289000, 0.952700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.076537, 0.078036, 0.384776);
		glVertex3f( 0.072096, 0.153073, 0.362451);
		glVertex3f( 0.000000, 0.153073, 0.369552);
	glEnd();

	glNormal3f( -0.028600, 0.956500, 0.290200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.392314, 0.078036);
		glVertex3f( -0.015224, 0.392314, 0.076537);
		glVertex3f( -0.029863, 0.369552, 0.150132);
	glEnd();

	glNormal3f( -0.093800, 0.289000, 0.952700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.078036, 0.392314);
		glVertex3f( 0.000000, 0.153073, 0.369552);
		glVertex3f( -0.072096, 0.153073, 0.362451);
	glEnd();

	glNormal3f( -0.062400, -0.771500, 0.633200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.282843, 0.282843);
		glVertex3f( -0.055180, -0.282843, 0.277408);
		glVertex3f( -0.043354, -0.332588, 0.217958);
	glEnd();

	glNormal3f( -0.075900, -0.632600, 0.770800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.282843, 0.282843);
		glVertex3f( 0.000000, -0.222228, 0.332588);
		glVertex3f( -0.064885, -0.222228, 0.326197);
	glEnd();

	glNormal3f( -0.086500, 0.469600, 0.878600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.222228, 0.332588);
		glVertex3f( -0.064885, 0.222228, 0.326197);
		glVertex3f( -0.072096, 0.153073, 0.362451);
	glEnd();

	glNormal3f( -0.086500, -0.469600, 0.878600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.222228, 0.332588);
		glVertex3f( 0.000000, -0.153073, 0.369552);
		glVertex3f( -0.072096, -0.153073, 0.362451);
	glEnd();

	glNormal3f( -0.075900, 0.632600, 0.770800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.282843, 0.282843);
		glVertex3f( -0.055180, 0.282843, 0.277408);
		glVertex3f( -0.064885, 0.222228, 0.326197);
	glEnd();

	glNormal3f( -0.062400, 0.771500, 0.633200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.332588, 0.222228);
		glVertex3f( -0.043354, 0.332588, 0.217958);
		glVertex3f( -0.055180, 0.282843, 0.277408);
	glEnd();

	glNormal3f( -0.093800, -0.289000, 0.952700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.078036, 0.392314);
		glVertex3f( -0.076537, -0.078036, 0.384776);
		glVertex3f( -0.072096, -0.153073, 0.362451);
	glEnd();

	glNormal3f( -0.028600, -0.956500, 0.290200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.392314, 0.078036);
		glVertex3f( 0.000000, -0.369552, 0.153073);
		glVertex3f( -0.029863, -0.369552, 0.150132);
	glEnd();

	glNormal3f( -0.046400, 0.881000, 0.470900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.369552, 0.153073);
		glVertex3f( -0.029863, 0.369552, 0.150132);
		glVertex3f( -0.043354, 0.332588, 0.217958);
	glEnd();

	glNormal3f( -0.097500, -0.097500, 0.990400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.000000, 0.400000);
		glVertex3f( -0.078036, 0.000000, 0.392314);
		glVertex3f( -0.076537, -0.078036, 0.384776);
	glEnd();

	glNormal3f( -0.097500, 0.097500, 0.990400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.078036, 0.392314);
		glVertex3f( -0.076537, 0.078036, 0.384776);
		glVertex3f( -0.078036, 0.000000, 0.392314);
	glEnd();

	glNormal3f( -0.046400, -0.881000, 0.470900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.369552, 0.153073);
		glVertex3f( 0.000000, -0.332588, 0.222228);
		glVertex3f( -0.043354, -0.332588, 0.217958);
	glEnd();

	glNormal3f( -0.137400, 0.881000, 0.452800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.029863, 0.369552, 0.150132);
		glVertex3f( -0.058579, 0.369552, 0.141421);
		glVertex3f( -0.085043, 0.332588, 0.205312);
	glEnd();

	glNormal3f( -0.288900, -0.097500, 0.952400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.076537, -0.078036, 0.384776);
		glVertex3f( -0.078036, 0.000000, 0.392314);
		glVertex3f( -0.153073, 0.000000, 0.369552);
	glEnd();

	glNormal3f( -0.137400, -0.881000, 0.452800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.029863, -0.369552, 0.150132);
		glVertex3f( -0.043354, -0.332588, 0.217958);
		glVertex3f( -0.085043, -0.332588, 0.205312);
	glEnd();

	glNormal3f( -0.084600, 0.956500, 0.279000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.029863, 0.369552, 0.150132);
		glVertex3f( -0.015224, 0.392314, 0.076537);
		glVertex3f( -0.029863, 0.392314, 0.072096);
	glEnd();

	glNormal3f( -0.288900, 0.097500, 0.952400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.076537, 0.078036, 0.384776);
		glVertex3f( -0.150132, 0.078036, 0.362451);
		glVertex3f( -0.153073, 0.000000, 0.369552);
	glEnd();

	glNormal3f( -0.277900, 0.289000, 0.916100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.076537, 0.078036, 0.384776);
		glVertex3f( -0.072096, 0.153073, 0.362451);
		glVertex3f( -0.141421, 0.153073, 0.341421);
	glEnd();

	glNormal3f( -0.184700, -0.771500, 0.608800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055180, -0.282843, 0.277408);
		glVertex3f( -0.108239, -0.282843, 0.261312);
		glVertex3f( -0.085043, -0.332588, 0.205312);
	glEnd();

	glNormal3f( -0.256300, 0.469600, 0.844800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.064885, 0.222228, 0.326197);
		glVertex3f( -0.127276, 0.222228, 0.307271);
		glVertex3f( -0.141421, 0.153073, 0.341421);
	glEnd();

	glNormal3f( -0.224800, -0.632600, 0.741200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055180, -0.282843, 0.277408);
		glVertex3f( -0.064885, -0.222228, 0.326197);
		glVertex3f( -0.127276, -0.222228, 0.307271);
	glEnd();

	glNormal3f( -0.256300, -0.469600, 0.844800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.064885, -0.222228, 0.326197);
		glVertex3f( -0.072096, -0.153073, 0.362451);
		glVertex3f( -0.141421, -0.153073, 0.341421);
	glEnd();

	glNormal3f( -0.224800, 0.632600, 0.741200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055180, 0.282843, 0.277408);
		glVertex3f( -0.108239, 0.282843, 0.261312);
		glVertex3f( -0.127276, 0.222228, 0.307271);
	glEnd();

	glNormal3f( -0.277900, -0.289000, 0.916100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.076537, -0.078036, 0.384776);
		glVertex3f( -0.150132, -0.078036, 0.362451);
		glVertex3f( -0.141421, -0.153073, 0.341421);
	glEnd();

	glNormal3f( -0.084600, -0.956500, 0.279000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.029863, -0.369552, 0.150132);
		glVertex3f( -0.058579, -0.369552, 0.141421);
		glVertex3f( -0.029863, -0.392314, 0.072096);
	glEnd();

	glNormal3f( -0.184700, 0.771500, 0.608800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.043354, 0.332588, 0.217958);
		glVertex3f( -0.085043, 0.332588, 0.205312);
		glVertex3f( -0.108239, 0.282843, 0.261312);
	glEnd();

	glNormal3f( -0.299900, 0.771500, 0.561100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.085043, 0.332588, 0.205312);
		glVertex3f( -0.123463, 0.332588, 0.184776);
		glVertex3f( -0.157139, 0.282843, 0.235175);
	glEnd();

	glNormal3f( -0.469100, -0.097500, 0.877700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.153073, 0.000000, 0.369552);
		glVertex3f( -0.222228, 0.000000, 0.332588);
		glVertex3f( -0.217958, -0.078036, 0.326197);
	glEnd();

	glNormal3f( -0.137400, -0.956500, 0.257100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.029863, -0.392314, 0.072096);
		glVertex3f( -0.058579, -0.369552, 0.141421);
		glVertex3f( -0.085043, -0.369552, 0.127276);
	glEnd();

	glNormal3f( -0.223100, -0.881000, 0.417300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.058579, -0.369552, 0.141421);
		glVertex3f( -0.085043, -0.332588, 0.205312);
		glVertex3f( -0.123463, -0.332588, 0.184776);
	glEnd();

	glNormal3f( -0.223100, 0.881000, 0.417300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.058579, 0.369552, 0.141421);
		glVertex3f( -0.085043, 0.369552, 0.127276);
		glVertex3f( -0.123463, 0.332588, 0.184776);
	glEnd();

	glNormal3f( -0.137400, 0.956500, 0.257100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.029863, 0.392314, 0.072096);
		glVertex3f( -0.043354, 0.392314, 0.064885);
		glVertex3f( -0.085043, 0.369552, 0.127276);
	glEnd();

	glNormal3f( -0.469100, 0.097500, 0.877700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.150132, 0.078036, 0.362451);
		glVertex3f( -0.217958, 0.078036, 0.326197);
		glVertex3f( -0.222228, 0.000000, 0.332588);
	glEnd();

	glNormal3f( -0.299900, -0.771500, 0.561100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.108239, -0.282843, 0.261312);
		glVertex3f( -0.157139, -0.282843, 0.235175);
		glVertex3f( -0.123463, -0.332588, 0.184776);
	glEnd();

	glNormal3f( -0.451300, 0.289000, 0.844300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.150132, 0.078036, 0.362451);
		glVertex3f( -0.141421, 0.153073, 0.341421);
		glVertex3f( -0.205312, 0.153073, 0.307271);
	glEnd();

	glNormal3f( -0.416200, 0.469600, 0.778600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.127276, 0.222228, 0.307271);
		glVertex3f( -0.184776, 0.222228, 0.276537);
		glVertex3f( -0.205312, 0.153073, 0.307271);
	glEnd();

	glNormal3f( -0.365100, -0.632600, 0.683100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.108239, -0.282843, 0.261312);
		glVertex3f( -0.127276, -0.222228, 0.307271);
		glVertex3f( -0.184776, -0.222228, 0.276537);
	glEnd();

	glNormal3f( -0.365100, 0.632600, 0.683100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.108239, 0.282843, 0.261312);
		glVertex3f( -0.157139, 0.282843, 0.235175);
		glVertex3f( -0.184776, 0.222228, 0.276537);
	glEnd();

	glNormal3f( -0.416200, -0.469600, 0.778600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.127276, -0.222228, 0.307271);
		glVertex3f( -0.141421, -0.153073, 0.341421);
		glVertex3f( -0.205312, -0.153073, 0.307271);
	glEnd();

	glNormal3f( -0.451300, -0.289000, 0.844300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.150132, -0.078036, 0.362451);
		glVertex3f( -0.217958, -0.078036, 0.326197);
		glVertex3f( -0.205312, -0.153073, 0.307271);
	glEnd();

	glNormal3f( -0.560100, 0.469600, 0.682500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.184776, 0.222228, 0.276537);
		glVertex3f( -0.235175, 0.222228, 0.235175);
		glVertex3f( -0.261312, 0.153073, 0.261312);
	glEnd();

	glNormal3f( -0.491300, 0.632600, 0.598700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.157139, 0.282843, 0.235175);
		glVertex3f( -0.200000, 0.282843, 0.200000);
		glVertex3f( -0.235175, 0.222228, 0.235175);
	glEnd();

	glNormal3f( -0.560100, -0.469600, 0.682500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.184776, -0.222228, 0.276537);
		glVertex3f( -0.205312, -0.153073, 0.307271);
		glVertex3f( -0.261312, -0.153073, 0.261312);
	glEnd();

	glNormal3f( -0.403600, 0.771500, 0.491800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.123463, 0.332588, 0.184776);
		glVertex3f( -0.157139, 0.332588, 0.157139);
		glVertex3f( -0.200000, 0.282843, 0.200000);
	glEnd();

	glNormal3f( -0.607300, -0.289000, 0.740000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.217958, -0.078036, 0.326197);
		glVertex3f( -0.277408, -0.078036, 0.277408);
		glVertex3f( -0.261312, -0.153073, 0.261312);
	glEnd();

	glNormal3f( -0.631400, -0.097500, 0.769300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.222228, 0.000000, 0.332588);
		glVertex3f( -0.282842, 0.000000, 0.282842);
		glVertex3f( -0.277408, -0.078036, 0.277408);
	glEnd();

	glNormal3f( -0.185000, -0.956500, 0.225400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.043354, -0.392314, 0.064885);
		glVertex3f( -0.085043, -0.369552, 0.127276);
		glVertex3f( -0.108239, -0.369552, 0.108239);
	glEnd();

	glNormal3f( -0.300200, 0.881000, 0.365800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.085043, 0.369552, 0.127276);
		glVertex3f( -0.108239, 0.369552, 0.108239);
		glVertex3f( -0.157139, 0.332588, 0.157139);
	glEnd();

	glNormal3f( -0.631400, 0.097500, 0.769300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.222228, 0.000000, 0.332588);
		glVertex3f( -0.217958, 0.078036, 0.326197);
		glVertex3f( -0.277408, 0.078036, 0.277408);
	glEnd();

	glNormal3f( -0.300200, -0.881000, 0.365800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.085043, -0.369552, 0.127276);
		glVertex3f( -0.123463, -0.332588, 0.184776);
		glVertex3f( -0.157139, -0.332588, 0.157139);
	glEnd();

	glNormal3f( -0.403600, -0.771500, 0.491800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.123463, -0.332588, 0.184776);
		glVertex3f( -0.157139, -0.282843, 0.235175);
		glVertex3f( -0.200000, -0.282843, 0.200000);
	glEnd();

	glNormal3f( -0.185000, 0.956500, 0.225400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.085043, 0.369552, 0.127276);
		glVertex3f( -0.043354, 0.392314, 0.064885);
		glVertex3f( -0.055180, 0.392314, 0.055180);
	glEnd();

	glNormal3f( -0.607300, 0.289000, 0.740000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.217958, 0.078036, 0.326197);
		glVertex3f( -0.205312, 0.153073, 0.307271);
		glVertex3f( -0.261312, 0.153073, 0.261312);
	glEnd();

	glNormal3f( -0.491300, -0.632600, 0.598700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.157139, -0.282843, 0.235175);
		glVertex3f( -0.184776, -0.222228, 0.276537);
		glVertex3f( -0.235175, -0.222228, 0.235175);
	glEnd();

	glNormal3f( -0.598700, -0.632600, 0.491300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.200000, -0.282843, 0.200000);
		glVertex3f( -0.235175, -0.222228, 0.235175);
		glVertex3f( -0.276537, -0.222228, 0.184776);
	glEnd();

	glNormal3f( -0.682500, 0.469600, 0.560100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.235175, 0.222228, 0.235175);
		glVertex3f( -0.276537, 0.222228, 0.184776);
		glVertex3f( -0.307271, 0.153073, 0.205312);
	glEnd();

	glNormal3f( -0.682500, -0.469600, 0.560100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.235175, -0.222228, 0.235175);
		glVertex3f( -0.261312, -0.153073, 0.261312);
		glVertex3f( -0.307271, -0.153073, 0.205312);
	glEnd();

	glNormal3f( -0.598700, 0.632600, 0.491300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.200000, 0.282843, 0.200000);
		glVertex3f( -0.235175, 0.282843, 0.157139);
		glVertex3f( -0.276537, 0.222228, 0.184776);
	glEnd();

	glNormal3f( -0.491800, 0.771500, 0.403600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.200000, 0.282843, 0.200000);
		glVertex3f( -0.157139, 0.332588, 0.157139);
		glVertex3f( -0.184776, 0.332588, 0.123463);
	glEnd();

	glNormal3f( -0.740000, -0.289000, 0.607300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.277408, -0.078036, 0.277408);
		glVertex3f( -0.326197, -0.078036, 0.217958);
		glVertex3f( -0.307271, -0.153073, 0.205312);
	glEnd();

	glNormal3f( -0.225400, -0.956500, 0.185000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055180, -0.392314, 0.055180);
		glVertex3f( -0.108239, -0.369552, 0.108239);
		glVertex3f( -0.127276, -0.369552, 0.085043);
	glEnd();

	glNormal3f( -0.365800, 0.881000, 0.300200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.108239, 0.369552, 0.108239);
		glVertex3f( -0.127276, 0.369552, 0.085043);
		glVertex3f( -0.184776, 0.332588, 0.123463);
	glEnd();

	glNormal3f( -0.769300, -0.097500, 0.631400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.282842, 0.000000, 0.282842);
		glVertex3f( -0.332588, 0.000000, 0.222228);
		glVertex3f( -0.326197, -0.078036, 0.217958);
	glEnd();

	glNormal3f( -0.769300, 0.097500, 0.631400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.282842, 0.000000, 0.282842);
		glVertex3f( -0.277408, 0.078036, 0.277408);
		glVertex3f( -0.326197, 0.078036, 0.217958);
	glEnd();

	glNormal3f( -0.365800, -0.881000, 0.300200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.157139, -0.332588, 0.157139);
		glVertex3f( -0.184776, -0.332588, 0.123463);
		glVertex3f( -0.127276, -0.369552, 0.085043);
	glEnd();

	glNormal3f( -0.225400, 0.956500, 0.185000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055180, 0.392314, 0.055180);
		glVertex3f( -0.064885, 0.392314, 0.043355);
		glVertex3f( -0.127276, 0.369552, 0.085043);
	glEnd();

	glNormal3f( -0.740000, 0.289000, 0.607300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.277408, 0.078036, 0.277408);
		glVertex3f( -0.261312, 0.153073, 0.261312);
		glVertex3f( -0.307271, 0.153073, 0.205312);
	glEnd();

	glNormal3f( -0.491800, -0.771500, 0.403600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.200000, -0.282843, 0.200000);
		glVertex3f( -0.235175, -0.282843, 0.157139);
		glVertex3f( -0.184776, -0.332588, 0.123463);
	glEnd();

	glNormal3f( -0.257100, 0.956500, 0.137400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.127276, 0.369552, 0.085043);
		glVertex3f( -0.064885, 0.392314, 0.043355);
		glVertex3f( -0.072096, 0.392314, 0.029863);
	glEnd();

	glNormal3f( -0.877700, 0.097500, 0.469100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.332588, 0.000000, 0.222228);
		glVertex3f( -0.326197, 0.078036, 0.217958);
		glVertex3f( -0.362451, 0.078036, 0.150132);
	glEnd();

	glNormal3f( -0.844300, 0.289000, 0.451300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.326197, 0.078036, 0.217958);
		glVertex3f( -0.307271, 0.153073, 0.205312);
		glVertex3f( -0.341421, 0.153073, 0.141421);
	glEnd();

	glNormal3f( -0.561100, -0.771500, 0.299900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.235175, -0.282843, 0.157139);
		glVertex3f( -0.261312, -0.282843, 0.108239);
		glVertex3f( -0.205312, -0.332588, 0.085043);
	glEnd();

	glNormal3f( -0.778600, 0.469600, 0.416200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.276537, 0.222228, 0.184776);
		glVertex3f( -0.307271, 0.222228, 0.127276);
		glVertex3f( -0.341421, 0.153073, 0.141421);
	glEnd();

	glNormal3f( -0.683100, -0.632600, 0.365100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.235175, -0.282843, 0.157139);
		glVertex3f( -0.276537, -0.222228, 0.184776);
		glVertex3f( -0.307271, -0.222228, 0.127276);
	glEnd();

	glNormal3f( -0.778600, -0.469600, 0.416200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.276537, -0.222228, 0.184776);
		glVertex3f( -0.307271, -0.153073, 0.205312);
		glVertex3f( -0.341421, -0.153073, 0.141421);
	glEnd();

	glNormal3f( -0.683100, 0.632600, 0.365100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.235175, 0.282843, 0.157139);
		glVertex3f( -0.261312, 0.282843, 0.108239);
		glVertex3f( -0.307271, 0.222228, 0.127276);
	glEnd();

	glNormal3f( -0.844300, -0.289000, 0.451300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.326197, -0.078036, 0.217958);
		glVertex3f( -0.362451, -0.078036, 0.150132);
		glVertex3f( -0.341421, -0.153073, 0.141421);
	glEnd();

	glNormal3f( -0.257100, -0.956500, 0.137400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.064885, -0.392314, 0.043355);
		glVertex3f( -0.127276, -0.369552, 0.085043);
		glVertex3f( -0.141421, -0.369552, 0.058579);
	glEnd();

	glNormal3f( -0.561100, 0.771500, 0.299900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.184776, 0.332588, 0.123463);
		glVertex3f( -0.205312, 0.332588, 0.085043);
		glVertex3f( -0.261312, 0.282843, 0.108239);
	glEnd();

	glNormal3f( -0.417300, 0.881000, 0.223100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.127276, 0.369552, 0.085043);
		glVertex3f( -0.141421, 0.369552, 0.058579);
		glVertex3f( -0.205312, 0.332588, 0.085043);
	glEnd();

	glNormal3f( -0.877700, -0.097500, 0.469100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.332588, 0.000000, 0.222228);
		glVertex3f( -0.369552, 0.000000, 0.153073);
		glVertex3f( -0.362451, -0.078036, 0.150132);
	glEnd();

	glNormal3f( -0.417300, -0.881000, 0.223100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.127276, -0.369552, 0.085043);
		glVertex3f( -0.184776, -0.332588, 0.123463);
		glVertex3f( -0.205312, -0.332588, 0.085043);
	glEnd();

	glNormal3f( -0.952400, -0.097500, 0.288900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.369552, 0.000000, 0.153073);
		glVertex3f( -0.392314, 0.000000, 0.078036);
		glVertex3f( -0.384776, -0.078036, 0.076537);
	glEnd();

	glNormal3f( -0.279000, -0.956500, 0.084600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.141421, -0.369552, 0.058579);
		glVertex3f( -0.150132, -0.369552, 0.029863);
		glVertex3f( -0.076537, -0.392314, 0.015224);
	glEnd();

	glNormal3f( -0.452800, -0.881000, 0.137400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.141421, -0.369552, 0.058579);
		glVertex3f( -0.205312, -0.332588, 0.085043);
		glVertex3f( -0.217958, -0.332588, 0.043354);
	glEnd();

	glNormal3f( -0.452800, 0.881000, 0.137400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.141421, 0.369552, 0.058579);
		glVertex3f( -0.150132, 0.369552, 0.029863);
		glVertex3f( -0.217958, 0.332588, 0.043354);
	glEnd();

	glNormal3f( -0.279000, 0.956500, 0.084600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.072096, 0.392314, 0.029863);
		glVertex3f( -0.076537, 0.392314, 0.015224);
		glVertex3f( -0.150132, 0.369552, 0.029863);
	glEnd();

	glNormal3f( -0.952400, 0.097600, 0.288900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.369552, 0.000000, 0.153073);
		glVertex3f( -0.362451, 0.078036, 0.150132);
		glVertex3f( -0.384776, 0.078036, 0.076537);
	glEnd();

	glNormal3f( -0.608800, -0.771500, 0.184700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.261312, -0.282843, 0.108239);
		glVertex3f( -0.277408, -0.282843, 0.055180);
		glVertex3f( -0.217958, -0.332588, 0.043354);
	glEnd();

	glNormal3f( -0.916100, 0.289000, 0.277900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.362451, 0.078036, 0.150132);
		glVertex3f( -0.341421, 0.153073, 0.141421);
		glVertex3f( -0.362451, 0.153073, 0.072096);
	glEnd();

	glNormal3f( -0.844800, 0.469600, 0.256300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.307271, 0.222228, 0.127276);
		glVertex3f( -0.326197, 0.222228, 0.064885);
		glVertex3f( -0.362451, 0.153073, 0.072096);
	glEnd();

	glNormal3f( -0.741200, -0.632600, 0.224800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.261312, -0.282843, 0.108239);
		glVertex3f( -0.307271, -0.222228, 0.127276);
		glVertex3f( -0.326197, -0.222228, 0.064885);
	glEnd();

	glNormal3f( -0.741200, 0.632600, 0.224800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.261312, 0.282843, 0.108239);
		glVertex3f( -0.277408, 0.282843, 0.055180);
		glVertex3f( -0.326197, 0.222228, 0.064885);
	glEnd();

	glNormal3f( -0.844800, -0.469600, 0.256300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.307271, -0.222228, 0.127276);
		glVertex3f( -0.341421, -0.153073, 0.141421);
		glVertex3f( -0.362451, -0.153073, 0.072096);
	glEnd();

	glNormal3f( -0.916100, -0.289000, 0.277900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.362451, -0.078036, 0.150132);
		glVertex3f( -0.384776, -0.078036, 0.076537);
		glVertex3f( -0.362451, -0.153073, 0.072096);
	glEnd();

	glNormal3f( -0.608800, 0.771500, 0.184700 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.205312, 0.332588, 0.085043);
		glVertex3f( -0.217958, 0.332588, 0.043354);
		glVertex3f( -0.277408, 0.282843, 0.055180);
	glEnd();

	glNormal3f( -0.633200, 0.771500, 0.062400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.277408, 0.282843, 0.055180);
		glVertex3f( -0.217958, 0.332588, 0.043354);
		glVertex3f( -0.222228, 0.332588, 0.000000);
	glEnd();

	glNormal3f( -0.952700, -0.289000, 0.093800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.384776, -0.078036, 0.076537);
		glVertex3f( -0.392314, -0.078036, 0.000000);
		glVertex3f( -0.369552, -0.153073, 0.000000);
	glEnd();

	glNormal3f( -0.990400, -0.097500, 0.097600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.392314, 0.000000, 0.078036);
		glVertex3f( -0.400000, 0.000000, 0.000000);
		glVertex3f( -0.392314, -0.078036, 0.000000);
	glEnd();

	glNormal3f( -0.290200, -0.956500, 0.028600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.150132, -0.369552, 0.029863);
		glVertex3f( -0.153073, -0.369552, 0.000000);
		glVertex3f( -0.078036, -0.392314, 0.000000);
	glEnd();

	glNormal3f( -0.470900, 0.881000, 0.046400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.217958, 0.332588, 0.043354);
		glVertex3f( -0.150132, 0.369552, 0.029863);
		glVertex3f( -0.153073, 0.369552, 0.000000);
	glEnd();

	glNormal3f( -0.990400, 0.097500, 0.097600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.392314, 0.000000, 0.078036);
		glVertex3f( -0.384776, 0.078036, 0.076537);
		glVertex3f( -0.392314, 0.078036, 0.000000);
	glEnd();

	glNormal3f( -0.470900, -0.881000, 0.046400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.217958, -0.332588, 0.043354);
		glVertex3f( -0.222228, -0.332588, 0.000000);
		glVertex3f( -0.153073, -0.369552, 0.000000);
	glEnd();

	glNormal3f( -0.633200, -0.771500, 0.062400 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.277408, -0.282843, 0.055180);
		glVertex3f( -0.282843, -0.282843, 0.000000);
		glVertex3f( -0.222228, -0.332588, 0.000000);
	glEnd();

	glNormal3f( -0.290200, 0.956500, 0.028600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.150132, 0.369552, 0.029863);
		glVertex3f( -0.076537, 0.392314, 0.015224);
		glVertex3f( -0.078036, 0.392314, 0.000000);
	glEnd();

	glNormal3f( -0.952700, 0.289000, 0.093800 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.384776, 0.078036, 0.076537);
		glVertex3f( -0.362451, 0.153073, 0.072096);
		glVertex3f( -0.369552, 0.153073, 0.000000);
	glEnd();

	glNormal3f( -0.770800, -0.632600, 0.075900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.326197, -0.222228, 0.064885);
		glVertex3f( -0.332588, -0.222228, 0.000000);
		glVertex3f( -0.282843, -0.282843, 0.000000);
	glEnd();

	glNormal3f( -0.878600, 0.469600, 0.086500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.362451, 0.153073, 0.072096);
		glVertex3f( -0.326197, 0.222228, 0.064885);
		glVertex3f( -0.332588, 0.222228, 0.000000);
	glEnd();

	glNormal3f( -0.770800, 0.632600, 0.075900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.326197, 0.222228, 0.064885);
		glVertex3f( -0.277408, 0.282843, 0.055180);
		glVertex3f( -0.282843, 0.282843, 0.000000);
	glEnd();

	glNormal3f( -0.878600, -0.469600, 0.086500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.362451, -0.153073, 0.072096);
		glVertex3f( -0.369552, -0.153073, 0.000000);
		glVertex3f( -0.332588, -0.222228, 0.000000);
	glEnd();
}