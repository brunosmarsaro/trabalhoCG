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
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.864160, -2.627635, 0.931565);
		glVertex3f( 0.870006, -2.613621, 0.955160);
		glVertex3f( 0.843177, -2.609375, 0.940427);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.887642, -2.569053, 0.958616);
		glVertex3f( 0.870006, -2.613621, 0.955160);
		glVertex3f( 0.906067, -2.588477, 0.949174);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.864160, -2.627635, 0.931565);
		glVertex3f( 0.843177, -2.609375, 0.940427);
		glVertex3f( 0.846167, -2.620490, 0.911749);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.864160, -2.627635, 0.931565);
		glVertex3f( 0.846167, -2.620490, 0.911749);
		glVertex3f( 0.874845, -2.631606, 0.908759);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.864160, -2.627635, 0.931565);
		glVertex3f( 0.874845, -2.631606, 0.908759);
		glVertex3f( 0.885472, -2.621531, 0.934567);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.887642, -2.569053, 0.958616);
		glVertex3f( 0.906067, -2.588477, 0.949174);
		glVertex3f( 0.904436, -2.526218, 0.935909);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.841997, -2.561830, 0.933551);
		glVertex3f( 0.859666, -2.570491, 0.954013);
		glVertex3f( 0.862506, -2.514445, 0.932585);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.847085, -2.580740, 0.884761);
		glVertex3f( 0.835827, -2.577361, 0.910602);
		glVertex3f( 0.847267, -2.520503, 0.899525);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.892079, -2.594835, 0.889603);
		glVertex3f( 0.867495, -2.599593, 0.878934);
		glVertex3f( 0.873385, -2.534273, 0.872186);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.913233, -2.585041, 0.932601);
		glVertex3f( 0.904494, -2.599836, 0.908925);
		glVertex3f( 0.919577, -2.543535, 0.895518);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.887642, -2.569053, 0.958616);
		glVertex3f( 0.904436, -2.526218, 0.935909);
		glVertex3f( 0.885577, -2.515426, 0.940592);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.841997, -2.561830, 0.933551);
		glVertex3f( 0.862506, -2.514445, 0.932585);
		glVertex3f( 0.854820, -2.513246, 0.920184);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.847085, -2.580740, 0.884761);
		glVertex3f( 0.847267, -2.520503, 0.899525);
		glVertex3f( 0.858423, -2.523023, 0.874476);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.892079, -2.594835, 0.889603);
		glVertex3f( 0.873385, -2.534273, 0.872186);
		glVertex3f( 0.898997, -2.539155, 0.878738);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.913233, -2.585041, 0.932601);
		glVertex3f( 0.919577, -2.543535, 0.895518);
		glVertex3f( 0.921383, -2.537812, 0.920075);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.892474, -2.473702, 0.922161);
		glVertex3f( 0.916270, -2.473318, 0.919579);
		glVertex3f( 0.911653, -2.381596, 0.861883);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.867409, -2.480926, 0.876516);
		glVertex3f( 0.868018, -2.457802, 0.900198);
		glVertex3f( 0.889109, -2.448814, 0.859499);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.898405, -2.497973, 0.848292);
		glVertex3f( 0.882281, -2.484877, 0.852660);
		glVertex3f( 0.910715, -2.468010, 0.833528);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.931793, -2.500342, 0.869954);
		glVertex3f( 0.920208, -2.497042, 0.855928);
		glVertex3f( 0.945622, -2.473289, 0.850786);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.933450, -2.491961, 0.913519);
		glVertex3f( 0.940610, -2.494607, 0.892515);
		glVertex3f( 0.941099, -2.455641, 0.891227);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.941099, -2.455641, 0.891227);
		glVertex3f( 0.945622, -2.473289, 0.850786);
		glVertex3f( 0.922615, -2.408373, 0.838068);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.941099, -2.455641, 0.891227);
		glVertex3f( 0.940610, -2.494607, 0.892515);
		glVertex3f( 0.945622, -2.473289, 0.850786);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.940610, -2.494607, 0.892515);
		glVertex3f( 0.931793, -2.500342, 0.869954);
		glVertex3f( 0.945622, -2.473289, 0.850786);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.945622, -2.473289, 0.850786);
		glVertex3f( 0.910715, -2.468010, 0.833528);
		glVertex3f( 0.922615, -2.408373, 0.838068);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.945622, -2.473289, 0.850786);
		glVertex3f( 0.920208, -2.497042, 0.855928);
		glVertex3f( 0.910715, -2.468010, 0.833528);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.920208, -2.497042, 0.855928);
		glVertex3f( 0.898405, -2.497973, 0.848292);
		glVertex3f( 0.910715, -2.468010, 0.833528);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.910715, -2.468010, 0.833528);
		glVertex3f( 0.889109, -2.448814, 0.859499);
		glVertex3f( 0.922615, -2.408373, 0.838068);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.910715, -2.468010, 0.833528);
		glVertex3f( 0.882281, -2.484877, 0.852660);
		glVertex3f( 0.889109, -2.448814, 0.859499);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.882281, -2.484877, 0.852660);
		glVertex3f( 0.867409, -2.480926, 0.876516);
		glVertex3f( 0.889109, -2.448814, 0.859499);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.889109, -2.448814, 0.859499);
		glVertex3f( 0.911653, -2.381596, 0.861883);
		glVertex3f( 0.922615, -2.408373, 0.838068);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.889109, -2.448814, 0.859499);
		glVertex3f( 0.868018, -2.457802, 0.900198);
		glVertex3f( 0.911653, -2.381596, 0.861883);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.868018, -2.457802, 0.900198);
		glVertex3f( 0.892474, -2.473702, 0.922161);
		glVertex3f( 0.911653, -2.381596, 0.861883);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.911653, -2.381596, 0.861883);
		glVertex3f( 0.941099, -2.455641, 0.891227);
		glVertex3f( 0.922615, -2.408373, 0.838068);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.911653, -2.381596, 0.861883);
		glVertex3f( 0.916270, -2.473318, 0.919579);
		glVertex3f( 0.941099, -2.455641, 0.891227);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.916270, -2.473318, 0.919579);
		glVertex3f( 0.933450, -2.491961, 0.913519);
		glVertex3f( 0.941099, -2.455641, 0.891227);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.921383, -2.537812, 0.920075);
		glVertex3f( 0.940610, -2.494607, 0.892515);
		glVertex3f( 0.933450, -2.491961, 0.913519);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.921383, -2.537812, 0.920075);
		glVertex3f( 0.919577, -2.543535, 0.895518);
		glVertex3f( 0.940610, -2.494607, 0.892515);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.919577, -2.543535, 0.895518);
		glVertex3f( 0.931793, -2.500342, 0.869954);
		glVertex3f( 0.940610, -2.494607, 0.892515);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.898997, -2.539155, 0.878738);
		glVertex3f( 0.920208, -2.497042, 0.855928);
		glVertex3f( 0.931793, -2.500342, 0.869954);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.898997, -2.539155, 0.878738);
		glVertex3f( 0.873385, -2.534273, 0.872186);
		glVertex3f( 0.920208, -2.497042, 0.855928);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.873385, -2.534273, 0.872186);
		glVertex3f( 0.898405, -2.497973, 0.848292);
		glVertex3f( 0.920208, -2.497042, 0.855928);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.858423, -2.523023, 0.874476);
		glVertex3f( 0.882281, -2.484877, 0.852660);
		glVertex3f( 0.898405, -2.497973, 0.848292);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.858423, -2.523023, 0.874476);
		glVertex3f( 0.847267, -2.520503, 0.899525);
		glVertex3f( 0.882281, -2.484877, 0.852660);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.847267, -2.520503, 0.899525);
		glVertex3f( 0.867409, -2.480926, 0.876516);
		glVertex3f( 0.882281, -2.484877, 0.852660);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.854820, -2.513246, 0.920184);
		glVertex3f( 0.868018, -2.457802, 0.900198);
		glVertex3f( 0.867409, -2.480926, 0.876516);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.854820, -2.513246, 0.920184);
		glVertex3f( 0.862506, -2.514445, 0.932585);
		glVertex3f( 0.868018, -2.457802, 0.900198);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.862506, -2.514445, 0.932585);
		glVertex3f( 0.892474, -2.473702, 0.922161);
		glVertex3f( 0.868018, -2.457802, 0.900198);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.885577, -2.515426, 0.940592);
		glVertex3f( 0.916270, -2.473318, 0.919579);
		glVertex3f( 0.892474, -2.473702, 0.922161);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.885577, -2.515426, 0.940592);
		glVertex3f( 0.904436, -2.526218, 0.935909);
		glVertex3f( 0.916270, -2.473318, 0.919579);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.904436, -2.526218, 0.935909);
		glVertex3f( 0.933450, -2.491961, 0.913519);
		glVertex3f( 0.916270, -2.473318, 0.919579);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.919577, -2.543535, 0.895518);
		glVertex3f( 0.898997, -2.539155, 0.878738);
		glVertex3f( 0.931793, -2.500342, 0.869954);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.919577, -2.543535, 0.895518);
		glVertex3f( 0.904494, -2.599836, 0.908925);
		glVertex3f( 0.898997, -2.539155, 0.878738);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.904494, -2.599836, 0.908925);
		glVertex3f( 0.892079, -2.594835, 0.889603);
		glVertex3f( 0.898997, -2.539155, 0.878738);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.873385, -2.534273, 0.872186);
		glVertex3f( 0.858423, -2.523023, 0.874476);
		glVertex3f( 0.898405, -2.497973, 0.848292);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.873385, -2.534273, 0.872186);
		glVertex3f( 0.867495, -2.599593, 0.878934);
		glVertex3f( 0.858423, -2.523023, 0.874476);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.867495, -2.599593, 0.878934);
		glVertex3f( 0.847085, -2.580740, 0.884761);
		glVertex3f( 0.858423, -2.523023, 0.874476);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.847267, -2.520503, 0.899525);
		glVertex3f( 0.854820, -2.513246, 0.920184);
		glVertex3f( 0.867409, -2.480926, 0.876516);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.847267, -2.520503, 0.899525);
		glVertex3f( 0.835827, -2.577361, 0.910602);
		glVertex3f( 0.854820, -2.513246, 0.920184);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.835827, -2.577361, 0.910602);
		glVertex3f( 0.841997, -2.561830, 0.933551);
		glVertex3f( 0.854820, -2.513246, 0.920184);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.862506, -2.514445, 0.932585);
		glVertex3f( 0.885577, -2.515426, 0.940592);
		glVertex3f( 0.892474, -2.473702, 0.922161);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.862506, -2.514445, 0.932585);
		glVertex3f( 0.859666, -2.570491, 0.954013);
		glVertex3f( 0.885577, -2.515426, 0.940592);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.859666, -2.570491, 0.954013);
		glVertex3f( 0.887642, -2.569053, 0.958616);
		glVertex3f( 0.885577, -2.515426, 0.940592);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.904436, -2.526218, 0.935909);
		glVertex3f( 0.921383, -2.537812, 0.920075);
		glVertex3f( 0.933450, -2.491961, 0.913519);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.904436, -2.526218, 0.935909);
		glVertex3f( 0.906067, -2.588477, 0.949174);
		glVertex3f( 0.921383, -2.537812, 0.920075);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.906067, -2.588477, 0.949174);
		glVertex3f( 0.913233, -2.585041, 0.932601);
		glVertex3f( 0.921383, -2.537812, 0.920075);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.885472, -2.621531, 0.934567);
		glVertex3f( 0.904494, -2.599836, 0.908925);
		glVertex3f( 0.913233, -2.585041, 0.932601);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.885472, -2.621531, 0.934567);
		glVertex3f( 0.874845, -2.631606, 0.908759);
		glVertex3f( 0.904494, -2.599836, 0.908925);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.874845, -2.631606, 0.908759);
		glVertex3f( 0.892079, -2.594835, 0.889603);
		glVertex3f( 0.904494, -2.599836, 0.908925);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.874845, -2.631606, 0.908759);
		glVertex3f( 0.867495, -2.599593, 0.878934);
		glVertex3f( 0.892079, -2.594835, 0.889603);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.874845, -2.631606, 0.908759);
		glVertex3f( 0.846167, -2.620490, 0.911749);
		glVertex3f( 0.867495, -2.599593, 0.878934);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.846167, -2.620490, 0.911749);
		glVertex3f( 0.847085, -2.580740, 0.884761);
		glVertex3f( 0.867495, -2.599593, 0.878934);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.846167, -2.620490, 0.911749);
		glVertex3f( 0.835827, -2.577361, 0.910602);
		glVertex3f( 0.847085, -2.580740, 0.884761);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.846167, -2.620490, 0.911749);
		glVertex3f( 0.843177, -2.609375, 0.940427);
		glVertex3f( 0.835827, -2.577361, 0.910602);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.843177, -2.609375, 0.940427);
		glVertex3f( 0.841997, -2.561830, 0.933551);
		glVertex3f( 0.835827, -2.577361, 0.910602);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.906067, -2.588477, 0.949174);
		glVertex3f( 0.885472, -2.621531, 0.934567);
		glVertex3f( 0.913233, -2.585041, 0.932601);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.906067, -2.588477, 0.949174);
		glVertex3f( 0.870006, -2.613621, 0.955160);
		glVertex3f( 0.885472, -2.621531, 0.934567);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.870006, -2.613621, 0.955160);
		glVertex3f( 0.864160, -2.627635, 0.931565);
		glVertex3f( 0.885472, -2.621531, 0.934567);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.843177, -2.609375, 0.940427);
		glVertex3f( 0.859666, -2.570491, 0.954013);
		glVertex3f( 0.841997, -2.561830, 0.933551);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.843177, -2.609375, 0.940427);
		glVertex3f( 0.870006, -2.613621, 0.955160);
		glVertex3f( 0.859666, -2.570491, 0.954013);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.870006, -2.613621, 0.955160);
		glVertex3f( 0.887642, -2.569053, 0.958616);
		glVertex3f( 0.859666, -2.570491, 0.954013);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.742735, -2.782119, 0.609412);
		glVertex3f( 0.754867, -2.778755, 0.586070);
		glVertex3f( 0.771503, -2.787349, 0.600684);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.801646, -2.716388, 0.560152);
		glVertex3f( 0.754867, -2.778755, 0.586070);
		glVertex3f( 0.772485, -2.714309, 0.570399);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.742735, -2.782119, 0.609412);
		glVertex3f( 0.771503, -2.787349, 0.600684);
		glVertex3f( 0.760155, -2.775859, 0.624026);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.742735, -2.782119, 0.609412);
		glVertex3f( 0.760155, -2.775859, 0.624026);
		glVertex3f( 0.736506, -2.760164, 0.623838);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.742735, -2.782119, 0.609412);
		glVertex3f( 0.736506, -2.760164, 0.623838);
		glVertex3f( 0.741886, -2.758471, 0.599547);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.801646, -2.716388, 0.560152);
		glVertex3f( 0.772485, -2.714309, 0.570399);
		glVertex3f( 0.849515, -2.637483, 0.552764);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.829948, -2.731009, 0.585015);
		glVertex3f( 0.810750, -2.739705, 0.570702);
		glVertex3f( 0.879541, -2.659717, 0.560146);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.810642, -2.711461, 0.624727);
		glVertex3f( 0.816037, -2.736809, 0.608658);
		glVertex3f( 0.881497, -2.655803, 0.588697);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.776521, -2.690148, 0.616581);
		glVertex3f( 0.781040, -2.709624, 0.631812);
		glVertex3f( 0.858265, -2.627460, 0.606637);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.775792, -2.691931, 0.578293);
		glVertex3f( 0.763798, -2.698691, 0.602733);
		glVertex3f( 0.827496, -2.613319, 0.583688);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.801646, -2.716388, 0.560152);
		glVertex3f( 0.849515, -2.637483, 0.552764);
		glVertex3f( 0.868963, -2.645964, 0.549555);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.829948, -2.731009, 0.585015);
		glVertex3f( 0.879541, -2.659717, 0.560146);
		glVertex3f( 0.885183, -2.656195, 0.569834);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.810642, -2.711461, 0.624727);
		glVertex3f( 0.881497, -2.655803, 0.588697);
		glVertex3f( 0.877087, -2.630182, 0.603887);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.776521, -2.690148, 0.616581);
		glVertex3f( 0.858265, -2.627460, 0.606637);
		glVertex3f( 0.842209, -2.614655, 0.598092);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.775792, -2.691931, 0.578293);
		glVertex3f( 0.827496, -2.613319, 0.583688);
		glVertex3f( 0.831030, -2.623419, 0.564276);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.918681, -2.580304, 0.542194);
		glVertex3f( 0.910638, -2.556629, 0.537948);
		glVertex3f( 0.956054, -2.490946, 0.561129);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.924240, -2.577259, 0.582103);
		glVertex3f( 0.934965, -2.569345, 0.558435);
		glVertex3f( 0.956761, -2.509936, 0.574334);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.895356, -2.547497, 0.600865);
		glVertex3f( 0.916603, -2.550754, 0.596203);
		glVertex3f( 0.928511, -2.492620, 0.594807);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.877800, -2.536035, 0.579182);
		glVertex3f( 0.887589, -2.532506, 0.590006);
		glVertex3f( 0.907371, -2.479767, 0.576971);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.882508, -2.557289, 0.545889);
		glVertex3f( 0.878978, -2.538363, 0.559393);
		glVertex3f( 0.940451, -2.484818, 0.550614);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.940451, -2.484818, 0.550614);
		glVertex3f( 0.907371, -2.479767, 0.576971);
		glVertex3f( 0.927686, -2.493223, 0.566120);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.940451, -2.484818, 0.550614);
		glVertex3f( 0.878978, -2.538363, 0.559393);
		glVertex3f( 0.907371, -2.479767, 0.576971);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.878978, -2.538363, 0.559393);
		glVertex3f( 0.877800, -2.536035, 0.579182);
		glVertex3f( 0.907371, -2.479767, 0.576971);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.907371, -2.479767, 0.576971);
		glVertex3f( 0.928511, -2.492620, 0.594807);
		glVertex3f( 0.927686, -2.493223, 0.566120);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.907371, -2.479767, 0.576971);
		glVertex3f( 0.887589, -2.532506, 0.590006);
		glVertex3f( 0.928511, -2.492620, 0.594807);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.887589, -2.532506, 0.590006);
		glVertex3f( 0.895356, -2.547497, 0.600865);
		glVertex3f( 0.928511, -2.492620, 0.594807);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.928511, -2.492620, 0.594807);
		glVertex3f( 0.956761, -2.509936, 0.574334);
		glVertex3f( 0.927686, -2.493223, 0.566120);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.928511, -2.492620, 0.594807);
		glVertex3f( 0.916603, -2.550754, 0.596203);
		glVertex3f( 0.956761, -2.509936, 0.574334);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.916603, -2.550754, 0.596203);
		glVertex3f( 0.924240, -2.577259, 0.582103);
		glVertex3f( 0.956761, -2.509936, 0.574334);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.956761, -2.509936, 0.574334);
		glVertex3f( 0.956054, -2.490946, 0.561129);
		glVertex3f( 0.927686, -2.493223, 0.566120);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.956761, -2.509936, 0.574334);
		glVertex3f( 0.934965, -2.569345, 0.558435);
		glVertex3f( 0.956054, -2.490946, 0.561129);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.934965, -2.569345, 0.558435);
		glVertex3f( 0.918681, -2.580304, 0.542194);
		glVertex3f( 0.956054, -2.490946, 0.561129);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.956054, -2.490946, 0.561129);
		glVertex3f( 0.940451, -2.484818, 0.550614);
		glVertex3f( 0.927686, -2.493223, 0.566120);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.956054, -2.490946, 0.561129);
		glVertex3f( 0.910638, -2.556629, 0.537948);
		glVertex3f( 0.940451, -2.484818, 0.550614);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.910638, -2.556629, 0.537948);
		glVertex3f( 0.882508, -2.557289, 0.545889);
		glVertex3f( 0.940451, -2.484818, 0.550614);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.831030, -2.623419, 0.564276);
		glVertex3f( 0.878978, -2.538363, 0.559393);
		glVertex3f( 0.882508, -2.557289, 0.545889);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.831030, -2.623419, 0.564276);
		glVertex3f( 0.827496, -2.613319, 0.583688);
		glVertex3f( 0.878978, -2.538363, 0.559393);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.827496, -2.613319, 0.583688);
		glVertex3f( 0.877800, -2.536035, 0.579182);
		glVertex3f( 0.878978, -2.538363, 0.559393);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.842209, -2.614655, 0.598092);
		glVertex3f( 0.887589, -2.532506, 0.590006);
		glVertex3f( 0.877800, -2.536035, 0.579182);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.842209, -2.614655, 0.598092);
		glVertex3f( 0.858265, -2.627460, 0.606637);
		glVertex3f( 0.887589, -2.532506, 0.590006);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.858265, -2.627460, 0.606637);
		glVertex3f( 0.895356, -2.547497, 0.600865);
		glVertex3f( 0.887589, -2.532506, 0.590006);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.877087, -2.630182, 0.603887);
		glVertex3f( 0.916603, -2.550754, 0.596203);
		glVertex3f( 0.895356, -2.547497, 0.600865);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.877087, -2.630182, 0.603887);
		glVertex3f( 0.881497, -2.655803, 0.588697);
		glVertex3f( 0.916603, -2.550754, 0.596203);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.881497, -2.655803, 0.588697);
		glVertex3f( 0.924240, -2.577259, 0.582103);
		glVertex3f( 0.916603, -2.550754, 0.596203);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.885183, -2.656195, 0.569834);
		glVertex3f( 0.934965, -2.569345, 0.558435);
		glVertex3f( 0.924240, -2.577259, 0.582103);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.885183, -2.656195, 0.569834);
		glVertex3f( 0.879541, -2.659717, 0.560146);
		glVertex3f( 0.934965, -2.569345, 0.558435);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.879541, -2.659717, 0.560146);
		glVertex3f( 0.918681, -2.580304, 0.542194);
		glVertex3f( 0.934965, -2.569345, 0.558435);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.868963, -2.645964, 0.549555);
		glVertex3f( 0.910638, -2.556629, 0.537948);
		glVertex3f( 0.918681, -2.580304, 0.542194);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.868963, -2.645964, 0.549555);
		glVertex3f( 0.849515, -2.637483, 0.552764);
		glVertex3f( 0.910638, -2.556629, 0.537948);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.849515, -2.637483, 0.552764);
		glVertex3f( 0.882508, -2.557289, 0.545889);
		glVertex3f( 0.910638, -2.556629, 0.537948);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.827496, -2.613319, 0.583688);
		glVertex3f( 0.842209, -2.614655, 0.598092);
		glVertex3f( 0.877800, -2.536035, 0.579182);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.827496, -2.613319, 0.583688);
		glVertex3f( 0.763798, -2.698691, 0.602733);
		glVertex3f( 0.842209, -2.614655, 0.598092);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.763798, -2.698691, 0.602733);
		glVertex3f( 0.776521, -2.690148, 0.616581);
		glVertex3f( 0.842209, -2.614655, 0.598092);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.858265, -2.627460, 0.606637);
		glVertex3f( 0.877087, -2.630182, 0.603887);
		glVertex3f( 0.895356, -2.547497, 0.600865);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.858265, -2.627460, 0.606637);
		glVertex3f( 0.781040, -2.709624, 0.631812);
		glVertex3f( 0.877087, -2.630182, 0.603887);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.781040, -2.709624, 0.631812);
		glVertex3f( 0.810642, -2.711461, 0.624727);
		glVertex3f( 0.877087, -2.630182, 0.603887);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.881497, -2.655803, 0.588697);
		glVertex3f( 0.885183, -2.656195, 0.569834);
		glVertex3f( 0.924240, -2.577259, 0.582103);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.881497, -2.655803, 0.588697);
		glVertex3f( 0.816037, -2.736809, 0.608658);
		glVertex3f( 0.885183, -2.656195, 0.569834);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.816037, -2.736809, 0.608658);
		glVertex3f( 0.829948, -2.731009, 0.585015);
		glVertex3f( 0.885183, -2.656195, 0.569834);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.879541, -2.659717, 0.560146);
		glVertex3f( 0.868963, -2.645964, 0.549555);
		glVertex3f( 0.918681, -2.580304, 0.542194);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.879541, -2.659717, 0.560146);
		glVertex3f( 0.810750, -2.739705, 0.570702);
		glVertex3f( 0.868963, -2.645964, 0.549555);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.810750, -2.739705, 0.570702);
		glVertex3f( 0.801646, -2.716388, 0.560152);
		glVertex3f( 0.868963, -2.645964, 0.549555);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.849515, -2.637483, 0.552764);
		glVertex3f( 0.831030, -2.623419, 0.564276);
		glVertex3f( 0.882508, -2.557289, 0.545889);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.849515, -2.637483, 0.552764);
		glVertex3f( 0.772485, -2.714309, 0.570399);
		glVertex3f( 0.831030, -2.623419, 0.564276);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.772485, -2.714309, 0.570399);
		glVertex3f( 0.775792, -2.691931, 0.578293);
		glVertex3f( 0.831030, -2.623419, 0.564276);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.741886, -2.758471, 0.599547);
		glVertex3f( 0.763798, -2.698691, 0.602733);
		glVertex3f( 0.775792, -2.691931, 0.578293);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.741886, -2.758471, 0.599547);
		glVertex3f( 0.736506, -2.760164, 0.623838);
		glVertex3f( 0.763798, -2.698691, 0.602733);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.736506, -2.760164, 0.623838);
		glVertex3f( 0.776521, -2.690148, 0.616581);
		glVertex3f( 0.763798, -2.698691, 0.602733);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.736506, -2.760164, 0.623838);
		glVertex3f( 0.781040, -2.709624, 0.631812);
		glVertex3f( 0.776521, -2.690148, 0.616581);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.736506, -2.760164, 0.623838);
		glVertex3f( 0.760155, -2.775859, 0.624026);
		glVertex3f( 0.781040, -2.709624, 0.631812);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.760155, -2.775859, 0.624026);
		glVertex3f( 0.810642, -2.711461, 0.624727);
		glVertex3f( 0.781040, -2.709624, 0.631812);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.760155, -2.775859, 0.624026);
		glVertex3f( 0.816037, -2.736809, 0.608658);
		glVertex3f( 0.810642, -2.711461, 0.624727);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.760155, -2.775859, 0.624026);
		glVertex3f( 0.771503, -2.787349, 0.600684);
		glVertex3f( 0.816037, -2.736809, 0.608658);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.771503, -2.787349, 0.600684);
		glVertex3f( 0.829948, -2.731009, 0.585015);
		glVertex3f( 0.816037, -2.736809, 0.608658);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.772485, -2.714309, 0.570399);
		glVertex3f( 0.741886, -2.758471, 0.599547);
		glVertex3f( 0.775792, -2.691931, 0.578293);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.772485, -2.714309, 0.570399);
		glVertex3f( 0.754867, -2.778755, 0.586070);
		glVertex3f( 0.741886, -2.758471, 0.599547);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.754867, -2.778755, 0.586070);
		glVertex3f( 0.742735, -2.782119, 0.609412);
		glVertex3f( 0.741886, -2.758471, 0.599547);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.771503, -2.787349, 0.600684);
		glVertex3f( 0.810750, -2.739705, 0.570702);
		glVertex3f( 0.829948, -2.731009, 0.585015);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.771503, -2.787349, 0.600684);
		glVertex3f( 0.754867, -2.778755, 0.586070);
		glVertex3f( 0.810750, -2.739705, 0.570702);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.754867, -2.778755, 0.586070);
		glVertex3f( 0.801646, -2.716388, 0.560152);
		glVertex3f( 0.810750, -2.739705, 0.570702);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.754950, -2.850484, 0.663826);
		glVertex3f( 0.772732, -2.848241, 0.639781);
		glVertex3f( 0.785691, -2.853016, 0.667424);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.819356, -2.783782, 0.616945);
		glVertex3f( 0.772732, -2.848241, 0.639781);
		glVertex3f( 0.788113, -2.784238, 0.615679);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.754950, -2.850484, 0.663826);
		glVertex3f( 0.785691, -2.853016, 0.667424);
		glVertex3f( 0.767298, -2.840515, 0.688880);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.754950, -2.850484, 0.663826);
		glVertex3f( 0.767298, -2.840515, 0.688880);
		glVertex3f( 0.742971, -2.828016, 0.674497);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.754950, -2.850484, 0.663826);
		glVertex3f( 0.742971, -2.828016, 0.674497);
		glVertex3f( 0.754619, -2.828369, 0.646454);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.819356, -2.783782, 0.616945);
		glVertex3f( 0.788113, -2.784238, 0.615679);
		glVertex3f( 0.860486, -2.700826, 0.614374);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.841403, -2.791905, 0.663976);
		glVertex3f( 0.827474, -2.804464, 0.638952);
		glVertex3f( 0.889647, -2.718178, 0.641981);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.810110, -2.770638, 0.700478);
		glVertex3f( 0.822039, -2.796738, 0.688051);
		glVertex3f( 0.883439, -2.710909, 0.677627);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.777271, -2.754790, 0.670196);
		glVertex3f( 0.779320, -2.771739, 0.695124);
		glVertex3f( 0.853433, -2.683875, 0.683468);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.787113, -2.760885, 0.622587);
		glVertex3f( 0.769480, -2.766338, 0.648739);
		glVertex3f( 0.828520, -2.676322, 0.637763);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.819356, -2.783782, 0.616945);
		glVertex3f( 0.860486, -2.700826, 0.614374);
		glVertex3f( 0.880994, -2.707114, 0.621139);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.841403, -2.791905, 0.663976);
		glVertex3f( 0.889647, -2.718178, 0.641981);
		glVertex3f( 0.892164, -2.712927, 0.655961);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.810110, -2.770638, 0.700478);
		glVertex3f( 0.883439, -2.710909, 0.677627);
		glVertex3f( 0.872678, -2.684514, 0.689366);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.777271, -2.754790, 0.670196);
		glVertex3f( 0.853433, -2.683875, 0.683468);
		glVertex3f( 0.839002, -2.674203, 0.662805);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.787113, -2.760885, 0.622587);
		glVertex3f( 0.828520, -2.676322, 0.637763);
		glVertex3f( 0.838144, -2.687991, 0.617275);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.925131, -2.636984, 0.622099);
		glVertex3f( 0.916299, -2.615116, 0.608357);
		glVertex3f( 0.943897, -2.560309, 0.619428);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.919417, -2.628861, 0.673726);
		glVertex3f( 0.935503, -2.622343, 0.647712);
		glVertex3f( 0.946838, -2.559283, 0.665830);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.883577, -2.601043, 0.677672);
		glVertex3f( 0.905742, -2.602118, 0.682428);
		glVertex3f( 0.912298, -2.543468, 0.674676);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.871378, -2.594340, 0.640235);
		glVertex3f( 0.877608, -2.588438, 0.657560);
		glVertex3f( 0.895453, -2.535414, 0.640076);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.886934, -2.618400, 0.605248);
		glVertex3f( 0.878102, -2.598683, 0.616633);
		glVertex3f( 0.923840, -2.550946, 0.609633);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.923840, -2.550946, 0.609633);
		glVertex3f( 0.895453, -2.535414, 0.640076);
		glVertex3f( 0.919334, -2.547348, 0.638730);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.923840, -2.550946, 0.609633);
		glVertex3f( 0.878102, -2.598683, 0.616633);
		glVertex3f( 0.895453, -2.535414, 0.640076);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.878102, -2.598683, 0.616633);
		glVertex3f( 0.871378, -2.594340, 0.640235);
		glVertex3f( 0.895453, -2.535414, 0.640076);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.895453, -2.535414, 0.640076);
		glVertex3f( 0.912298, -2.543468, 0.674676);
		glVertex3f( 0.919334, -2.547348, 0.638730);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.895453, -2.535414, 0.640076);
		glVertex3f( 0.877608, -2.588438, 0.657560);
		glVertex3f( 0.912298, -2.543468, 0.674676);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.877608, -2.588438, 0.657560);
		glVertex3f( 0.883577, -2.601043, 0.677672);
		glVertex3f( 0.912298, -2.543468, 0.674676);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.912298, -2.543468, 0.674676);
		glVertex3f( 0.946838, -2.559283, 0.665830);
		glVertex3f( 0.919334, -2.547348, 0.638730);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.912298, -2.543468, 0.674676);
		glVertex3f( 0.905742, -2.602118, 0.682428);
		glVertex3f( 0.946838, -2.559283, 0.665830);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.905742, -2.602118, 0.682428);
		glVertex3f( 0.919417, -2.628861, 0.673726);
		glVertex3f( 0.946838, -2.559283, 0.665830);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.946838, -2.559283, 0.665830);
		glVertex3f( 0.943897, -2.560309, 0.619428);
		glVertex3f( 0.919334, -2.547348, 0.638730);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.946838, -2.559283, 0.665830);
		glVertex3f( 0.935503, -2.622343, 0.647712);
		glVertex3f( 0.943897, -2.560309, 0.619428);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.935503, -2.622343, 0.647712);
		glVertex3f( 0.925131, -2.636984, 0.622099);
		glVertex3f( 0.943897, -2.560309, 0.619428);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.943897, -2.560309, 0.619428);
		glVertex3f( 0.923840, -2.550946, 0.609633);
		glVertex3f( 0.919334, -2.547348, 0.638730);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.943897, -2.560309, 0.619428);
		glVertex3f( 0.916299, -2.615116, 0.608357);
		glVertex3f( 0.923840, -2.550946, 0.609633);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.916299, -2.615116, 0.608357);
		glVertex3f( 0.886934, -2.618400, 0.605248);
		glVertex3f( 0.923840, -2.550946, 0.609633);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.838144, -2.687991, 0.617275);
		glVertex3f( 0.878102, -2.598683, 0.616633);
		glVertex3f( 0.886934, -2.618400, 0.605248);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.838144, -2.687991, 0.617275);
		glVertex3f( 0.828520, -2.676322, 0.637763);
		glVertex3f( 0.878102, -2.598683, 0.616633);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.828520, -2.676322, 0.637763);
		glVertex3f( 0.871378, -2.594340, 0.640235);
		glVertex3f( 0.878102, -2.598683, 0.616633);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.839002, -2.674203, 0.662805);
		glVertex3f( 0.877608, -2.588438, 0.657560);
		glVertex3f( 0.871378, -2.594340, 0.640235);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.839002, -2.674203, 0.662805);
		glVertex3f( 0.853433, -2.683875, 0.683468);
		glVertex3f( 0.877608, -2.588438, 0.657560);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.853433, -2.683875, 0.683468);
		glVertex3f( 0.883577, -2.601043, 0.677672);
		glVertex3f( 0.877608, -2.588438, 0.657560);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.872678, -2.684514, 0.689366);
		glVertex3f( 0.905742, -2.602118, 0.682428);
		glVertex3f( 0.883577, -2.601043, 0.677672);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.872678, -2.684514, 0.689366);
		glVertex3f( 0.883439, -2.710909, 0.677627);
		glVertex3f( 0.905742, -2.602118, 0.682428);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.883439, -2.710909, 0.677627);
		glVertex3f( 0.919417, -2.628861, 0.673726);
		glVertex3f( 0.905742, -2.602118, 0.682428);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.892164, -2.712927, 0.655961);
		glVertex3f( 0.935503, -2.622343, 0.647712);
		glVertex3f( 0.919417, -2.628861, 0.673726);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.892164, -2.712927, 0.655961);
		glVertex3f( 0.889647, -2.718178, 0.641981);
		glVertex3f( 0.935503, -2.622343, 0.647712);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.889647, -2.718178, 0.641981);
		glVertex3f( 0.925131, -2.636984, 0.622099);
		glVertex3f( 0.935503, -2.622343, 0.647712);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.880994, -2.707114, 0.621139);
		glVertex3f( 0.916299, -2.615116, 0.608357);
		glVertex3f( 0.925131, -2.636984, 0.622099);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.880994, -2.707114, 0.621139);
		glVertex3f( 0.860486, -2.700826, 0.614374);
		glVertex3f( 0.916299, -2.615116, 0.608357);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.860486, -2.700826, 0.614374);
		glVertex3f( 0.886934, -2.618400, 0.605248);
		glVertex3f( 0.916299, -2.615116, 0.608357);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.828520, -2.676322, 0.637763);
		glVertex3f( 0.839002, -2.674203, 0.662805);
		glVertex3f( 0.871378, -2.594340, 0.640235);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.828520, -2.676322, 0.637763);
		glVertex3f( 0.769480, -2.766338, 0.648739);
		glVertex3f( 0.839002, -2.674203, 0.662805);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.769480, -2.766338, 0.648739);
		glVertex3f( 0.777271, -2.754790, 0.670196);
		glVertex3f( 0.839002, -2.674203, 0.662805);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.853433, -2.683875, 0.683468);
		glVertex3f( 0.872678, -2.684514, 0.689366);
		glVertex3f( 0.883577, -2.601043, 0.677672);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.853433, -2.683875, 0.683468);
		glVertex3f( 0.779320, -2.771739, 0.695124);
		glVertex3f( 0.872678, -2.684514, 0.689366);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.779320, -2.771739, 0.695124);
		glVertex3f( 0.810110, -2.770638, 0.700478);
		glVertex3f( 0.872678, -2.684514, 0.689366);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.883439, -2.710909, 0.677627);
		glVertex3f( 0.892164, -2.712927, 0.655961);
		glVertex3f( 0.919417, -2.628861, 0.673726);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.883439, -2.710909, 0.677627);
		glVertex3f( 0.822039, -2.796738, 0.688051);
		glVertex3f( 0.892164, -2.712927, 0.655961);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.822039, -2.796738, 0.688051);
		glVertex3f( 0.841403, -2.791905, 0.663976);
		glVertex3f( 0.892164, -2.712927, 0.655961);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.889647, -2.718178, 0.641981);
		glVertex3f( 0.880994, -2.707114, 0.621139);
		glVertex3f( 0.925131, -2.636984, 0.622099);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.889647, -2.718178, 0.641981);
		glVertex3f( 0.827474, -2.804464, 0.638952);
		glVertex3f( 0.880994, -2.707114, 0.621139);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.827474, -2.804464, 0.638952);
		glVertex3f( 0.819356, -2.783782, 0.616945);
		glVertex3f( 0.880994, -2.707114, 0.621139);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.860486, -2.700826, 0.614374);
		glVertex3f( 0.838144, -2.687991, 0.617275);
		glVertex3f( 0.886934, -2.618400, 0.605248);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.860486, -2.700826, 0.614374);
		glVertex3f( 0.788113, -2.784238, 0.615679);
		glVertex3f( 0.838144, -2.687991, 0.617275);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.788113, -2.784238, 0.615679);
		glVertex3f( 0.787113, -2.760885, 0.622587);
		glVertex3f( 0.838144, -2.687991, 0.617275);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.754619, -2.828369, 0.646454);
		glVertex3f( 0.769480, -2.766338, 0.648739);
		glVertex3f( 0.787113, -2.760885, 0.622587);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.754619, -2.828369, 0.646454);
		glVertex3f( 0.742971, -2.828016, 0.674497);
		glVertex3f( 0.769480, -2.766338, 0.648739);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.742971, -2.828016, 0.674497);
		glVertex3f( 0.777271, -2.754790, 0.670196);
		glVertex3f( 0.769480, -2.766338, 0.648739);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.742971, -2.828016, 0.674497);
		glVertex3f( 0.779320, -2.771739, 0.695124);
		glVertex3f( 0.777271, -2.754790, 0.670196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.742971, -2.828016, 0.674497);
		glVertex3f( 0.767298, -2.840515, 0.688880);
		glVertex3f( 0.779320, -2.771739, 0.695124);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.767298, -2.840515, 0.688880);
		glVertex3f( 0.810110, -2.770638, 0.700478);
		glVertex3f( 0.779320, -2.771739, 0.695124);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.767298, -2.840515, 0.688880);
		glVertex3f( 0.822039, -2.796738, 0.688051);
		glVertex3f( 0.810110, -2.770638, 0.700478);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.767298, -2.840515, 0.688880);
		glVertex3f( 0.785691, -2.853016, 0.667424);
		glVertex3f( 0.822039, -2.796738, 0.688051);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.785691, -2.853016, 0.667424);
		glVertex3f( 0.841403, -2.791905, 0.663976);
		glVertex3f( 0.822039, -2.796738, 0.688051);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.788113, -2.784238, 0.615679);
		glVertex3f( 0.754619, -2.828369, 0.646454);
		glVertex3f( 0.787113, -2.760885, 0.622587);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.788113, -2.784238, 0.615679);
		glVertex3f( 0.772732, -2.848241, 0.639781);
		glVertex3f( 0.754619, -2.828369, 0.646454);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.772732, -2.848241, 0.639781);
		glVertex3f( 0.754950, -2.850484, 0.663826);
		glVertex3f( 0.754619, -2.828369, 0.646454);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.785691, -2.853016, 0.667424);
		glVertex3f( 0.827474, -2.804464, 0.638952);
		glVertex3f( 0.841403, -2.791905, 0.663976);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.785691, -2.853016, 0.667424);
		glVertex3f( 0.772732, -2.848241, 0.639781);
		glVertex3f( 0.827474, -2.804464, 0.638952);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.772732, -2.848241, 0.639781);
		glVertex3f( 0.819356, -2.783782, 0.616945);
		glVertex3f( 0.827474, -2.804464, 0.638952);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.757966, -2.840670, 0.743921);
		glVertex3f( 0.775747, -2.838427, 0.719876);
		glVertex3f( 0.788706, -2.843202, 0.747519);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.822371, -2.773968, 0.697040);
		glVertex3f( 0.775747, -2.838427, 0.719876);
		glVertex3f( 0.791129, -2.774424, 0.695774);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.757966, -2.840670, 0.743921);
		glVertex3f( 0.788706, -2.843202, 0.747519);
		glVertex3f( 0.770313, -2.830701, 0.768975);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.757966, -2.840670, 0.743921);
		glVertex3f( 0.770313, -2.830701, 0.768975);
		glVertex3f( 0.745987, -2.818202, 0.754592);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.757966, -2.840670, 0.743921);
		glVertex3f( 0.745987, -2.818202, 0.754592);
		glVertex3f( 0.757635, -2.818555, 0.726549);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.822371, -2.773968, 0.697040);
		glVertex3f( 0.791129, -2.774424, 0.695774);
		glVertex3f( 0.863502, -2.691012, 0.694469);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.844418, -2.782091, 0.744071);
		glVertex3f( 0.830489, -2.794650, 0.719047);
		glVertex3f( 0.892663, -2.708364, 0.722076);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.813126, -2.760824, 0.780573);
		glVertex3f( 0.825055, -2.786924, 0.768146);
		glVertex3f( 0.886454, -2.701095, 0.757722);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.780287, -2.744976, 0.750291);
		glVertex3f( 0.782335, -2.761925, 0.775219);
		glVertex3f( 0.856449, -2.674061, 0.763563);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.790128, -2.751071, 0.702682);
		glVertex3f( 0.772495, -2.756524, 0.728834);
		glVertex3f( 0.831536, -2.666508, 0.717858);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.822371, -2.773968, 0.697040);
		glVertex3f( 0.863502, -2.691012, 0.694469);
		glVertex3f( 0.884009, -2.697300, 0.701234);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.844418, -2.782091, 0.744071);
		glVertex3f( 0.892663, -2.708364, 0.722076);
		glVertex3f( 0.895179, -2.703113, 0.736056);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.813126, -2.760824, 0.780573);
		glVertex3f( 0.886454, -2.701095, 0.757722);
		glVertex3f( 0.875694, -2.674700, 0.769461);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.780287, -2.744976, 0.750291);
		glVertex3f( 0.856449, -2.674061, 0.763563);
		glVertex3f( 0.842018, -2.664389, 0.742900);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.790128, -2.751071, 0.702682);
		glVertex3f( 0.831536, -2.666508, 0.717858);
		glVertex3f( 0.841159, -2.678177, 0.697370);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.928147, -2.627170, 0.702194);
		glVertex3f( 0.919315, -2.605302, 0.688452);
		glVertex3f( 0.940510, -2.531599, 0.681496);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.922432, -2.619047, 0.753821);
		glVertex3f( 0.938518, -2.612529, 0.727807);
		glVertex3f( 0.947480, -2.527431, 0.744871);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.886593, -2.591229, 0.757767);
		glVertex3f( 0.908757, -2.592304, 0.762523);
		glVertex3f( 0.915314, -2.533654, 0.754771);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.874394, -2.584526, 0.720330);
		glVertex3f( 0.880624, -2.578624, 0.737655);
		glVertex3f( 0.898469, -2.525600, 0.720172);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.889950, -2.608586, 0.685343);
		glVertex3f( 0.881117, -2.588869, 0.696728);
		glVertex3f( 0.926856, -2.541131, 0.689728);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.926856, -2.541131, 0.689728);
		glVertex3f( 0.898469, -2.525600, 0.720172);
		glVertex3f( 0.922350, -2.537534, 0.718825);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.926856, -2.541131, 0.689728);
		glVertex3f( 0.881117, -2.588869, 0.696728);
		glVertex3f( 0.898469, -2.525600, 0.720172);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.881117, -2.588869, 0.696728);
		glVertex3f( 0.874394, -2.584526, 0.720330);
		glVertex3f( 0.898469, -2.525600, 0.720172);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.898469, -2.525600, 0.720172);
		glVertex3f( 0.915314, -2.533654, 0.754771);
		glVertex3f( 0.922350, -2.537534, 0.718825);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.898469, -2.525600, 0.720172);
		glVertex3f( 0.880624, -2.578624, 0.737655);
		glVertex3f( 0.915314, -2.533654, 0.754771);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.880624, -2.578624, 0.737655);
		glVertex3f( 0.886593, -2.591229, 0.757767);
		glVertex3f( 0.915314, -2.533654, 0.754771);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.915314, -2.533654, 0.754771);
		glVertex3f( 0.947480, -2.527431, 0.744871);
		glVertex3f( 0.922350, -2.537534, 0.718825);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.915314, -2.533654, 0.754771);
		glVertex3f( 0.908757, -2.592304, 0.762523);
		glVertex3f( 0.947480, -2.527431, 0.744871);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.908757, -2.592304, 0.762523);
		glVertex3f( 0.922432, -2.619047, 0.753821);
		glVertex3f( 0.947480, -2.527431, 0.744871);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.947480, -2.527431, 0.744871);
		glVertex3f( 0.940510, -2.531599, 0.681496);
		glVertex3f( 0.922350, -2.537534, 0.718825);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.947480, -2.527431, 0.744871);
		glVertex3f( 0.938518, -2.612529, 0.727807);
		glVertex3f( 0.940510, -2.531599, 0.681496);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.938518, -2.612529, 0.727807);
		glVertex3f( 0.928147, -2.627170, 0.702194);
		glVertex3f( 0.940510, -2.531599, 0.681496);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.940510, -2.531599, 0.681496);
		glVertex3f( 0.926856, -2.541131, 0.689728);
		glVertex3f( 0.922350, -2.537534, 0.718825);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.940510, -2.531599, 0.681496);
		glVertex3f( 0.919315, -2.605302, 0.688452);
		glVertex3f( 0.926856, -2.541131, 0.689728);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.919315, -2.605302, 0.688452);
		glVertex3f( 0.889950, -2.608586, 0.685343);
		glVertex3f( 0.926856, -2.541131, 0.689728);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.841159, -2.678177, 0.697370);
		glVertex3f( 0.881117, -2.588869, 0.696728);
		glVertex3f( 0.889950, -2.608586, 0.685343);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.841159, -2.678177, 0.697370);
		glVertex3f( 0.831536, -2.666508, 0.717858);
		glVertex3f( 0.881117, -2.588869, 0.696728);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.831536, -2.666508, 0.717858);
		glVertex3f( 0.874394, -2.584526, 0.720330);
		glVertex3f( 0.881117, -2.588869, 0.696728);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.842018, -2.664389, 0.742900);
		glVertex3f( 0.880624, -2.578624, 0.737655);
		glVertex3f( 0.874394, -2.584526, 0.720330);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.842018, -2.664389, 0.742900);
		glVertex3f( 0.856449, -2.674061, 0.763563);
		glVertex3f( 0.880624, -2.578624, 0.737655);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.856449, -2.674061, 0.763563);
		glVertex3f( 0.886593, -2.591229, 0.757767);
		glVertex3f( 0.880624, -2.578624, 0.737655);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.875694, -2.674700, 0.769461);
		glVertex3f( 0.908757, -2.592304, 0.762523);
		glVertex3f( 0.886593, -2.591229, 0.757767);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.875694, -2.674700, 0.769461);
		glVertex3f( 0.886454, -2.701095, 0.757722);
		glVertex3f( 0.908757, -2.592304, 0.762523);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.886454, -2.701095, 0.757722);
		glVertex3f( 0.922432, -2.619047, 0.753821);
		glVertex3f( 0.908757, -2.592304, 0.762523);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.895179, -2.703113, 0.736056);
		glVertex3f( 0.938518, -2.612529, 0.727807);
		glVertex3f( 0.922432, -2.619047, 0.753821);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.895179, -2.703113, 0.736056);
		glVertex3f( 0.892663, -2.708364, 0.722076);
		glVertex3f( 0.938518, -2.612529, 0.727807);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.892663, -2.708364, 0.722076);
		glVertex3f( 0.928147, -2.627170, 0.702194);
		glVertex3f( 0.938518, -2.612529, 0.727807);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.884009, -2.697300, 0.701234);
		glVertex3f( 0.919315, -2.605302, 0.688452);
		glVertex3f( 0.928147, -2.627170, 0.702194);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.884009, -2.697300, 0.701234);
		glVertex3f( 0.863502, -2.691012, 0.694469);
		glVertex3f( 0.919315, -2.605302, 0.688452);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.863502, -2.691012, 0.694469);
		glVertex3f( 0.889950, -2.608586, 0.685343);
		glVertex3f( 0.919315, -2.605302, 0.688452);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.831536, -2.666508, 0.717858);
		glVertex3f( 0.842018, -2.664389, 0.742900);
		glVertex3f( 0.874394, -2.584526, 0.720330);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.831536, -2.666508, 0.717858);
		glVertex3f( 0.772495, -2.756524, 0.728834);
		glVertex3f( 0.842018, -2.664389, 0.742900);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.772495, -2.756524, 0.728834);
		glVertex3f( 0.780287, -2.744976, 0.750291);
		glVertex3f( 0.842018, -2.664389, 0.742900);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.856449, -2.674061, 0.763563);
		glVertex3f( 0.875694, -2.674700, 0.769461);
		glVertex3f( 0.886593, -2.591229, 0.757767);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.856449, -2.674061, 0.763563);
		glVertex3f( 0.782335, -2.761925, 0.775219);
		glVertex3f( 0.875694, -2.674700, 0.769461);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.782335, -2.761925, 0.775219);
		glVertex3f( 0.813126, -2.760824, 0.780573);
		glVertex3f( 0.875694, -2.674700, 0.769461);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.886454, -2.701095, 0.757722);
		glVertex3f( 0.895179, -2.703113, 0.736056);
		glVertex3f( 0.922432, -2.619047, 0.753821);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.886454, -2.701095, 0.757722);
		glVertex3f( 0.825055, -2.786924, 0.768146);
		glVertex3f( 0.895179, -2.703113, 0.736056);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.825055, -2.786924, 0.768146);
		glVertex3f( 0.844418, -2.782091, 0.744071);
		glVertex3f( 0.895179, -2.703113, 0.736056);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.892663, -2.708364, 0.722076);
		glVertex3f( 0.884009, -2.697300, 0.701234);
		glVertex3f( 0.928147, -2.627170, 0.702194);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.892663, -2.708364, 0.722076);
		glVertex3f( 0.830489, -2.794650, 0.719047);
		glVertex3f( 0.884009, -2.697300, 0.701234);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.830489, -2.794650, 0.719047);
		glVertex3f( 0.822371, -2.773968, 0.697040);
		glVertex3f( 0.884009, -2.697300, 0.701234);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.863502, -2.691012, 0.694469);
		glVertex3f( 0.841159, -2.678177, 0.697370);
		glVertex3f( 0.889950, -2.608586, 0.685343);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.863502, -2.691012, 0.694469);
		glVertex3f( 0.791129, -2.774424, 0.695774);
		glVertex3f( 0.841159, -2.678177, 0.697370);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.791129, -2.774424, 0.695774);
		glVertex3f( 0.790128, -2.751071, 0.702682);
		glVertex3f( 0.841159, -2.678177, 0.697370);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.757635, -2.818555, 0.726549);
		glVertex3f( 0.772495, -2.756524, 0.728834);
		glVertex3f( 0.790128, -2.751071, 0.702682);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.757635, -2.818555, 0.726549);
		glVertex3f( 0.745987, -2.818202, 0.754592);
		glVertex3f( 0.772495, -2.756524, 0.728834);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.745987, -2.818202, 0.754592);
		glVertex3f( 0.780287, -2.744976, 0.750291);
		glVertex3f( 0.772495, -2.756524, 0.728834);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.745987, -2.818202, 0.754592);
		glVertex3f( 0.782335, -2.761925, 0.775219);
		glVertex3f( 0.780287, -2.744976, 0.750291);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.745987, -2.818202, 0.754592);
		glVertex3f( 0.770313, -2.830701, 0.768975);
		glVertex3f( 0.782335, -2.761925, 0.775219);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.770313, -2.830701, 0.768975);
		glVertex3f( 0.813126, -2.760824, 0.780573);
		glVertex3f( 0.782335, -2.761925, 0.775219);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.770313, -2.830701, 0.768975);
		glVertex3f( 0.825055, -2.786924, 0.768146);
		glVertex3f( 0.813126, -2.760824, 0.780573);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.770313, -2.830701, 0.768975);
		glVertex3f( 0.788706, -2.843202, 0.747519);
		glVertex3f( 0.825055, -2.786924, 0.768146);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.788706, -2.843202, 0.747519);
		glVertex3f( 0.844418, -2.782091, 0.744071);
		glVertex3f( 0.825055, -2.786924, 0.768146);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.791129, -2.774424, 0.695774);
		glVertex3f( 0.757635, -2.818555, 0.726549);
		glVertex3f( 0.790128, -2.751071, 0.702682);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.791129, -2.774424, 0.695774);
		glVertex3f( 0.775747, -2.838427, 0.719876);
		glVertex3f( 0.757635, -2.818555, 0.726549);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.775747, -2.838427, 0.719876);
		glVertex3f( 0.757966, -2.840670, 0.743921);
		glVertex3f( 0.757635, -2.818555, 0.726549);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.788706, -2.843202, 0.747519);
		glVertex3f( 0.830489, -2.794650, 0.719047);
		glVertex3f( 0.844418, -2.782091, 0.744071);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.788706, -2.843202, 0.747519);
		glVertex3f( 0.775747, -2.838427, 0.719876);
		glVertex3f( 0.830489, -2.794650, 0.719047);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.775747, -2.838427, 0.719876);
		glVertex3f( 0.822371, -2.773968, 0.697040);
		glVertex3f( 0.830489, -2.794650, 0.719047);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.782392, -2.817312, 0.834609);
		glVertex3f( 0.799399, -2.817265, 0.813646);
		glVertex3f( 0.811686, -2.822039, 0.837231);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.838403, -2.766781, 0.794188);
		glVertex3f( 0.799399, -2.817265, 0.813646);
		glVertex3f( 0.808855, -2.764518, 0.793543);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.782392, -2.817312, 0.834609);
		glVertex3f( 0.811686, -2.822039, 0.837231);
		glVertex3f( 0.792877, -2.809539, 0.856178);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.782392, -2.817312, 0.834609);
		glVertex3f( 0.792877, -2.809539, 0.856178);
		glVertex3f( 0.768966, -2.797040, 0.844303);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.782392, -2.817312, 0.834609);
		glVertex3f( 0.768966, -2.797040, 0.844303);
		glVertex3f( 0.780441, -2.798732, 0.819945);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.838403, -2.766781, 0.794188);
		glVertex3f( 0.808855, -2.764518, 0.793543);
		glVertex3f( 0.870328, -2.699819, 0.792548);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.859307, -2.774904, 0.834313);
		glVertex3f( 0.847544, -2.784743, 0.812757);
		glVertex3f( 0.899043, -2.716670, 0.815688);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.827308, -2.753638, 0.866548);
		glVertex3f( 0.841022, -2.777018, 0.855288);
		glVertex3f( 0.892022, -2.709456, 0.846622);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.795275, -2.737789, 0.841132);
		glVertex3f( 0.798303, -2.752018, 0.862361);
		glVertex3f( 0.861194, -2.683831, 0.852477);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.805812, -2.744484, 0.799845);
		glVertex3f( 0.789190, -2.747243, 0.822577);
		glVertex3f( 0.837604, -2.675929, 0.813529);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.838403, -2.766781, 0.794188);
		glVertex3f( 0.870328, -2.699819, 0.792548);
		glVertex3f( 0.890200, -2.706821, 0.797996);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.859307, -2.774904, 0.834313);
		glVertex3f( 0.899043, -2.716670, 0.815688);
		glVertex3f( 0.900777, -2.712223, 0.827783);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.827308, -2.753638, 0.866548);
		glVertex3f( 0.892022, -2.709456, 0.846622);
		glVertex3f( 0.879400, -2.685935, 0.857275);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.795275, -2.737789, 0.841132);
		glVertex3f( 0.861194, -2.683831, 0.852477);
		glVertex3f( 0.846993, -2.674669, 0.835003);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.805812, -2.744484, 0.799845);
		glVertex3f( 0.837604, -2.675929, 0.813529);
		glVertex3f( 0.848018, -2.686960, 0.795555);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.926019, -2.650967, 0.799176);
		glVertex3f( 0.915981, -2.631819, 0.787762);
		glVertex3f( 0.937290, -2.587435, 0.797685);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.919161, -2.642844, 0.843896);
		glVertex3f( 0.934225, -2.639046, 0.821321);
		glVertex3f( 0.939315, -2.586157, 0.837673);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.882766, -2.616081, 0.848212);
		glVertex3f( 0.903792, -2.618821, 0.851978);
		glVertex3f( 0.905106, -2.569639, 0.846027);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.871176, -2.609870, 0.816199);
		glVertex3f( 0.876324, -2.605141, 0.831133);
		glVertex3f( 0.888958, -2.561843, 0.816546);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.888480, -2.632146, 0.785460);
		glVertex3f( 0.878261, -2.614470, 0.795685);
		glVertex3f( 0.917625, -2.577901, 0.789661);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.917625, -2.577901, 0.789661);
		glVertex3f( 0.888958, -2.561843, 0.816546);
		glVertex3f( 0.912626, -2.574046, 0.814870);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.917625, -2.577901, 0.789661);
		glVertex3f( 0.878261, -2.614470, 0.795685);
		glVertex3f( 0.888958, -2.561843, 0.816546);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.878261, -2.614470, 0.795685);
		glVertex3f( 0.871176, -2.609870, 0.816199);
		glVertex3f( 0.888958, -2.561843, 0.816546);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.888958, -2.561843, 0.816546);
		glVertex3f( 0.905106, -2.569639, 0.846027);
		glVertex3f( 0.912626, -2.574046, 0.814870);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.888958, -2.561843, 0.816546);
		glVertex3f( 0.876324, -2.605141, 0.831133);
		glVertex3f( 0.905106, -2.569639, 0.846027);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.876324, -2.605141, 0.831133);
		glVertex3f( 0.882766, -2.616081, 0.848212);
		glVertex3f( 0.905106, -2.569639, 0.846027);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.905106, -2.569639, 0.846027);
		glVertex3f( 0.939315, -2.586157, 0.837673);
		glVertex3f( 0.912626, -2.574046, 0.814870);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.905106, -2.569639, 0.846027);
		glVertex3f( 0.903792, -2.618821, 0.851978);
		glVertex3f( 0.939315, -2.586157, 0.837673);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.903792, -2.618821, 0.851978);
		glVertex3f( 0.919161, -2.642844, 0.843896);
		glVertex3f( 0.939315, -2.586157, 0.837673);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.939315, -2.586157, 0.837673);
		glVertex3f( 0.937290, -2.587435, 0.797685);
		glVertex3f( 0.912626, -2.574046, 0.814870);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.939315, -2.586157, 0.837673);
		glVertex3f( 0.934225, -2.639046, 0.821321);
		glVertex3f( 0.937290, -2.587435, 0.797685);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.934225, -2.639046, 0.821321);
		glVertex3f( 0.926019, -2.650967, 0.799176);
		glVertex3f( 0.937290, -2.587435, 0.797685);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.937290, -2.587435, 0.797685);
		glVertex3f( 0.917625, -2.577901, 0.789661);
		glVertex3f( 0.912626, -2.574046, 0.814870);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.937290, -2.587435, 0.797685);
		glVertex3f( 0.915981, -2.631819, 0.787762);
		glVertex3f( 0.917625, -2.577901, 0.789661);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.915981, -2.631819, 0.787762);
		glVertex3f( 0.888480, -2.632146, 0.785460);
		glVertex3f( 0.917625, -2.577901, 0.789661);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.848018, -2.686960, 0.795555);
		glVertex3f( 0.878261, -2.614470, 0.795685);
		glVertex3f( 0.888480, -2.632146, 0.785460);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.848018, -2.686960, 0.795555);
		glVertex3f( 0.837604, -2.675929, 0.813529);
		glVertex3f( 0.878261, -2.614470, 0.795685);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.837604, -2.675929, 0.813529);
		glVertex3f( 0.871176, -2.609870, 0.816199);
		glVertex3f( 0.878261, -2.614470, 0.795685);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.846993, -2.674669, 0.835003);
		glVertex3f( 0.876324, -2.605141, 0.831133);
		glVertex3f( 0.871176, -2.609870, 0.816199);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.846993, -2.674669, 0.835003);
		glVertex3f( 0.861194, -2.683831, 0.852477);
		glVertex3f( 0.876324, -2.605141, 0.831133);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.861194, -2.683831, 0.852477);
		glVertex3f( 0.882766, -2.616081, 0.848212);
		glVertex3f( 0.876324, -2.605141, 0.831133);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.879400, -2.685935, 0.857275);
		glVertex3f( 0.903792, -2.618821, 0.851978);
		glVertex3f( 0.882766, -2.616081, 0.848212);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.879400, -2.685935, 0.857275);
		glVertex3f( 0.892022, -2.709456, 0.846622);
		glVertex3f( 0.903792, -2.618821, 0.851978);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.892022, -2.709456, 0.846622);
		glVertex3f( 0.919161, -2.642844, 0.843896);
		glVertex3f( 0.903792, -2.618821, 0.851978);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.900777, -2.712223, 0.827783);
		glVertex3f( 0.934225, -2.639046, 0.821321);
		glVertex3f( 0.919161, -2.642844, 0.843896);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.900777, -2.712223, 0.827783);
		glVertex3f( 0.899043, -2.716670, 0.815688);
		glVertex3f( 0.934225, -2.639046, 0.821321);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.899043, -2.716670, 0.815688);
		glVertex3f( 0.926019, -2.650967, 0.799176);
		glVertex3f( 0.934225, -2.639046, 0.821321);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.890200, -2.706821, 0.797996);
		glVertex3f( 0.915981, -2.631819, 0.787762);
		glVertex3f( 0.926019, -2.650967, 0.799176);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.890200, -2.706821, 0.797996);
		glVertex3f( 0.870328, -2.699819, 0.792548);
		glVertex3f( 0.915981, -2.631819, 0.787762);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.870328, -2.699819, 0.792548);
		glVertex3f( 0.888480, -2.632146, 0.785460);
		glVertex3f( 0.915981, -2.631819, 0.787762);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.837604, -2.675929, 0.813529);
		glVertex3f( 0.846993, -2.674669, 0.835003);
		glVertex3f( 0.871176, -2.609870, 0.816199);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.837604, -2.675929, 0.813529);
		glVertex3f( 0.789190, -2.747243, 0.822577);
		glVertex3f( 0.846993, -2.674669, 0.835003);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.789190, -2.747243, 0.822577);
		glVertex3f( 0.795275, -2.737789, 0.841132);
		glVertex3f( 0.846993, -2.674669, 0.835003);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.861194, -2.683831, 0.852477);
		glVertex3f( 0.879400, -2.685935, 0.857275);
		glVertex3f( 0.882766, -2.616081, 0.848212);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.861194, -2.683831, 0.852477);
		glVertex3f( 0.798303, -2.752018, 0.862361);
		glVertex3f( 0.879400, -2.685935, 0.857275);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.798303, -2.752018, 0.862361);
		glVertex3f( 0.827308, -2.753638, 0.866548);
		glVertex3f( 0.879400, -2.685935, 0.857275);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.892022, -2.709456, 0.846622);
		glVertex3f( 0.900777, -2.712223, 0.827783);
		glVertex3f( 0.919161, -2.642844, 0.843896);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.892022, -2.709456, 0.846622);
		glVertex3f( 0.841022, -2.777018, 0.855288);
		glVertex3f( 0.900777, -2.712223, 0.827783);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.841022, -2.777018, 0.855288);
		glVertex3f( 0.859307, -2.774904, 0.834313);
		glVertex3f( 0.900777, -2.712223, 0.827783);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.899043, -2.716670, 0.815688);
		glVertex3f( 0.890200, -2.706821, 0.797996);
		glVertex3f( 0.926019, -2.650967, 0.799176);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.899043, -2.716670, 0.815688);
		glVertex3f( 0.847544, -2.784743, 0.812757);
		glVertex3f( 0.890200, -2.706821, 0.797996);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.847544, -2.784743, 0.812757);
		glVertex3f( 0.838403, -2.766781, 0.794188);
		glVertex3f( 0.890200, -2.706821, 0.797996);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.870328, -2.699819, 0.792548);
		glVertex3f( 0.848018, -2.686960, 0.795555);
		glVertex3f( 0.888480, -2.632146, 0.785460);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.870328, -2.699819, 0.792548);
		glVertex3f( 0.808855, -2.764518, 0.793543);
		glVertex3f( 0.848018, -2.686960, 0.795555);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.808855, -2.764518, 0.793543);
		glVertex3f( 0.805812, -2.744484, 0.799845);
		glVertex3f( 0.848018, -2.686960, 0.795555);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.780441, -2.798732, 0.819945);
		glVertex3f( 0.789190, -2.747243, 0.822577);
		glVertex3f( 0.805812, -2.744484, 0.799845);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.780441, -2.798732, 0.819945);
		glVertex3f( 0.768966, -2.797040, 0.844303);
		glVertex3f( 0.789190, -2.747243, 0.822577);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.768966, -2.797040, 0.844303);
		glVertex3f( 0.795275, -2.737789, 0.841132);
		glVertex3f( 0.789190, -2.747243, 0.822577);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.768966, -2.797040, 0.844303);
		glVertex3f( 0.798303, -2.752018, 0.862361);
		glVertex3f( 0.795275, -2.737789, 0.841132);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.768966, -2.797040, 0.844303);
		glVertex3f( 0.792877, -2.809539, 0.856178);
		glVertex3f( 0.798303, -2.752018, 0.862361);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.792877, -2.809539, 0.856178);
		glVertex3f( 0.827308, -2.753638, 0.866548);
		glVertex3f( 0.798303, -2.752018, 0.862361);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.792877, -2.809539, 0.856178);
		glVertex3f( 0.841022, -2.777018, 0.855288);
		glVertex3f( 0.827308, -2.753638, 0.866548);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.792877, -2.809539, 0.856178);
		glVertex3f( 0.811686, -2.822039, 0.837231);
		glVertex3f( 0.841022, -2.777018, 0.855288);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.811686, -2.822039, 0.837231);
		glVertex3f( 0.859307, -2.774904, 0.834313);
		glVertex3f( 0.841022, -2.777018, 0.855288);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.808855, -2.764518, 0.793543);
		glVertex3f( 0.780441, -2.798732, 0.819945);
		glVertex3f( 0.805812, -2.744484, 0.799845);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.808855, -2.764518, 0.793543);
		glVertex3f( 0.799399, -2.817265, 0.813646);
		glVertex3f( 0.780441, -2.798732, 0.819945);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.799399, -2.817265, 0.813646);
		glVertex3f( 0.782392, -2.817312, 0.834609);
		glVertex3f( 0.780441, -2.798732, 0.819945);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.811686, -2.822039, 0.837231);
		glVertex3f( 0.847544, -2.784743, 0.812757);
		glVertex3f( 0.859307, -2.774904, 0.834313);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.811686, -2.822039, 0.837231);
		glVertex3f( 0.799399, -2.817265, 0.813646);
		glVertex3f( 0.847544, -2.784743, 0.812757);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.799399, -2.817265, 0.813646);
		glVertex3f( 0.838403, -2.766781, 0.794188);
		glVertex3f( 0.847544, -2.784743, 0.812757);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.931333, -2.637053, 0.684365);
		glVertex3f( 0.949672, -2.598708, 0.628056);
		glVertex3f( 0.970005, -2.586992, 0.750173);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.957956, -2.529428, 0.558407);
		glVertex3f( 0.949672, -2.598708, 0.628056);
		glVertex3f( 0.905384, -2.549057, 0.532998);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.931333, -2.637053, 0.684365);
		glVertex3f( 0.970005, -2.586992, 0.750173);
		glVertex3f( 0.905384, -2.630286, 0.808274);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.931333, -2.637053, 0.684365);
		glVertex3f( 0.905384, -2.630286, 0.808274);
		glVertex3f( 0.862850, -2.616728, 0.737120);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.931333, -2.637053, 0.684365);
		glVertex3f( 0.862850, -2.616728, 0.737120);
		glVertex3f( 0.874483, -2.630287, 0.618064);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.957956, -2.529428, 0.558407);
		glVertex3f( 0.905384, -2.549057, 0.532998);
		glVertex3f( 0.925956, -2.423826, 0.529634);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.990449, -2.529428, 0.758406);
		glVertex3f( 0.986285, -2.549058, 0.650554);
		glVertex3f( 1.005384, -2.417624, 0.703128);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.905384, -2.529428, 0.882013);
		glVertex3f( 0.957751, -2.547323, 0.829798);
		glVertex3f( 0.924879, -2.425724, 0.890630);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.856257, -2.507096, 0.764572);
		glVertex3f( 0.859395, -2.522211, 0.826171);
		glVertex3f( 0.844507, -2.413982, 0.821899);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.852001, -2.523983, 0.560039);
		glVertex3f( 0.867344, -2.520672, 0.663373);
		glVertex3f( 0.854258, -2.410177, 0.587491);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.957956, -2.529428, 0.558407);
		glVertex3f( 0.925956, -2.423826, 0.529634);
		glVertex3f( 0.986285, -2.417624, 0.585571);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.990449, -2.529428, 0.758406);
		glVertex3f( 1.005384, -2.417624, 0.703128);
		glVertex3f( 0.968002, -2.435897, 0.815211);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.905384, -2.529428, 0.882013);
		glVertex3f( 0.924879, -2.425724, 0.890630);
		glVertex3f( 0.874483, -2.417624, 0.893340);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.856257, -2.507096, 0.764572);
		glVertex3f( 0.844507, -2.413982, 0.821899);
		glVertex3f( 0.856293, -2.402929, 0.689354);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.852001, -2.523983, 0.560039);
		glVertex3f( 0.854258, -2.410177, 0.587491);
		glVertex3f( 0.869398, -2.419393, 0.521216);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.990449, -2.305819, 0.647850);
		glVertex3f( 0.949304, -2.296990, 0.580652);
		glVertex3f( 0.955383, -2.204960, 0.670637);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.955866, -2.309416, 0.842778);
		glVertex3f( 0.986285, -2.286189, 0.755702);
		glVertex3f( 0.936285, -2.204960, 0.788193);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.852811, -2.305819, 0.847849);
		glVertex3f( 0.900609, -2.297198, 0.848415);
		glVertex3f( 0.874483, -2.204960, 0.788193);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.834275, -2.308143, 0.648424);
		glVertex3f( 0.840683, -2.286189, 0.756519);
		glVertex3f( 0.855384, -2.204960, 0.670637);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.900614, -2.315077, 0.553276);
		glVertex3f( 0.853782, -2.294333, 0.567695);
		glVertex3f( 0.896967, -2.219913, 0.618973);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.896967, -2.219913, 0.618973);
		glVertex3f( 0.855384, -2.204960, 0.670637);
		glVertex3f( 0.905384, -2.167624, 0.703128);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.896967, -2.219913, 0.618973);
		glVertex3f( 0.853782, -2.294333, 0.567695);
		glVertex3f( 0.855384, -2.204960, 0.670637);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.853782, -2.294333, 0.567695);
		glVertex3f( 0.834275, -2.308143, 0.648424);
		glVertex3f( 0.855384, -2.204960, 0.670637);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.855384, -2.204960, 0.670637);
		glVertex3f( 0.874483, -2.204960, 0.788193);
		glVertex3f( 0.905384, -2.167624, 0.703128);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.855384, -2.204960, 0.670637);
		glVertex3f( 0.840683, -2.286189, 0.756519);
		glVertex3f( 0.874483, -2.204960, 0.788193);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.840683, -2.286189, 0.756519);
		glVertex3f( 0.852811, -2.305819, 0.847849);
		glVertex3f( 0.874483, -2.204960, 0.788193);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.874483, -2.204960, 0.788193);
		glVertex3f( 0.936285, -2.204960, 0.788193);
		glVertex3f( 0.905384, -2.167624, 0.703128);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.874483, -2.204960, 0.788193);
		glVertex3f( 0.900609, -2.297198, 0.848415);
		glVertex3f( 0.936285, -2.204960, 0.788193);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.900609, -2.297198, 0.848415);
		glVertex3f( 0.955866, -2.309416, 0.842778);
		glVertex3f( 0.936285, -2.204960, 0.788193);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.936285, -2.204960, 0.788193);
		glVertex3f( 0.955383, -2.204960, 0.670637);
		glVertex3f( 0.905384, -2.167624, 0.703128);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.936285, -2.204960, 0.788193);
		glVertex3f( 0.986285, -2.286189, 0.755702);
		glVertex3f( 0.955383, -2.204960, 0.670637);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.986285, -2.286189, 0.755702);
		glVertex3f( 0.990449, -2.305819, 0.647850);
		glVertex3f( 0.955383, -2.204960, 0.670637);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.955383, -2.204960, 0.670637);
		glVertex3f( 0.896967, -2.219913, 0.618973);
		glVertex3f( 0.905384, -2.167624, 0.703128);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.955383, -2.204960, 0.670637);
		glVertex3f( 0.949304, -2.296990, 0.580652);
		glVertex3f( 0.896967, -2.219913, 0.618973);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.949304, -2.296990, 0.580652);
		glVertex3f( 0.900614, -2.315077, 0.553276);
		glVertex3f( 0.896967, -2.219913, 0.618973);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.869398, -2.419393, 0.521216);
		glVertex3f( 0.853782, -2.294333, 0.567695);
		glVertex3f( 0.900614, -2.315077, 0.553276);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.869398, -2.419393, 0.521216);
		glVertex3f( 0.854258, -2.410177, 0.587491);
		glVertex3f( 0.853782, -2.294333, 0.567695);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.854258, -2.410177, 0.587491);
		glVertex3f( 0.834275, -2.308143, 0.648424);
		glVertex3f( 0.853782, -2.294333, 0.567695);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.856293, -2.402929, 0.689354);
		glVertex3f( 0.840683, -2.286189, 0.756519);
		glVertex3f( 0.834275, -2.308143, 0.648424);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.856293, -2.402929, 0.689354);
		glVertex3f( 0.844507, -2.413982, 0.821899);
		glVertex3f( 0.840683, -2.286189, 0.756519);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.844507, -2.413982, 0.821899);
		glVertex3f( 0.852811, -2.305819, 0.847849);
		glVertex3f( 0.840683, -2.286189, 0.756519);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.874483, -2.417624, 0.893340);
		glVertex3f( 0.900609, -2.297198, 0.848415);
		glVertex3f( 0.852811, -2.305819, 0.847849);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.874483, -2.417624, 0.893340);
		glVertex3f( 0.924879, -2.425724, 0.890630);
		glVertex3f( 0.900609, -2.297198, 0.848415);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.924879, -2.425724, 0.890630);
		glVertex3f( 0.955866, -2.309416, 0.842778);
		glVertex3f( 0.900609, -2.297198, 0.848415);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.968002, -2.435897, 0.815211);
		glVertex3f( 0.986285, -2.286189, 0.755702);
		glVertex3f( 0.955866, -2.309416, 0.842778);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.968002, -2.435897, 0.815211);
		glVertex3f( 1.005384, -2.417624, 0.703128);
		glVertex3f( 0.986285, -2.286189, 0.755702);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 1.005384, -2.417624, 0.703128);
		glVertex3f( 0.990449, -2.305819, 0.647850);
		glVertex3f( 0.986285, -2.286189, 0.755702);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.986285, -2.417624, 0.585571);
		glVertex3f( 0.949304, -2.296990, 0.580652);
		glVertex3f( 0.990449, -2.305819, 0.647850);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.986285, -2.417624, 0.585571);
		glVertex3f( 0.925956, -2.423826, 0.529634);
		glVertex3f( 0.949304, -2.296990, 0.580652);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.925956, -2.423826, 0.529634);
		glVertex3f( 0.900614, -2.315077, 0.553276);
		glVertex3f( 0.949304, -2.296990, 0.580652);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.854258, -2.410177, 0.587491);
		glVertex3f( 0.856293, -2.402929, 0.689354);
		glVertex3f( 0.834275, -2.308143, 0.648424);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.854258, -2.410177, 0.587491);
		glVertex3f( 0.867344, -2.520672, 0.663373);
		glVertex3f( 0.856293, -2.402929, 0.689354);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.867344, -2.520672, 0.663373);
		glVertex3f( 0.856257, -2.507096, 0.764572);
		glVertex3f( 0.856293, -2.402929, 0.689354);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.844507, -2.413982, 0.821899);
		glVertex3f( 0.874483, -2.417624, 0.893340);
		glVertex3f( 0.852811, -2.305819, 0.847849);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.844507, -2.413982, 0.821899);
		glVertex3f( 0.859395, -2.522211, 0.826171);
		glVertex3f( 0.874483, -2.417624, 0.893340);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.859395, -2.522211, 0.826171);
		glVertex3f( 0.905384, -2.529428, 0.882013);
		glVertex3f( 0.874483, -2.417624, 0.893340);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.924879, -2.425724, 0.890630);
		glVertex3f( 0.968002, -2.435897, 0.815211);
		glVertex3f( 0.955866, -2.309416, 0.842778);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.924879, -2.425724, 0.890630);
		glVertex3f( 0.957751, -2.547323, 0.829798);
		glVertex3f( 0.968002, -2.435897, 0.815211);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.957751, -2.547323, 0.829798);
		glVertex3f( 0.990449, -2.529428, 0.758406);
		glVertex3f( 0.968002, -2.435897, 0.815211);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 1.005384, -2.417624, 0.703128);
		glVertex3f( 0.986285, -2.417624, 0.585571);
		glVertex3f( 0.990449, -2.305819, 0.647850);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 1.005384, -2.417624, 0.703128);
		glVertex3f( 0.986285, -2.549058, 0.650554);
		glVertex3f( 0.986285, -2.417624, 0.585571);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.986285, -2.549058, 0.650554);
		glVertex3f( 0.957956, -2.529428, 0.558407);
		glVertex3f( 0.986285, -2.417624, 0.585571);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.925956, -2.423826, 0.529634);
		glVertex3f( 0.869398, -2.419393, 0.521216);
		glVertex3f( 0.900614, -2.315077, 0.553276);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.925956, -2.423826, 0.529634);
		glVertex3f( 0.905384, -2.549057, 0.532998);
		glVertex3f( 0.869398, -2.419393, 0.521216);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.905384, -2.549057, 0.532998);
		glVertex3f( 0.852001, -2.523983, 0.560039);
		glVertex3f( 0.869398, -2.419393, 0.521216);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.874483, -2.630287, 0.618064);
		glVertex3f( 0.867344, -2.520672, 0.663373);
		glVertex3f( 0.852001, -2.523983, 0.560039);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.874483, -2.630287, 0.618064);
		glVertex3f( 0.862850, -2.616728, 0.737120);
		glVertex3f( 0.867344, -2.520672, 0.663373);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.862850, -2.616728, 0.737120);
		glVertex3f( 0.856257, -2.507096, 0.764572);
		glVertex3f( 0.867344, -2.520672, 0.663373);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.862850, -2.616728, 0.737120);
		glVertex3f( 0.859395, -2.522211, 0.826171);
		glVertex3f( 0.856257, -2.507096, 0.764572);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.862850, -2.616728, 0.737120);
		glVertex3f( 0.905384, -2.630286, 0.808274);
		glVertex3f( 0.859395, -2.522211, 0.826171);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.905384, -2.630286, 0.808274);
		glVertex3f( 0.905384, -2.529428, 0.882013);
		glVertex3f( 0.859395, -2.522211, 0.826171);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.905384, -2.630286, 0.808274);
		glVertex3f( 0.957751, -2.547323, 0.829798);
		glVertex3f( 0.905384, -2.529428, 0.882013);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.905384, -2.630286, 0.808274);
		glVertex3f( 0.970005, -2.586992, 0.750173);
		glVertex3f( 0.957751, -2.547323, 0.829798);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.970005, -2.586992, 0.750173);
		glVertex3f( 0.990449, -2.529428, 0.758406);
		glVertex3f( 0.957751, -2.547323, 0.829798);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.905384, -2.549057, 0.532998);
		glVertex3f( 0.874483, -2.630287, 0.618064);
		glVertex3f( 0.852001, -2.523983, 0.560039);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.905384, -2.549057, 0.532998);
		glVertex3f( 0.949672, -2.598708, 0.628056);
		glVertex3f( 0.874483, -2.630287, 0.618064);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.949672, -2.598708, 0.628056);
		glVertex3f( 0.931333, -2.637053, 0.684365);
		glVertex3f( 0.874483, -2.630287, 0.618064);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.970005, -2.586992, 0.750173);
		glVertex3f( 0.986285, -2.549058, 0.650554);
		glVertex3f( 0.990449, -2.529428, 0.758406);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.970005, -2.586992, 0.750173);
		glVertex3f( 0.949672, -2.598708, 0.628056);
		glVertex3f( 0.986285, -2.549058, 0.650554);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.949672, -2.598708, 0.628056);
		glVertex3f( 0.957956, -2.529428, 0.558407);
		glVertex3f( 0.986285, -2.549058, 0.650554);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.725321, -1.735472, 0.548403);
		glVertex3f( 0.896024, -2.172131, 0.759142);
		glVertex3f( 0.794860, -1.705907, 0.686749);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 1.019637, -2.112211, 0.715586);
		glVertex3f( 0.896024, -2.172131, 0.759142);
		glVertex3f( 0.848349, -2.364488, 0.728658);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.725321, -1.735472, 0.548403);
		glVertex3f( 0.794860, -1.705907, 0.686749);
		glVertex3f( 0.621067, -1.600607, 0.511065);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.725321, -1.735472, 0.548403);
		glVertex3f( 0.621067, -1.600607, 0.511065);
		glVertex3f( 0.677948, -1.720051, 0.381164);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.725321, -1.735472, 0.548403);
		glVertex3f( 0.677948, -1.720051, 0.381164);
		glVertex3f( 0.691279, -1.957043, 0.502450);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 1.019637, -2.112211, 0.715586);
		glVertex3f( 0.848349, -2.364488, 0.728658);
		glVertex3f( 0.996645, -2.212234, 0.622577);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.903237, -1.490959, 0.669459);
		glVertex3f( 0.934823, -1.683784, 0.742330);
		glVertex3f( 1.008092, -1.351604, 0.621249);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.612623, -1.394014, 0.410206);
		glVertex3f( 0.686705, -1.389444, 0.559740);
		glVertex3f( 0.717911, -1.177672, 0.378686);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.709395, -1.597224, 0.189202);
		glVertex3f( 0.611705, -1.519346, 0.299934);
		glVertex3f( 0.728439, -1.377399, 0.088214);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.853836, -1.947042, 0.460082);
		glVertex3f( 0.835621, -1.702148, 0.219650);
		glVertex3f( 0.848691, -1.682578, 0.129129);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 1.019637, -2.112211, 0.715586);
		glVertex3f( 0.996645, -2.212234, 0.622577);
		glVertex3f( 1.155214, -1.343546, 0.508591);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.903237, -1.490959, 0.669459);
		glVertex3f( 1.008092, -1.351604, 0.621249);
		glVertex3f( 0.849792, -1.167210, 0.508591);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.612623, -1.394014, 0.410206);
		glVertex3f( 0.717911, -1.177672, 0.378686);
		glVertex3f( 0.671559, -1.257956, 0.218119);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.709395, -1.597224, 0.189202);
		glVertex3f( 0.728439, -1.377399, 0.088214);
		glVertex3f( 0.866827, -1.490376, 0.038595);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.853836, -1.947042, 0.460082);
		glVertex3f( 0.848691, -1.682578, 0.129129);
		glVertex3f( 0.943549, -2.232191, 0.611532);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 1.174259, -1.123721, 0.407603);
		glVertex3f( 1.271949, -1.201598, 0.296872);
		glVertex3f( 1.205706, -1.000894, 0.215642);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.890083, -1.015930, 0.323185);
		glVertex3f( 1.048033, -1.018797, 0.377156);
		glVertex3f( 1.038673, -0.937537, 0.166023);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.811225, -1.152518, 0.050010);
		glVertex3f( 0.834647, -1.035724, 0.166969);
		glVertex3f( 0.992321, -1.017820, 0.005456);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 1.046662, -1.344726, -0.034408);
		glVertex3f( 0.926681, -1.228984, -0.043219);
		glVertex3f( 1.130707, -1.130797, -0.044164);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 1.005652, -2.068654, 0.444190);
		glVertex3f( 1.120065, -1.464669, 0.043848);
		glVertex3f( 1.262587, -1.120337, 0.085740);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 1.262587, -1.120337, 0.085740);
		glVertex3f( 1.130707, -1.130797, -0.044164);
		glVertex3f( 1.158333, -0.985472, 0.048403);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 1.262587, -1.120337, 0.085740);
		glVertex3f( 1.120065, -1.464669, 0.043848);
		glVertex3f( 1.130707, -1.130797, -0.044164);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 1.120065, -1.464669, 0.043848);
		glVertex3f( 1.046662, -1.344726, -0.034408);
		glVertex3f( 1.130707, -1.130797, -0.044164);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 1.130707, -1.130797, -0.044164);
		glVertex3f( 0.992321, -1.017820, 0.005456);
		glVertex3f( 1.158333, -0.985472, 0.048403);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 1.130707, -1.130797, -0.044164);
		glVertex3f( 0.926681, -1.228984, -0.043219);
		glVertex3f( 0.992321, -1.017820, 0.005456);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.926681, -1.228984, -0.043219);
		glVertex3f( 0.811225, -1.152518, 0.050010);
		glVertex3f( 0.992321, -1.017820, 0.005456);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.992321, -1.017820, 0.005456);
		glVertex3f( 1.038673, -0.937537, 0.166023);
		glVertex3f( 1.158333, -0.985472, 0.048403);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.992321, -1.017820, 0.005456);
		glVertex3f( 0.834647, -1.035724, 0.166969);
		glVertex3f( 1.038673, -0.937537, 0.166023);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.834647, -1.035724, 0.166969);
		glVertex3f( 0.890083, -1.015930, 0.323185);
		glVertex3f( 1.038673, -0.937537, 0.166023);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 1.038673, -0.937537, 0.166023);
		glVertex3f( 1.205706, -1.000894, 0.215642);
		glVertex3f( 1.158333, -0.985472, 0.048403);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 1.038673, -0.937537, 0.166023);
		glVertex3f( 1.048033, -1.018797, 0.377156);
		glVertex3f( 1.205706, -1.000894, 0.215642);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 1.048033, -1.018797, 0.377156);
		glVertex3f( 1.174259, -1.123721, 0.407603);
		glVertex3f( 1.205706, -1.000894, 0.215642);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 1.205706, -1.000894, 0.215642);
		glVertex3f( 1.262587, -1.120337, 0.085740);
		glVertex3f( 1.158333, -0.985472, 0.048403);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 1.205706, -1.000894, 0.215642);
		glVertex3f( 1.271949, -1.201598, 0.296872);
		glVertex3f( 1.262587, -1.120337, 0.085740);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 1.271949, -1.201598, 0.296872);
		glVertex3f( 1.005652, -2.068654, 0.444190);
		glVertex3f( 1.262587, -1.120337, 0.085740);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.943549, -2.232191, 0.611532);
		glVertex3f( 1.120065, -1.464669, 0.043848);
		glVertex3f( 1.005652, -2.068654, 0.444190);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.943549, -2.232191, 0.611532);
		glVertex3f( 0.848691, -1.682578, 0.129129);
		glVertex3f( 1.120065, -1.464669, 0.043848);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.848691, -1.682578, 0.129129);
		glVertex3f( 1.046662, -1.344726, -0.034408);
		glVertex3f( 1.120065, -1.464669, 0.043848);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.866827, -1.490376, 0.038595);
		glVertex3f( 0.926681, -1.228984, -0.043219);
		glVertex3f( 1.046662, -1.344726, -0.034408);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.866827, -1.490376, 0.038595);
		glVertex3f( 0.728439, -1.377399, 0.088214);
		glVertex3f( 0.926681, -1.228984, -0.043219);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.728439, -1.377399, 0.088214);
		glVertex3f( 0.811225, -1.152518, 0.050010);
		glVertex3f( 0.926681, -1.228984, -0.043219);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.671559, -1.257956, 0.218119);
		glVertex3f( 0.834647, -1.035724, 0.166969);
		glVertex3f( 0.811225, -1.152518, 0.050010);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.671559, -1.257956, 0.218119);
		glVertex3f( 0.717911, -1.177672, 0.378686);
		glVertex3f( 0.834647, -1.035724, 0.166969);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.717911, -1.177672, 0.378686);
		glVertex3f( 0.890083, -1.015930, 0.323185);
		glVertex3f( 0.834647, -1.035724, 0.166969);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.849792, -1.167210, 0.508591);
		glVertex3f( 1.048033, -1.018797, 0.377156);
		glVertex3f( 0.890083, -1.015930, 0.323185);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.849792, -1.167210, 0.508591);
		glVertex3f( 1.008092, -1.351604, 0.621249);
		glVertex3f( 1.048033, -1.018797, 0.377156);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 1.008092, -1.351604, 0.621249);
		glVertex3f( 1.174259, -1.123721, 0.407603);
		glVertex3f( 1.048033, -1.018797, 0.377156);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 1.155214, -1.343546, 0.508591);
		glVertex3f( 1.271949, -1.201598, 0.296872);
		glVertex3f( 1.174259, -1.123721, 0.407603);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 1.155214, -1.343546, 0.508591);
		glVertex3f( 0.996645, -2.212234, 0.622577);
		glVertex3f( 1.271949, -1.201598, 0.296872);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.996645, -2.212234, 0.622577);
		glVertex3f( 1.005652, -2.068654, 0.444190);
		glVertex3f( 1.271949, -1.201598, 0.296872);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.848691, -1.682578, 0.129129);
		glVertex3f( 0.866827, -1.490376, 0.038595);
		glVertex3f( 1.046662, -1.344726, -0.034408);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.848691, -1.682578, 0.129129);
		glVertex3f( 0.835621, -1.702148, 0.219650);
		glVertex3f( 0.866827, -1.490376, 0.038595);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.835621, -1.702148, 0.219650);
		glVertex3f( 0.709395, -1.597224, 0.189202);
		glVertex3f( 0.866827, -1.490376, 0.038595);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.728439, -1.377399, 0.088214);
		glVertex3f( 0.671559, -1.257956, 0.218119);
		glVertex3f( 0.811225, -1.152518, 0.050010);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.728439, -1.377399, 0.088214);
		glVertex3f( 0.611705, -1.519346, 0.299934);
		glVertex3f( 0.671559, -1.257956, 0.218119);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.611705, -1.519346, 0.299934);
		glVertex3f( 0.612623, -1.394014, 0.410206);
		glVertex3f( 0.671559, -1.257956, 0.218119);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.717911, -1.177672, 0.378686);
		glVertex3f( 0.849792, -1.167210, 0.508591);
		glVertex3f( 0.890083, -1.015930, 0.323185);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.717911, -1.177672, 0.378686);
		glVertex3f( 0.686705, -1.389444, 0.559740);
		glVertex3f( 0.849792, -1.167210, 0.508591);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.686705, -1.389444, 0.559740);
		glVertex3f( 0.903237, -1.490959, 0.669459);
		glVertex3f( 0.849792, -1.167210, 0.508591);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 1.008092, -1.351604, 0.621249);
		glVertex3f( 1.155214, -1.343546, 0.508591);
		glVertex3f( 1.174259, -1.123721, 0.407603);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 1.008092, -1.351604, 0.621249);
		glVertex3f( 0.934823, -1.683784, 0.742330);
		glVertex3f( 1.155214, -1.343546, 0.508591);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.934823, -1.683784, 0.742330);
		glVertex3f( 1.019637, -2.112211, 0.715586);
		glVertex3f( 1.155214, -1.343546, 0.508591);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.996645, -2.212234, 0.622577);
		glVertex3f( 0.943549, -2.232191, 0.611532);
		glVertex3f( 1.005652, -2.068654, 0.444190);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.996645, -2.212234, 0.622577);
		glVertex3f( 0.848349, -2.364488, 0.728658);
		glVertex3f( 0.943549, -2.232191, 0.611532);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.848349, -2.364488, 0.728658);
		glVertex3f( 0.853836, -1.947042, 0.460082);
		glVertex3f( 0.943549, -2.232191, 0.611532);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.691279, -1.957043, 0.502450);
		glVertex3f( 0.835621, -1.702148, 0.219650);
		glVertex3f( 0.853836, -1.947042, 0.460082);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.691279, -1.957043, 0.502450);
		glVertex3f( 0.677948, -1.720051, 0.381164);
		glVertex3f( 0.835621, -1.702148, 0.219650);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.677948, -1.720051, 0.381164);
		glVertex3f( 0.709395, -1.597224, 0.189202);
		glVertex3f( 0.835621, -1.702148, 0.219650);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.677948, -1.720051, 0.381164);
		glVertex3f( 0.611705, -1.519346, 0.299934);
		glVertex3f( 0.709395, -1.597224, 0.189202);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.677948, -1.720051, 0.381164);
		glVertex3f( 0.621067, -1.600607, 0.511065);
		glVertex3f( 0.611705, -1.519346, 0.299934);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.621067, -1.600607, 0.511065);
		glVertex3f( 0.612623, -1.394014, 0.410206);
		glVertex3f( 0.611705, -1.519346, 0.299934);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.621067, -1.600607, 0.511065);
		glVertex3f( 0.686705, -1.389444, 0.559740);
		glVertex3f( 0.612623, -1.394014, 0.410206);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.621067, -1.600607, 0.511065);
		glVertex3f( 0.794860, -1.705907, 0.686749);
		glVertex3f( 0.686705, -1.389444, 0.559740);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.794860, -1.705907, 0.686749);
		glVertex3f( 0.903237, -1.490959, 0.669459);
		glVertex3f( 0.686705, -1.389444, 0.559740);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.848349, -2.364488, 0.728658);
		glVertex3f( 0.691279, -1.957043, 0.502450);
		glVertex3f( 0.853836, -1.947042, 0.460082);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.848349, -2.364488, 0.728658);
		glVertex3f( 0.896024, -2.172131, 0.759142);
		glVertex3f( 0.691279, -1.957043, 0.502450);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.896024, -2.172131, 0.759142);
		glVertex3f( 0.725321, -1.735472, 0.548403);
		glVertex3f( 0.691279, -1.957043, 0.502450);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.794860, -1.705907, 0.686749);
		glVertex3f( 0.934823, -1.683784, 0.742330);
		glVertex3f( 0.903237, -1.490959, 0.669459);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.794860, -1.705907, 0.686749);
		glVertex3f( 0.896024, -2.172131, 0.759142);
		glVertex3f( 0.934823, -1.683784, 0.742330);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.896024, -2.172131, 0.759142);
		glVertex3f( 1.019637, -2.112211, 0.715586);
		glVertex3f( 0.934823, -1.683784, 0.742330);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.305148, -0.678839, 0.171010);
		glVertex3f( 0.915420, -0.995559, 0.350320);
		glVertex3f( 0.380881, -0.609204, 0.411707);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 1.043906, -0.871663, 0.339152);
		glVertex3f( 0.915420, -0.995559, 0.350320);
		glVertex3f( 1.006903, -1.205525, 0.211047);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.305148, -0.678839, 0.171010);
		glVertex3f( 0.380881, -0.609204, 0.411707);
		glVertex3f( 0.042283, -0.608668, 0.145470);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.305148, -0.678839, 0.171010);
		glVertex3f( 0.042283, -0.608668, 0.145470);
		glVertex3f( 0.223920, -0.694174, -0.089450);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.305148, -0.678839, 0.171010);
		glVertex3f( 0.223920, -0.694174, -0.089450);
		glVertex3f( 0.440656, -0.909483, -0.000887);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 1.043906, -0.871663, 0.339152);
		glVertex3f( 1.006903, -1.205525, 0.211047);
		glVertex3f( 1.094072, -0.981692, 0.149324);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.358187, -0.345528, 0.502316);
		glVertex3f( 0.564464, -0.509932, 0.539999);
		glVertex3f( 0.393403, -0.156458, 0.512968);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.142066, -0.419115, 0.076478);
		glVertex3f( -0.038947, -0.370503, 0.324828);
		glVertex3f( -0.170381, -0.156148, 0.145188);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.166954, -0.564587, -0.323195);
		glVertex3f( -0.038947, -0.541512, -0.145016);
		glVertex3f( 0.011255, -0.347343, -0.380114);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.666951, -0.811665, -0.021807);
		glVertex3f( 0.436582, -0.594358, -0.290205);
		glVertex3f( 0.439138, -0.570710, -0.417027);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 1.043906, -0.871663, 0.339152);
		glVertex3f( 1.094072, -0.981692, 0.149324);
		glVertex3f( 0.599040, -0.070643, 0.380114);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.358187, -0.345528, 0.502316);
		glVertex3f( 0.393403, -0.156458, 0.512968);
		glVertex3f( 0.011255, -0.070643, 0.380114);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.142066, -0.419115, 0.076478);
		glVertex3f( -0.170381, -0.156148, 0.145188);
		glVertex3f( -0.170381, -0.261837, -0.145188);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.166954, -0.564587, -0.323195);
		glVertex3f( 0.011255, -0.347343, -0.380114);
		glVertex3f( 0.305148, -0.380003, -0.469846);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.666951, -0.811665, -0.021807);
		glVertex3f( 0.439138, -0.570710, -0.417027);
		glVertex3f( 1.034065, -1.030118, 0.111114);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.443342, 0.146601, 0.323195);
		glVertex3f( 0.649242, 0.123527, 0.145016);
		glVertex3f( 0.386375, 0.276188, 0.089450);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.056656, 0.091036, 0.170531);
		glVertex3f( 0.173713, 0.176372, 0.290205);
		glVertex3f( 0.092486, 0.243528, -0.000283);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.056656, -0.088773, -0.323489);
		glVertex3f( -0.120176, 0.038022, -0.089906);
		glVertex3f( 0.092486, 0.137840, -0.290658);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.443342, -0.144338, -0.476153);
		glVertex3f( 0.173713, -0.100326, -0.470018);
		glVertex3f( 0.386375, 0.105180, -0.380391);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.987423, -0.844361, -0.060400);
		glVertex3f( 0.649242, -0.216284, -0.389336);
		glVertex3f( 0.568012, 0.190683, -0.145470);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.568012, 0.190683, -0.145470);
		glVertex3f( 0.386375, 0.105180, -0.380391);
		glVertex3f( 0.305148, 0.260854, -0.171010);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.568012, 0.190683, -0.145470);
		glVertex3f( 0.649242, -0.216284, -0.389336);
		glVertex3f( 0.386375, 0.105180, -0.380391);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.649242, -0.216284, -0.389336);
		glVertex3f( 0.443342, -0.144338, -0.476153);
		glVertex3f( 0.386375, 0.105180, -0.380391);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.386375, 0.105180, -0.380391);
		glVertex3f( 0.092486, 0.137840, -0.290658);
		glVertex3f( 0.305148, 0.260854, -0.171010);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.386375, 0.105180, -0.380391);
		glVertex3f( 0.173713, -0.100326, -0.470018);
		glVertex3f( 0.092486, 0.137840, -0.290658);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.173713, -0.100326, -0.470018);
		glVertex3f( -0.056656, -0.088773, -0.323489);
		glVertex3f( 0.092486, 0.137840, -0.290658);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.092486, 0.137840, -0.290658);
		glVertex3f( 0.092486, 0.243528, -0.000283);
		glVertex3f( 0.305148, 0.260854, -0.171010);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.092486, 0.137840, -0.290658);
		glVertex3f( -0.120176, 0.038022, -0.089906);
		glVertex3f( 0.092486, 0.243528, -0.000283);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.120176, 0.038022, -0.089906);
		glVertex3f( -0.056656, 0.091036, 0.170531);
		glVertex3f( 0.092486, 0.243528, -0.000283);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.092486, 0.243528, -0.000283);
		glVertex3f( 0.386375, 0.276188, 0.089450);
		glVertex3f( 0.305148, 0.260854, -0.171010);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.092486, 0.243528, -0.000283);
		glVertex3f( 0.173713, 0.176372, 0.290205);
		glVertex3f( 0.386375, 0.276188, 0.089450);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.173713, 0.176372, 0.290205);
		glVertex3f( 0.443342, 0.146601, 0.323195);
		glVertex3f( 0.386375, 0.276188, 0.089450);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.386375, 0.276188, 0.089450);
		glVertex3f( 0.568012, 0.190683, -0.145470);
		glVertex3f( 0.305148, 0.260854, -0.171010);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.386375, 0.276188, 0.089450);
		glVertex3f( 0.649242, 0.123527, 0.145016);
		glVertex3f( 0.568012, 0.190683, -0.145470);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.649242, 0.123527, 0.145016);
		glVertex3f( 0.987423, -0.844361, -0.060400);
		glVertex3f( 0.568012, 0.190683, -0.145470);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 1.034065, -1.030118, 0.111114);
		glVertex3f( 0.649242, -0.216284, -0.389336);
		glVertex3f( 0.987423, -0.844361, -0.060400);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 1.034065, -1.030118, 0.111114);
		glVertex3f( 0.439138, -0.570710, -0.417027);
		glVertex3f( 0.649242, -0.216284, -0.389336);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.439138, -0.570710, -0.417027);
		glVertex3f( 0.443342, -0.144338, -0.476153);
		glVertex3f( 0.649242, -0.216284, -0.389336);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.305148, -0.380003, -0.469846);
		glVertex3f( 0.173713, -0.100326, -0.470018);
		glVertex3f( 0.443342, -0.144338, -0.476153);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.305148, -0.380003, -0.469846);
		glVertex3f( 0.011255, -0.347343, -0.380114);
		glVertex3f( 0.173713, -0.100326, -0.470018);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.011255, -0.347343, -0.380114);
		glVertex3f( -0.056656, -0.088773, -0.323489);
		glVertex3f( 0.173713, -0.100326, -0.470018);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.170381, -0.261837, -0.145188);
		glVertex3f( -0.120176, 0.038022, -0.089906);
		glVertex3f( -0.056656, -0.088773, -0.323489);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.170381, -0.261837, -0.145188);
		glVertex3f( -0.170381, -0.156148, 0.145188);
		glVertex3f( -0.120176, 0.038022, -0.089906);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.170381, -0.156148, 0.145188);
		glVertex3f( -0.056656, 0.091036, 0.170531);
		glVertex3f( -0.120176, 0.038022, -0.089906);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.011255, -0.070643, 0.380114);
		glVertex3f( 0.173713, 0.176372, 0.290205);
		glVertex3f( -0.056656, 0.091036, 0.170531);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.011255, -0.070643, 0.380114);
		glVertex3f( 0.393403, -0.156458, 0.512968);
		glVertex3f( 0.173713, 0.176372, 0.290205);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.393403, -0.156458, 0.512968);
		glVertex3f( 0.443342, 0.146601, 0.323195);
		glVertex3f( 0.173713, 0.176372, 0.290205);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.599040, -0.070643, 0.380114);
		glVertex3f( 0.649242, 0.123527, 0.145016);
		glVertex3f( 0.443342, 0.146601, 0.323195);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.599040, -0.070643, 0.380114);
		glVertex3f( 1.094072, -0.981692, 0.149324);
		glVertex3f( 0.649242, 0.123527, 0.145016);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 1.094072, -0.981692, 0.149324);
		glVertex3f( 0.987423, -0.844361, -0.060400);
		glVertex3f( 0.649242, 0.123527, 0.145016);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.439138, -0.570710, -0.417027);
		glVertex3f( 0.305148, -0.380003, -0.469846);
		glVertex3f( 0.443342, -0.144338, -0.476153);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.439138, -0.570710, -0.417027);
		glVertex3f( 0.436582, -0.594358, -0.290205);
		glVertex3f( 0.305148, -0.380003, -0.469846);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.436582, -0.594358, -0.290205);
		glVertex3f( 0.166954, -0.564587, -0.323195);
		glVertex3f( 0.305148, -0.380003, -0.469846);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.011255, -0.347343, -0.380114);
		glVertex3f( -0.170381, -0.261837, -0.145188);
		glVertex3f( -0.056656, -0.088773, -0.323489);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.011255, -0.347343, -0.380114);
		glVertex3f( -0.038947, -0.541512, -0.145016);
		glVertex3f( -0.170381, -0.261837, -0.145188);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.038947, -0.541512, -0.145016);
		glVertex3f( -0.142066, -0.419115, 0.076478);
		glVertex3f( -0.170381, -0.261837, -0.145188);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.170381, -0.156148, 0.145188);
		glVertex3f( 0.011255, -0.070643, 0.380114);
		glVertex3f( -0.056656, 0.091036, 0.170531);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.170381, -0.156148, 0.145188);
		glVertex3f( -0.038947, -0.370503, 0.324828);
		glVertex3f( 0.011255, -0.070643, 0.380114);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.038947, -0.370503, 0.324828);
		glVertex3f( 0.358187, -0.345528, 0.502316);
		glVertex3f( 0.011255, -0.070643, 0.380114);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.393403, -0.156458, 0.512968);
		glVertex3f( 0.599040, -0.070643, 0.380114);
		glVertex3f( 0.443342, 0.146601, 0.323195);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.393403, -0.156458, 0.512968);
		glVertex3f( 0.564464, -0.509932, 0.539999);
		glVertex3f( 0.599040, -0.070643, 0.380114);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.564464, -0.509932, 0.539999);
		glVertex3f( 1.043906, -0.871663, 0.339152);
		glVertex3f( 0.599040, -0.070643, 0.380114);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 1.094072, -0.981692, 0.149324);
		glVertex3f( 1.034065, -1.030118, 0.111114);
		glVertex3f( 0.987423, -0.844361, -0.060400);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 1.094072, -0.981692, 0.149324);
		glVertex3f( 1.006903, -1.205525, 0.211047);
		glVertex3f( 1.034065, -1.030118, 0.111114);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 1.006903, -1.205525, 0.211047);
		glVertex3f( 0.666951, -0.811665, -0.021807);
		glVertex3f( 1.034065, -1.030118, 0.111114);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.440656, -0.909483, -0.000887);
		glVertex3f( 0.436582, -0.594358, -0.290205);
		glVertex3f( 0.666951, -0.811665, -0.021807);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.440656, -0.909483, -0.000887);
		glVertex3f( 0.223920, -0.694174, -0.089450);
		glVertex3f( 0.436582, -0.594358, -0.290205);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.223920, -0.694174, -0.089450);
		glVertex3f( 0.166954, -0.564587, -0.323195);
		glVertex3f( 0.436582, -0.594358, -0.290205);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.223920, -0.694174, -0.089450);
		glVertex3f( -0.038947, -0.541512, -0.145016);
		glVertex3f( 0.166954, -0.564587, -0.323195);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.223920, -0.694174, -0.089450);
		glVertex3f( 0.042283, -0.608668, 0.145470);
		glVertex3f( -0.038947, -0.541512, -0.145016);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.042283, -0.608668, 0.145470);
		glVertex3f( -0.142066, -0.419115, 0.076478);
		glVertex3f( -0.038947, -0.541512, -0.145016);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.042283, -0.608668, 0.145470);
		glVertex3f( -0.038947, -0.370503, 0.324828);
		glVertex3f( -0.142066, -0.419115, 0.076478);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.042283, -0.608668, 0.145470);
		glVertex3f( 0.380881, -0.609204, 0.411707);
		glVertex3f( -0.038947, -0.370503, 0.324828);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.380881, -0.609204, 0.411707);
		glVertex3f( 0.358187, -0.345528, 0.502316);
		glVertex3f( -0.038947, -0.370503, 0.324828);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 1.006903, -1.205525, 0.211047);
		glVertex3f( 0.440656, -0.909483, -0.000887);
		glVertex3f( 0.666951, -0.811665, -0.021807);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 1.006903, -1.205525, 0.211047);
		glVertex3f( 0.915420, -0.995559, 0.350320);
		glVertex3f( 0.440656, -0.909483, -0.000887);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.915420, -0.995559, 0.350320);
		glVertex3f( 0.305148, -0.678839, 0.171010);
		glVertex3f( 0.440656, -0.909483, -0.000887);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.380881, -0.609204, 0.411707);
		glVertex3f( 0.564464, -0.509932, 0.539999);
		glVertex3f( 0.358187, -0.345528, 0.502316);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.380881, -0.609204, 0.411707);
		glVertex3f( 0.915420, -0.995559, 0.350320);
		glVertex3f( 0.564464, -0.509932, 0.539999);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.915420, -0.995559, 0.350320);
		glVertex3f( 1.043906, -0.871663, 0.339152);
		glVertex3f( 0.564464, -0.509932, 0.539999);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.153073, -0.369552, 0.000000);
		glVertex3f( -0.222228, -0.332588, 0.000000);
		glVertex3f( -0.150132, -0.369552, -0.029863);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.153073, 0.369552, 0.000000);
		glVertex3f( -0.078036, 0.392314, 0.000000);
		glVertex3f( -0.150132, 0.369552, -0.029863);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.400000, 0.000000, 0.000000);
		glVertex3f( -0.392314, 0.078036, 0.000000);
		glVertex3f( -0.392314, 0.000000, -0.078036);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.392314, 0.078036, 0.000000);
		glVertex3f( -0.369552, 0.153073, 0.000000);
		glVertex3f( -0.384776, 0.078036, -0.076537);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.222228, -0.332588, 0.000000);
		glVertex3f( -0.282843, -0.282843, 0.000000);
		glVertex3f( -0.217958, -0.332588, -0.043355);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.078036, 0.392314, 0.000000);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( -0.076537, 0.392314, -0.015224);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.369552, 0.153073, 0.000000);
		glVertex3f( -0.332588, 0.222228, 0.000000);
		glVertex3f( -0.362451, 0.153073, -0.072096);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.282843, -0.282843, 0.000000);
		glVertex3f( -0.332588, -0.222228, 0.000000);
		glVertex3f( -0.277408, -0.282843, -0.055180);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.332588, -0.222228, 0.000000);
		glVertex3f( -0.369552, -0.153073, 0.000000);
		glVertex3f( -0.326197, -0.222228, -0.064885);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.332588, 0.222228, 0.000000);
		glVertex3f( -0.282843, 0.282843, 0.000000);
		glVertex3f( -0.326197, 0.222228, -0.064885);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.369552, -0.153073, 0.000000);
		glVertex3f( -0.392314, -0.078036, 0.000000);
		glVertex3f( -0.362451, -0.153073, -0.072096);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( -0.078036, -0.392314, 0.000000);
		glVertex3f( -0.076537, -0.392314, -0.015224);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.078036, -0.392314, 0.000000);
		glVertex3f( -0.153073, -0.369552, 0.000000);
		glVertex3f( -0.076537, -0.392314, -0.015224);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.282843, 0.282843, 0.000000);
		glVertex3f( -0.222228, 0.332588, 0.000000);
		glVertex3f( -0.277408, 0.282843, -0.055180);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.222228, 0.332588, 0.000000);
		glVertex3f( -0.153073, 0.369552, 0.000000);
		glVertex3f( -0.217958, 0.332588, -0.043355);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.392314, -0.078036, 0.000000);
		glVertex3f( -0.400000, 0.000000, 0.000000);
		glVertex3f( -0.384776, -0.078036, -0.076537);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.076537, -0.392314, -0.015224);
		glVertex3f( -0.150132, -0.369552, -0.029863);
		glVertex3f( -0.072096, -0.392314, -0.029863);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.277408, 0.282843, -0.055180);
		glVertex3f( -0.217958, 0.332588, -0.043355);
		glVertex3f( -0.261313, 0.282843, -0.108239);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.217958, 0.332588, -0.043355);
		glVertex3f( -0.150132, 0.369552, -0.029863);
		glVertex3f( -0.205312, 0.332588, -0.085043);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.384776, -0.078036, -0.076537);
		glVertex3f( -0.392314, 0.000000, -0.078036);
		glVertex3f( -0.362451, -0.078036, -0.150132);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.150132, -0.369552, -0.029863);
		glVertex3f( -0.217958, -0.332588, -0.043355);
		glVertex3f( -0.141421, -0.369552, -0.058579);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.150132, 0.369552, -0.029863);
		glVertex3f( -0.076537, 0.392314, -0.015224);
		glVertex3f( -0.141421, 0.369552, -0.058579);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.392314, 0.000000, -0.078036);
		glVertex3f( -0.384776, 0.078036, -0.076537);
		glVertex3f( -0.369552, 0.000000, -0.153073);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.384776, 0.078036, -0.076537);
		glVertex3f( -0.362451, 0.153073, -0.072096);
		glVertex3f( -0.362451, 0.078036, -0.150132);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.217958, -0.332588, -0.043355);
		glVertex3f( -0.277408, -0.282843, -0.055180);
		glVertex3f( -0.205312, -0.332588, -0.085043);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.076537, 0.392314, -0.015224);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( -0.072096, 0.392314, -0.029863);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.362451, 0.153073, -0.072096);
		glVertex3f( -0.326197, 0.222228, -0.064885);
		glVertex3f( -0.341421, 0.153073, -0.141421);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.277408, -0.282843, -0.055180);
		glVertex3f( -0.326197, -0.222228, -0.064885);
		glVertex3f( -0.261313, -0.282843, -0.108239);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.326197, -0.222228, -0.064885);
		glVertex3f( -0.362451, -0.153073, -0.072096);
		glVertex3f( -0.307271, -0.222228, -0.127276);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.326197, 0.222228, -0.064885);
		glVertex3f( -0.277408, 0.282843, -0.055180);
		glVertex3f( -0.307271, 0.222228, -0.127276);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.362451, -0.153073, -0.072096);
		glVertex3f( -0.384776, -0.078036, -0.076537);
		glVertex3f( -0.341421, -0.153073, -0.141421);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( -0.076537, -0.392314, -0.015224);
		glVertex3f( -0.072096, -0.392314, -0.029863);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.307271, 0.222228, -0.127276);
		glVertex3f( -0.261313, 0.282843, -0.108239);
		glVertex3f( -0.276537, 0.222228, -0.184776);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.307271, -0.222228, -0.127276);
		glVertex3f( -0.341421, -0.153073, -0.141421);
		glVertex3f( -0.276537, -0.222228, -0.184776);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.341421, -0.153073, -0.141421);
		glVertex3f( -0.362451, -0.078036, -0.150132);
		glVertex3f( -0.307271, -0.153073, -0.205312);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( -0.072096, -0.392314, -0.029863);
		glVertex3f( -0.064885, -0.392314, -0.043355);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.261313, 0.282843, -0.108239);
		glVertex3f( -0.205312, 0.332588, -0.085043);
		glVertex3f( -0.235175, 0.282843, -0.157139);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.362451, -0.078036, -0.150132);
		glVertex3f( -0.369552, 0.000000, -0.153073);
		glVertex3f( -0.326197, -0.078036, -0.217958);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.072096, -0.392314, -0.029863);
		glVertex3f( -0.141421, -0.369552, -0.058579);
		glVertex3f( -0.064885, -0.392314, -0.043355);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.141421, -0.369552, -0.058579);
		glVertex3f( -0.205312, -0.332588, -0.085043);
		glVertex3f( -0.127276, -0.369552, -0.085043);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.205312, 0.332588, -0.085043);
		glVertex3f( -0.141421, 0.369552, -0.058579);
		glVertex3f( -0.184776, 0.332588, -0.123463);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.141421, 0.369552, -0.058579);
		glVertex3f( -0.072096, 0.392314, -0.029863);
		glVertex3f( -0.127276, 0.369552, -0.085043);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.369552, 0.000000, -0.153073);
		glVertex3f( -0.362451, 0.078036, -0.150132);
		glVertex3f( -0.332588, 0.000000, -0.222228);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.205312, -0.332588, -0.085043);
		glVertex3f( -0.261313, -0.282843, -0.108239);
		glVertex3f( -0.184776, -0.332588, -0.123463);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.072096, 0.392314, -0.029863);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( -0.064885, 0.392314, -0.043355);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.362451, 0.078036, -0.150132);
		glVertex3f( -0.341421, 0.153073, -0.141421);
		glVertex3f( -0.326197, 0.078036, -0.217958);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.341421, 0.153073, -0.141421);
		glVertex3f( -0.307271, 0.222228, -0.127276);
		glVertex3f( -0.307271, 0.153073, -0.205312);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.261313, -0.282843, -0.108239);
		glVertex3f( -0.307271, -0.222228, -0.127276);
		glVertex3f( -0.235175, -0.282843, -0.157139);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.235175, -0.282843, -0.157139);
		glVertex3f( -0.276537, -0.222228, -0.184776);
		glVertex3f( -0.200000, -0.282843, -0.200000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.307271, 0.153073, -0.205312);
		glVertex3f( -0.276537, 0.222228, -0.184776);
		glVertex3f( -0.261313, 0.153073, -0.261313);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.276537, 0.222228, -0.184776);
		glVertex3f( -0.235175, 0.282843, -0.157139);
		glVertex3f( -0.235175, 0.222228, -0.235175);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.276537, -0.222228, -0.184776);
		glVertex3f( -0.307271, -0.153073, -0.205312);
		glVertex3f( -0.235175, -0.222228, -0.235175);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( -0.064885, -0.392314, -0.043355);
		glVertex3f( -0.055180, -0.392314, -0.055180);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.235175, 0.282843, -0.157139);
		glVertex3f( -0.184776, 0.332588, -0.123463);
		glVertex3f( -0.200000, 0.282843, -0.200000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.307271, -0.153073, -0.205312);
		glVertex3f( -0.326197, -0.078036, -0.217958);
		glVertex3f( -0.261313, -0.153073, -0.261313);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.326197, -0.078036, -0.217958);
		glVertex3f( -0.332588, 0.000000, -0.222228);
		glVertex3f( -0.277408, -0.078036, -0.277408);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.064885, -0.392314, -0.043355);
		glVertex3f( -0.127276, -0.369552, -0.085043);
		glVertex3f( -0.055180, -0.392314, -0.055180);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.184776, 0.332588, -0.123463);
		glVertex3f( -0.127276, 0.369552, -0.085043);
		glVertex3f( -0.157139, 0.332588, -0.157139);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.332588, 0.000000, -0.222228);
		glVertex3f( -0.326197, 0.078036, -0.217958);
		glVertex3f( -0.282843, 0.000000, -0.282843);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.127276, -0.369552, -0.085043);
		glVertex3f( -0.184776, -0.332588, -0.123463);
		glVertex3f( -0.108239, -0.369552, -0.108239);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.184776, -0.332588, -0.123463);
		glVertex3f( -0.235175, -0.282843, -0.157139);
		glVertex3f( -0.157139, -0.332588, -0.157139);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.127276, 0.369552, -0.085043);
		glVertex3f( -0.064885, 0.392314, -0.043355);
		glVertex3f( -0.108239, 0.369552, -0.108239);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.064885, 0.392314, -0.043355);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( -0.055180, 0.392314, -0.055180);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.326197, 0.078036, -0.217958);
		glVertex3f( -0.307271, 0.153073, -0.205312);
		glVertex3f( -0.277408, 0.078036, -0.277408);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.108239, 0.369552, -0.108239);
		glVertex3f( -0.055180, 0.392314, -0.055180);
		glVertex3f( -0.085043, 0.369552, -0.127276);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.277408, 0.078036, -0.277408);
		glVertex3f( -0.261313, 0.153073, -0.261313);
		glVertex3f( -0.217958, 0.078036, -0.326197);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.157139, -0.332588, -0.157139);
		glVertex3f( -0.200000, -0.282843, -0.200000);
		glVertex3f( -0.123463, -0.332588, -0.184776);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.200000, -0.282843, -0.200000);
		glVertex3f( -0.235175, -0.222228, -0.235175);
		glVertex3f( -0.157139, -0.282843, -0.235175);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055180, 0.392314, -0.055180);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( -0.043354, 0.392314, -0.064885);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.261313, 0.153073, -0.261313);
		glVertex3f( -0.235175, 0.222228, -0.235175);
		glVertex3f( -0.205312, 0.153073, -0.307271);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.235175, -0.222228, -0.235175);
		glVertex3f( -0.261313, -0.153073, -0.261313);
		glVertex3f( -0.184776, -0.222228, -0.276537);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( -0.055180, -0.392314, -0.055180);
		glVertex3f( -0.043354, -0.392314, -0.064885);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.235175, 0.222228, -0.235175);
		glVertex3f( -0.200000, 0.282843, -0.200000);
		glVertex3f( -0.184776, 0.222228, -0.276537);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.200000, 0.282843, -0.200000);
		glVertex3f( -0.157139, 0.332588, -0.157139);
		glVertex3f( -0.157139, 0.282843, -0.235175);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.261313, -0.153073, -0.261313);
		glVertex3f( -0.277408, -0.078036, -0.277408);
		glVertex3f( -0.205312, -0.153073, -0.307271);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055180, -0.392314, -0.055180);
		glVertex3f( -0.108239, -0.369552, -0.108239);
		glVertex3f( -0.043354, -0.392314, -0.064885);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.157139, 0.332588, -0.157139);
		glVertex3f( -0.108239, 0.369552, -0.108239);
		glVertex3f( -0.123463, 0.332588, -0.184776);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.277408, -0.078036, -0.277408);
		glVertex3f( -0.282843, 0.000000, -0.282843);
		glVertex3f( -0.217958, -0.078036, -0.326197);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.282843, 0.000000, -0.282843);
		glVertex3f( -0.277408, 0.078036, -0.277408);
		glVertex3f( -0.222228, 0.000000, -0.332588);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.108239, -0.369552, -0.108239);
		glVertex3f( -0.157139, -0.332588, -0.157139);
		glVertex3f( -0.085043, -0.369552, -0.127276);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.085043, -0.369552, -0.127276);
		glVertex3f( -0.123463, -0.332588, -0.184776);
		glVertex3f( -0.058579, -0.369552, -0.141421);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.085043, 0.369552, -0.127276);
		glVertex3f( -0.043354, 0.392314, -0.064885);
		glVertex3f( -0.058579, 0.369552, -0.141421);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.222228, 0.000000, -0.332588);
		glVertex3f( -0.217958, 0.078036, -0.326197);
		glVertex3f( -0.153073, 0.000000, -0.369552);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.217958, 0.078036, -0.326197);
		glVertex3f( -0.205312, 0.153073, -0.307271);
		glVertex3f( -0.150132, 0.078036, -0.362451);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.123463, -0.332588, -0.184776);
		glVertex3f( -0.157139, -0.282843, -0.235175);
		glVertex3f( -0.085043, -0.332588, -0.205312);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.043354, 0.392314, -0.064885);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( -0.029863, 0.392314, -0.072096);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.205312, 0.153073, -0.307271);
		glVertex3f( -0.184776, 0.222228, -0.276537);
		glVertex3f( -0.141421, 0.153073, -0.341421);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.157139, -0.282843, -0.235175);
		glVertex3f( -0.184776, -0.222228, -0.276537);
		glVertex3f( -0.108239, -0.282843, -0.261313);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.184776, -0.222228, -0.276537);
		glVertex3f( -0.205312, -0.153073, -0.307271);
		glVertex3f( -0.127276, -0.222228, -0.307271);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.184776, 0.222228, -0.276537);
		glVertex3f( -0.157139, 0.282843, -0.235175);
		glVertex3f( -0.127276, 0.222228, -0.307271);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.205312, -0.153073, -0.307271);
		glVertex3f( -0.217958, -0.078036, -0.326197);
		glVertex3f( -0.141421, -0.153073, -0.341421);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( -0.043354, -0.392314, -0.064885);
		glVertex3f( -0.029863, -0.392314, -0.072096);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.043354, -0.392314, -0.064885);
		glVertex3f( -0.085043, -0.369552, -0.127276);
		glVertex3f( -0.029863, -0.392314, -0.072096);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.157139, 0.282843, -0.235175);
		glVertex3f( -0.123463, 0.332588, -0.184776);
		glVertex3f( -0.108239, 0.282843, -0.261313);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.123463, 0.332588, -0.184776);
		glVertex3f( -0.085043, 0.369552, -0.127276);
		glVertex3f( -0.085043, 0.332588, -0.205312);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.217958, -0.078036, -0.326197);
		glVertex3f( -0.222228, 0.000000, -0.332588);
		glVertex3f( -0.150132, -0.078036, -0.362451);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.108239, 0.282843, -0.261313);
		glVertex3f( -0.085043, 0.332588, -0.205312);
		glVertex3f( -0.055180, 0.282843, -0.277408);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.150132, -0.078036, -0.362451);
		glVertex3f( -0.153073, 0.000000, -0.369552);
		glVertex3f( -0.076537, -0.078036, -0.384776);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.029863, -0.392314, -0.072096);
		glVertex3f( -0.058579, -0.369552, -0.141421);
		glVertex3f( -0.015224, -0.392314, -0.076537);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.058579, -0.369552, -0.141421);
		glVertex3f( -0.085043, -0.332588, -0.205312);
		glVertex3f( -0.029863, -0.369552, -0.150132);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.085043, 0.332588, -0.205312);
		glVertex3f( -0.058579, 0.369552, -0.141421);
		glVertex3f( -0.043354, 0.332588, -0.217958);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.058579, 0.369552, -0.141421);
		glVertex3f( -0.029863, 0.392314, -0.072096);
		glVertex3f( -0.029863, 0.369552, -0.150132);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.153073, 0.000000, -0.369552);
		glVertex3f( -0.150132, 0.078036, -0.362451);
		glVertex3f( -0.078036, 0.000000, -0.392314);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.085043, -0.332588, -0.205312);
		glVertex3f( -0.108239, -0.282843, -0.261313);
		glVertex3f( -0.043354, -0.332588, -0.217958);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.029863, 0.392314, -0.072096);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( -0.015224, 0.392314, -0.076537);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.150132, 0.078036, -0.362451);
		glVertex3f( -0.141421, 0.153073, -0.341421);
		glVertex3f( -0.076537, 0.078036, -0.384776);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.141421, 0.153073, -0.341421);
		glVertex3f( -0.127276, 0.222228, -0.307271);
		glVertex3f( -0.072096, 0.153073, -0.362451);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.108239, -0.282843, -0.261313);
		glVertex3f( -0.127276, -0.222228, -0.307271);
		glVertex3f( -0.055180, -0.282843, -0.277408);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.127276, 0.222228, -0.307271);
		glVertex3f( -0.108239, 0.282843, -0.261313);
		glVertex3f( -0.064885, 0.222228, -0.326197);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.127276, -0.222228, -0.307271);
		glVertex3f( -0.141421, -0.153073, -0.341421);
		glVertex3f( -0.064885, -0.222228, -0.326197);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.141421, -0.153073, -0.341421);
		glVertex3f( -0.150132, -0.078036, -0.362451);
		glVertex3f( -0.072096, -0.153073, -0.362451);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( -0.029863, -0.392314, -0.072096);
		glVertex3f( -0.015224, -0.392314, -0.076537);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.064885, 0.222228, -0.326197);
		glVertex3f( -0.055180, 0.282843, -0.277408);
		glVertex3f( 0.000000, 0.222228, -0.332588);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.064885, -0.222228, -0.326197);
		glVertex3f( -0.072096, -0.153073, -0.362451);
		glVertex3f( 0.000000, -0.222228, -0.332588);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( -0.015224, -0.392314, -0.076537);
		glVertex3f( 0.000000, -0.392314, -0.078036);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055180, 0.282843, -0.277408);
		glVertex3f( -0.043354, 0.332588, -0.217958);
		glVertex3f( 0.000000, 0.282843, -0.282843);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.072096, -0.153073, -0.362451);
		glVertex3f( -0.076537, -0.078036, -0.384776);
		glVertex3f( 0.000000, -0.153073, -0.369552);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.076537, -0.078036, -0.384776);
		glVertex3f( -0.078036, 0.000000, -0.392314);
		glVertex3f( 0.000000, -0.078036, -0.392314);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.015224, -0.392314, -0.076537);
		glVertex3f( -0.029863, -0.369552, -0.150132);
		glVertex3f( 0.000000, -0.392314, -0.078036);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.043354, 0.332588, -0.217958);
		glVertex3f( -0.029863, 0.369552, -0.150132);
		glVertex3f( 0.000000, 0.332588, -0.222228);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.078036, 0.000000, -0.392314);
		glVertex3f( -0.076537, 0.078036, -0.384776);
		glVertex3f( 0.000000, 0.000000, -0.400000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.029863, -0.369552, -0.150132);
		glVertex3f( -0.043354, -0.332588, -0.217958);
		glVertex3f( 0.000000, -0.369552, -0.153073);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.043354, -0.332588, -0.217958);
		glVertex3f( -0.055180, -0.282843, -0.277408);
		glVertex3f( 0.000000, -0.332588, -0.222228);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.029863, 0.369552, -0.150132);
		glVertex3f( -0.015224, 0.392314, -0.076537);
		glVertex3f( 0.000000, 0.369552, -0.153073);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.015224, 0.392314, -0.076537);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( 0.000000, 0.392314, -0.078036);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.076537, 0.078036, -0.384776);
		glVertex3f( -0.072096, 0.153073, -0.362451);
		glVertex3f( 0.000000, 0.078036, -0.392314);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055180, -0.282843, -0.277408);
		glVertex3f( -0.064885, -0.222228, -0.326197);
		glVertex3f( 0.000000, -0.282843, -0.282843);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.072096, 0.153073, -0.362451);
		glVertex3f( -0.064885, 0.222228, -0.326197);
		glVertex3f( 0.000000, 0.153073, -0.369552);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.392314, -0.078036);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( 0.015224, 0.392314, -0.076537);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.153073, -0.369552);
		glVertex3f( 0.000000, 0.222228, -0.332588);
		glVertex3f( 0.072096, 0.153073, -0.362451);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.222228, -0.332588);
		glVertex3f( 0.000000, -0.153073, -0.369552);
		glVertex3f( 0.064885, -0.222228, -0.326197);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( 0.000000, -0.392314, -0.078036);
		glVertex3f( 0.015224, -0.392314, -0.076537);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.222228, -0.332588);
		glVertex3f( 0.000000, 0.282843, -0.282843);
		glVertex3f( 0.064885, 0.222228, -0.326197);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.282843, -0.282843);
		glVertex3f( 0.000000, 0.332588, -0.222228);
		glVertex3f( 0.055180, 0.282843, -0.277408);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.153073, -0.369552);
		glVertex3f( 0.000000, -0.078036, -0.392314);
		glVertex3f( 0.072096, -0.153073, -0.362451);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.392314, -0.078036);
		glVertex3f( 0.000000, -0.369552, -0.153073);
		glVertex3f( 0.015224, -0.392314, -0.076537);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.332588, -0.222228);
		glVertex3f( 0.000000, 0.369552, -0.153073);
		glVertex3f( 0.043355, 0.332588, -0.217958);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.078036, -0.392314);
		glVertex3f( 0.000000, 0.000000, -0.400000);
		glVertex3f( 0.076537, -0.078036, -0.384776);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.000000, -0.400000);
		glVertex3f( 0.000000, 0.078036, -0.392314);
		glVertex3f( 0.078036, 0.000000, -0.392314);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.369552, -0.153073);
		glVertex3f( 0.000000, -0.332588, -0.222228);
		glVertex3f( 0.029863, -0.369552, -0.150132);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.369552, -0.153073);
		glVertex3f( 0.000000, 0.392314, -0.078036);
		glVertex3f( 0.029863, 0.369552, -0.150132);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.078036, -0.392314);
		glVertex3f( 0.000000, 0.153073, -0.369552);
		glVertex3f( 0.076537, 0.078036, -0.384776);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.332588, -0.222228);
		glVertex3f( 0.000000, -0.282843, -0.282843);
		glVertex3f( 0.043355, -0.332588, -0.217958);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.282843, -0.282843);
		glVertex3f( 0.000000, -0.222228, -0.332588);
		glVertex3f( 0.055180, -0.282843, -0.277408);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.078036, 0.000000, -0.392314);
		glVertex3f( 0.076537, 0.078036, -0.384776);
		glVertex3f( 0.153074, 0.000000, -0.369552);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.076537, 0.078036, -0.384776);
		glVertex3f( 0.072096, 0.153073, -0.362451);
		glVertex3f( 0.150132, 0.078036, -0.362451);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.043355, -0.332588, -0.217958);
		glVertex3f( 0.055180, -0.282843, -0.277408);
		glVertex3f( 0.085043, -0.332588, -0.205312);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.015224, 0.392314, -0.076537);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( 0.029863, 0.392314, -0.072096);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.072096, 0.153073, -0.362451);
		glVertex3f( 0.064885, 0.222228, -0.326197);
		glVertex3f( 0.141422, 0.153073, -0.341421);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.055180, -0.282843, -0.277408);
		glVertex3f( 0.064885, -0.222228, -0.326197);
		glVertex3f( 0.108239, -0.282843, -0.261313);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.064885, -0.222228, -0.326197);
		glVertex3f( 0.072096, -0.153073, -0.362451);
		glVertex3f( 0.127276, -0.222228, -0.307271);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.064885, 0.222228, -0.326197);
		glVertex3f( 0.055180, 0.282843, -0.277408);
		glVertex3f( 0.127276, 0.222228, -0.307271);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.072096, -0.153073, -0.362451);
		glVertex3f( 0.076537, -0.078036, -0.384776);
		glVertex3f( 0.141422, -0.153073, -0.341421);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( 0.015224, -0.392314, -0.076537);
		glVertex3f( 0.029863, -0.392314, -0.072096);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.015224, -0.392314, -0.076537);
		glVertex3f( 0.029863, -0.369552, -0.150132);
		glVertex3f( 0.029863, -0.392314, -0.072096);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.055180, 0.282843, -0.277408);
		glVertex3f( 0.043355, 0.332588, -0.217958);
		glVertex3f( 0.108239, 0.282843, -0.261313);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.043355, 0.332588, -0.217958);
		glVertex3f( 0.029863, 0.369552, -0.150132);
		glVertex3f( 0.085043, 0.332588, -0.205312);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.076537, -0.078036, -0.384776);
		glVertex3f( 0.078036, 0.000000, -0.392314);
		glVertex3f( 0.150132, -0.078036, -0.362451);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.029863, -0.369552, -0.150132);
		glVertex3f( 0.043355, -0.332588, -0.217958);
		glVertex3f( 0.058579, -0.369552, -0.141421);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.029863, 0.369552, -0.150132);
		glVertex3f( 0.015224, 0.392314, -0.076537);
		glVertex3f( 0.058579, 0.369552, -0.141421);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.058579, -0.369552, -0.141421);
		glVertex3f( 0.085043, -0.332588, -0.205312);
		glVertex3f( 0.085043, -0.369552, -0.127276);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.085043, 0.332588, -0.205312);
		glVertex3f( 0.058579, 0.369552, -0.141421);
		glVertex3f( 0.123464, 0.332588, -0.184776);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.058579, 0.369552, -0.141421);
		glVertex3f( 0.029863, 0.392314, -0.072096);
		glVertex3f( 0.085043, 0.369552, -0.127276);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.153074, 0.000000, -0.369552);
		glVertex3f( 0.150132, 0.078036, -0.362451);
		glVertex3f( 0.222228, 0.000000, -0.332588);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.085043, -0.332588, -0.205312);
		glVertex3f( 0.108239, -0.282843, -0.261313);
		glVertex3f( 0.123464, -0.332588, -0.184776);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.029863, 0.392314, -0.072096);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( 0.043355, 0.392314, -0.064885);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.150132, 0.078036, -0.362451);
		glVertex3f( 0.141422, 0.153073, -0.341421);
		glVertex3f( 0.217958, 0.078036, -0.326197);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.141422, 0.153073, -0.341421);
		glVertex3f( 0.127276, 0.222228, -0.307271);
		glVertex3f( 0.205312, 0.153073, -0.307271);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.108239, -0.282843, -0.261313);
		glVertex3f( 0.127276, -0.222228, -0.307271);
		glVertex3f( 0.157139, -0.282843, -0.235175);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.127276, 0.222228, -0.307271);
		glVertex3f( 0.108239, 0.282843, -0.261313);
		glVertex3f( 0.157139, 0.282843, -0.235175);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.127276, -0.222228, -0.307271);
		glVertex3f( 0.141422, -0.153073, -0.341421);
		glVertex3f( 0.184776, -0.222228, -0.276537);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.141422, -0.153073, -0.341421);
		glVertex3f( 0.150132, -0.078036, -0.362451);
		glVertex3f( 0.205312, -0.153073, -0.307271);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( 0.029863, -0.392314, -0.072096);
		glVertex3f( 0.043355, -0.392314, -0.064885);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.108239, 0.282843, -0.261313);
		glVertex3f( 0.085043, 0.332588, -0.205312);
		glVertex3f( 0.157139, 0.282843, -0.235175);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.150132, -0.078036, -0.362451);
		glVertex3f( 0.153074, 0.000000, -0.369552);
		glVertex3f( 0.217958, -0.078036, -0.326197);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.029863, -0.392314, -0.072096);
		glVertex3f( 0.058579, -0.369552, -0.141421);
		glVertex3f( 0.043355, -0.392314, -0.064885);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.157139, 0.282843, -0.235175);
		glVertex3f( 0.123464, 0.332588, -0.184776);
		glVertex3f( 0.200000, 0.282843, -0.200000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.205312, -0.153073, -0.307271);
		glVertex3f( 0.217958, -0.078036, -0.326197);
		glVertex3f( 0.261313, -0.153073, -0.261313);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.217958, -0.078036, -0.326197);
		glVertex3f( 0.222228, 0.000000, -0.332588);
		glVertex3f( 0.277408, -0.078036, -0.277408);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.043355, -0.392314, -0.064885);
		glVertex3f( 0.085043, -0.369552, -0.127276);
		glVertex3f( 0.055180, -0.392314, -0.055180);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.123464, 0.332588, -0.184776);
		glVertex3f( 0.085043, 0.369552, -0.127276);
		glVertex3f( 0.157139, 0.332588, -0.157139);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.222228, 0.000000, -0.332588);
		glVertex3f( 0.217958, 0.078036, -0.326197);
		glVertex3f( 0.282843, 0.000000, -0.282843);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.085043, -0.369552, -0.127276);
		glVertex3f( 0.123464, -0.332588, -0.184776);
		glVertex3f( 0.108239, -0.369552, -0.108239);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.123464, -0.332588, -0.184776);
		glVertex3f( 0.157139, -0.282843, -0.235175);
		glVertex3f( 0.157139, -0.332588, -0.157139);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.085043, 0.369552, -0.127276);
		glVertex3f( 0.043355, 0.392314, -0.064885);
		glVertex3f( 0.108239, 0.369552, -0.108239);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.043355, 0.392314, -0.064885);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( 0.055180, 0.392314, -0.055180);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.217958, 0.078036, -0.326197);
		glVertex3f( 0.205312, 0.153073, -0.307271);
		glVertex3f( 0.277408, 0.078036, -0.277408);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.157139, -0.282843, -0.235175);
		glVertex3f( 0.184776, -0.222228, -0.276537);
		glVertex3f( 0.200000, -0.282843, -0.200000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.205312, 0.153073, -0.307271);
		glVertex3f( 0.184776, 0.222228, -0.276537);
		glVertex3f( 0.261313, 0.153073, -0.261313);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.184776, 0.222228, -0.276537);
		glVertex3f( 0.157139, 0.282843, -0.235175);
		glVertex3f( 0.235175, 0.222228, -0.235175);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.184776, -0.222228, -0.276537);
		glVertex3f( 0.205312, -0.153073, -0.307271);
		glVertex3f( 0.235175, -0.222228, -0.235175);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( 0.043355, -0.392314, -0.064885);
		glVertex3f( 0.055180, -0.392314, -0.055180);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.235175, -0.222228, -0.235175);
		glVertex3f( 0.261313, -0.153073, -0.261313);
		glVertex3f( 0.276537, -0.222228, -0.184776);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( 0.055180, -0.392314, -0.055180);
		glVertex3f( 0.064885, -0.392314, -0.043355);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.235175, 0.222228, -0.235175);
		glVertex3f( 0.200000, 0.282843, -0.200000);
		glVertex3f( 0.276537, 0.222228, -0.184776);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.200000, 0.282843, -0.200000);
		glVertex3f( 0.157139, 0.332588, -0.157139);
		glVertex3f( 0.235175, 0.282843, -0.157139);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.261313, -0.153073, -0.261313);
		glVertex3f( 0.277408, -0.078036, -0.277408);
		glVertex3f( 0.307271, -0.153073, -0.205312);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.055180, -0.392314, -0.055180);
		glVertex3f( 0.108239, -0.369552, -0.108239);
		glVertex3f( 0.064885, -0.392314, -0.043355);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.157139, 0.332588, -0.157139);
		glVertex3f( 0.108239, 0.369552, -0.108239);
		glVertex3f( 0.184776, 0.332588, -0.123463);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.277408, -0.078036, -0.277408);
		glVertex3f( 0.282843, 0.000000, -0.282843);
		glVertex3f( 0.326197, -0.078036, -0.217958);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.282843, 0.000000, -0.282843);
		glVertex3f( 0.277408, 0.078036, -0.277408);
		glVertex3f( 0.332588, 0.000000, -0.222228);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.108239, -0.369552, -0.108239);
		glVertex3f( 0.157139, -0.332588, -0.157139);
		glVertex3f( 0.127276, -0.369552, -0.085043);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.108239, 0.369552, -0.108239);
		glVertex3f( 0.055180, 0.392314, -0.055180);
		glVertex3f( 0.127276, 0.369552, -0.085043);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.277408, 0.078036, -0.277408);
		glVertex3f( 0.261313, 0.153073, -0.261313);
		glVertex3f( 0.326197, 0.078036, -0.217958);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.157139, -0.332588, -0.157139);
		glVertex3f( 0.200000, -0.282843, -0.200000);
		glVertex3f( 0.184776, -0.332588, -0.123463);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.200000, -0.282843, -0.200000);
		glVertex3f( 0.235175, -0.222228, -0.235175);
		glVertex3f( 0.235175, -0.282843, -0.157139);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.055180, 0.392314, -0.055180);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( 0.064885, 0.392314, -0.043355);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.261313, 0.153073, -0.261313);
		glVertex3f( 0.235175, 0.222228, -0.235175);
		glVertex3f( 0.276537, 0.222228, -0.184776);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.064885, 0.392314, -0.043355);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( 0.072096, 0.392314, -0.029863);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.307271, 0.153073, -0.205312);
		glVertex3f( 0.276537, 0.222228, -0.184776);
		glVertex3f( 0.307271, 0.222228, -0.127276);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.235175, -0.282843, -0.157139);
		glVertex3f( 0.276537, -0.222228, -0.184776);
		glVertex3f( 0.261313, -0.282843, -0.108239);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.276537, -0.222228, -0.184776);
		glVertex3f( 0.307271, -0.153073, -0.205312);
		glVertex3f( 0.307271, -0.222228, -0.127276);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.276537, 0.222228, -0.184776);
		glVertex3f( 0.235175, 0.282843, -0.157139);
		glVertex3f( 0.307271, 0.222228, -0.127276);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.307271, -0.153073, -0.205312);
		glVertex3f( 0.326197, -0.078036, -0.217958);
		glVertex3f( 0.341422, -0.153073, -0.141421);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( 0.064885, -0.392314, -0.043355);
		glVertex3f( 0.072096, -0.392314, -0.029863);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.064885, -0.392314, -0.043355);
		glVertex3f( 0.127276, -0.369552, -0.085043);
		glVertex3f( 0.072096, -0.392314, -0.029863);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.235175, 0.282843, -0.157139);
		glVertex3f( 0.184776, 0.332588, -0.123463);
		glVertex3f( 0.261313, 0.282843, -0.108239);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.184776, 0.332588, -0.123463);
		glVertex3f( 0.127276, 0.369552, -0.085043);
		glVertex3f( 0.205312, 0.332588, -0.085043);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.326197, -0.078036, -0.217958);
		glVertex3f( 0.332588, 0.000000, -0.222228);
		glVertex3f( 0.362451, -0.078036, -0.150132);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.127276, -0.369552, -0.085043);
		glVertex3f( 0.184776, -0.332588, -0.123463);
		glVertex3f( 0.141421, -0.369552, -0.058579);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.127276, 0.369552, -0.085043);
		glVertex3f( 0.064885, 0.392314, -0.043355);
		glVertex3f( 0.141422, 0.369552, -0.058579);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.332588, 0.000000, -0.222228);
		glVertex3f( 0.326197, 0.078036, -0.217958);
		glVertex3f( 0.369552, 0.000000, -0.153073);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.326197, 0.078036, -0.217958);
		glVertex3f( 0.307271, 0.153073, -0.205312);
		glVertex3f( 0.362451, 0.078036, -0.150132);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.184776, -0.332588, -0.123463);
		glVertex3f( 0.235175, -0.282843, -0.157139);
		glVertex3f( 0.205312, -0.332588, -0.085043);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.205312, -0.332588, -0.085043);
		glVertex3f( 0.261313, -0.282843, -0.108239);
		glVertex3f( 0.217958, -0.332588, -0.043355);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.072096, 0.392314, -0.029863);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( 0.076537, 0.392314, -0.015224);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.362451, 0.078036, -0.150132);
		glVertex3f( 0.341421, 0.153073, -0.141421);
		glVertex3f( 0.384776, 0.078036, -0.076537);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.341421, 0.153073, -0.141421);
		glVertex3f( 0.307271, 0.222228, -0.127276);
		glVertex3f( 0.362451, 0.153073, -0.072096);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.261313, -0.282843, -0.108239);
		glVertex3f( 0.307271, -0.222228, -0.127276);
		glVertex3f( 0.277408, -0.282843, -0.055180);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.307271, 0.222228, -0.127276);
		glVertex3f( 0.261313, 0.282843, -0.108239);
		glVertex3f( 0.326197, 0.222228, -0.064885);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.307271, -0.222228, -0.127276);
		glVertex3f( 0.341422, -0.153073, -0.141421);
		glVertex3f( 0.326197, -0.222228, -0.064885);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.341422, -0.153073, -0.141421);
		glVertex3f( 0.362451, -0.078036, -0.150132);
		glVertex3f( 0.362451, -0.153073, -0.072096);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( 0.072096, -0.392314, -0.029863);
		glVertex3f( 0.076537, -0.392314, -0.015224);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.261313, 0.282843, -0.108239);
		glVertex3f( 0.205312, 0.332588, -0.085043);
		glVertex3f( 0.277408, 0.282843, -0.055180);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.362451, -0.078036, -0.150132);
		glVertex3f( 0.369552, 0.000000, -0.153073);
		glVertex3f( 0.384776, -0.078036, -0.076537);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.072096, -0.392314, -0.029863);
		glVertex3f( 0.141421, -0.369552, -0.058579);
		glVertex3f( 0.076537, -0.392314, -0.015224);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.141421, -0.369552, -0.058579);
		glVertex3f( 0.205312, -0.332588, -0.085043);
		glVertex3f( 0.150132, -0.369552, -0.029863);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.205312, 0.332588, -0.085043);
		glVertex3f( 0.141422, 0.369552, -0.058579);
		glVertex3f( 0.217958, 0.332588, -0.043355);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.141422, 0.369552, -0.058579);
		glVertex3f( 0.072096, 0.392314, -0.029863);
		glVertex3f( 0.150132, 0.369552, -0.029863);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.369552, 0.000000, -0.153073);
		glVertex3f( 0.362451, 0.078036, -0.150132);
		glVertex3f( 0.392314, 0.000000, -0.078036);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.217958, 0.332588, -0.043355);
		glVertex3f( 0.150132, 0.369552, -0.029863);
		glVertex3f( 0.222228, 0.332588, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.392314, 0.000000, -0.078036);
		glVertex3f( 0.384776, 0.078036, -0.076537);
		glVertex3f( 0.400000, 0.000000, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.150132, -0.369552, -0.029863);
		glVertex3f( 0.217958, -0.332588, -0.043355);
		glVertex3f( 0.153074, -0.369552, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.217958, -0.332588, -0.043355);
		glVertex3f( 0.277408, -0.282843, -0.055180);
		glVertex3f( 0.222228, -0.332588, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.150132, 0.369552, -0.029863);
		glVertex3f( 0.076537, 0.392314, -0.015224);
		glVertex3f( 0.153074, 0.369552, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.076537, 0.392314, -0.015224);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( 0.078036, 0.392314, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.384776, 0.078036, -0.076537);
		glVertex3f( 0.362451, 0.153073, -0.072096);
		glVertex3f( 0.392314, 0.078036, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.277408, -0.282843, -0.055180);
		glVertex3f( 0.326197, -0.222228, -0.064885);
		glVertex3f( 0.282843, -0.282843, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.362451, 0.153073, -0.072096);
		glVertex3f( 0.326197, 0.222228, -0.064885);
		glVertex3f( 0.369552, 0.153073, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.326197, 0.222228, -0.064885);
		glVertex3f( 0.277408, 0.282843, -0.055180);
		glVertex3f( 0.332588, 0.222228, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.326197, -0.222228, -0.064885);
		glVertex3f( 0.362451, -0.153073, -0.072096);
		glVertex3f( 0.332588, -0.222228, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( 0.076537, -0.392314, -0.015224);
		glVertex3f( 0.078036, -0.392314, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.277408, 0.282843, -0.055180);
		glVertex3f( 0.217958, 0.332588, -0.043355);
		glVertex3f( 0.282843, 0.282843, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.362451, -0.153073, -0.072096);
		glVertex3f( 0.384776, -0.078036, -0.076537);
		glVertex3f( 0.369552, -0.153073, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.384776, -0.078036, -0.076537);
		glVertex3f( 0.392314, 0.000000, -0.078036);
		glVertex3f( 0.392314, -0.078036, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.076537, -0.392314, -0.015224);
		glVertex3f( 0.150132, -0.369552, -0.029863);
		glVertex3f( 0.078036, -0.392314, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.282843, 0.282843, 0.000000);
		glVertex3f( 0.222228, 0.332588, 0.000000);
		glVertex3f( 0.277408, 0.282843, 0.055180);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.369552, -0.153073, 0.000000);
		glVertex3f( 0.392314, -0.078036, 0.000000);
		glVertex3f( 0.362451, -0.153073, 0.072096);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.078036, -0.392314, 0.000000);
		glVertex3f( 0.153074, -0.369552, 0.000000);
		glVertex3f( 0.076537, -0.392314, 0.015224);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.222228, 0.332588, 0.000000);
		glVertex3f( 0.153074, 0.369552, 0.000000);
		glVertex3f( 0.217958, 0.332588, 0.043355);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.392314, -0.078036, 0.000000);
		glVertex3f( 0.400000, 0.000000, 0.000000);
		glVertex3f( 0.384776, -0.078036, 0.076537);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.400000, 0.000000, 0.000000);
		glVertex3f( 0.392314, 0.078036, 0.000000);
		glVertex3f( 0.392314, 0.000000, 0.078036);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.153074, -0.369552, 0.000000);
		glVertex3f( 0.222228, -0.332588, 0.000000);
		glVertex3f( 0.150132, -0.369552, 0.029863);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.153074, 0.369552, 0.000000);
		glVertex3f( 0.078036, 0.392314, 0.000000);
		glVertex3f( 0.150132, 0.369552, 0.029863);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.392314, 0.078036, 0.000000);
		glVertex3f( 0.369552, 0.153073, 0.000000);
		glVertex3f( 0.384776, 0.078036, 0.076537);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.222228, -0.332588, 0.000000);
		glVertex3f( 0.282843, -0.282843, 0.000000);
		glVertex3f( 0.217958, -0.332588, 0.043355);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.282843, -0.282843, 0.000000);
		glVertex3f( 0.332588, -0.222228, 0.000000);
		glVertex3f( 0.277408, -0.282843, 0.055180);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.078036, 0.392314, 0.000000);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( 0.076537, 0.392314, 0.015224);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.369552, 0.153073, 0.000000);
		glVertex3f( 0.332588, 0.222228, 0.000000);
		glVertex3f( 0.362451, 0.153073, 0.072096);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.332588, -0.222228, 0.000000);
		glVertex3f( 0.369552, -0.153073, 0.000000);
		glVertex3f( 0.326197, -0.222228, 0.064885);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( 0.078036, -0.392314, 0.000000);
		glVertex3f( 0.076537, -0.392314, 0.015224);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.332588, 0.222228, 0.000000);
		glVertex3f( 0.282843, 0.282843, 0.000000);
		glVertex3f( 0.326197, 0.222228, 0.064885);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.326197, 0.222228, 0.064885);
		glVertex3f( 0.277408, 0.282843, 0.055180);
		glVertex3f( 0.307271, 0.222228, 0.127276);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.362451, -0.153073, 0.072096);
		glVertex3f( 0.384776, -0.078036, 0.076537);
		glVertex3f( 0.341421, -0.153073, 0.141421);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( 0.076537, -0.392314, 0.015224);
		glVertex3f( 0.072096, -0.392314, 0.029863);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.076537, -0.392314, 0.015224);
		glVertex3f( 0.150132, -0.369552, 0.029863);
		glVertex3f( 0.072096, -0.392314, 0.029863);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.277408, 0.282843, 0.055180);
		glVertex3f( 0.217958, 0.332588, 0.043355);
		glVertex3f( 0.261313, 0.282843, 0.108239);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.217958, 0.332588, 0.043355);
		glVertex3f( 0.150132, 0.369552, 0.029863);
		glVertex3f( 0.205312, 0.332588, 0.085043);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.384776, -0.078036, 0.076537);
		glVertex3f( 0.392314, 0.000000, 0.078036);
		glVertex3f( 0.362451, -0.078036, 0.150132);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.150132, -0.369552, 0.029863);
		glVertex3f( 0.217958, -0.332588, 0.043355);
		glVertex3f( 0.141421, -0.369552, 0.058579);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.150132, 0.369552, 0.029863);
		glVertex3f( 0.076537, 0.392314, 0.015224);
		glVertex3f( 0.141422, 0.369552, 0.058579);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.392314, 0.000000, 0.078036);
		glVertex3f( 0.384776, 0.078036, 0.076537);
		glVertex3f( 0.369552, 0.000000, 0.153073);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.384776, 0.078036, 0.076537);
		glVertex3f( 0.362451, 0.153073, 0.072096);
		glVertex3f( 0.362451, 0.078036, 0.150132);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.217958, -0.332588, 0.043355);
		glVertex3f( 0.277408, -0.282843, 0.055180);
		glVertex3f( 0.205312, -0.332588, 0.085043);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.076537, 0.392314, 0.015224);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( 0.072096, 0.392314, 0.029863);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.362451, 0.153073, 0.072096);
		glVertex3f( 0.326197, 0.222228, 0.064885);
		glVertex3f( 0.341421, 0.153073, 0.141421);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.277408, -0.282843, 0.055180);
		glVertex3f( 0.326197, -0.222228, 0.064885);
		glVertex3f( 0.261313, -0.282843, 0.108239);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.326197, -0.222228, 0.064885);
		glVertex3f( 0.362451, -0.153073, 0.072096);
		glVertex3f( 0.307271, -0.222228, 0.127276);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.362451, 0.078036, 0.150132);
		glVertex3f( 0.341421, 0.153073, 0.141421);
		glVertex3f( 0.326197, 0.078036, 0.217958);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.341421, 0.153073, 0.141421);
		glVertex3f( 0.307271, 0.222228, 0.127276);
		glVertex3f( 0.307271, 0.153073, 0.205312);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.261313, -0.282843, 0.108239);
		glVertex3f( 0.307271, -0.222228, 0.127276);
		glVertex3f( 0.235175, -0.282843, 0.157139);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.307271, 0.222228, 0.127276);
		glVertex3f( 0.261313, 0.282843, 0.108239);
		glVertex3f( 0.276537, 0.222228, 0.184776);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.307271, -0.222228, 0.127276);
		glVertex3f( 0.341421, -0.153073, 0.141421);
		glVertex3f( 0.276537, -0.222228, 0.184776);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.341421, -0.153073, 0.141421);
		glVertex3f( 0.362451, -0.078036, 0.150132);
		glVertex3f( 0.307271, -0.153073, 0.205312);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( 0.072096, -0.392314, 0.029863);
		glVertex3f( 0.064885, -0.392314, 0.043355);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.261313, 0.282843, 0.108239);
		glVertex3f( 0.205312, 0.332588, 0.085043);
		glVertex3f( 0.235175, 0.282843, 0.157139);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.362451, -0.078036, 0.150132);
		glVertex3f( 0.369552, 0.000000, 0.153073);
		glVertex3f( 0.326197, -0.078036, 0.217958);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.072096, -0.392314, 0.029863);
		glVertex3f( 0.141421, -0.369552, 0.058579);
		glVertex3f( 0.064885, -0.392314, 0.043355);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.141421, -0.369552, 0.058579);
		glVertex3f( 0.205312, -0.332588, 0.085043);
		glVertex3f( 0.127276, -0.369552, 0.085043);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.205312, 0.332588, 0.085043);
		glVertex3f( 0.141422, 0.369552, 0.058579);
		glVertex3f( 0.184776, 0.332588, 0.123463);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.141422, 0.369552, 0.058579);
		glVertex3f( 0.072096, 0.392314, 0.029863);
		glVertex3f( 0.127276, 0.369552, 0.085043);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.369552, 0.000000, 0.153073);
		glVertex3f( 0.362451, 0.078036, 0.150132);
		glVertex3f( 0.332588, 0.000000, 0.222228);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.205312, -0.332588, 0.085043);
		glVertex3f( 0.261313, -0.282843, 0.108239);
		glVertex3f( 0.184776, -0.332588, 0.123463);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.072096, 0.392314, 0.029863);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( 0.064885, 0.392314, 0.043355);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.184776, -0.332588, 0.123463);
		glVertex3f( 0.235175, -0.282843, 0.157139);
		glVertex3f( 0.157139, -0.332588, 0.157139);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.127276, 0.369552, 0.085043);
		glVertex3f( 0.064885, 0.392314, 0.043355);
		glVertex3f( 0.108239, 0.369552, 0.108239);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.064885, 0.392314, 0.043355);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( 0.055180, 0.392314, 0.055180);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.326197, 0.078036, 0.217958);
		glVertex3f( 0.307271, 0.153073, 0.205312);
		glVertex3f( 0.277408, 0.078036, 0.277408);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.235175, -0.282843, 0.157139);
		glVertex3f( 0.276537, -0.222228, 0.184776);
		glVertex3f( 0.200000, -0.282843, 0.200000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.307271, 0.153073, 0.205312);
		glVertex3f( 0.276537, 0.222228, 0.184776);
		glVertex3f( 0.261313, 0.153073, 0.261313);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.276537, 0.222228, 0.184776);
		glVertex3f( 0.235175, 0.282843, 0.157139);
		glVertex3f( 0.235175, 0.222228, 0.235175);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.276537, -0.222228, 0.184776);
		glVertex3f( 0.307271, -0.153073, 0.205312);
		glVertex3f( 0.235175, -0.222228, 0.235175);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( 0.064885, -0.392314, 0.043355);
		glVertex3f( 0.055180, -0.392314, 0.055180);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.235175, 0.282843, 0.157139);
		glVertex3f( 0.184776, 0.332588, 0.123463);
		glVertex3f( 0.200000, 0.282843, 0.200000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.307271, -0.153073, 0.205312);
		glVertex3f( 0.326197, -0.078036, 0.217958);
		glVertex3f( 0.261313, -0.153073, 0.261313);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.326197, -0.078036, 0.217958);
		glVertex3f( 0.332588, 0.000000, 0.222228);
		glVertex3f( 0.277408, -0.078036, 0.277408);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.064885, -0.392314, 0.043355);
		glVertex3f( 0.127276, -0.369552, 0.085043);
		glVertex3f( 0.055180, -0.392314, 0.055180);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.184776, 0.332588, 0.123463);
		glVertex3f( 0.127276, 0.369552, 0.085043);
		glVertex3f( 0.157139, 0.332588, 0.157139);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.332588, 0.000000, 0.222228);
		glVertex3f( 0.326197, 0.078036, 0.217958);
		glVertex3f( 0.282843, 0.000000, 0.282843);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.127276, -0.369552, 0.085043);
		glVertex3f( 0.184776, -0.332588, 0.123463);
		glVertex3f( 0.108239, -0.369552, 0.108239);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.157139, 0.332588, 0.157139);
		glVertex3f( 0.108239, 0.369552, 0.108239);
		glVertex3f( 0.123463, 0.332588, 0.184776);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.277408, -0.078036, 0.277408);
		glVertex3f( 0.282843, 0.000000, 0.282843);
		glVertex3f( 0.217958, -0.078036, 0.326197);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.282843, 0.000000, 0.282843);
		glVertex3f( 0.277408, 0.078036, 0.277408);
		glVertex3f( 0.222228, 0.000000, 0.332588);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.108239, -0.369552, 0.108239);
		glVertex3f( 0.157139, -0.332588, 0.157139);
		glVertex3f( 0.085043, -0.369552, 0.127276);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.108239, 0.369552, 0.108239);
		glVertex3f( 0.055180, 0.392314, 0.055180);
		glVertex3f( 0.085043, 0.369552, 0.127276);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.277408, 0.078036, 0.277408);
		glVertex3f( 0.261313, 0.153073, 0.261313);
		glVertex3f( 0.217958, 0.078036, 0.326197);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.157139, -0.332588, 0.157139);
		glVertex3f( 0.200000, -0.282843, 0.200000);
		glVertex3f( 0.123463, -0.332588, 0.184776);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.200000, -0.282843, 0.200000);
		glVertex3f( 0.235175, -0.222228, 0.235175);
		glVertex3f( 0.157139, -0.282843, 0.235175);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.055180, 0.392314, 0.055180);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( 0.043355, 0.392314, 0.064885);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.261313, 0.153073, 0.261313);
		glVertex3f( 0.235175, 0.222228, 0.235175);
		glVertex3f( 0.205312, 0.153073, 0.307271);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.235175, -0.222228, 0.235175);
		glVertex3f( 0.261313, -0.153073, 0.261313);
		glVertex3f( 0.184776, -0.222228, 0.276537);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( 0.055180, -0.392314, 0.055180);
		glVertex3f( 0.043355, -0.392314, 0.064885);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.235175, 0.222228, 0.235175);
		glVertex3f( 0.200000, 0.282843, 0.200000);
		glVertex3f( 0.184776, 0.222228, 0.276537);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.200000, 0.282843, 0.200000);
		glVertex3f( 0.157139, 0.332588, 0.157139);
		glVertex3f( 0.157139, 0.282843, 0.235175);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.261313, -0.153073, 0.261313);
		glVertex3f( 0.277408, -0.078036, 0.277408);
		glVertex3f( 0.205312, -0.153073, 0.307271);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.055180, -0.392314, 0.055180);
		glVertex3f( 0.108239, -0.369552, 0.108239);
		glVertex3f( 0.043355, -0.392314, 0.064885);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.205312, -0.153073, 0.307271);
		glVertex3f( 0.217958, -0.078036, 0.326197);
		glVertex3f( 0.141421, -0.153073, 0.341421);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( 0.043355, -0.392314, 0.064885);
		glVertex3f( 0.029863, -0.392314, 0.072096);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.043355, -0.392314, 0.064885);
		glVertex3f( 0.085043, -0.369552, 0.127276);
		glVertex3f( 0.029863, -0.392314, 0.072096);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.157139, 0.282843, 0.235175);
		glVertex3f( 0.123463, 0.332588, 0.184776);
		glVertex3f( 0.108239, 0.282843, 0.261313);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.123463, 0.332588, 0.184776);
		glVertex3f( 0.085043, 0.369552, 0.127276);
		glVertex3f( 0.085043, 0.332588, 0.205312);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.217958, -0.078036, 0.326197);
		glVertex3f( 0.222228, 0.000000, 0.332588);
		glVertex3f( 0.150132, -0.078036, 0.362451);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.085043, -0.369552, 0.127276);
		glVertex3f( 0.123463, -0.332588, 0.184776);
		glVertex3f( 0.058579, -0.369552, 0.141421);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.085043, 0.369552, 0.127276);
		glVertex3f( 0.043355, 0.392314, 0.064885);
		glVertex3f( 0.058579, 0.369552, 0.141421);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.222228, 0.000000, 0.332588);
		glVertex3f( 0.217958, 0.078036, 0.326197);
		glVertex3f( 0.153073, 0.000000, 0.369552);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.217958, 0.078036, 0.326197);
		glVertex3f( 0.205312, 0.153073, 0.307271);
		glVertex3f( 0.150132, 0.078036, 0.362451);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.123463, -0.332588, 0.184776);
		glVertex3f( 0.157139, -0.282843, 0.235175);
		glVertex3f( 0.085043, -0.332588, 0.205312);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.043355, 0.392314, 0.064885);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( 0.029863, 0.392314, 0.072096);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.205312, 0.153073, 0.307271);
		glVertex3f( 0.184776, 0.222228, 0.276537);
		glVertex3f( 0.141421, 0.153073, 0.341421);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.157139, -0.282843, 0.235175);
		glVertex3f( 0.184776, -0.222228, 0.276537);
		glVertex3f( 0.108239, -0.282843, 0.261313);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.184776, -0.222228, 0.276537);
		glVertex3f( 0.205312, -0.153073, 0.307271);
		glVertex3f( 0.127276, -0.222228, 0.307271);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.184776, 0.222228, 0.276537);
		glVertex3f( 0.157139, 0.282843, 0.235175);
		glVertex3f( 0.127276, 0.222228, 0.307271);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.127276, 0.222228, 0.307271);
		glVertex3f( 0.108239, 0.282843, 0.261313);
		glVertex3f( 0.064885, 0.222228, 0.326197);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.127276, -0.222228, 0.307271);
		glVertex3f( 0.141421, -0.153073, 0.341421);
		glVertex3f( 0.064885, -0.222228, 0.326197);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.141421, -0.153073, 0.341421);
		glVertex3f( 0.150132, -0.078036, 0.362451);
		glVertex3f( 0.072096, -0.153073, 0.362451);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( 0.029863, -0.392314, 0.072096);
		glVertex3f( 0.015224, -0.392314, 0.076537);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.108239, 0.282843, 0.261313);
		glVertex3f( 0.085043, 0.332588, 0.205312);
		glVertex3f( 0.055180, 0.282843, 0.277408);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.150132, -0.078036, 0.362451);
		glVertex3f( 0.153073, 0.000000, 0.369552);
		glVertex3f( 0.076537, -0.078036, 0.384776);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.029863, -0.392314, 0.072096);
		glVertex3f( 0.058579, -0.369552, 0.141421);
		glVertex3f( 0.015224, -0.392314, 0.076537);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.058579, -0.369552, 0.141421);
		glVertex3f( 0.085043, -0.332588, 0.205312);
		glVertex3f( 0.029863, -0.369552, 0.150132);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.085043, 0.332588, 0.205312);
		glVertex3f( 0.058579, 0.369552, 0.141421);
		glVertex3f( 0.043355, 0.332588, 0.217958);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.058579, 0.369552, 0.141421);
		glVertex3f( 0.029863, 0.392314, 0.072096);
		glVertex3f( 0.029863, 0.369552, 0.150132);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.153073, 0.000000, 0.369552);
		glVertex3f( 0.150132, 0.078036, 0.362451);
		glVertex3f( 0.078036, 0.000000, 0.392314);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.085043, -0.332588, 0.205312);
		glVertex3f( 0.108239, -0.282843, 0.261313);
		glVertex3f( 0.043355, -0.332588, 0.217958);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.029863, 0.392314, 0.072096);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( 0.015224, 0.392314, 0.076537);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.150132, 0.078036, 0.362451);
		glVertex3f( 0.141421, 0.153073, 0.341421);
		glVertex3f( 0.076537, 0.078036, 0.384776);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.141421, 0.153073, 0.341421);
		glVertex3f( 0.127276, 0.222228, 0.307271);
		glVertex3f( 0.072096, 0.153073, 0.362451);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.108239, -0.282843, 0.261313);
		glVertex3f( 0.127276, -0.222228, 0.307271);
		glVertex3f( 0.055180, -0.282843, 0.277408);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.055180, -0.282843, 0.277408);
		glVertex3f( 0.064885, -0.222228, 0.326197);
		glVertex3f( 0.000000, -0.282843, 0.282843);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.072096, 0.153073, 0.362451);
		glVertex3f( 0.064885, 0.222228, 0.326197);
		glVertex3f( 0.000000, 0.153073, 0.369552);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.064885, 0.222228, 0.326197);
		glVertex3f( 0.055180, 0.282843, 0.277408);
		glVertex3f( 0.000000, 0.222228, 0.332588);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.064885, -0.222228, 0.326197);
		glVertex3f( 0.072096, -0.153073, 0.362451);
		glVertex3f( 0.000000, -0.222228, 0.332588);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( 0.015224, -0.392314, 0.076537);
		glVertex3f( 0.000000, -0.392314, 0.078036);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.055180, 0.282843, 0.277408);
		glVertex3f( 0.043355, 0.332588, 0.217958);
		glVertex3f( 0.000000, 0.282843, 0.282843);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.072096, -0.153073, 0.362451);
		glVertex3f( 0.076537, -0.078036, 0.384776);
		glVertex3f( 0.000000, -0.153073, 0.369552);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.076537, -0.078036, 0.384776);
		glVertex3f( 0.078036, 0.000000, 0.392314);
		glVertex3f( 0.000000, -0.078036, 0.392314);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.015224, -0.392314, 0.076537);
		glVertex3f( 0.029863, -0.369552, 0.150132);
		glVertex3f( 0.000000, -0.392314, 0.078036);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.043355, 0.332588, 0.217958);
		glVertex3f( 0.029863, 0.369552, 0.150132);
		glVertex3f( 0.000000, 0.332588, 0.222228);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.078036, 0.000000, 0.392314);
		glVertex3f( 0.076537, 0.078036, 0.384776);
		glVertex3f( 0.000000, 0.000000, 0.400000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.029863, -0.369552, 0.150132);
		glVertex3f( 0.043355, -0.332588, 0.217958);
		glVertex3f( 0.000000, -0.369552, 0.153073);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.043355, -0.332588, 0.217958);
		glVertex3f( 0.055180, -0.282843, 0.277408);
		glVertex3f( 0.000000, -0.332588, 0.222228);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.029863, 0.369552, 0.150132);
		glVertex3f( 0.015224, 0.392314, 0.076537);
		glVertex3f( 0.000000, 0.369552, 0.153073);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.015224, 0.392314, 0.076537);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( 0.000000, 0.392314, 0.078036);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.076537, 0.078036, 0.384776);
		glVertex3f( 0.072096, 0.153073, 0.362451);
		glVertex3f( 0.000000, 0.078036, 0.392314);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.369552, 0.153073);
		glVertex3f( 0.000000, 0.392314, 0.078036);
		glVertex3f( -0.029863, 0.369552, 0.150132);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.078036, 0.392314);
		glVertex3f( 0.000000, 0.153073, 0.369552);
		glVertex3f( -0.076537, 0.078036, 0.384776);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.332588, 0.222228);
		glVertex3f( 0.000000, -0.282843, 0.282843);
		glVertex3f( -0.043354, -0.332588, 0.217958);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.282843, 0.282843);
		glVertex3f( 0.000000, -0.222228, 0.332588);
		glVertex3f( -0.055180, -0.282843, 0.277408);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.392314, 0.078036);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( -0.015224, 0.392314, 0.076537);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.153073, 0.369552);
		glVertex3f( 0.000000, 0.222228, 0.332588);
		glVertex3f( -0.072096, 0.153073, 0.362451);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.222228, 0.332588);
		glVertex3f( 0.000000, -0.153073, 0.369552);
		glVertex3f( -0.064885, -0.222228, 0.326197);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( 0.000000, -0.392314, 0.078036);
		glVertex3f( -0.015224, -0.392314, 0.076537);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.222228, 0.332588);
		glVertex3f( 0.000000, 0.282843, 0.282843);
		glVertex3f( -0.064885, 0.222228, 0.326197);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.282843, 0.282843);
		glVertex3f( 0.000000, 0.332588, 0.222228);
		glVertex3f( -0.055180, 0.282843, 0.277408);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.153073, 0.369552);
		glVertex3f( 0.000000, -0.078036, 0.392314);
		glVertex3f( -0.072096, -0.153073, 0.362451);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.392314, 0.078036);
		glVertex3f( 0.000000, -0.369552, 0.153073);
		glVertex3f( -0.015224, -0.392314, 0.076537);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.332588, 0.222228);
		glVertex3f( 0.000000, 0.369552, 0.153073);
		glVertex3f( -0.043354, 0.332588, 0.217958);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.078036, 0.392314);
		glVertex3f( 0.000000, 0.000000, 0.400000);
		glVertex3f( -0.076537, -0.078036, 0.384776);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.000000, 0.400000);
		glVertex3f( 0.000000, 0.078036, 0.392314);
		glVertex3f( -0.078036, 0.000000, 0.392314);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.369552, 0.153073);
		glVertex3f( 0.000000, -0.332588, 0.222228);
		glVertex3f( -0.029863, -0.369552, 0.150132);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.043354, 0.332588, 0.217958);
		glVertex3f( -0.029863, 0.369552, 0.150132);
		glVertex3f( -0.085043, 0.332588, 0.205312);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.076537, -0.078036, 0.384776);
		glVertex3f( -0.078036, 0.000000, 0.392314);
		glVertex3f( -0.150132, -0.078036, 0.362451);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.029863, -0.369552, 0.150132);
		glVertex3f( -0.043354, -0.332588, 0.217958);
		glVertex3f( -0.058579, -0.369552, 0.141421);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.029863, 0.369552, 0.150132);
		glVertex3f( -0.015224, 0.392314, 0.076537);
		glVertex3f( -0.058579, 0.369552, 0.141421);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.078036, 0.000000, 0.392314);
		glVertex3f( -0.076537, 0.078036, 0.384776);
		glVertex3f( -0.153073, 0.000000, 0.369552);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.076537, 0.078036, 0.384776);
		glVertex3f( -0.072096, 0.153073, 0.362451);
		glVertex3f( -0.150132, 0.078036, 0.362451);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.043354, -0.332588, 0.217958);
		glVertex3f( -0.055180, -0.282843, 0.277408);
		glVertex3f( -0.085043, -0.332588, 0.205312);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.015224, 0.392314, 0.076537);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( -0.029863, 0.392314, 0.072096);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.072096, 0.153073, 0.362451);
		glVertex3f( -0.064885, 0.222228, 0.326197);
		glVertex3f( -0.141421, 0.153073, 0.341421);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055180, -0.282843, 0.277408);
		glVertex3f( -0.064885, -0.222228, 0.326197);
		glVertex3f( -0.108239, -0.282843, 0.261312);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.064885, -0.222228, 0.326197);
		glVertex3f( -0.072096, -0.153073, 0.362451);
		glVertex3f( -0.127276, -0.222228, 0.307271);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.064885, 0.222228, 0.326197);
		glVertex3f( -0.055180, 0.282843, 0.277408);
		glVertex3f( -0.127276, 0.222228, 0.307271);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.072096, -0.153073, 0.362451);
		glVertex3f( -0.076537, -0.078036, 0.384776);
		glVertex3f( -0.141421, -0.153073, 0.341421);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( -0.015224, -0.392314, 0.076537);
		glVertex3f( -0.029863, -0.392314, 0.072096);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.015224, -0.392314, 0.076537);
		glVertex3f( -0.029863, -0.369552, 0.150132);
		glVertex3f( -0.029863, -0.392314, 0.072096);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055180, 0.282843, 0.277408);
		glVertex3f( -0.043354, 0.332588, 0.217958);
		glVertex3f( -0.108239, 0.282843, 0.261312);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( -0.029863, -0.392314, 0.072096);
		glVertex3f( -0.043354, -0.392314, 0.064885);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.108239, 0.282843, 0.261312);
		glVertex3f( -0.085043, 0.332588, 0.205312);
		glVertex3f( -0.157139, 0.282843, 0.235175);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.150132, -0.078036, 0.362451);
		glVertex3f( -0.153073, 0.000000, 0.369552);
		glVertex3f( -0.217958, -0.078036, 0.326197);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.029863, -0.392314, 0.072096);
		glVertex3f( -0.058579, -0.369552, 0.141421);
		glVertex3f( -0.043354, -0.392314, 0.064885);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.058579, -0.369552, 0.141421);
		glVertex3f( -0.085043, -0.332588, 0.205312);
		glVertex3f( -0.085043, -0.369552, 0.127276);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.085043, 0.332588, 0.205312);
		glVertex3f( -0.058579, 0.369552, 0.141421);
		glVertex3f( -0.123463, 0.332588, 0.184776);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.058579, 0.369552, 0.141421);
		glVertex3f( -0.029863, 0.392314, 0.072096);
		glVertex3f( -0.085043, 0.369552, 0.127276);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.153073, 0.000000, 0.369552);
		glVertex3f( -0.150132, 0.078036, 0.362451);
		glVertex3f( -0.222228, 0.000000, 0.332588);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.085043, -0.332588, 0.205312);
		glVertex3f( -0.108239, -0.282843, 0.261312);
		glVertex3f( -0.123463, -0.332588, 0.184776);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.029863, 0.392314, 0.072096);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( -0.043354, 0.392314, 0.064885);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.150132, 0.078036, 0.362451);
		glVertex3f( -0.141421, 0.153073, 0.341421);
		glVertex3f( -0.217958, 0.078036, 0.326197);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.141421, 0.153073, 0.341421);
		glVertex3f( -0.127276, 0.222228, 0.307271);
		glVertex3f( -0.205312, 0.153073, 0.307271);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.108239, -0.282843, 0.261312);
		glVertex3f( -0.127276, -0.222228, 0.307271);
		glVertex3f( -0.157139, -0.282843, 0.235175);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.127276, 0.222228, 0.307271);
		glVertex3f( -0.108239, 0.282843, 0.261312);
		glVertex3f( -0.184776, 0.222228, 0.276537);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.127276, -0.222228, 0.307271);
		glVertex3f( -0.141421, -0.153073, 0.341421);
		glVertex3f( -0.184776, -0.222228, 0.276537);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.141421, -0.153073, 0.341421);
		glVertex3f( -0.150132, -0.078036, 0.362451);
		glVertex3f( -0.205312, -0.153073, 0.307271);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.205312, 0.153073, 0.307271);
		glVertex3f( -0.184776, 0.222228, 0.276537);
		glVertex3f( -0.261312, 0.153073, 0.261312);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.184776, 0.222228, 0.276537);
		glVertex3f( -0.157139, 0.282843, 0.235175);
		glVertex3f( -0.235175, 0.222228, 0.235175);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.184776, -0.222228, 0.276537);
		glVertex3f( -0.205312, -0.153073, 0.307271);
		glVertex3f( -0.235175, -0.222228, 0.235175);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( -0.043354, -0.392314, 0.064885);
		glVertex3f( -0.055180, -0.392314, 0.055180);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.157139, 0.282843, 0.235175);
		glVertex3f( -0.123463, 0.332588, 0.184776);
		glVertex3f( -0.200000, 0.282843, 0.200000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.205312, -0.153073, 0.307271);
		glVertex3f( -0.217958, -0.078036, 0.326197);
		glVertex3f( -0.261312, -0.153073, 0.261312);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.217958, -0.078036, 0.326197);
		glVertex3f( -0.222228, 0.000000, 0.332588);
		glVertex3f( -0.277408, -0.078036, 0.277408);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.043354, -0.392314, 0.064885);
		glVertex3f( -0.085043, -0.369552, 0.127276);
		glVertex3f( -0.055180, -0.392314, 0.055180);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.123463, 0.332588, 0.184776);
		glVertex3f( -0.085043, 0.369552, 0.127276);
		glVertex3f( -0.157139, 0.332588, 0.157139);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.222228, 0.000000, 0.332588);
		glVertex3f( -0.217958, 0.078036, 0.326197);
		glVertex3f( -0.282842, 0.000000, 0.282842);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.085043, -0.369552, 0.127276);
		glVertex3f( -0.123463, -0.332588, 0.184776);
		glVertex3f( -0.108239, -0.369552, 0.108239);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.123463, -0.332588, 0.184776);
		glVertex3f( -0.157139, -0.282843, 0.235175);
		glVertex3f( -0.157139, -0.332588, 0.157139);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.085043, 0.369552, 0.127276);
		glVertex3f( -0.043354, 0.392314, 0.064885);
		glVertex3f( -0.108239, 0.369552, 0.108239);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.043354, 0.392314, 0.064885);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( -0.055180, 0.392314, 0.055180);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.217958, 0.078036, 0.326197);
		glVertex3f( -0.205312, 0.153073, 0.307271);
		glVertex3f( -0.277408, 0.078036, 0.277408);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.157139, -0.282843, 0.235175);
		glVertex3f( -0.184776, -0.222228, 0.276537);
		glVertex3f( -0.200000, -0.282843, 0.200000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.200000, -0.282843, 0.200000);
		glVertex3f( -0.235175, -0.222228, 0.235175);
		glVertex3f( -0.235175, -0.282843, 0.157139);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055180, 0.392314, 0.055180);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( -0.064885, 0.392314, 0.043355);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.261312, 0.153073, 0.261312);
		glVertex3f( -0.235175, 0.222228, 0.235175);
		glVertex3f( -0.307271, 0.153073, 0.205312);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.235175, -0.222228, 0.235175);
		glVertex3f( -0.261312, -0.153073, 0.261312);
		glVertex3f( -0.276537, -0.222228, 0.184776);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( -0.055180, -0.392314, 0.055180);
		glVertex3f( -0.064885, -0.392314, 0.043355);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.235175, 0.222228, 0.235175);
		glVertex3f( -0.200000, 0.282843, 0.200000);
		glVertex3f( -0.276537, 0.222228, 0.184776);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.200000, 0.282843, 0.200000);
		glVertex3f( -0.157139, 0.332588, 0.157139);
		glVertex3f( -0.235175, 0.282843, 0.157139);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.261312, -0.153073, 0.261312);
		glVertex3f( -0.277408, -0.078036, 0.277408);
		glVertex3f( -0.307271, -0.153073, 0.205312);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055180, -0.392314, 0.055180);
		glVertex3f( -0.108239, -0.369552, 0.108239);
		glVertex3f( -0.064885, -0.392314, 0.043355);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.157139, 0.332588, 0.157139);
		glVertex3f( -0.108239, 0.369552, 0.108239);
		glVertex3f( -0.184776, 0.332588, 0.123463);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.277408, -0.078036, 0.277408);
		glVertex3f( -0.282842, 0.000000, 0.282842);
		glVertex3f( -0.326197, -0.078036, 0.217958);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.282842, 0.000000, 0.282842);
		glVertex3f( -0.277408, 0.078036, 0.277408);
		glVertex3f( -0.332588, 0.000000, 0.222228);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.108239, -0.369552, 0.108239);
		glVertex3f( -0.157139, -0.332588, 0.157139);
		glVertex3f( -0.127276, -0.369552, 0.085043);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.108239, 0.369552, 0.108239);
		glVertex3f( -0.055180, 0.392314, 0.055180);
		glVertex3f( -0.127276, 0.369552, 0.085043);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.277408, 0.078036, 0.277408);
		glVertex3f( -0.261312, 0.153073, 0.261312);
		glVertex3f( -0.326197, 0.078036, 0.217958);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.157139, -0.332588, 0.157139);
		glVertex3f( -0.200000, -0.282843, 0.200000);
		glVertex3f( -0.184776, -0.332588, 0.123463);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.127276, 0.369552, 0.085043);
		glVertex3f( -0.064885, 0.392314, 0.043355);
		glVertex3f( -0.141421, 0.369552, 0.058579);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.332588, 0.000000, 0.222228);
		glVertex3f( -0.326197, 0.078036, 0.217958);
		glVertex3f( -0.369552, 0.000000, 0.153073);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.326197, 0.078036, 0.217958);
		glVertex3f( -0.307271, 0.153073, 0.205312);
		glVertex3f( -0.362451, 0.078036, 0.150132);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.184776, -0.332588, 0.123463);
		glVertex3f( -0.235175, -0.282843, 0.157139);
		glVertex3f( -0.205312, -0.332588, 0.085043);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.064885, 0.392314, 0.043355);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( -0.072096, 0.392314, 0.029863);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.307271, 0.153073, 0.205312);
		glVertex3f( -0.276537, 0.222228, 0.184776);
		glVertex3f( -0.341421, 0.153073, 0.141421);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.235175, -0.282843, 0.157139);
		glVertex3f( -0.276537, -0.222228, 0.184776);
		glVertex3f( -0.261312, -0.282843, 0.108239);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.276537, -0.222228, 0.184776);
		glVertex3f( -0.307271, -0.153073, 0.205312);
		glVertex3f( -0.307271, -0.222228, 0.127276);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.276537, 0.222228, 0.184776);
		glVertex3f( -0.235175, 0.282843, 0.157139);
		glVertex3f( -0.307271, 0.222228, 0.127276);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.307271, -0.153073, 0.205312);
		glVertex3f( -0.326197, -0.078036, 0.217958);
		glVertex3f( -0.362451, -0.078036, 0.150132);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( -0.064885, -0.392314, 0.043355);
		glVertex3f( -0.072096, -0.392314, 0.029863);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.064885, -0.392314, 0.043355);
		glVertex3f( -0.127276, -0.369552, 0.085043);
		glVertex3f( -0.072096, -0.392314, 0.029863);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.235175, 0.282843, 0.157139);
		glVertex3f( -0.184776, 0.332588, 0.123463);
		glVertex3f( -0.261312, 0.282843, 0.108239);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.184776, 0.332588, 0.123463);
		glVertex3f( -0.127276, 0.369552, 0.085043);
		glVertex3f( -0.205312, 0.332588, 0.085043);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.326197, -0.078036, 0.217958);
		glVertex3f( -0.332588, 0.000000, 0.222228);
		glVertex3f( -0.362451, -0.078036, 0.150132);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.127276, -0.369552, 0.085043);
		glVertex3f( -0.184776, -0.332588, 0.123463);
		glVertex3f( -0.141421, -0.369552, 0.058579);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.362451, -0.078036, 0.150132);
		glVertex3f( -0.369552, 0.000000, 0.153073);
		glVertex3f( -0.384776, -0.078036, 0.076537);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.072096, -0.392314, 0.029863);
		glVertex3f( -0.141421, -0.369552, 0.058579);
		glVertex3f( -0.076537, -0.392314, 0.015224);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.141421, -0.369552, 0.058579);
		glVertex3f( -0.205312, -0.332588, 0.085043);
		glVertex3f( -0.150132, -0.369552, 0.029863);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.205312, 0.332588, 0.085043);
		glVertex3f( -0.141421, 0.369552, 0.058579);
		glVertex3f( -0.217958, 0.332588, 0.043354);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.141421, 0.369552, 0.058579);
		glVertex3f( -0.072096, 0.392314, 0.029863);
		glVertex3f( -0.150132, 0.369552, 0.029863);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.369552, 0.000000, 0.153073);
		glVertex3f( -0.362451, 0.078036, 0.150132);
		glVertex3f( -0.392314, 0.000000, 0.078036);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.205312, -0.332588, 0.085043);
		glVertex3f( -0.261312, -0.282843, 0.108239);
		glVertex3f( -0.217958, -0.332588, 0.043354);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.072096, 0.392314, 0.029863);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( -0.076537, 0.392314, 0.015224);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.362451, 0.078036, 0.150132);
		glVertex3f( -0.341421, 0.153073, 0.141421);
		glVertex3f( -0.384776, 0.078036, 0.076537);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.341421, 0.153073, 0.141421);
		glVertex3f( -0.307271, 0.222228, 0.127276);
		glVertex3f( -0.362451, 0.153073, 0.072096);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.261312, -0.282843, 0.108239);
		glVertex3f( -0.307271, -0.222228, 0.127276);
		glVertex3f( -0.277408, -0.282843, 0.055180);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.307271, 0.222228, 0.127276);
		glVertex3f( -0.261312, 0.282843, 0.108239);
		glVertex3f( -0.277408, 0.282843, 0.055180);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.307271, -0.222228, 0.127276);
		glVertex3f( -0.341421, -0.153073, 0.141421);
		glVertex3f( -0.326197, -0.222228, 0.064885);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.341421, -0.153073, 0.141421);
		glVertex3f( -0.362451, -0.078036, 0.150132);
		glVertex3f( -0.384776, -0.078036, 0.076537);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( -0.072096, -0.392314, 0.029863);
		glVertex3f( -0.076537, -0.392314, 0.015224);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.261312, 0.282843, 0.108239);
		glVertex3f( -0.205312, 0.332588, 0.085043);
		glVertex3f( -0.277408, 0.282843, 0.055180);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.277408, 0.282843, 0.055180);
		glVertex3f( -0.217958, 0.332588, 0.043354);
		glVertex3f( -0.282843, 0.282843, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.362451, -0.153073, 0.072096);
		glVertex3f( -0.384776, -0.078036, 0.076537);
		glVertex3f( -0.392314, -0.078036, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.384776, -0.078036, 0.076537);
		glVertex3f( -0.392314, 0.000000, 0.078036);
		glVertex3f( -0.400000, 0.000000, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.076537, -0.392314, 0.015224);
		glVertex3f( -0.150132, -0.369552, 0.029863);
		glVertex3f( -0.153073, -0.369552, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.217958, 0.332588, 0.043354);
		glVertex3f( -0.150132, 0.369552, 0.029863);
		glVertex3f( -0.222228, 0.332588, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.392314, 0.000000, 0.078036);
		glVertex3f( -0.384776, 0.078036, 0.076537);
		glVertex3f( -0.400000, 0.000000, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.150132, -0.369552, 0.029863);
		glVertex3f( -0.217958, -0.332588, 0.043354);
		glVertex3f( -0.222228, -0.332588, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.217958, -0.332588, 0.043354);
		glVertex3f( -0.277408, -0.282843, 0.055180);
		glVertex3f( -0.282843, -0.282843, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.150132, 0.369552, 0.029863);
		glVertex3f( -0.076537, 0.392314, 0.015224);
		glVertex3f( -0.153073, 0.369552, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.076537, 0.392314, 0.015224);
		glVertex3f( 0.000000, 0.400000, 0.000000);
		glVertex3f( -0.078036, 0.392314, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.384776, 0.078036, 0.076537);
		glVertex3f( -0.362451, 0.153073, 0.072096);
		glVertex3f( -0.392314, 0.078036, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.277408, -0.282843, 0.055180);
		glVertex3f( -0.326197, -0.222228, 0.064885);
		glVertex3f( -0.332588, -0.222228, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.362451, 0.153073, 0.072096);
		glVertex3f( -0.326197, 0.222228, 0.064885);
		glVertex3f( -0.369552, 0.153073, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.326197, 0.222228, 0.064885);
		glVertex3f( -0.277408, 0.282843, 0.055180);
		glVertex3f( -0.332588, 0.222228, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.326197, -0.222228, 0.064885);
		glVertex3f( -0.362451, -0.153073, 0.072096);
		glVertex3f( -0.369552, -0.153073, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400000, 0.000000);
		glVertex3f( -0.076537, -0.392314, 0.015224);
		glVertex3f( -0.078036, -0.392314, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.222228, -0.332588, 0.000000);
		glVertex3f( -0.217958, -0.332588, -0.043355);
		glVertex3f( -0.150132, -0.369552, -0.029863);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.078036, 0.392314, 0.000000);
		glVertex3f( -0.076537, 0.392314, -0.015224);
		glVertex3f( -0.150132, 0.369552, -0.029863);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.392314, 0.078036, 0.000000);
		glVertex3f( -0.384776, 0.078036, -0.076537);
		glVertex3f( -0.392314, 0.000000, -0.078036);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.369552, 0.153073, 0.000000);
		glVertex3f( -0.362451, 0.153073, -0.072096);
		glVertex3f( -0.384776, 0.078036, -0.076537);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.282843, -0.282843, 0.000000);
		glVertex3f( -0.277408, -0.282843, -0.055180);
		glVertex3f( -0.217958, -0.332588, -0.043355);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.332588, 0.222228, 0.000000);
		glVertex3f( -0.326197, 0.222228, -0.064885);
		glVertex3f( -0.362451, 0.153073, -0.072096);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.332588, -0.222228, 0.000000);
		glVertex3f( -0.326197, -0.222228, -0.064885);
		glVertex3f( -0.277408, -0.282843, -0.055180);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.369552, -0.153073, 0.000000);
		glVertex3f( -0.362451, -0.153073, -0.072096);
		glVertex3f( -0.326197, -0.222228, -0.064885);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.282843, 0.282843, 0.000000);
		glVertex3f( -0.277408, 0.282843, -0.055180);
		glVertex3f( -0.326197, 0.222228, -0.064885);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.392314, -0.078036, 0.000000);
		glVertex3f( -0.384776, -0.078036, -0.076537);
		glVertex3f( -0.362451, -0.153073, -0.072096);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.153073, -0.369552, 0.000000);
		glVertex3f( -0.150132, -0.369552, -0.029863);
		glVertex3f( -0.076537, -0.392314, -0.015224);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.222228, 0.332588, 0.000000);
		glVertex3f( -0.217958, 0.332588, -0.043355);
		glVertex3f( -0.277408, 0.282843, -0.055180);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.153073, 0.369552, 0.000000);
		glVertex3f( -0.150132, 0.369552, -0.029863);
		glVertex3f( -0.217958, 0.332588, -0.043355);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.400000, 0.000000, 0.000000);
		glVertex3f( -0.392314, 0.000000, -0.078036);
		glVertex3f( -0.384776, -0.078036, -0.076537);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.150132, -0.369552, -0.029863);
		glVertex3f( -0.141421, -0.369552, -0.058579);
		glVertex3f( -0.072096, -0.392314, -0.029863);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.217958, 0.332588, -0.043355);
		glVertex3f( -0.205312, 0.332588, -0.085043);
		glVertex3f( -0.261313, 0.282843, -0.108239);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.150132, 0.369552, -0.029863);
		glVertex3f( -0.141421, 0.369552, -0.058579);
		glVertex3f( -0.205312, 0.332588, -0.085043);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.392314, 0.000000, -0.078036);
		glVertex3f( -0.369552, 0.000000, -0.153073);
		glVertex3f( -0.362451, -0.078036, -0.150132);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.217958, -0.332588, -0.043355);
		glVertex3f( -0.205312, -0.332588, -0.085043);
		glVertex3f( -0.141421, -0.369552, -0.058579);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.076537, 0.392314, -0.015224);
		glVertex3f( -0.072096, 0.392314, -0.029863);
		glVertex3f( -0.141421, 0.369552, -0.058579);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.384776, 0.078036, -0.076537);
		glVertex3f( -0.362451, 0.078036, -0.150132);
		glVertex3f( -0.369552, 0.000000, -0.153073);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.362451, 0.153073, -0.072096);
		glVertex3f( -0.341421, 0.153073, -0.141421);
		glVertex3f( -0.362451, 0.078036, -0.150132);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.277408, -0.282843, -0.055180);
		glVertex3f( -0.261313, -0.282843, -0.108239);
		glVertex3f( -0.205312, -0.332588, -0.085043);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.326197, 0.222228, -0.064885);
		glVertex3f( -0.307271, 0.222228, -0.127276);
		glVertex3f( -0.341421, 0.153073, -0.141421);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.326197, -0.222228, -0.064885);
		glVertex3f( -0.307271, -0.222228, -0.127276);
		glVertex3f( -0.261313, -0.282843, -0.108239);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.362451, -0.153073, -0.072096);
		glVertex3f( -0.341421, -0.153073, -0.141421);
		glVertex3f( -0.307271, -0.222228, -0.127276);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.277408, 0.282843, -0.055180);
		glVertex3f( -0.261313, 0.282843, -0.108239);
		glVertex3f( -0.307271, 0.222228, -0.127276);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.384776, -0.078036, -0.076537);
		glVertex3f( -0.362451, -0.078036, -0.150132);
		glVertex3f( -0.341421, -0.153073, -0.141421);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.261313, 0.282843, -0.108239);
		glVertex3f( -0.235175, 0.282843, -0.157139);
		glVertex3f( -0.276537, 0.222228, -0.184776);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.341421, -0.153073, -0.141421);
		glVertex3f( -0.307271, -0.153073, -0.205312);
		glVertex3f( -0.276537, -0.222228, -0.184776);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.362451, -0.078036, -0.150132);
		glVertex3f( -0.326197, -0.078036, -0.217958);
		glVertex3f( -0.307271, -0.153073, -0.205312);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.205312, 0.332588, -0.085043);
		glVertex3f( -0.184776, 0.332588, -0.123463);
		glVertex3f( -0.235175, 0.282843, -0.157139);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.369552, 0.000000, -0.153073);
		glVertex3f( -0.332588, 0.000000, -0.222228);
		glVertex3f( -0.326197, -0.078036, -0.217958);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.141421, -0.369552, -0.058579);
		glVertex3f( -0.127276, -0.369552, -0.085043);
		glVertex3f( -0.064885, -0.392314, -0.043355);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.205312, -0.332588, -0.085043);
		glVertex3f( -0.184776, -0.332588, -0.123463);
		glVertex3f( -0.127276, -0.369552, -0.085043);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.141421, 0.369552, -0.058579);
		glVertex3f( -0.127276, 0.369552, -0.085043);
		glVertex3f( -0.184776, 0.332588, -0.123463);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.072096, 0.392314, -0.029863);
		glVertex3f( -0.064885, 0.392314, -0.043355);
		glVertex3f( -0.127276, 0.369552, -0.085043);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.362451, 0.078036, -0.150132);
		glVertex3f( -0.326197, 0.078036, -0.217958);
		glVertex3f( -0.332588, 0.000000, -0.222228);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.261313, -0.282843, -0.108239);
		glVertex3f( -0.235175, -0.282843, -0.157139);
		glVertex3f( -0.184776, -0.332588, -0.123463);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.341421, 0.153073, -0.141421);
		glVertex3f( -0.307271, 0.153073, -0.205312);
		glVertex3f( -0.326197, 0.078036, -0.217958);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.307271, 0.222228, -0.127276);
		glVertex3f( -0.276537, 0.222228, -0.184776);
		glVertex3f( -0.307271, 0.153073, -0.205312);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.307271, -0.222228, -0.127276);
		glVertex3f( -0.276537, -0.222228, -0.184776);
		glVertex3f( -0.235175, -0.282843, -0.157139);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.276537, -0.222228, -0.184776);
		glVertex3f( -0.235175, -0.222228, -0.235175);
		glVertex3f( -0.200000, -0.282843, -0.200000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.276537, 0.222228, -0.184776);
		glVertex3f( -0.235175, 0.222228, -0.235175);
		glVertex3f( -0.261313, 0.153073, -0.261313);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.235175, 0.282843, -0.157139);
		glVertex3f( -0.200000, 0.282843, -0.200000);
		glVertex3f( -0.235175, 0.222228, -0.235175);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.307271, -0.153073, -0.205312);
		glVertex3f( -0.261313, -0.153073, -0.261313);
		glVertex3f( -0.235175, -0.222228, -0.235175);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.184776, 0.332588, -0.123463);
		glVertex3f( -0.157139, 0.332588, -0.157139);
		glVertex3f( -0.200000, 0.282843, -0.200000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.326197, -0.078036, -0.217958);
		glVertex3f( -0.277408, -0.078036, -0.277408);
		glVertex3f( -0.261313, -0.153073, -0.261313);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.332588, 0.000000, -0.222228);
		glVertex3f( -0.282843, 0.000000, -0.282843);
		glVertex3f( -0.277408, -0.078036, -0.277408);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.127276, -0.369552, -0.085043);
		glVertex3f( -0.108239, -0.369552, -0.108239);
		glVertex3f( -0.055180, -0.392314, -0.055180);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.127276, 0.369552, -0.085043);
		glVertex3f( -0.108239, 0.369552, -0.108239);
		glVertex3f( -0.157139, 0.332588, -0.157139);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.326197, 0.078036, -0.217958);
		glVertex3f( -0.277408, 0.078036, -0.277408);
		glVertex3f( -0.282843, 0.000000, -0.282843);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.184776, -0.332588, -0.123463);
		glVertex3f( -0.157139, -0.332588, -0.157139);
		glVertex3f( -0.108239, -0.369552, -0.108239);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.235175, -0.282843, -0.157139);
		glVertex3f( -0.200000, -0.282843, -0.200000);
		glVertex3f( -0.157139, -0.332588, -0.157139);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.064885, 0.392314, -0.043355);
		glVertex3f( -0.055180, 0.392314, -0.055180);
		glVertex3f( -0.108239, 0.369552, -0.108239);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.307271, 0.153073, -0.205312);
		glVertex3f( -0.261313, 0.153073, -0.261313);
		glVertex3f( -0.277408, 0.078036, -0.277408);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055180, 0.392314, -0.055180);
		glVertex3f( -0.043354, 0.392314, -0.064885);
		glVertex3f( -0.085043, 0.369552, -0.127276);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.261313, 0.153073, -0.261313);
		glVertex3f( -0.205312, 0.153073, -0.307271);
		glVertex3f( -0.217958, 0.078036, -0.326197);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.200000, -0.282843, -0.200000);
		glVertex3f( -0.157139, -0.282843, -0.235175);
		glVertex3f( -0.123463, -0.332588, -0.184776);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.235175, -0.222228, -0.235175);
		glVertex3f( -0.184776, -0.222228, -0.276537);
		glVertex3f( -0.157139, -0.282843, -0.235175);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.235175, 0.222228, -0.235175);
		glVertex3f( -0.184776, 0.222228, -0.276537);
		glVertex3f( -0.205312, 0.153073, -0.307271);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.261313, -0.153073, -0.261313);
		glVertex3f( -0.205312, -0.153073, -0.307271);
		glVertex3f( -0.184776, -0.222228, -0.276537);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.200000, 0.282843, -0.200000);
		glVertex3f( -0.157139, 0.282843, -0.235175);
		glVertex3f( -0.184776, 0.222228, -0.276537);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.157139, 0.332588, -0.157139);
		glVertex3f( -0.123463, 0.332588, -0.184776);
		glVertex3f( -0.157139, 0.282843, -0.235175);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.277408, -0.078036, -0.277408);
		glVertex3f( -0.217958, -0.078036, -0.326197);
		glVertex3f( -0.205312, -0.153073, -0.307271);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.108239, -0.369552, -0.108239);
		glVertex3f( -0.085043, -0.369552, -0.127276);
		glVertex3f( -0.043354, -0.392314, -0.064885);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.108239, 0.369552, -0.108239);
		glVertex3f( -0.085043, 0.369552, -0.127276);
		glVertex3f( -0.123463, 0.332588, -0.184776);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.282843, 0.000000, -0.282843);
		glVertex3f( -0.222228, 0.000000, -0.332588);
		glVertex3f( -0.217958, -0.078036, -0.326197);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.277408, 0.078036, -0.277408);
		glVertex3f( -0.217958, 0.078036, -0.326197);
		glVertex3f( -0.222228, 0.000000, -0.332588);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.157139, -0.332588, -0.157139);
		glVertex3f( -0.123463, -0.332588, -0.184776);
		glVertex3f( -0.085043, -0.369552, -0.127276);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.123463, -0.332588, -0.184776);
		glVertex3f( -0.085043, -0.332588, -0.205312);
		glVertex3f( -0.058579, -0.369552, -0.141421);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.043354, 0.392314, -0.064885);
		glVertex3f( -0.029863, 0.392314, -0.072096);
		glVertex3f( -0.058579, 0.369552, -0.141421);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.217958, 0.078036, -0.326197);
		glVertex3f( -0.150132, 0.078036, -0.362451);
		glVertex3f( -0.153073, 0.000000, -0.369552);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.205312, 0.153073, -0.307271);
		glVertex3f( -0.141421, 0.153073, -0.341421);
		glVertex3f( -0.150132, 0.078036, -0.362451);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.157139, -0.282843, -0.235175);
		glVertex3f( -0.108239, -0.282843, -0.261313);
		glVertex3f( -0.085043, -0.332588, -0.205312);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.184776, 0.222228, -0.276537);
		glVertex3f( -0.127276, 0.222228, -0.307271);
		glVertex3f( -0.141421, 0.153073, -0.341421);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.184776, -0.222228, -0.276537);
		glVertex3f( -0.127276, -0.222228, -0.307271);
		glVertex3f( -0.108239, -0.282843, -0.261313);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.205312, -0.153073, -0.307271);
		glVertex3f( -0.141421, -0.153073, -0.341421);
		glVertex3f( -0.127276, -0.222228, -0.307271);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.157139, 0.282843, -0.235175);
		glVertex3f( -0.108239, 0.282843, -0.261313);
		glVertex3f( -0.127276, 0.222228, -0.307271);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.217958, -0.078036, -0.326197);
		glVertex3f( -0.150132, -0.078036, -0.362451);
		glVertex3f( -0.141421, -0.153073, -0.341421);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.085043, -0.369552, -0.127276);
		glVertex3f( -0.058579, -0.369552, -0.141421);
		glVertex3f( -0.029863, -0.392314, -0.072096);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.123463, 0.332588, -0.184776);
		glVertex3f( -0.085043, 0.332588, -0.205312);
		glVertex3f( -0.108239, 0.282843, -0.261313);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.085043, 0.369552, -0.127276);
		glVertex3f( -0.058579, 0.369552, -0.141421);
		glVertex3f( -0.085043, 0.332588, -0.205312);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.222228, 0.000000, -0.332588);
		glVertex3f( -0.153073, 0.000000, -0.369552);
		glVertex3f( -0.150132, -0.078036, -0.362451);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.085043, 0.332588, -0.205312);
		glVertex3f( -0.043354, 0.332588, -0.217958);
		glVertex3f( -0.055180, 0.282843, -0.277408);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.153073, 0.000000, -0.369552);
		glVertex3f( -0.078036, 0.000000, -0.392314);
		glVertex3f( -0.076537, -0.078036, -0.384776);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.058579, -0.369552, -0.141421);
		glVertex3f( -0.029863, -0.369552, -0.150132);
		glVertex3f( -0.015224, -0.392314, -0.076537);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.085043, -0.332588, -0.205312);
		glVertex3f( -0.043354, -0.332588, -0.217958);
		glVertex3f( -0.029863, -0.369552, -0.150132);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.058579, 0.369552, -0.141421);
		glVertex3f( -0.029863, 0.369552, -0.150132);
		glVertex3f( -0.043354, 0.332588, -0.217958);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.029863, 0.392314, -0.072096);
		glVertex3f( -0.015224, 0.392314, -0.076537);
		glVertex3f( -0.029863, 0.369552, -0.150132);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.150132, 0.078036, -0.362451);
		glVertex3f( -0.076537, 0.078036, -0.384776);
		glVertex3f( -0.078036, 0.000000, -0.392314);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.108239, -0.282843, -0.261313);
		glVertex3f( -0.055180, -0.282843, -0.277408);
		glVertex3f( -0.043354, -0.332588, -0.217958);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.141421, 0.153073, -0.341421);
		glVertex3f( -0.072096, 0.153073, -0.362451);
		glVertex3f( -0.076537, 0.078036, -0.384776);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.127276, 0.222228, -0.307271);
		glVertex3f( -0.064885, 0.222228, -0.326197);
		glVertex3f( -0.072096, 0.153073, -0.362451);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.127276, -0.222228, -0.307271);
		glVertex3f( -0.064885, -0.222228, -0.326197);
		glVertex3f( -0.055180, -0.282843, -0.277408);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.108239, 0.282843, -0.261313);
		glVertex3f( -0.055180, 0.282843, -0.277408);
		glVertex3f( -0.064885, 0.222228, -0.326197);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.141421, -0.153073, -0.341421);
		glVertex3f( -0.072096, -0.153073, -0.362451);
		glVertex3f( -0.064885, -0.222228, -0.326197);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.150132, -0.078036, -0.362451);
		glVertex3f( -0.076537, -0.078036, -0.384776);
		glVertex3f( -0.072096, -0.153073, -0.362451);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055180, 0.282843, -0.277408);
		glVertex3f( 0.000000, 0.282843, -0.282843);
		glVertex3f( 0.000000, 0.222228, -0.332588);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.072096, -0.153073, -0.362451);
		glVertex3f( 0.000000, -0.153073, -0.369552);
		glVertex3f( 0.000000, -0.222228, -0.332588);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.043354, 0.332588, -0.217958);
		glVertex3f( 0.000000, 0.332588, -0.222228);
		glVertex3f( 0.000000, 0.282843, -0.282843);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.076537, -0.078036, -0.384776);
		glVertex3f( 0.000000, -0.078036, -0.392314);
		glVertex3f( 0.000000, -0.153073, -0.369552);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.078036, 0.000000, -0.392314);
		glVertex3f( 0.000000, 0.000000, -0.400000);
		glVertex3f( 0.000000, -0.078036, -0.392314);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.029863, -0.369552, -0.150132);
		glVertex3f( 0.000000, -0.369552, -0.153073);
		glVertex3f( 0.000000, -0.392314, -0.078036);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.029863, 0.369552, -0.150132);
		glVertex3f( 0.000000, 0.369552, -0.153073);
		glVertex3f( 0.000000, 0.332588, -0.222228);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.076537, 0.078036, -0.384776);
		glVertex3f( 0.000000, 0.078036, -0.392314);
		glVertex3f( 0.000000, 0.000000, -0.400000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.043354, -0.332588, -0.217958);
		glVertex3f( 0.000000, -0.332588, -0.222228);
		glVertex3f( 0.000000, -0.369552, -0.153073);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055180, -0.282843, -0.277408);
		glVertex3f( 0.000000, -0.282843, -0.282843);
		glVertex3f( 0.000000, -0.332588, -0.222228);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.015224, 0.392314, -0.076537);
		glVertex3f( 0.000000, 0.392314, -0.078036);
		glVertex3f( 0.000000, 0.369552, -0.153073);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.072096, 0.153073, -0.362451);
		glVertex3f( 0.000000, 0.153073, -0.369552);
		glVertex3f( 0.000000, 0.078036, -0.392314);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.064885, -0.222228, -0.326197);
		glVertex3f( 0.000000, -0.222228, -0.332588);
		glVertex3f( 0.000000, -0.282843, -0.282843);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.064885, 0.222228, -0.326197);
		glVertex3f( 0.000000, 0.222228, -0.332588);
		glVertex3f( 0.000000, 0.153073, -0.369552);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.222228, -0.332588);
		glVertex3f( 0.064885, 0.222228, -0.326197);
		glVertex3f( 0.072096, 0.153073, -0.362451);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.153073, -0.369552);
		glVertex3f( 0.072096, -0.153073, -0.362451);
		glVertex3f( 0.064885, -0.222228, -0.326197);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.282843, -0.282843);
		glVertex3f( 0.055180, 0.282843, -0.277408);
		glVertex3f( 0.064885, 0.222228, -0.326197);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.332588, -0.222228);
		glVertex3f( 0.043355, 0.332588, -0.217958);
		glVertex3f( 0.055180, 0.282843, -0.277408);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.078036, -0.392314);
		glVertex3f( 0.076537, -0.078036, -0.384776);
		glVertex3f( 0.072096, -0.153073, -0.362451);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.369552, -0.153073);
		glVertex3f( 0.029863, -0.369552, -0.150132);
		glVertex3f( 0.015224, -0.392314, -0.076537);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.369552, -0.153073);
		glVertex3f( 0.029863, 0.369552, -0.150132);
		glVertex3f( 0.043355, 0.332588, -0.217958);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.000000, -0.400000);
		glVertex3f( 0.078036, 0.000000, -0.392314);
		glVertex3f( 0.076537, -0.078036, -0.384776);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.078036, -0.392314);
		glVertex3f( 0.076537, 0.078036, -0.384776);
		glVertex3f( 0.078036, 0.000000, -0.392314);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.332588, -0.222228);
		glVertex3f( 0.043355, -0.332588, -0.217958);
		glVertex3f( 0.029863, -0.369552, -0.150132);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.392314, -0.078036);
		glVertex3f( 0.015224, 0.392314, -0.076537);
		glVertex3f( 0.029863, 0.369552, -0.150132);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.153073, -0.369552);
		glVertex3f( 0.072096, 0.153073, -0.362451);
		glVertex3f( 0.076537, 0.078036, -0.384776);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.282843, -0.282843);
		glVertex3f( 0.055180, -0.282843, -0.277408);
		glVertex3f( 0.043355, -0.332588, -0.217958);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.222228, -0.332588);
		glVertex3f( 0.064885, -0.222228, -0.326197);
		glVertex3f( 0.055180, -0.282843, -0.277408);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.076537, 0.078036, -0.384776);
		glVertex3f( 0.150132, 0.078036, -0.362451);
		glVertex3f( 0.153074, 0.000000, -0.369552);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.072096, 0.153073, -0.362451);
		glVertex3f( 0.141422, 0.153073, -0.341421);
		glVertex3f( 0.150132, 0.078036, -0.362451);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.055180, -0.282843, -0.277408);
		glVertex3f( 0.108239, -0.282843, -0.261313);
		glVertex3f( 0.085043, -0.332588, -0.205312);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.064885, 0.222228, -0.326197);
		glVertex3f( 0.127276, 0.222228, -0.307271);
		glVertex3f( 0.141422, 0.153073, -0.341421);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.064885, -0.222228, -0.326197);
		glVertex3f( 0.127276, -0.222228, -0.307271);
		glVertex3f( 0.108239, -0.282843, -0.261313);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.072096, -0.153073, -0.362451);
		glVertex3f( 0.141422, -0.153073, -0.341421);
		glVertex3f( 0.127276, -0.222228, -0.307271);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.055180, 0.282843, -0.277408);
		glVertex3f( 0.108239, 0.282843, -0.261313);
		glVertex3f( 0.127276, 0.222228, -0.307271);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.076537, -0.078036, -0.384776);
		glVertex3f( 0.150132, -0.078036, -0.362451);
		glVertex3f( 0.141422, -0.153073, -0.341421);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.029863, -0.369552, -0.150132);
		glVertex3f( 0.058579, -0.369552, -0.141421);
		glVertex3f( 0.029863, -0.392314, -0.072096);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.043355, 0.332588, -0.217958);
		glVertex3f( 0.085043, 0.332588, -0.205312);
		glVertex3f( 0.108239, 0.282843, -0.261313);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.029863, 0.369552, -0.150132);
		glVertex3f( 0.058579, 0.369552, -0.141421);
		glVertex3f( 0.085043, 0.332588, -0.205312);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.078036, 0.000000, -0.392314);
		glVertex3f( 0.153074, 0.000000, -0.369552);
		glVertex3f( 0.150132, -0.078036, -0.362451);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.043355, -0.332588, -0.217958);
		glVertex3f( 0.085043, -0.332588, -0.205312);
		glVertex3f( 0.058579, -0.369552, -0.141421);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.015224, 0.392314, -0.076537);
		glVertex3f( 0.029863, 0.392314, -0.072096);
		glVertex3f( 0.058579, 0.369552, -0.141421);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.085043, -0.332588, -0.205312);
		glVertex3f( 0.123464, -0.332588, -0.184776);
		glVertex3f( 0.085043, -0.369552, -0.127276);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.058579, 0.369552, -0.141421);
		glVertex3f( 0.085043, 0.369552, -0.127276);
		glVertex3f( 0.123464, 0.332588, -0.184776);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.029863, 0.392314, -0.072096);
		glVertex3f( 0.043355, 0.392314, -0.064885);
		glVertex3f( 0.085043, 0.369552, -0.127276);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.150132, 0.078036, -0.362451);
		glVertex3f( 0.217958, 0.078036, -0.326197);
		glVertex3f( 0.222228, 0.000000, -0.332588);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.108239, -0.282843, -0.261313);
		glVertex3f( 0.157139, -0.282843, -0.235175);
		glVertex3f( 0.123464, -0.332588, -0.184776);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.141422, 0.153073, -0.341421);
		glVertex3f( 0.205312, 0.153073, -0.307271);
		glVertex3f( 0.217958, 0.078036, -0.326197);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.127276, 0.222228, -0.307271);
		glVertex3f( 0.184776, 0.222228, -0.276537);
		glVertex3f( 0.205312, 0.153073, -0.307271);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.127276, -0.222228, -0.307271);
		glVertex3f( 0.184776, -0.222228, -0.276537);
		glVertex3f( 0.157139, -0.282843, -0.235175);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.184776, 0.222228, -0.276537);
		glVertex3f( 0.127276, 0.222228, -0.307271);
		glVertex3f( 0.157139, 0.282843, -0.235175);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.141422, -0.153073, -0.341421);
		glVertex3f( 0.205312, -0.153073, -0.307271);
		glVertex3f( 0.184776, -0.222228, -0.276537);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.150132, -0.078036, -0.362451);
		glVertex3f( 0.217958, -0.078036, -0.326197);
		glVertex3f( 0.205312, -0.153073, -0.307271);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.085043, 0.332588, -0.205312);
		glVertex3f( 0.123464, 0.332588, -0.184776);
		glVertex3f( 0.157139, 0.282843, -0.235175);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.153074, 0.000000, -0.369552);
		glVertex3f( 0.222228, 0.000000, -0.332588);
		glVertex3f( 0.217958, -0.078036, -0.326197);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.058579, -0.369552, -0.141421);
		glVertex3f( 0.085043, -0.369552, -0.127276);
		glVertex3f( 0.043355, -0.392314, -0.064885);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.123464, 0.332588, -0.184776);
		glVertex3f( 0.157139, 0.332588, -0.157139);
		glVertex3f( 0.200000, 0.282843, -0.200000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.217958, -0.078036, -0.326197);
		glVertex3f( 0.277408, -0.078036, -0.277408);
		glVertex3f( 0.261313, -0.153073, -0.261313);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.222228, 0.000000, -0.332588);
		glVertex3f( 0.282843, 0.000000, -0.282843);
		glVertex3f( 0.277408, -0.078036, -0.277408);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.085043, -0.369552, -0.127276);
		glVertex3f( 0.108239, -0.369552, -0.108239);
		glVertex3f( 0.055180, -0.392314, -0.055180);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.085043, 0.369552, -0.127276);
		glVertex3f( 0.108239, 0.369552, -0.108239);
		glVertex3f( 0.157139, 0.332588, -0.157139);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.217958, 0.078036, -0.326197);
		glVertex3f( 0.277408, 0.078036, -0.277408);
		glVertex3f( 0.282843, 0.000000, -0.282843);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.123464, -0.332588, -0.184776);
		glVertex3f( 0.157139, -0.332588, -0.157139);
		glVertex3f( 0.108239, -0.369552, -0.108239);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.157139, -0.282843, -0.235175);
		glVertex3f( 0.200000, -0.282843, -0.200000);
		glVertex3f( 0.157139, -0.332588, -0.157139);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.043355, 0.392314, -0.064885);
		glVertex3f( 0.055180, 0.392314, -0.055180);
		glVertex3f( 0.108239, 0.369552, -0.108239);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.205312, 0.153073, -0.307271);
		glVertex3f( 0.261313, 0.153073, -0.261313);
		glVertex3f( 0.277408, 0.078036, -0.277408);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.184776, -0.222228, -0.276537);
		glVertex3f( 0.235175, -0.222228, -0.235175);
		glVertex3f( 0.200000, -0.282843, -0.200000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.184776, 0.222228, -0.276537);
		glVertex3f( 0.235175, 0.222228, -0.235175);
		glVertex3f( 0.261313, 0.153073, -0.261313);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.157139, 0.282843, -0.235175);
		glVertex3f( 0.200000, 0.282843, -0.200000);
		glVertex3f( 0.235175, 0.222228, -0.235175);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.205312, -0.153073, -0.307271);
		glVertex3f( 0.261313, -0.153073, -0.261313);
		glVertex3f( 0.235175, -0.222228, -0.235175);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.261313, -0.153073, -0.261313);
		glVertex3f( 0.307271, -0.153073, -0.205312);
		glVertex3f( 0.276537, -0.222228, -0.184776);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.200000, 0.282843, -0.200000);
		glVertex3f( 0.235175, 0.282843, -0.157139);
		glVertex3f( 0.276537, 0.222228, -0.184776);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.157139, 0.332588, -0.157139);
		glVertex3f( 0.184776, 0.332588, -0.123463);
		glVertex3f( 0.235175, 0.282843, -0.157139);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.277408, -0.078036, -0.277408);
		glVertex3f( 0.326197, -0.078036, -0.217958);
		glVertex3f( 0.307271, -0.153073, -0.205312);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.108239, -0.369552, -0.108239);
		glVertex3f( 0.127276, -0.369552, -0.085043);
		glVertex3f( 0.064885, -0.392314, -0.043355);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.108239, 0.369552, -0.108239);
		glVertex3f( 0.127276, 0.369552, -0.085043);
		glVertex3f( 0.184776, 0.332588, -0.123463);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.282843, 0.000000, -0.282843);
		glVertex3f( 0.332588, 0.000000, -0.222228);
		glVertex3f( 0.326197, -0.078036, -0.217958);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.277408, 0.078036, -0.277408);
		glVertex3f( 0.326197, 0.078036, -0.217958);
		glVertex3f( 0.332588, 0.000000, -0.222228);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.157139, -0.332588, -0.157139);
		glVertex3f( 0.184776, -0.332588, -0.123463);
		glVertex3f( 0.127276, -0.369552, -0.085043);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.055180, 0.392314, -0.055180);
		glVertex3f( 0.064885, 0.392314, -0.043355);
		glVertex3f( 0.127276, 0.369552, -0.085043);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.261313, 0.153073, -0.261313);
		glVertex3f( 0.307271, 0.153073, -0.205312);
		glVertex3f( 0.326197, 0.078036, -0.217958);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.200000, -0.282843, -0.200000);
		glVertex3f( 0.235175, -0.282843, -0.157139);
		glVertex3f( 0.184776, -0.332588, -0.123463);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.235175, -0.222228, -0.235175);
		glVertex3f( 0.276537, -0.222228, -0.184776);
		glVertex3f( 0.235175, -0.282843, -0.157139);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.307271, 0.153073, -0.205312);
		glVertex3f( 0.261313, 0.153073, -0.261313);
		glVertex3f( 0.276537, 0.222228, -0.184776);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.341421, 0.153073, -0.141421);
		glVertex3f( 0.307271, 0.153073, -0.205312);
		glVertex3f( 0.307271, 0.222228, -0.127276);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.276537, -0.222228, -0.184776);
		glVertex3f( 0.307271, -0.222228, -0.127276);
		glVertex3f( 0.261313, -0.282843, -0.108239);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.307271, -0.153073, -0.205312);
		glVertex3f( 0.341422, -0.153073, -0.141421);
		glVertex3f( 0.307271, -0.222228, -0.127276);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.235175, 0.282843, -0.157139);
		glVertex3f( 0.261313, 0.282843, -0.108239);
		glVertex3f( 0.307271, 0.222228, -0.127276);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.326197, -0.078036, -0.217958);
		glVertex3f( 0.362451, -0.078036, -0.150132);
		glVertex3f( 0.341422, -0.153073, -0.141421);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.127276, -0.369552, -0.085043);
		glVertex3f( 0.141421, -0.369552, -0.058579);
		glVertex3f( 0.072096, -0.392314, -0.029863);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.184776, 0.332588, -0.123463);
		glVertex3f( 0.205312, 0.332588, -0.085043);
		glVertex3f( 0.261313, 0.282843, -0.108239);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.127276, 0.369552, -0.085043);
		glVertex3f( 0.141422, 0.369552, -0.058579);
		glVertex3f( 0.205312, 0.332588, -0.085043);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.332588, 0.000000, -0.222228);
		glVertex3f( 0.369552, 0.000000, -0.153073);
		glVertex3f( 0.362451, -0.078036, -0.150132);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.184776, -0.332588, -0.123463);
		glVertex3f( 0.205312, -0.332588, -0.085043);
		glVertex3f( 0.141421, -0.369552, -0.058579);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.064885, 0.392314, -0.043355);
		glVertex3f( 0.072096, 0.392314, -0.029863);
		glVertex3f( 0.141422, 0.369552, -0.058579);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.326197, 0.078036, -0.217958);
		glVertex3f( 0.362451, 0.078036, -0.150132);
		glVertex3f( 0.369552, 0.000000, -0.153073);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.307271, 0.153073, -0.205312);
		glVertex3f( 0.341421, 0.153073, -0.141421);
		glVertex3f( 0.362451, 0.078036, -0.150132);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.235175, -0.282843, -0.157139);
		glVertex3f( 0.261313, -0.282843, -0.108239);
		glVertex3f( 0.205312, -0.332588, -0.085043);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.261313, -0.282843, -0.108239);
		glVertex3f( 0.277408, -0.282843, -0.055180);
		glVertex3f( 0.217958, -0.332588, -0.043355);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.341421, 0.153073, -0.141421);
		glVertex3f( 0.362451, 0.153073, -0.072096);
		glVertex3f( 0.384776, 0.078036, -0.076537);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.307271, 0.222228, -0.127276);
		glVertex3f( 0.326197, 0.222228, -0.064885);
		glVertex3f( 0.362451, 0.153073, -0.072096);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.307271, -0.222228, -0.127276);
		glVertex3f( 0.326197, -0.222228, -0.064885);
		glVertex3f( 0.277408, -0.282843, -0.055180);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.261313, 0.282843, -0.108239);
		glVertex3f( 0.277408, 0.282843, -0.055180);
		glVertex3f( 0.326197, 0.222228, -0.064885);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.341422, -0.153073, -0.141421);
		glVertex3f( 0.362451, -0.153073, -0.072096);
		glVertex3f( 0.326197, -0.222228, -0.064885);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.362451, -0.078036, -0.150132);
		glVertex3f( 0.384776, -0.078036, -0.076537);
		glVertex3f( 0.362451, -0.153073, -0.072096);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.205312, 0.332588, -0.085043);
		glVertex3f( 0.217958, 0.332588, -0.043355);
		glVertex3f( 0.277408, 0.282843, -0.055180);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.369552, 0.000000, -0.153073);
		glVertex3f( 0.392314, 0.000000, -0.078036);
		glVertex3f( 0.384776, -0.078036, -0.076537);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.141421, -0.369552, -0.058579);
		glVertex3f( 0.150132, -0.369552, -0.029863);
		glVertex3f( 0.076537, -0.392314, -0.015224);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.205312, -0.332588, -0.085043);
		glVertex3f( 0.217958, -0.332588, -0.043355);
		glVertex3f( 0.150132, -0.369552, -0.029863);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.141422, 0.369552, -0.058579);
		glVertex3f( 0.150132, 0.369552, -0.029863);
		glVertex3f( 0.217958, 0.332588, -0.043355);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.072096, 0.392314, -0.029863);
		glVertex3f( 0.076537, 0.392314, -0.015224);
		glVertex3f( 0.150132, 0.369552, -0.029863);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.362451, 0.078036, -0.150132);
		glVertex3f( 0.384776, 0.078036, -0.076537);
		glVertex3f( 0.392314, 0.000000, -0.078036);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.150132, 0.369552, -0.029863);
		glVertex3f( 0.153074, 0.369552, 0.000000);
		glVertex3f( 0.222228, 0.332588, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.384776, 0.078036, -0.076537);
		glVertex3f( 0.392314, 0.078036, 0.000000);
		glVertex3f( 0.400000, 0.000000, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.217958, -0.332588, -0.043355);
		glVertex3f( 0.222228, -0.332588, 0.000000);
		glVertex3f( 0.153074, -0.369552, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.277408, -0.282843, -0.055180);
		glVertex3f( 0.282843, -0.282843, 0.000000);
		glVertex3f( 0.222228, -0.332588, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.076537, 0.392314, -0.015224);
		glVertex3f( 0.078036, 0.392314, 0.000000);
		glVertex3f( 0.153074, 0.369552, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.362451, 0.153073, -0.072096);
		glVertex3f( 0.369552, 0.153073, 0.000000);
		glVertex3f( 0.392314, 0.078036, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.326197, -0.222228, -0.064885);
		glVertex3f( 0.332588, -0.222228, 0.000000);
		glVertex3f( 0.282843, -0.282843, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.326197, 0.222228, -0.064885);
		glVertex3f( 0.332588, 0.222228, 0.000000);
		glVertex3f( 0.369552, 0.153073, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.277408, 0.282843, -0.055180);
		glVertex3f( 0.282843, 0.282843, 0.000000);
		glVertex3f( 0.332588, 0.222228, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.362451, -0.153073, -0.072096);
		glVertex3f( 0.369552, -0.153073, 0.000000);
		glVertex3f( 0.332588, -0.222228, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.217958, 0.332588, -0.043355);
		glVertex3f( 0.222228, 0.332588, 0.000000);
		glVertex3f( 0.282843, 0.282843, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.384776, -0.078036, -0.076537);
		glVertex3f( 0.392314, -0.078036, 0.000000);
		glVertex3f( 0.369552, -0.153073, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.392314, 0.000000, -0.078036);
		glVertex3f( 0.400000, 0.000000, 0.000000);
		glVertex3f( 0.392314, -0.078036, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.150132, -0.369552, -0.029863);
		glVertex3f( 0.153074, -0.369552, 0.000000);
		glVertex3f( 0.078036, -0.392314, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.222228, 0.332588, 0.000000);
		glVertex3f( 0.217958, 0.332588, 0.043355);
		glVertex3f( 0.277408, 0.282843, 0.055180);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.392314, -0.078036, 0.000000);
		glVertex3f( 0.384776, -0.078036, 0.076537);
		glVertex3f( 0.362451, -0.153073, 0.072096);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.153074, -0.369552, 0.000000);
		glVertex3f( 0.150132, -0.369552, 0.029863);
		glVertex3f( 0.076537, -0.392314, 0.015224);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.153074, 0.369552, 0.000000);
		glVertex3f( 0.150132, 0.369552, 0.029863);
		glVertex3f( 0.217958, 0.332588, 0.043355);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.400000, 0.000000, 0.000000);
		glVertex3f( 0.392314, 0.000000, 0.078036);
		glVertex3f( 0.384776, -0.078036, 0.076537);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.392314, 0.078036, 0.000000);
		glVertex3f( 0.384776, 0.078036, 0.076537);
		glVertex3f( 0.392314, 0.000000, 0.078036);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.222228, -0.332588, 0.000000);
		glVertex3f( 0.217958, -0.332588, 0.043355);
		glVertex3f( 0.150132, -0.369552, 0.029863);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.078036, 0.392314, 0.000000);
		glVertex3f( 0.076537, 0.392314, 0.015224);
		glVertex3f( 0.150132, 0.369552, 0.029863);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.369552, 0.153073, 0.000000);
		glVertex3f( 0.362451, 0.153073, 0.072096);
		glVertex3f( 0.384776, 0.078036, 0.076537);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.282843, -0.282843, 0.000000);
		glVertex3f( 0.277408, -0.282843, 0.055180);
		glVertex3f( 0.217958, -0.332588, 0.043355);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.332588, -0.222228, 0.000000);
		glVertex3f( 0.326197, -0.222228, 0.064885);
		glVertex3f( 0.277408, -0.282843, 0.055180);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.332588, 0.222228, 0.000000);
		glVertex3f( 0.326197, 0.222228, 0.064885);
		glVertex3f( 0.362451, 0.153073, 0.072096);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.369552, -0.153073, 0.000000);
		glVertex3f( 0.362451, -0.153073, 0.072096);
		glVertex3f( 0.326197, -0.222228, 0.064885);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.282843, 0.282843, 0.000000);
		glVertex3f( 0.277408, 0.282843, 0.055180);
		glVertex3f( 0.326197, 0.222228, 0.064885);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.277408, 0.282843, 0.055180);
		glVertex3f( 0.261313, 0.282843, 0.108239);
		glVertex3f( 0.307271, 0.222228, 0.127276);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.384776, -0.078036, 0.076537);
		glVertex3f( 0.362451, -0.078036, 0.150132);
		glVertex3f( 0.341421, -0.153073, 0.141421);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.150132, -0.369552, 0.029863);
		glVertex3f( 0.141421, -0.369552, 0.058579);
		glVertex3f( 0.072096, -0.392314, 0.029863);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.217958, 0.332588, 0.043355);
		glVertex3f( 0.205312, 0.332588, 0.085043);
		glVertex3f( 0.261313, 0.282843, 0.108239);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.150132, 0.369552, 0.029863);
		glVertex3f( 0.141422, 0.369552, 0.058579);
		glVertex3f( 0.205312, 0.332588, 0.085043);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.392314, 0.000000, 0.078036);
		glVertex3f( 0.369552, 0.000000, 0.153073);
		glVertex3f( 0.362451, -0.078036, 0.150132);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.217958, -0.332588, 0.043355);
		glVertex3f( 0.205312, -0.332588, 0.085043);
		glVertex3f( 0.141421, -0.369552, 0.058579);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.076537, 0.392314, 0.015224);
		glVertex3f( 0.072096, 0.392314, 0.029863);
		glVertex3f( 0.141422, 0.369552, 0.058579);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.384776, 0.078036, 0.076537);
		glVertex3f( 0.362451, 0.078036, 0.150132);
		glVertex3f( 0.369552, 0.000000, 0.153073);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.362451, 0.153073, 0.072096);
		glVertex3f( 0.341421, 0.153073, 0.141421);
		glVertex3f( 0.362451, 0.078036, 0.150132);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.277408, -0.282843, 0.055180);
		glVertex3f( 0.261313, -0.282843, 0.108239);
		glVertex3f( 0.205312, -0.332588, 0.085043);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.326197, 0.222228, 0.064885);
		glVertex3f( 0.307271, 0.222228, 0.127276);
		glVertex3f( 0.341421, 0.153073, 0.141421);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.326197, -0.222228, 0.064885);
		glVertex3f( 0.307271, -0.222228, 0.127276);
		glVertex3f( 0.261313, -0.282843, 0.108239);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.362451, -0.153073, 0.072096);
		glVertex3f( 0.341421, -0.153073, 0.141421);
		glVertex3f( 0.307271, -0.222228, 0.127276);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.341421, 0.153073, 0.141421);
		glVertex3f( 0.307271, 0.153073, 0.205312);
		glVertex3f( 0.326197, 0.078036, 0.217958);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.307271, 0.222228, 0.127276);
		glVertex3f( 0.276537, 0.222228, 0.184776);
		glVertex3f( 0.307271, 0.153073, 0.205312);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.307271, -0.222228, 0.127276);
		glVertex3f( 0.276537, -0.222228, 0.184776);
		glVertex3f( 0.235175, -0.282843, 0.157139);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.261313, 0.282843, 0.108239);
		glVertex3f( 0.235175, 0.282843, 0.157139);
		glVertex3f( 0.276537, 0.222228, 0.184776);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.341421, -0.153073, 0.141421);
		glVertex3f( 0.307271, -0.153073, 0.205312);
		glVertex3f( 0.276537, -0.222228, 0.184776);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.362451, -0.078036, 0.150132);
		glVertex3f( 0.326197, -0.078036, 0.217958);
		glVertex3f( 0.307271, -0.153073, 0.205312);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.205312, 0.332588, 0.085043);
		glVertex3f( 0.184776, 0.332588, 0.123463);
		glVertex3f( 0.235175, 0.282843, 0.157139);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.369552, 0.000000, 0.153073);
		glVertex3f( 0.332588, 0.000000, 0.222228);
		glVertex3f( 0.326197, -0.078036, 0.217958);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.141421, -0.369552, 0.058579);
		glVertex3f( 0.127276, -0.369552, 0.085043);
		glVertex3f( 0.064885, -0.392314, 0.043355);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.205312, -0.332588, 0.085043);
		glVertex3f( 0.184776, -0.332588, 0.123463);
		glVertex3f( 0.127276, -0.369552, 0.085043);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.141422, 0.369552, 0.058579);
		glVertex3f( 0.127276, 0.369552, 0.085043);
		glVertex3f( 0.184776, 0.332588, 0.123463);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.072096, 0.392314, 0.029863);
		glVertex3f( 0.064885, 0.392314, 0.043355);
		glVertex3f( 0.127276, 0.369552, 0.085043);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.362451, 0.078036, 0.150132);
		glVertex3f( 0.326197, 0.078036, 0.217958);
		glVertex3f( 0.332588, 0.000000, 0.222228);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.261313, -0.282843, 0.108239);
		glVertex3f( 0.235175, -0.282843, 0.157139);
		glVertex3f( 0.184776, -0.332588, 0.123463);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.235175, -0.282843, 0.157139);
		glVertex3f( 0.200000, -0.282843, 0.200000);
		glVertex3f( 0.157139, -0.332588, 0.157139);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.064885, 0.392314, 0.043355);
		glVertex3f( 0.055180, 0.392314, 0.055180);
		glVertex3f( 0.108239, 0.369552, 0.108239);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.307271, 0.153073, 0.205312);
		glVertex3f( 0.261313, 0.153073, 0.261313);
		glVertex3f( 0.277408, 0.078036, 0.277408);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.276537, -0.222228, 0.184776);
		glVertex3f( 0.235175, -0.222228, 0.235175);
		glVertex3f( 0.200000, -0.282843, 0.200000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.276537, 0.222228, 0.184776);
		glVertex3f( 0.235175, 0.222228, 0.235175);
		glVertex3f( 0.261313, 0.153073, 0.261313);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.235175, 0.282843, 0.157139);
		glVertex3f( 0.200000, 0.282843, 0.200000);
		glVertex3f( 0.235175, 0.222228, 0.235175);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.307271, -0.153073, 0.205312);
		glVertex3f( 0.261313, -0.153073, 0.261313);
		glVertex3f( 0.235175, -0.222228, 0.235175);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.184776, 0.332588, 0.123463);
		glVertex3f( 0.157139, 0.332588, 0.157139);
		glVertex3f( 0.200000, 0.282843, 0.200000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.326197, -0.078036, 0.217958);
		glVertex3f( 0.277408, -0.078036, 0.277408);
		glVertex3f( 0.261313, -0.153073, 0.261313);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.332588, 0.000000, 0.222228);
		glVertex3f( 0.282843, 0.000000, 0.282843);
		glVertex3f( 0.277408, -0.078036, 0.277408);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.127276, -0.369552, 0.085043);
		glVertex3f( 0.108239, -0.369552, 0.108239);
		glVertex3f( 0.055180, -0.392314, 0.055180);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.127276, 0.369552, 0.085043);
		glVertex3f( 0.108239, 0.369552, 0.108239);
		glVertex3f( 0.157139, 0.332588, 0.157139);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.326197, 0.078036, 0.217958);
		glVertex3f( 0.277408, 0.078036, 0.277408);
		glVertex3f( 0.282843, 0.000000, 0.282843);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.184776, -0.332588, 0.123463);
		glVertex3f( 0.157139, -0.332588, 0.157139);
		glVertex3f( 0.108239, -0.369552, 0.108239);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.108239, 0.369552, 0.108239);
		glVertex3f( 0.085043, 0.369552, 0.127276);
		glVertex3f( 0.123463, 0.332588, 0.184776);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.282843, 0.000000, 0.282843);
		glVertex3f( 0.222228, 0.000000, 0.332588);
		glVertex3f( 0.217958, -0.078036, 0.326197);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.277408, 0.078036, 0.277408);
		glVertex3f( 0.217958, 0.078036, 0.326197);
		glVertex3f( 0.222228, 0.000000, 0.332588);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.157139, -0.332588, 0.157139);
		glVertex3f( 0.123463, -0.332588, 0.184776);
		glVertex3f( 0.085043, -0.369552, 0.127276);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.055180, 0.392314, 0.055180);
		glVertex3f( 0.043355, 0.392314, 0.064885);
		glVertex3f( 0.085043, 0.369552, 0.127276);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.261313, 0.153073, 0.261313);
		glVertex3f( 0.205312, 0.153073, 0.307271);
		glVertex3f( 0.217958, 0.078036, 0.326197);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.200000, -0.282843, 0.200000);
		glVertex3f( 0.157139, -0.282843, 0.235175);
		glVertex3f( 0.123463, -0.332588, 0.184776);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.235175, -0.222228, 0.235175);
		glVertex3f( 0.184776, -0.222228, 0.276537);
		glVertex3f( 0.157139, -0.282843, 0.235175);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.235175, 0.222228, 0.235175);
		glVertex3f( 0.184776, 0.222228, 0.276537);
		glVertex3f( 0.205312, 0.153073, 0.307271);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.261313, -0.153073, 0.261313);
		glVertex3f( 0.205312, -0.153073, 0.307271);
		glVertex3f( 0.184776, -0.222228, 0.276537);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.200000, 0.282843, 0.200000);
		glVertex3f( 0.157139, 0.282843, 0.235175);
		glVertex3f( 0.184776, 0.222228, 0.276537);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.157139, 0.332588, 0.157139);
		glVertex3f( 0.123463, 0.332588, 0.184776);
		glVertex3f( 0.157139, 0.282843, 0.235175);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.277408, -0.078036, 0.277408);
		glVertex3f( 0.217958, -0.078036, 0.326197);
		glVertex3f( 0.205312, -0.153073, 0.307271);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.108239, -0.369552, 0.108239);
		glVertex3f( 0.085043, -0.369552, 0.127276);
		glVertex3f( 0.043355, -0.392314, 0.064885);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.217958, -0.078036, 0.326197);
		glVertex3f( 0.150132, -0.078036, 0.362451);
		glVertex3f( 0.141421, -0.153073, 0.341421);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.085043, -0.369552, 0.127276);
		glVertex3f( 0.058579, -0.369552, 0.141421);
		glVertex3f( 0.029863, -0.392314, 0.072096);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.123463, 0.332588, 0.184776);
		glVertex3f( 0.085043, 0.332588, 0.205312);
		glVertex3f( 0.108239, 0.282843, 0.261313);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.085043, 0.369552, 0.127276);
		glVertex3f( 0.058579, 0.369552, 0.141421);
		glVertex3f( 0.085043, 0.332588, 0.205312);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.222228, 0.000000, 0.332588);
		glVertex3f( 0.153073, 0.000000, 0.369552);
		glVertex3f( 0.150132, -0.078036, 0.362451);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.123463, -0.332588, 0.184776);
		glVertex3f( 0.085043, -0.332588, 0.205312);
		glVertex3f( 0.058579, -0.369552, 0.141421);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.043355, 0.392314, 0.064885);
		glVertex3f( 0.029863, 0.392314, 0.072096);
		glVertex3f( 0.058579, 0.369552, 0.141421);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.217958, 0.078036, 0.326197);
		glVertex3f( 0.150132, 0.078036, 0.362451);
		glVertex3f( 0.153073, 0.000000, 0.369552);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.205312, 0.153073, 0.307271);
		glVertex3f( 0.141421, 0.153073, 0.341421);
		glVertex3f( 0.150132, 0.078036, 0.362451);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.157139, -0.282843, 0.235175);
		glVertex3f( 0.108239, -0.282843, 0.261313);
		glVertex3f( 0.085043, -0.332588, 0.205312);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.184776, 0.222228, 0.276537);
		glVertex3f( 0.127276, 0.222228, 0.307271);
		glVertex3f( 0.141421, 0.153073, 0.341421);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.184776, -0.222228, 0.276537);
		glVertex3f( 0.127276, -0.222228, 0.307271);
		glVertex3f( 0.108239, -0.282843, 0.261313);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.205312, -0.153073, 0.307271);
		glVertex3f( 0.141421, -0.153073, 0.341421);
		glVertex3f( 0.127276, -0.222228, 0.307271);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.157139, 0.282843, 0.235175);
		glVertex3f( 0.108239, 0.282843, 0.261313);
		glVertex3f( 0.127276, 0.222228, 0.307271);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.108239, 0.282843, 0.261313);
		glVertex3f( 0.055180, 0.282843, 0.277408);
		glVertex3f( 0.064885, 0.222228, 0.326197);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.141421, -0.153073, 0.341421);
		glVertex3f( 0.072096, -0.153073, 0.362451);
		glVertex3f( 0.064885, -0.222228, 0.326197);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.150132, -0.078036, 0.362451);
		glVertex3f( 0.076537, -0.078036, 0.384776);
		glVertex3f( 0.072096, -0.153073, 0.362451);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.085043, 0.332588, 0.205312);
		glVertex3f( 0.043355, 0.332588, 0.217958);
		glVertex3f( 0.055180, 0.282843, 0.277408);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.153073, 0.000000, 0.369552);
		glVertex3f( 0.078036, 0.000000, 0.392314);
		glVertex3f( 0.076537, -0.078036, 0.384776);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.058579, -0.369552, 0.141421);
		glVertex3f( 0.029863, -0.369552, 0.150132);
		glVertex3f( 0.015224, -0.392314, 0.076537);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.085043, -0.332588, 0.205312);
		glVertex3f( 0.043355, -0.332588, 0.217958);
		glVertex3f( 0.029863, -0.369552, 0.150132);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.058579, 0.369552, 0.141421);
		glVertex3f( 0.029863, 0.369552, 0.150132);
		glVertex3f( 0.043355, 0.332588, 0.217958);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.029863, 0.392314, 0.072096);
		glVertex3f( 0.015224, 0.392314, 0.076537);
		glVertex3f( 0.029863, 0.369552, 0.150132);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.150132, 0.078036, 0.362451);
		glVertex3f( 0.076537, 0.078036, 0.384776);
		glVertex3f( 0.078036, 0.000000, 0.392314);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.108239, -0.282843, 0.261313);
		glVertex3f( 0.055180, -0.282843, 0.277408);
		glVertex3f( 0.043355, -0.332588, 0.217958);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.141421, 0.153073, 0.341421);
		glVertex3f( 0.072096, 0.153073, 0.362451);
		glVertex3f( 0.076537, 0.078036, 0.384776);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.127276, 0.222228, 0.307271);
		glVertex3f( 0.064885, 0.222228, 0.326197);
		glVertex3f( 0.072096, 0.153073, 0.362451);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.127276, -0.222228, 0.307271);
		glVertex3f( 0.064885, -0.222228, 0.326197);
		glVertex3f( 0.055180, -0.282843, 0.277408);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.064885, -0.222228, 0.326197);
		glVertex3f( 0.000000, -0.222228, 0.332588);
		glVertex3f( 0.000000, -0.282843, 0.282843);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.064885, 0.222228, 0.326197);
		glVertex3f( 0.000000, 0.222228, 0.332588);
		glVertex3f( 0.000000, 0.153073, 0.369552);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.055180, 0.282843, 0.277408);
		glVertex3f( 0.000000, 0.282843, 0.282843);
		glVertex3f( 0.000000, 0.222228, 0.332588);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.072096, -0.153073, 0.362451);
		glVertex3f( 0.000000, -0.153073, 0.369552);
		glVertex3f( 0.000000, -0.222228, 0.332588);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.043355, 0.332588, 0.217958);
		glVertex3f( 0.000000, 0.332588, 0.222228);
		glVertex3f( 0.000000, 0.282843, 0.282843);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.076537, -0.078036, 0.384776);
		glVertex3f( 0.000000, -0.078036, 0.392314);
		glVertex3f( 0.000000, -0.153073, 0.369552);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.078036, 0.000000, 0.392314);
		glVertex3f( 0.000000, 0.000000, 0.400000);
		glVertex3f( 0.000000, -0.078036, 0.392314);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.029863, -0.369552, 0.150132);
		glVertex3f( 0.000000, -0.369552, 0.153073);
		glVertex3f( 0.000000, -0.392314, 0.078036);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.029863, 0.369552, 0.150132);
		glVertex3f( 0.000000, 0.369552, 0.153073);
		glVertex3f( 0.000000, 0.332588, 0.222228);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.076537, 0.078036, 0.384776);
		glVertex3f( 0.000000, 0.078036, 0.392314);
		glVertex3f( 0.000000, 0.000000, 0.400000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.043355, -0.332588, 0.217958);
		glVertex3f( 0.000000, -0.332588, 0.222228);
		glVertex3f( 0.000000, -0.369552, 0.153073);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.055180, -0.282843, 0.277408);
		glVertex3f( 0.000000, -0.282843, 0.282843);
		glVertex3f( 0.000000, -0.332588, 0.222228);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.015224, 0.392314, 0.076537);
		glVertex3f( 0.000000, 0.392314, 0.078036);
		glVertex3f( 0.000000, 0.369552, 0.153073);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.072096, 0.153073, 0.362451);
		glVertex3f( 0.000000, 0.153073, 0.369552);
		glVertex3f( 0.000000, 0.078036, 0.392314);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.392314, 0.078036);
		glVertex3f( -0.015224, 0.392314, 0.076537);
		glVertex3f( -0.029863, 0.369552, 0.150132);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.153073, 0.369552);
		glVertex3f( -0.072096, 0.153073, 0.362451);
		glVertex3f( -0.076537, 0.078036, 0.384776);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.282843, 0.282843);
		glVertex3f( -0.055180, -0.282843, 0.277408);
		glVertex3f( -0.043354, -0.332588, 0.217958);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.222228, 0.332588);
		glVertex3f( -0.064885, -0.222228, 0.326197);
		glVertex3f( -0.055180, -0.282843, 0.277408);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.222228, 0.332588);
		glVertex3f( -0.064885, 0.222228, 0.326197);
		glVertex3f( -0.072096, 0.153073, 0.362451);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.153073, 0.369552);
		glVertex3f( -0.072096, -0.153073, 0.362451);
		glVertex3f( -0.064885, -0.222228, 0.326197);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.282843, 0.282843);
		glVertex3f( -0.055180, 0.282843, 0.277408);
		glVertex3f( -0.064885, 0.222228, 0.326197);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.332588, 0.222228);
		glVertex3f( -0.043354, 0.332588, 0.217958);
		glVertex3f( -0.055180, 0.282843, 0.277408);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.078036, 0.392314);
		glVertex3f( -0.076537, -0.078036, 0.384776);
		glVertex3f( -0.072096, -0.153073, 0.362451);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.369552, 0.153073);
		glVertex3f( -0.029863, -0.369552, 0.150132);
		glVertex3f( -0.015224, -0.392314, 0.076537);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.369552, 0.153073);
		glVertex3f( -0.029863, 0.369552, 0.150132);
		glVertex3f( -0.043354, 0.332588, 0.217958);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.000000, 0.400000);
		glVertex3f( -0.078036, 0.000000, 0.392314);
		glVertex3f( -0.076537, -0.078036, 0.384776);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.078036, 0.392314);
		glVertex3f( -0.076537, 0.078036, 0.384776);
		glVertex3f( -0.078036, 0.000000, 0.392314);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.332588, 0.222228);
		glVertex3f( -0.043354, -0.332588, 0.217958);
		glVertex3f( -0.029863, -0.369552, 0.150132);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.029863, 0.369552, 0.150132);
		glVertex3f( -0.058579, 0.369552, 0.141421);
		glVertex3f( -0.085043, 0.332588, 0.205312);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.078036, 0.000000, 0.392314);
		glVertex3f( -0.153073, 0.000000, 0.369552);
		glVertex3f( -0.150132, -0.078036, 0.362451);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.043354, -0.332588, 0.217958);
		glVertex3f( -0.085043, -0.332588, 0.205312);
		glVertex3f( -0.058579, -0.369552, 0.141421);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.015224, 0.392314, 0.076537);
		glVertex3f( -0.029863, 0.392314, 0.072096);
		glVertex3f( -0.058579, 0.369552, 0.141421);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.076537, 0.078036, 0.384776);
		glVertex3f( -0.150132, 0.078036, 0.362451);
		glVertex3f( -0.153073, 0.000000, 0.369552);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.072096, 0.153073, 0.362451);
		glVertex3f( -0.141421, 0.153073, 0.341421);
		glVertex3f( -0.150132, 0.078036, 0.362451);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055180, -0.282843, 0.277408);
		glVertex3f( -0.108239, -0.282843, 0.261312);
		glVertex3f( -0.085043, -0.332588, 0.205312);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.064885, 0.222228, 0.326197);
		glVertex3f( -0.127276, 0.222228, 0.307271);
		glVertex3f( -0.141421, 0.153073, 0.341421);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.064885, -0.222228, 0.326197);
		glVertex3f( -0.127276, -0.222228, 0.307271);
		glVertex3f( -0.108239, -0.282843, 0.261312);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.072096, -0.153073, 0.362451);
		glVertex3f( -0.141421, -0.153073, 0.341421);
		glVertex3f( -0.127276, -0.222228, 0.307271);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055180, 0.282843, 0.277408);
		glVertex3f( -0.108239, 0.282843, 0.261312);
		glVertex3f( -0.127276, 0.222228, 0.307271);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.076537, -0.078036, 0.384776);
		glVertex3f( -0.150132, -0.078036, 0.362451);
		glVertex3f( -0.141421, -0.153073, 0.341421);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.029863, -0.369552, 0.150132);
		glVertex3f( -0.058579, -0.369552, 0.141421);
		glVertex3f( -0.029863, -0.392314, 0.072096);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.043354, 0.332588, 0.217958);
		glVertex3f( -0.085043, 0.332588, 0.205312);
		glVertex3f( -0.108239, 0.282843, 0.261312);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.085043, 0.332588, 0.205312);
		glVertex3f( -0.123463, 0.332588, 0.184776);
		glVertex3f( -0.157139, 0.282843, 0.235175);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.153073, 0.000000, 0.369552);
		glVertex3f( -0.222228, 0.000000, 0.332588);
		glVertex3f( -0.217958, -0.078036, 0.326197);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.058579, -0.369552, 0.141421);
		glVertex3f( -0.085043, -0.369552, 0.127276);
		glVertex3f( -0.043354, -0.392314, 0.064885);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.085043, -0.332588, 0.205312);
		glVertex3f( -0.123463, -0.332588, 0.184776);
		glVertex3f( -0.085043, -0.369552, 0.127276);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.058579, 0.369552, 0.141421);
		glVertex3f( -0.085043, 0.369552, 0.127276);
		glVertex3f( -0.123463, 0.332588, 0.184776);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.029863, 0.392314, 0.072096);
		glVertex3f( -0.043354, 0.392314, 0.064885);
		glVertex3f( -0.085043, 0.369552, 0.127276);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.150132, 0.078036, 0.362451);
		glVertex3f( -0.217958, 0.078036, 0.326197);
		glVertex3f( -0.222228, 0.000000, 0.332588);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.108239, -0.282843, 0.261312);
		glVertex3f( -0.157139, -0.282843, 0.235175);
		glVertex3f( -0.123463, -0.332588, 0.184776);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.141421, 0.153073, 0.341421);
		glVertex3f( -0.205312, 0.153073, 0.307271);
		glVertex3f( -0.217958, 0.078036, 0.326197);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.127276, 0.222228, 0.307271);
		glVertex3f( -0.184776, 0.222228, 0.276537);
		glVertex3f( -0.205312, 0.153073, 0.307271);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.127276, -0.222228, 0.307271);
		glVertex3f( -0.184776, -0.222228, 0.276537);
		glVertex3f( -0.157139, -0.282843, 0.235175);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.108239, 0.282843, 0.261312);
		glVertex3f( -0.157139, 0.282843, 0.235175);
		glVertex3f( -0.184776, 0.222228, 0.276537);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.141421, -0.153073, 0.341421);
		glVertex3f( -0.205312, -0.153073, 0.307271);
		glVertex3f( -0.184776, -0.222228, 0.276537);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.150132, -0.078036, 0.362451);
		glVertex3f( -0.217958, -0.078036, 0.326197);
		glVertex3f( -0.205312, -0.153073, 0.307271);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.184776, 0.222228, 0.276537);
		glVertex3f( -0.235175, 0.222228, 0.235175);
		glVertex3f( -0.261312, 0.153073, 0.261312);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.157139, 0.282843, 0.235175);
		glVertex3f( -0.200000, 0.282843, 0.200000);
		glVertex3f( -0.235175, 0.222228, 0.235175);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.205312, -0.153073, 0.307271);
		glVertex3f( -0.261312, -0.153073, 0.261312);
		glVertex3f( -0.235175, -0.222228, 0.235175);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.123463, 0.332588, 0.184776);
		glVertex3f( -0.157139, 0.332588, 0.157139);
		glVertex3f( -0.200000, 0.282843, 0.200000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.217958, -0.078036, 0.326197);
		glVertex3f( -0.277408, -0.078036, 0.277408);
		glVertex3f( -0.261312, -0.153073, 0.261312);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.222228, 0.000000, 0.332588);
		glVertex3f( -0.282842, 0.000000, 0.282842);
		glVertex3f( -0.277408, -0.078036, 0.277408);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.085043, -0.369552, 0.127276);
		glVertex3f( -0.108239, -0.369552, 0.108239);
		glVertex3f( -0.055180, -0.392314, 0.055180);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.085043, 0.369552, 0.127276);
		glVertex3f( -0.108239, 0.369552, 0.108239);
		glVertex3f( -0.157139, 0.332588, 0.157139);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.217958, 0.078036, 0.326197);
		glVertex3f( -0.277408, 0.078036, 0.277408);
		glVertex3f( -0.282842, 0.000000, 0.282842);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.123463, -0.332588, 0.184776);
		glVertex3f( -0.157139, -0.332588, 0.157139);
		glVertex3f( -0.108239, -0.369552, 0.108239);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.157139, -0.282843, 0.235175);
		glVertex3f( -0.200000, -0.282843, 0.200000);
		glVertex3f( -0.157139, -0.332588, 0.157139);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.043354, 0.392314, 0.064885);
		glVertex3f( -0.055180, 0.392314, 0.055180);
		glVertex3f( -0.108239, 0.369552, 0.108239);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.205312, 0.153073, 0.307271);
		glVertex3f( -0.261312, 0.153073, 0.261312);
		glVertex3f( -0.277408, 0.078036, 0.277408);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.184776, -0.222228, 0.276537);
		glVertex3f( -0.235175, -0.222228, 0.235175);
		glVertex3f( -0.200000, -0.282843, 0.200000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.235175, -0.222228, 0.235175);
		glVertex3f( -0.276537, -0.222228, 0.184776);
		glVertex3f( -0.235175, -0.282843, 0.157139);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.235175, 0.222228, 0.235175);
		glVertex3f( -0.276537, 0.222228, 0.184776);
		glVertex3f( -0.307271, 0.153073, 0.205312);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.261312, -0.153073, 0.261312);
		glVertex3f( -0.307271, -0.153073, 0.205312);
		glVertex3f( -0.276537, -0.222228, 0.184776);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.200000, 0.282843, 0.200000);
		glVertex3f( -0.235175, 0.282843, 0.157139);
		glVertex3f( -0.276537, 0.222228, 0.184776);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.157139, 0.332588, 0.157139);
		glVertex3f( -0.184776, 0.332588, 0.123463);
		glVertex3f( -0.235175, 0.282843, 0.157139);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.277408, -0.078036, 0.277408);
		glVertex3f( -0.326197, -0.078036, 0.217958);
		glVertex3f( -0.307271, -0.153073, 0.205312);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.108239, -0.369552, 0.108239);
		glVertex3f( -0.127276, -0.369552, 0.085043);
		glVertex3f( -0.064885, -0.392314, 0.043355);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.108239, 0.369552, 0.108239);
		glVertex3f( -0.127276, 0.369552, 0.085043);
		glVertex3f( -0.184776, 0.332588, 0.123463);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.282842, 0.000000, 0.282842);
		glVertex3f( -0.332588, 0.000000, 0.222228);
		glVertex3f( -0.326197, -0.078036, 0.217958);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.277408, 0.078036, 0.277408);
		glVertex3f( -0.326197, 0.078036, 0.217958);
		glVertex3f( -0.332588, 0.000000, 0.222228);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.157139, -0.332588, 0.157139);
		glVertex3f( -0.184776, -0.332588, 0.123463);
		glVertex3f( -0.127276, -0.369552, 0.085043);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055180, 0.392314, 0.055180);
		glVertex3f( -0.064885, 0.392314, 0.043355);
		glVertex3f( -0.127276, 0.369552, 0.085043);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.261312, 0.153073, 0.261312);
		glVertex3f( -0.307271, 0.153073, 0.205312);
		glVertex3f( -0.326197, 0.078036, 0.217958);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.200000, -0.282843, 0.200000);
		glVertex3f( -0.235175, -0.282843, 0.157139);
		glVertex3f( -0.184776, -0.332588, 0.123463);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.064885, 0.392314, 0.043355);
		glVertex3f( -0.072096, 0.392314, 0.029863);
		glVertex3f( -0.141421, 0.369552, 0.058579);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.326197, 0.078036, 0.217958);
		glVertex3f( -0.362451, 0.078036, 0.150132);
		glVertex3f( -0.369552, 0.000000, 0.153073);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.307271, 0.153073, 0.205312);
		glVertex3f( -0.341421, 0.153073, 0.141421);
		glVertex3f( -0.362451, 0.078036, 0.150132);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.235175, -0.282843, 0.157139);
		glVertex3f( -0.261312, -0.282843, 0.108239);
		glVertex3f( -0.205312, -0.332588, 0.085043);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.276537, 0.222228, 0.184776);
		glVertex3f( -0.307271, 0.222228, 0.127276);
		glVertex3f( -0.341421, 0.153073, 0.141421);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.276537, -0.222228, 0.184776);
		glVertex3f( -0.307271, -0.222228, 0.127276);
		glVertex3f( -0.261312, -0.282843, 0.108239);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.307271, -0.153073, 0.205312);
		glVertex3f( -0.341421, -0.153073, 0.141421);
		glVertex3f( -0.307271, -0.222228, 0.127276);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.235175, 0.282843, 0.157139);
		glVertex3f( -0.261312, 0.282843, 0.108239);
		glVertex3f( -0.307271, 0.222228, 0.127276);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.341421, -0.153073, 0.141421);
		glVertex3f( -0.307271, -0.153073, 0.205312);
		glVertex3f( -0.362451, -0.078036, 0.150132);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.127276, -0.369552, 0.085043);
		glVertex3f( -0.141421, -0.369552, 0.058579);
		glVertex3f( -0.072096, -0.392314, 0.029863);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.184776, 0.332588, 0.123463);
		glVertex3f( -0.205312, 0.332588, 0.085043);
		glVertex3f( -0.261312, 0.282843, 0.108239);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.127276, 0.369552, 0.085043);
		glVertex3f( -0.141421, 0.369552, 0.058579);
		glVertex3f( -0.205312, 0.332588, 0.085043);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.332588, 0.000000, 0.222228);
		glVertex3f( -0.369552, 0.000000, 0.153073);
		glVertex3f( -0.362451, -0.078036, 0.150132);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.184776, -0.332588, 0.123463);
		glVertex3f( -0.205312, -0.332588, 0.085043);
		glVertex3f( -0.141421, -0.369552, 0.058579);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.369552, 0.000000, 0.153073);
		glVertex3f( -0.392314, 0.000000, 0.078036);
		glVertex3f( -0.384776, -0.078036, 0.076537);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.141421, -0.369552, 0.058579);
		glVertex3f( -0.150132, -0.369552, 0.029863);
		glVertex3f( -0.076537, -0.392314, 0.015224);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.205312, -0.332588, 0.085043);
		glVertex3f( -0.217958, -0.332588, 0.043354);
		glVertex3f( -0.150132, -0.369552, 0.029863);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.141421, 0.369552, 0.058579);
		glVertex3f( -0.150132, 0.369552, 0.029863);
		glVertex3f( -0.217958, 0.332588, 0.043354);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.072096, 0.392314, 0.029863);
		glVertex3f( -0.076537, 0.392314, 0.015224);
		glVertex3f( -0.150132, 0.369552, 0.029863);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.362451, 0.078036, 0.150132);
		glVertex3f( -0.384776, 0.078036, 0.076537);
		glVertex3f( -0.392314, 0.000000, 0.078036);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.261312, -0.282843, 0.108239);
		glVertex3f( -0.277408, -0.282843, 0.055180);
		glVertex3f( -0.217958, -0.332588, 0.043354);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.341421, 0.153073, 0.141421);
		glVertex3f( -0.362451, 0.153073, 0.072096);
		glVertex3f( -0.384776, 0.078036, 0.076537);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.307271, 0.222228, 0.127276);
		glVertex3f( -0.326197, 0.222228, 0.064885);
		glVertex3f( -0.362451, 0.153073, 0.072096);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.307271, -0.222228, 0.127276);
		glVertex3f( -0.326197, -0.222228, 0.064885);
		glVertex3f( -0.277408, -0.282843, 0.055180);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.326197, 0.222228, 0.064885);
		glVertex3f( -0.307271, 0.222228, 0.127276);
		glVertex3f( -0.277408, 0.282843, 0.055180);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.341421, -0.153073, 0.141421);
		glVertex3f( -0.362451, -0.153073, 0.072096);
		glVertex3f( -0.326197, -0.222228, 0.064885);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.362451, -0.153073, 0.072096);
		glVertex3f( -0.341421, -0.153073, 0.141421);
		glVertex3f( -0.384776, -0.078036, 0.076537);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.205312, 0.332588, 0.085043);
		glVertex3f( -0.217958, 0.332588, 0.043354);
		glVertex3f( -0.277408, 0.282843, 0.055180);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.217958, 0.332588, 0.043354);
		glVertex3f( -0.222228, 0.332588, 0.000000);
		glVertex3f( -0.282843, 0.282843, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.369552, -0.153073, 0.000000);
		glVertex3f( -0.362451, -0.153073, 0.072096);
		glVertex3f( -0.392314, -0.078036, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.392314, -0.078036, 0.000000);
		glVertex3f( -0.384776, -0.078036, 0.076537);
		glVertex3f( -0.400000, 0.000000, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.078036, -0.392314, 0.000000);
		glVertex3f( -0.076537, -0.392314, 0.015224);
		glVertex3f( -0.153073, -0.369552, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.150132, 0.369552, 0.029863);
		glVertex3f( -0.153073, 0.369552, 0.000000);
		glVertex3f( -0.222228, 0.332588, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.384776, 0.078036, 0.076537);
		glVertex3f( -0.392314, 0.078036, 0.000000);
		glVertex3f( -0.400000, 0.000000, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.153073, -0.369552, 0.000000);
		glVertex3f( -0.150132, -0.369552, 0.029863);
		glVertex3f( -0.222228, -0.332588, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.222228, -0.332588, 0.000000);
		glVertex3f( -0.217958, -0.332588, 0.043354);
		glVertex3f( -0.282843, -0.282843, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.076537, 0.392314, 0.015224);
		glVertex3f( -0.078036, 0.392314, 0.000000);
		glVertex3f( -0.153073, 0.369552, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.362451, 0.153073, 0.072096);
		glVertex3f( -0.369552, 0.153073, 0.000000);
		glVertex3f( -0.392314, 0.078036, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.282843, -0.282843, 0.000000);
		glVertex3f( -0.277408, -0.282843, 0.055180);
		glVertex3f( -0.332588, -0.222228, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.326197, 0.222228, 0.064885);
		glVertex3f( -0.332588, 0.222228, 0.000000);
		glVertex3f( -0.369552, 0.153073, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.277408, 0.282843, 0.055180);
		glVertex3f( -0.282843, 0.282843, 0.000000);
		glVertex3f( -0.332588, 0.222228, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.332588, -0.222228, 0.000000);
		glVertex3f( -0.326197, -0.222228, 0.064885);
		glVertex3f( -0.369552, -0.153073, 0.000000);
	glEnd();
}