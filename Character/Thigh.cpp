#include "Thigh.h"

void Thigh::setRotate( int x, int y, int z ){
	rotateX = x;
	rotateY = y;
	rotateZ = z;
}
void Thigh::setScale( float x, float y, float z ){
	scaleX = x;
	scaleY = y;
	scaleZ = z;
}
void Thigh::setThighPosition( float x, float y, float z ){
	posX = x;
	posY = y;
	posZ = z;
}
void Thigh::setMirror( bool m ){
	mirror = m;
}
void Thigh::setColor( float r, float g, float b){
	colorR = r;
	colorG = g;
	colorB = b;
}
void Thigh::draw(){
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
void Thigh::privateDraw(){
	
	glNormal3f( -0.990438, -0.097550, -0.097550 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.505340, -2.103470, -0.043196);
		glVertex3f( 0.511771, -2.168769, -0.043196);
		glVertex3f( 0.499032, -2.103470, 0.020848);
	glEnd();

	glNormal3f( -0.470889, -0.880973, -0.046377 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.305149, -1.859537, -0.043196);
		glVertex3f( 0.363016, -1.890467, -0.043196);
		glVertex3f( 0.302687, -1.859537, -0.018207);
	glEnd();

	glNormal3f( -0.290164, 0.956550, -0.028583 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.305149, -2.478001, -0.043196);
		glVertex3f( 0.242359, -2.497048, -0.043196);
		glVertex3f( 0.302687, -2.478001, -0.018207);
	glEnd();

	glNormal3f( -0.990438, 0.097550, -0.097549 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.511771, -2.168769, -0.043196);
		glVertex3f( 0.505340, -2.234067, -0.043196);
		glVertex3f( 0.505340, -2.168769, 0.022103);
	glEnd();

	glNormal3f( -0.952718, 0.289003, -0.093835 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.505340, -2.234067, -0.043196);
		glVertex3f( 0.486293, -2.296857, -0.043196);
		glVertex3f( 0.499032, -2.234067, 0.020848);
	glEnd();

	glNormal3f( -0.633159, -0.771505, -0.062363 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.363016, -1.890467, -0.043196);
		glVertex3f( 0.413736, -1.932093, -0.043196);
		glVertex3f( 0.359443, -1.890467, -0.006918);
	glEnd();

	glNormal3f( -0.098012, 0.995138, -0.009652 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.242359, -2.497048, -0.043196);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.241105, -2.497048, -0.030457);
	glEnd();

	glNormal3f( -0.878613, 0.469629, -0.086536 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.486293, -2.296857, -0.043196);
		glVertex3f( 0.455362, -2.354724, -0.043196);
		glVertex3f( 0.480351, -2.296857, 0.017132);
	glEnd();

	glNormal3f( -0.770779, -0.632563, -0.075915 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.413736, -1.932093, -0.043196);
		glVertex3f( 0.455362, -1.982813, -0.043196);
		glVertex3f( 0.409189, -1.932093, 0.002977);
	glEnd();

	glNormal3f( -0.878614, -0.469627, -0.086535 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.455362, -1.982813, -0.043196);
		glVertex3f( 0.486293, -2.040681, -0.043196);
		glVertex3f( 0.450015, -1.982813, 0.011098);
	glEnd();

	glNormal3f( -0.770780, 0.632562, -0.075913 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.455362, -2.354724, -0.043196);
		glVertex3f( 0.413736, -2.405445, -0.043196);
		glVertex3f( 0.450015, -2.354724, 0.011098);
	glEnd();

	glNormal3f( -0.952718, -0.289005, -0.093835 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.486293, -2.040681, -0.043196);
		glVertex3f( 0.505340, -2.103470, -0.043196);
		glVertex3f( 0.480351, -2.040681, 0.017132);
	glEnd();

	glNormal3f( -0.098012, -0.995138, -0.009654 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.242359, -1.840490, -0.043196);
		glVertex3f( 0.241104, -1.840490, -0.030457);
	glEnd();

	glNormal3f( -0.290167, -0.956549, -0.028574 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.242359, -1.840490, -0.043196);
		glVertex3f( 0.305149, -1.859537, -0.043196);
		glVertex3f( 0.241104, -1.840490, -0.030457);
	glEnd();

	glNormal3f( -0.633158, 0.771506, -0.062360 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.413736, -2.405445, -0.043196);
		glVertex3f( 0.363016, -2.447070, -0.043196);
		glVertex3f( 0.409189, -2.405445, 0.002977);
	glEnd();

	glNormal3f( -0.470892, 0.880971, -0.046384 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.363016, -2.447070, -0.043196);
		glVertex3f( 0.305149, -2.478001, -0.043196);
		glVertex3f( 0.359443, -2.447070, -0.006918);
	glEnd();

	glNormal3f( -0.094246, -0.995139, -0.028582 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.241104, -1.840490, -0.030457);
		glVertex3f( 0.237389, -1.840490, -0.018207);
	glEnd();

	glNormal3f( -0.279016, -0.956549, -0.084638 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.241104, -1.840490, -0.030457);
		glVertex3f( 0.302687, -1.859537, -0.018207);
		glVertex3f( 0.237389, -1.840490, -0.018207);
	glEnd();

	glNormal3f( -0.608826, 0.771506, -0.184687 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.409189, -2.405445, 0.002977);
		glVertex3f( 0.359443, -2.447070, -0.006918);
		glVertex3f( 0.395721, -2.405445, 0.047376);
	glEnd();

	glNormal3f( -0.452795, 0.880971, -0.137354 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.359443, -2.447070, -0.006918);
		glVertex3f( 0.302687, -2.478001, -0.018207);
		glVertex3f( 0.348861, -2.447070, 0.027966);
	glEnd();

	glNormal3f( -0.952376, -0.097550, -0.288900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.499032, -2.103470, 0.020848);
		glVertex3f( 0.505340, -2.168769, 0.022103);
		glVertex3f( 0.480351, -2.103470, 0.082431);
	glEnd();

	glNormal3f( -0.452793, -0.880973, -0.137350 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.302687, -1.859537, -0.018207);
		glVertex3f( 0.359443, -1.890467, -0.006918);
		glVertex3f( 0.295398, -1.859537, 0.005821);
	glEnd();

	glNormal3f( -0.279013, 0.956550, -0.084642 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.302687, -2.478001, -0.018207);
		glVertex3f( 0.241105, -2.497048, -0.030457);
		glVertex3f( 0.295398, -2.478001, 0.005821);
	glEnd();

	glNormal3f( -0.952376, 0.097551, -0.288901 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.505340, -2.168769, 0.022103);
		glVertex3f( 0.499032, -2.234067, 0.020848);
		glVertex3f( 0.486293, -2.168769, 0.084892);
	glEnd();

	glNormal3f( -0.916106, 0.289003, -0.277898 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.499032, -2.234067, 0.020848);
		glVertex3f( 0.480351, -2.296857, 0.017132);
		glVertex3f( 0.480351, -2.234067, 0.082431);
	glEnd();

	glNormal3f( -0.608827, -0.771505, -0.184687 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.359443, -1.890467, -0.006918);
		glVertex3f( 0.409189, -1.932093, 0.002977);
		glVertex3f( 0.348861, -1.890467, 0.027966);
	glEnd();

	glNormal3f( -0.094246, 0.995138, -0.028589 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.241105, -2.497048, -0.030457);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.237389, -2.497048, -0.018207);
	glEnd();

	glNormal3f( -0.844848, 0.469629, -0.256282 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.480351, -2.296857, 0.017132);
		glVertex3f( 0.450015, -2.354724, 0.011098);
		glVertex3f( 0.462754, -2.296857, 0.075142);
	glEnd();

	glNormal3f( -0.741159, -0.632563, -0.224828 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.409189, -1.932093, 0.002977);
		glVertex3f( 0.450015, -1.982813, 0.011098);
		glVertex3f( 0.395721, -1.932093, 0.047376);
	glEnd();

	glNormal3f( -0.844850, -0.469627, -0.256280 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.450015, -1.982813, 0.011098);
		glVertex3f( 0.480351, -2.040681, 0.017132);
		glVertex3f( 0.434178, -1.982813, 0.063305);
	glEnd();

	glNormal3f( -0.741159, 0.632562, -0.224830 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.450015, -2.354724, 0.011098);
		glVertex3f( 0.409189, -2.405445, 0.002977);
		glVertex3f( 0.434178, -2.354724, 0.063305);
	glEnd();

	glNormal3f( -0.916106, -0.289005, -0.277897 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.480351, -2.040681, 0.017132);
		glVertex3f( 0.499032, -2.103470, 0.020848);
		glVertex3f( 0.462754, -2.040681, 0.075142);
	glEnd();

	glNormal3f( -0.683056, 0.632562, -0.365101 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.434178, -2.354724, 0.063305);
		glVertex3f( 0.395721, -2.405445, 0.047376);
		glVertex3f( 0.408460, -2.354724, 0.111420);
	glEnd();

	glNormal3f( -0.778618, -0.469628, -0.416178 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.434178, -1.982813, 0.063305);
		glVertex3f( 0.462754, -2.040681, 0.075142);
		glVertex3f( 0.408460, -1.982813, 0.111420);
	glEnd();

	glNormal3f( -0.844288, -0.289005, -0.451280 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.462754, -2.040681, 0.075142);
		glVertex3f( 0.480351, -2.103470, 0.082431);
		glVertex3f( 0.434178, -2.040681, 0.128604);
	glEnd();

	glNormal3f( -0.086857, -0.995138, -0.046427 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.237389, -1.840490, -0.018207);
		glVertex3f( 0.231354, -1.840490, -0.006918);
	glEnd();

	glNormal3f( -0.561098, 0.771506, -0.299913 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.395721, -2.405445, 0.047376);
		glVertex3f( 0.348861, -2.447070, 0.027966);
		glVertex3f( 0.373849, -2.405445, 0.088294);
	glEnd();

	glNormal3f( -0.877715, -0.097549, -0.469149 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.480351, -2.103470, 0.082431);
		glVertex3f( 0.486293, -2.168769, 0.084892);
		glVertex3f( 0.450015, -2.103470, 0.139186);
	glEnd();

	glNormal3f( -0.257143, -0.956549, -0.137445 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.237389, -1.840490, -0.018207);
		glVertex3f( 0.295398, -1.859537, 0.005821);
		glVertex3f( 0.231354, -1.840490, -0.006918);
	glEnd();

	glNormal3f( -0.417296, -0.880972, -0.223052 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.295398, -1.859537, 0.005821);
		glVertex3f( 0.348861, -1.890467, 0.027966);
		glVertex3f( 0.283562, -1.859537, 0.027966);
	glEnd();

	glNormal3f( -0.417299, 0.880971, -0.223051 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.348861, -2.447070, 0.027966);
		glVertex3f( 0.295398, -2.478001, 0.005821);
		glVertex3f( 0.331677, -2.447070, 0.060115);
	glEnd();

	glNormal3f( -0.257140, 0.956551, -0.137441 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.295398, -2.478001, 0.005821);
		glVertex3f( 0.237389, -2.497048, -0.018207);
		glVertex3f( 0.283562, -2.478001, 0.027966);
	glEnd();

	glNormal3f( -0.877716, 0.097550, -0.469147 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.486293, -2.168769, 0.084892);
		glVertex3f( 0.480351, -2.234067, 0.082431);
		glVertex3f( 0.455362, -2.168769, 0.142759);
	glEnd();

	glNormal3f( -0.561098, -0.771506, -0.299913 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.348861, -1.890467, 0.027966);
		glVertex3f( 0.395721, -1.932093, 0.047376);
		glVertex3f( 0.331676, -1.890467, 0.060115);
	glEnd();

	glNormal3f( -0.086857, 0.995139, -0.046420 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.237389, -2.497048, -0.018207);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.231354, -2.497048, -0.006918);
	glEnd();

	glNormal3f( -0.844288, 0.289003, -0.451282 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.480351, -2.234067, 0.082431);
		glVertex3f( 0.462754, -2.296857, 0.075142);
		glVertex3f( 0.450015, -2.234067, 0.139186);
	glEnd();

	glNormal3f( -0.778616, 0.469630, -0.416179 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.462754, -2.296857, 0.075142);
		glVertex3f( 0.434178, -2.354724, 0.063305);
		glVertex3f( 0.434178, -2.296857, 0.128604);
	glEnd();

	glNormal3f( -0.683056, -0.632563, -0.365100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.395721, -1.932093, 0.047376);
		glVertex3f( 0.434178, -1.982813, 0.063305);
		glVertex3f( 0.373849, -1.932093, 0.088294);
	glEnd();

	glNormal3f( -0.598704, -0.632564, -0.491342 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.373849, -1.932093, 0.088294);
		glVertex3f( 0.408460, -1.982813, 0.111420);
		glVertex3f( 0.344416, -1.932093, 0.124159);
	glEnd();

	glNormal3f( -0.682463, 0.469630, -0.560082 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.434178, -2.296857, 0.128604);
		glVertex3f( 0.408460, -2.354724, 0.111420);
		glVertex3f( 0.395721, -2.296857, 0.175464);
	glEnd();

	glNormal3f( -0.598703, 0.632562, -0.491345 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.408460, -2.354724, 0.111420);
		glVertex3f( 0.373849, -2.405445, 0.088294);
		glVertex3f( 0.373849, -2.354724, 0.153593);
	glEnd();

	glNormal3f( -0.682463, -0.469627, -0.560085 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.408460, -1.982813, 0.111420);
		glVertex3f( 0.434178, -2.040681, 0.128604);
		glVertex3f( 0.373849, -1.982813, 0.153593);
	glEnd();

	glNormal3f( -0.076131, -0.995138, -0.062478 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.231354, -1.840490, -0.006918);
		glVertex3f( 0.223234, -1.840490, 0.002977);
	glEnd();

	glNormal3f( -0.491807, 0.771506, -0.403613 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.373849, -2.405445, 0.088294);
		glVertex3f( 0.331677, -2.447070, 0.060115);
		glVertex3f( 0.344416, -2.405445, 0.124159);
	glEnd();

	glNormal3f( -0.740025, -0.289004, -0.607322 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.434178, -2.040681, 0.128604);
		glVertex3f( 0.450015, -2.103470, 0.139186);
		glVertex3f( 0.395721, -2.040681, 0.175464);
	glEnd();

	glNormal3f( -0.769325, -0.097550, -0.631366 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.450015, -2.103470, 0.139186);
		glVertex3f( 0.455362, -2.168769, 0.142759);
		glVertex3f( 0.409189, -2.103470, 0.188932);
	glEnd();

	glNormal3f( -0.225388, -0.956550, -0.184969 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.231354, -1.840490, -0.006918);
		glVertex3f( 0.283562, -1.859537, 0.027966);
		glVertex3f( 0.223234, -1.840490, 0.002977);
	glEnd();

	glNormal3f( -0.365765, 0.880971, -0.300176 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.331677, -2.447070, 0.060115);
		glVertex3f( 0.283562, -2.478001, 0.027966);
		glVertex3f( 0.308551, -2.447070, 0.088294);
	glEnd();

	glNormal3f( -0.769325, 0.097550, -0.631366 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.455362, -2.168769, 0.142759);
		glVertex3f( 0.450015, -2.234067, 0.139186);
		glVertex3f( 0.413736, -2.168769, 0.193480);
	glEnd();

	glNormal3f( -0.365763, -0.880973, -0.300174 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.283562, -1.859537, 0.027966);
		glVertex3f( 0.331676, -1.890467, 0.060115);
		glVertex3f( 0.267632, -1.859537, 0.047376);
	glEnd();

	glNormal3f( -0.491807, -0.771505, -0.403617 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.331676, -1.890467, 0.060115);
		glVertex3f( 0.373849, -1.932093, 0.088294);
		glVertex3f( 0.308551, -1.890467, 0.088294);
	glEnd();

	glNormal3f( -0.225385, 0.956550, -0.184970 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.283562, -2.478001, 0.027966);
		glVertex3f( 0.231354, -2.497048, -0.006918);
		glVertex3f( 0.267632, -2.478001, 0.047376);
	glEnd();

	glNormal3f( -0.076131, 0.995138, -0.062481 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.231354, -2.497048, -0.006918);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.223234, -2.497048, 0.002977);
	glEnd();

	glNormal3f( -0.740024, 0.289004, -0.607323 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.450015, -2.234067, 0.139186);
		glVertex3f( 0.434178, -2.296857, 0.128604);
		glVertex3f( 0.409189, -2.234067, 0.188932);
	glEnd();

	glNormal3f( -0.184968, 0.956550, -0.225386 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.267632, -2.478001, 0.047376);
		glVertex3f( 0.223234, -2.497048, 0.002977);
		glVertex3f( 0.248222, -2.478001, 0.063305);
	glEnd();

	glNormal3f( -0.607322, 0.289003, -0.740026 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.409189, -2.234067, 0.188932);
		glVertex3f( 0.395721, -2.296857, 0.175464);
		glVertex3f( 0.359442, -2.234067, 0.229758);
	glEnd();

	glNormal3f( -0.403615, -0.771505, -0.491808 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.308551, -1.890467, 0.088294);
		glVertex3f( 0.344416, -1.932093, 0.124159);
		glVertex3f( 0.280372, -1.890467, 0.111420);
	glEnd();

	glNormal3f( -0.491344, -0.632564, -0.598703 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.344416, -1.932093, 0.124159);
		glVertex3f( 0.373849, -1.982813, 0.153593);
		glVertex3f( 0.308551, -1.932093, 0.153593);
	glEnd();

	glNormal3f( -0.062479, 0.995138, -0.076132 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.223234, -2.497048, 0.002977);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.213338, -2.497048, 0.011098);
	glEnd();

	glNormal3f( -0.560083, 0.469630, -0.682462 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.395721, -2.296857, 0.175464);
		glVertex3f( 0.373849, -2.354724, 0.153593);
		glVertex3f( 0.348861, -2.296857, 0.213921);
	glEnd();

	glNormal3f( -0.560083, -0.469628, -0.682463 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.373849, -1.982813, 0.153593);
		glVertex3f( 0.395721, -2.040681, 0.175464);
		glVertex3f( 0.331676, -1.982813, 0.188203);
	glEnd();

	glNormal3f( -0.062479, -0.995139, -0.076126 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.223234, -1.840490, 0.002977);
		glVertex3f( 0.213338, -1.840490, 0.011098);
	glEnd();

	glNormal3f( -0.491344, 0.632563, -0.598703 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.373849, -2.354724, 0.153593);
		glVertex3f( 0.344416, -2.405445, 0.124159);
		glVertex3f( 0.331676, -2.354724, 0.188203);
	glEnd();

	glNormal3f( -0.403615, 0.771507, -0.491805 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.344416, -2.405445, 0.124159);
		glVertex3f( 0.308551, -2.447070, 0.088294);
		glVertex3f( 0.308551, -2.405445, 0.153593);
	glEnd();

	glNormal3f( -0.607322, -0.289004, -0.740025 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.395721, -2.040681, 0.175464);
		glVertex3f( 0.409189, -2.103470, 0.188932);
		glVertex3f( 0.348861, -2.040681, 0.213921);
	glEnd();

	glNormal3f( -0.184971, -0.956550, -0.225385 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.223234, -1.840490, 0.002977);
		glVertex3f( 0.267632, -1.859537, 0.047376);
		glVertex3f( 0.213338, -1.840490, 0.011098);
	glEnd();

	glNormal3f( -0.300176, 0.880972, -0.365762 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.308551, -2.447070, 0.088294);
		glVertex3f( 0.267632, -2.478001, 0.047376);
		glVertex3f( 0.280372, -2.447070, 0.111420);
	glEnd();

	glNormal3f( -0.631367, -0.097550, -0.769324 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.409189, -2.103470, 0.188932);
		glVertex3f( 0.413736, -2.168769, 0.193480);
		glVertex3f( 0.359442, -2.103470, 0.229758);
	glEnd();

	glNormal3f( -0.631367, 0.097550, -0.769324 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.413736, -2.168769, 0.193480);
		glVertex3f( 0.409189, -2.234067, 0.188932);
		glVertex3f( 0.363016, -2.168769, 0.235105);
	glEnd();

	glNormal3f( -0.300174, -0.880973, -0.365764 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.267632, -1.859537, 0.047376);
		glVertex3f( 0.308551, -1.890467, 0.088294);
		glVertex3f( 0.248222, -1.859537, 0.063305);
	glEnd();

	glNormal3f( -0.469147, -0.097549, -0.877716 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.359442, -2.103470, 0.229758);
		glVertex3f( 0.363016, -2.168769, 0.235105);
		glVertex3f( 0.302687, -2.103470, 0.260094);
	glEnd();

	glNormal3f( -0.223049, -0.880971, -0.417300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.248222, -1.859537, 0.063305);
		glVertex3f( 0.280372, -1.890467, 0.111420);
		glVertex3f( 0.226078, -1.859537, 0.075142);
	glEnd();

	glNormal3f( -0.137444, 0.956550, -0.257140 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.248222, -2.478001, 0.063305);
		glVertex3f( 0.213338, -2.497048, 0.011098);
		glVertex3f( 0.226078, -2.478001, 0.075142);
	glEnd();

	glNormal3f( -0.469149, 0.097550, -0.877715 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.363016, -2.168769, 0.235105);
		glVertex3f( 0.359442, -2.234067, 0.229758);
		glVertex3f( 0.305149, -2.168769, 0.266036);
	glEnd();

	glNormal3f( -0.451281, 0.289003, -0.844288 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.359442, -2.234067, 0.229758);
		glVertex3f( 0.348861, -2.296857, 0.213921);
		glVertex3f( 0.302687, -2.234067, 0.260094);
	glEnd();

	glNormal3f( -0.299914, -0.771506, -0.561097 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.280372, -1.890467, 0.111420);
		glVertex3f( 0.308551, -1.932093, 0.153593);
		glVertex3f( 0.248222, -1.890467, 0.128604);
	glEnd();

	glNormal3f( -0.046426, 0.995138, -0.086863 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.213338, -2.497048, 0.011098);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.202049, -2.497048, 0.017132);
	glEnd();

	glNormal3f( -0.416178, 0.469629, -0.778617 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.348861, -2.296857, 0.213921);
		glVertex3f( 0.331676, -2.354724, 0.188203);
		glVertex3f( 0.295398, -2.296857, 0.242497);
	glEnd();

	glNormal3f( -0.365101, -0.632563, -0.683056 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.308551, -1.932093, 0.153593);
		glVertex3f( 0.331676, -1.982813, 0.188203);
		glVertex3f( 0.267632, -1.932093, 0.175464);
	glEnd();

	glNormal3f( -0.416180, -0.469628, -0.778617 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.331676, -1.982813, 0.188203);
		glVertex3f( 0.348861, -2.040681, 0.213921);
		glVertex3f( 0.283562, -1.982813, 0.213921);
	glEnd();

	glNormal3f( -0.365101, 0.632561, -0.683058 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.331676, -2.354724, 0.188203);
		glVertex3f( 0.308551, -2.405445, 0.153593);
		glVertex3f( 0.283562, -2.354724, 0.213921);
	glEnd();

	glNormal3f( -0.451281, -0.289004, -0.844288 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.348861, -2.040681, 0.213921);
		glVertex3f( 0.359442, -2.103470, 0.229758);
		glVertex3f( 0.295398, -2.040681, 0.242497);
	glEnd();

	glNormal3f( -0.046426, -0.995139, -0.086854 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.213338, -1.840490, 0.011098);
		glVertex3f( 0.202049, -1.840490, 0.017132);
	glEnd();

	glNormal3f( -0.137446, -0.956550, -0.257140 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.213338, -1.840490, 0.011098);
		glVertex3f( 0.248222, -1.859537, 0.063305);
		glVertex3f( 0.202049, -1.840490, 0.017132);
	glEnd();

	glNormal3f( -0.299913, 0.771506, -0.561098 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.308551, -2.405445, 0.153593);
		glVertex3f( 0.280372, -2.447070, 0.111420);
		glVertex3f( 0.267632, -2.405445, 0.175464);
	glEnd();

	glNormal3f( -0.223051, 0.880971, -0.417299 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.280372, -2.447070, 0.111420);
		glVertex3f( 0.248222, -2.478001, 0.063305);
		glVertex3f( 0.248222, -2.447070, 0.128604);
	glEnd();

	glNormal3f( -0.184685, 0.771505, -0.608827 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.267632, -2.405445, 0.175464);
		glVertex3f( 0.248222, -2.447070, 0.128604);
		glVertex3f( 0.223234, -2.405445, 0.188932);
	glEnd();

	glNormal3f( -0.288899, -0.097549, -0.952377 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.302687, -2.103470, 0.260094);
		glVertex3f( 0.305149, -2.168769, 0.266036);
		glVertex3f( 0.241104, -2.103470, 0.278775);
	glEnd();

	glNormal3f( -0.084639, -0.956551, -0.279010 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.202049, -1.840490, 0.017132);
		glVertex3f( 0.226078, -1.859537, 0.075142);
		glVertex3f( 0.189800, -1.840490, 0.020848);
	glEnd();

	glNormal3f( -0.137353, -0.880973, -0.452792 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.226078, -1.859537, 0.075142);
		glVertex3f( 0.248222, -1.890467, 0.128604);
		glVertex3f( 0.202049, -1.859537, 0.082431);
	glEnd();

	glNormal3f( -0.137354, 0.880971, -0.452796 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.248222, -2.447070, 0.128604);
		glVertex3f( 0.226078, -2.478001, 0.075142);
		glVertex3f( 0.213338, -2.447070, 0.139186);
	glEnd();

	glNormal3f( -0.084638, 0.956551, -0.279011 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.226078, -2.478001, 0.075142);
		glVertex3f( 0.202049, -2.497048, 0.017132);
		glVertex3f( 0.202049, -2.478001, 0.082431);
	glEnd();

	glNormal3f( -0.288898, 0.097549, -0.952377 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.305149, -2.168769, 0.266036);
		glVertex3f( 0.302687, -2.234067, 0.260094);
		glVertex3f( 0.242359, -2.168769, 0.285083);
	glEnd();

	glNormal3f( -0.184686, -0.771505, -0.608828 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.248222, -1.890467, 0.128604);
		glVertex3f( 0.267632, -1.932093, 0.175464);
		glVertex3f( 0.213338, -1.890467, 0.139186);
	glEnd();

	glNormal3f( -0.028589, 0.995139, -0.094242 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.202049, -2.497048, 0.017132);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.189800, -2.497048, 0.020848);
	glEnd();

	glNormal3f( -0.277897, 0.289003, -0.916106 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.302687, -2.234067, 0.260094);
		glVertex3f( 0.295398, -2.296857, 0.242497);
		glVertex3f( 0.241104, -2.234067, 0.278775);
	glEnd();

	glNormal3f( -0.256282, 0.469630, -0.844848 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.295398, -2.296857, 0.242497);
		glVertex3f( 0.283562, -2.354724, 0.213921);
		glVertex3f( 0.237389, -2.296857, 0.260094);
	glEnd();

	glNormal3f( -0.224828, -0.632563, -0.741159 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.267632, -1.932093, 0.175464);
		glVertex3f( 0.283562, -1.982813, 0.213921);
		glVertex3f( 0.223234, -1.932093, 0.188932);
	glEnd();

	glNormal3f( -0.224829, 0.632563, -0.741159 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.283562, -2.354724, 0.213921);
		glVertex3f( 0.267632, -2.405445, 0.175464);
		glVertex3f( 0.231354, -2.354724, 0.229758);
	glEnd();

	glNormal3f( -0.256282, -0.469628, -0.844848 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.283562, -1.982813, 0.213921);
		glVertex3f( 0.295398, -2.040681, 0.242497);
		glVertex3f( 0.231354, -1.982813, 0.229758);
	glEnd();

	glNormal3f( -0.277896, -0.289003, -0.916106 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.295398, -2.040681, 0.242497);
		glVertex3f( 0.302687, -2.103470, 0.260094);
		glVertex3f( 0.237389, -2.040681, 0.260094);
	glEnd();

	glNormal3f( -0.028589, -0.995139, -0.094244 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.202049, -1.840490, 0.017132);
		glVertex3f( 0.189800, -1.840490, 0.020848);
	glEnd();

	glNormal3f( -0.075915, 0.632561, -0.770781 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.231354, -2.354724, 0.229758);
		glVertex3f( 0.223234, -2.405445, 0.188932);
		glVertex3f( 0.177060, -2.354724, 0.235105);
	glEnd();

	glNormal3f( -0.086536, -0.469627, -0.878614 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.231354, -1.982813, 0.229758);
		glVertex3f( 0.237389, -2.040681, 0.260094);
		glVertex3f( 0.177060, -1.982813, 0.235105);
	glEnd();

	glNormal3f( -0.009653, -0.995138, -0.098012 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.189800, -1.840490, 0.020848);
		glVertex3f( 0.177060, -1.840490, 0.022103);
	glEnd();

	glNormal3f( -0.062360, 0.771506, -0.633158 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.223234, -2.405445, 0.188932);
		glVertex3f( 0.213338, -2.447070, 0.139186);
		glVertex3f( 0.177060, -2.405445, 0.193480);
	glEnd();

	glNormal3f( -0.093834, -0.289004, -0.952718 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.237389, -2.040681, 0.260094);
		glVertex3f( 0.241104, -2.103470, 0.278775);
		glVertex3f( 0.177060, -2.040681, 0.266036);
	glEnd();

	glNormal3f( -0.097550, -0.097550, -0.990438 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.241104, -2.103470, 0.278775);
		glVertex3f( 0.242359, -2.168769, 0.285083);
		glVertex3f( 0.177060, -2.103470, 0.285083);
	glEnd();

	glNormal3f( -0.028579, -0.956550, -0.290163 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.189800, -1.840490, 0.020848);
		glVertex3f( 0.202049, -1.859537, 0.082431);
		glVertex3f( 0.177060, -1.840490, 0.022103);
	glEnd();

	glNormal3f( -0.046379, 0.880971, -0.470892 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.213338, -2.447070, 0.139186);
		glVertex3f( 0.202049, -2.478001, 0.082431);
		glVertex3f( 0.177060, -2.447070, 0.142759);
	glEnd();

	glNormal3f( -0.097550, 0.097550, -0.990438 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.242359, -2.168769, 0.285083);
		glVertex3f( 0.241104, -2.234067, 0.278775);
		glVertex3f( 0.177060, -2.168769, 0.291514);
	glEnd();

	glNormal3f( -0.046379, -0.880974, -0.470887 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.202049, -1.859537, 0.082431);
		glVertex3f( 0.213338, -1.890467, 0.139186);
		glVertex3f( 0.177060, -1.859537, 0.084892);
	glEnd();

	glNormal3f( -0.062361, -0.771505, -0.633160 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.213338, -1.890467, 0.139186);
		glVertex3f( 0.223234, -1.932093, 0.188932);
		glVertex3f( 0.177060, -1.890467, 0.142759);
	glEnd();

	glNormal3f( -0.028579, 0.956550, -0.290163 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.202049, -2.478001, 0.082431);
		glVertex3f( 0.189800, -2.497048, 0.020848);
		glVertex3f( 0.177060, -2.478001, 0.084892);
	glEnd();

	glNormal3f( -0.009653, 0.995138, -0.098012 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.189800, -2.497048, 0.020848);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.177060, -2.497048, 0.022103);
	glEnd();

	glNormal3f( -0.093835, 0.289003, -0.952718 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.241104, -2.234067, 0.278775);
		glVertex3f( 0.237389, -2.296857, 0.260094);
		glVertex3f( 0.177060, -2.234067, 0.285083);
	glEnd();

	glNormal3f( -0.075915, -0.632562, -0.770780 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.223234, -1.932093, 0.188932);
		glVertex3f( 0.231354, -1.982813, 0.229758);
		glVertex3f( 0.177060, -1.932093, 0.193480);
	glEnd();

	glNormal3f( -0.086535, 0.469628, -0.878613 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.237389, -2.296857, 0.260094);
		glVertex3f( 0.231354, -2.354724, 0.229758);
		glVertex3f( 0.177060, -2.296857, 0.266036);
	glEnd();

	glNormal3f( 0.075915, -0.632562, -0.770780 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.932093, 0.193480);
		glVertex3f( 0.177060, -1.982813, 0.235105);
		glVertex3f( 0.130887, -1.932093, 0.188932);
	glEnd();

	glNormal3f( 0.009653, 0.995138, -0.098012 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.497048, 0.022103);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.164321, -2.497048, 0.020848);
	glEnd();

	glNormal3f( 0.086536, 0.469630, -0.878612 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.296857, 0.266036);
		glVertex3f( 0.177060, -2.354724, 0.235105);
		glVertex3f( 0.116732, -2.296857, 0.260094);
	glEnd();

	glNormal3f( 0.086536, -0.469627, -0.878614 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.982813, 0.235105);
		glVertex3f( 0.177060, -2.040681, 0.266036);
		glVertex3f( 0.122766, -1.982813, 0.229758);
	glEnd();

	glNormal3f( 0.009653, -0.995138, -0.098013 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.177060, -1.840490, 0.022103);
		glVertex3f( 0.164321, -1.840490, 0.020848);
	glEnd();

	glNormal3f( 0.075915, 0.632562, -0.770780 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.354724, 0.235105);
		glVertex3f( 0.177060, -2.405445, 0.193480);
		glVertex3f( 0.122766, -2.354724, 0.229758);
	glEnd();

	glNormal3f( 0.062361, 0.771505, -0.633160 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.405445, 0.193480);
		glVertex3f( 0.177060, -2.447070, 0.142759);
		glVertex3f( 0.130887, -2.405445, 0.188932);
	glEnd();

	glNormal3f( 0.093835, -0.289005, -0.952718 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.040681, 0.266036);
		glVertex3f( 0.177060, -2.103470, 0.285083);
		glVertex3f( 0.116732, -2.040681, 0.260094);
	glEnd();

	glNormal3f( 0.028579, -0.956549, -0.290166 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.840490, 0.022103);
		glVertex3f( 0.177060, -1.859537, 0.084892);
		glVertex3f( 0.164321, -1.840490, 0.020848);
	glEnd();

	glNormal3f( 0.046379, 0.880971, -0.470891 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.447070, 0.142759);
		glVertex3f( 0.177060, -2.478001, 0.084892);
		glVertex3f( 0.140782, -2.447070, 0.139186);
	glEnd();

	glNormal3f( 0.097550, -0.097550, -0.990438 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.103470, 0.285083);
		glVertex3f( 0.177060, -2.168769, 0.291514);
		glVertex3f( 0.113016, -2.103470, 0.278775);
	glEnd();

	glNormal3f( 0.097550, 0.097550, -0.990438 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.168769, 0.291514);
		glVertex3f( 0.177060, -2.234067, 0.285083);
		glVertex3f( 0.111762, -2.168769, 0.285083);
	glEnd();

	glNormal3f( 0.046378, -0.880972, -0.470891 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.859537, 0.084892);
		glVertex3f( 0.177060, -1.890467, 0.142759);
		glVertex3f( 0.152072, -1.859537, 0.082431);
	glEnd();

	glNormal3f( 0.028579, 0.956551, -0.290162 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.478001, 0.084892);
		glVertex3f( 0.177060, -2.497048, 0.022103);
		glVertex3f( 0.152072, -2.478001, 0.082431);
	glEnd();

	glNormal3f( 0.093835, 0.289003, -0.952718 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.234067, 0.285083);
		glVertex3f( 0.177060, -2.296857, 0.266036);
		glVertex3f( 0.113016, -2.234067, 0.278775);
	glEnd();

	glNormal3f( 0.062361, -0.771506, -0.633158 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.890467, 0.142759);
		glVertex3f( 0.177060, -1.932093, 0.193480);
		glVertex3f( 0.140782, -1.890467, 0.139186);
	glEnd();

	glNormal3f( 0.084638, 0.956549, -0.279016 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.152072, -2.478001, 0.082431);
		glVertex3f( 0.164321, -2.497048, 0.020848);
		glVertex3f( 0.128043, -2.478001, 0.075142);
	glEnd();

	glNormal3f( 0.288900, 0.097550, -0.952377 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.111762, -2.168769, 0.285083);
		glVertex3f( 0.113016, -2.234067, 0.278775);
		glVertex3f( 0.048972, -2.168769, 0.266036);
	glEnd();

	glNormal3f( 0.277898, 0.289004, -0.916105 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.113016, -2.234067, 0.278775);
		glVertex3f( 0.116732, -2.296857, 0.260094);
		glVertex3f( 0.051433, -2.234067, 0.260094);
	glEnd();

	glNormal3f( 0.184686, -0.771505, -0.608828 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.140782, -1.890467, 0.139186);
		glVertex3f( 0.130887, -1.932093, 0.188932);
		glVertex3f( 0.105898, -1.890467, 0.128604);
	glEnd();

	glNormal3f( 0.028589, 0.995139, -0.094241 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.164321, -2.497048, 0.020848);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.152072, -2.497048, 0.017132);
	glEnd();

	glNormal3f( 0.256281, 0.469628, -0.844849 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.116732, -2.296857, 0.260094);
		glVertex3f( 0.122766, -2.354724, 0.229758);
		glVertex3f( 0.058722, -2.296857, 0.242497);
	glEnd();

	glNormal3f( 0.224828, -0.632563, -0.741158 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.130887, -1.932093, 0.188932);
		glVertex3f( 0.122766, -1.982813, 0.229758);
		glVertex3f( 0.086488, -1.932093, 0.175464);
	glEnd();

	glNormal3f( 0.256282, -0.469627, -0.844849 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.122766, -1.982813, 0.229758);
		glVertex3f( 0.116732, -2.040681, 0.260094);
		glVertex3f( 0.070559, -1.982813, 0.213921);
	glEnd();

	glNormal3f( 0.224829, 0.632563, -0.741158 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.122766, -2.354724, 0.229758);
		glVertex3f( 0.130887, -2.405445, 0.188932);
		glVertex3f( 0.070559, -2.354724, 0.213921);
	glEnd();

	glNormal3f( 0.277897, -0.289004, -0.916106 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.116732, -2.040681, 0.260094);
		glVertex3f( 0.113016, -2.103470, 0.278775);
		glVertex3f( 0.058722, -2.040681, 0.242497);
	glEnd();

	glNormal3f( 0.028589, -0.995139, -0.094244 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.164321, -1.840490, 0.020848);
		glVertex3f( 0.152072, -1.840490, 0.017132);
	glEnd();

	glNormal3f( 0.084638, -0.956549, -0.279017 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.164321, -1.840490, 0.020848);
		glVertex3f( 0.152072, -1.859537, 0.082431);
		glVertex3f( 0.152072, -1.840490, 0.017132);
	glEnd();

	glNormal3f( 0.184686, 0.771506, -0.608827 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.130887, -2.405445, 0.188932);
		glVertex3f( 0.140782, -2.447070, 0.139186);
		glVertex3f( 0.086488, -2.405445, 0.175464);
	glEnd();

	glNormal3f( 0.137354, 0.880971, -0.452796 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.140782, -2.447070, 0.139186);
		glVertex3f( 0.152072, -2.478001, 0.082431);
		glVertex3f( 0.105898, -2.447070, 0.128604);
	glEnd();

	glNormal3f( 0.288900, -0.097549, -0.952376 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.113016, -2.103470, 0.278775);
		glVertex3f( 0.111762, -2.168769, 0.285083);
		glVertex3f( 0.051433, -2.103470, 0.260094);
	glEnd();

	glNormal3f( 0.137353, -0.880972, -0.452794 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.152072, -1.859537, 0.082431);
		glVertex3f( 0.140782, -1.890467, 0.139186);
		glVertex3f( 0.128043, -1.859537, 0.075142);
	glEnd();

	glNormal3f( 0.137446, -0.956548, -0.257147 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.152072, -1.840490, 0.017132);
		glVertex3f( 0.128043, -1.859537, 0.075142);
		glVertex3f( 0.140782, -1.840490, 0.011098);
	glEnd();

	glNormal3f( 0.223050, -0.880973, -0.417295 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.128043, -1.859537, 0.075142);
		glVertex3f( 0.105898, -1.890467, 0.128604);
		glVertex3f( 0.105898, -1.859537, 0.063305);
	glEnd();

	glNormal3f( 0.223051, 0.880973, -0.417295 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.105898, -2.447070, 0.128604);
		glVertex3f( 0.128043, -2.478001, 0.075142);
		glVertex3f( 0.073749, -2.447070, 0.111420);
	glEnd();

	glNormal3f( 0.137444, 0.956550, -0.257140 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.128043, -2.478001, 0.075142);
		glVertex3f( 0.152072, -2.497048, 0.017132);
		glVertex3f( 0.105898, -2.478001, 0.063305);
	glEnd();

	glNormal3f( 0.469148, 0.097550, -0.877715 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.048972, -2.168769, 0.266036);
		glVertex3f( 0.051433, -2.234067, 0.260094);
		glVertex3f( -0.008895, -2.168769, 0.235105);
	glEnd();

	glNormal3f( 0.299913, -0.771505, -0.561099 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.105898, -1.890467, 0.128604);
		glVertex3f( 0.086488, -1.932093, 0.175464);
		glVertex3f( 0.073749, -1.890467, 0.111420);
	glEnd();

	glNormal3f( 0.046426, 0.995139, -0.086853 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.152072, -2.497048, 0.017132);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.140782, -2.497048, 0.011098);
	glEnd();

	glNormal3f( 0.451281, 0.289004, -0.844288 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.051433, -2.234067, 0.260094);
		glVertex3f( 0.058722, -2.296857, 0.242497);
		glVertex3f( -0.005322, -2.234067, 0.229758);
	glEnd();

	glNormal3f( 0.416180, 0.469631, -0.778615 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.058722, -2.296857, 0.242497);
		glVertex3f( 0.070559, -2.354724, 0.213921);
		glVertex3f( 0.005260, -2.296857, 0.213921);
	glEnd();

	glNormal3f( 0.365101, -0.632563, -0.683056 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.086488, -1.932093, 0.175464);
		glVertex3f( 0.070559, -1.982813, 0.213921);
		glVertex3f( 0.045570, -1.932093, 0.153593);
	glEnd();

	glNormal3f( 0.365101, 0.632561, -0.683057 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.070559, -2.354724, 0.213921);
		glVertex3f( 0.086488, -2.405445, 0.175464);
		glVertex3f( 0.045570, -2.405445, 0.153593);
	glEnd();

	glNormal3f( 0.416180, -0.469628, -0.778617 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.070559, -1.982813, 0.213921);
		glVertex3f( 0.058722, -2.040681, 0.242497);
		glVertex3f( 0.022444, -1.982813, 0.188203);
	glEnd();

	glNormal3f( 0.451280, -0.289004, -0.844288 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.058722, -2.040681, 0.242497);
		glVertex3f( 0.051433, -2.103470, 0.260094);
		glVertex3f( 0.005260, -2.040681, 0.213921);
	glEnd();

	glNormal3f( 0.046426, -0.995138, -0.086860 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.152072, -1.840490, 0.017132);
		glVertex3f( 0.140782, -1.840490, 0.011098);
	glEnd();

	glNormal3f( 0.299914, 0.771508, -0.561094 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.086488, -2.405445, 0.175464);
		glVertex3f( 0.105898, -2.447070, 0.128604);
		glVertex3f( 0.045570, -2.405445, 0.153593);
	glEnd();

	glNormal3f( 0.469148, -0.097549, -0.877716 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.051433, -2.103470, 0.260094);
		glVertex3f( 0.048972, -2.168769, 0.266036);
		glVertex3f( -0.005322, -2.103470, 0.229758);
	glEnd();

	glNormal3f( 0.403615, 0.771506, -0.491806 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.045570, -2.405445, 0.153593);
		glVertex3f( 0.073749, -2.447070, 0.111420);
		glVertex3f( 0.009705, -2.405445, 0.124159);
	glEnd();

	glNormal3f( 0.607322, -0.289005, -0.740024 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.005260, -2.040681, 0.213921);
		glVertex3f( -0.005322, -2.103470, 0.229758);
		glVertex3f( -0.041600, -2.040681, 0.175464);
	glEnd();

	glNormal3f( 0.631367, -0.097549, -0.769324 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.005322, -2.103470, 0.229758);
		glVertex3f( -0.008895, -2.168769, 0.235105);
		glVertex3f( -0.055068, -2.103470, 0.188932);
	glEnd();

	glNormal3f( 0.184971, -0.956549, -0.225389 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.140782, -1.840490, 0.011098);
		glVertex3f( 0.105898, -1.859537, 0.063305);
		glVertex3f( 0.130887, -1.840490, 0.002977);
	glEnd();

	glNormal3f( 0.300176, 0.880971, -0.365765 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.073749, -2.447070, 0.111420);
		glVertex3f( 0.105898, -2.478001, 0.063305);
		glVertex3f( 0.045570, -2.447070, 0.088294);
	glEnd();

	glNormal3f( 0.631368, 0.097550, -0.769324 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.008895, -2.168769, 0.235105);
		glVertex3f( -0.005322, -2.234067, 0.229758);
		glVertex3f( -0.059616, -2.168769, 0.193480);
	glEnd();

	glNormal3f( 0.300174, -0.880972, -0.365764 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.105898, -1.859537, 0.063305);
		glVertex3f( 0.073749, -1.890467, 0.111420);
		glVertex3f( 0.086488, -1.859537, 0.047376);
	glEnd();

	glNormal3f( 0.403616, -0.771505, -0.491807 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.073749, -1.890467, 0.111420);
		glVertex3f( 0.045570, -1.932093, 0.153593);
		glVertex3f( 0.045570, -1.890467, 0.088294);
	glEnd();

	glNormal3f( 0.184969, 0.956551, -0.225382 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.105898, -2.478001, 0.063305);
		glVertex3f( 0.140782, -2.497048, 0.011098);
		glVertex3f( 0.086488, -2.478001, 0.047376);
	glEnd();

	glNormal3f( 0.062479, 0.995138, -0.076134 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.140782, -2.497048, 0.011098);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.130887, -2.497048, 0.002977);
	glEnd();

	glNormal3f( 0.607321, 0.289003, -0.740026 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.005322, -2.234067, 0.229758);
		glVertex3f( 0.005260, -2.296857, 0.213921);
		glVertex3f( -0.055068, -2.234067, 0.188932);
	glEnd();

	glNormal3f( 0.491343, -0.632562, -0.598705 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.045570, -1.932093, 0.153593);
		glVertex3f( 0.022444, -1.982813, 0.188203);
		glVertex3f( 0.009705, -1.932093, 0.124159);
	glEnd();

	glNormal3f( 0.560083, 0.469629, -0.682463 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.005260, -2.296857, 0.213921);
		glVertex3f( 0.022444, -2.354724, 0.188203);
		glVertex3f( -0.041600, -2.296857, 0.175464);
	glEnd();

	glNormal3f( 0.491344, 0.632562, -0.598704 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.022444, -2.354724, 0.188203);
		glVertex3f( 0.045570, -2.405445, 0.153593);
		glVertex3f( -0.019729, -2.354724, 0.153593);
	glEnd();

	glNormal3f( 0.560083, -0.469627, -0.682464 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.022444, -1.982813, 0.188203);
		glVertex3f( 0.005260, -2.040681, 0.213921);
		glVertex3f( -0.019729, -1.982813, 0.153593);
	glEnd();

	glNormal3f( 0.062479, -0.995139, -0.076125 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.140782, -1.840490, 0.011098);
		glVertex3f( 0.130887, -1.840490, 0.002977);
	glEnd();

	glNormal3f( 0.682464, -0.469628, -0.560083 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.019729, -1.982813, 0.153593);
		glVertex3f( -0.041600, -2.040681, 0.175464);
		glVertex3f( -0.054339, -1.982813, 0.111420);
	glEnd();

	glNormal3f( 0.076131, -0.995139, -0.062477 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.130887, -1.840490, 0.002977);
		glVertex3f( 0.122766, -1.840490, -0.006918);
	glEnd();

	glNormal3f( 0.598705, 0.632563, -0.491342 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.019729, -2.354724, 0.153593);
		glVertex3f( 0.009705, -2.405445, 0.124159);
		glVertex3f( -0.054339, -2.354724, 0.111420);
	glEnd();

	glNormal3f( 0.491807, 0.771508, -0.403610 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.009705, -2.405445, 0.124159);
		glVertex3f( 0.045570, -2.447070, 0.088294);
		glVertex3f( -0.019729, -2.405445, 0.088294);
	glEnd();

	glNormal3f( 0.740025, -0.289004, -0.607321 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.041600, -2.040681, 0.175464);
		glVertex3f( -0.055068, -2.103470, 0.188932);
		glVertex3f( -0.080057, -2.040681, 0.128604);
	glEnd();

	glNormal3f( 0.225388, -0.956548, -0.184974 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.130887, -1.840490, 0.002977);
		glVertex3f( 0.086488, -1.859537, 0.047376);
		glVertex3f( 0.122766, -1.840490, -0.006918);
	glEnd();

	glNormal3f( 0.365765, 0.880970, -0.300179 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.045570, -2.447070, 0.088294);
		glVertex3f( 0.086488, -2.478001, 0.047376);
		glVertex3f( 0.022444, -2.447070, 0.060115);
	glEnd();

	glNormal3f( 0.769324, -0.097549, -0.631367 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055068, -2.103470, 0.188932);
		glVertex3f( -0.059616, -2.168769, 0.193480);
		glVertex3f( -0.095894, -2.103470, 0.139186);
	glEnd();

	glNormal3f( 0.769325, 0.097550, -0.631367 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.059616, -2.168769, 0.193480);
		glVertex3f( -0.055068, -2.234067, 0.188932);
		glVertex3f( -0.101241, -2.168769, 0.142759);
	glEnd();

	glNormal3f( 0.365763, -0.880972, -0.300175 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.086488, -1.859537, 0.047376);
		glVertex3f( 0.045570, -1.890467, 0.088294);
		glVertex3f( 0.070559, -1.859537, 0.027966);
	glEnd();

	glNormal3f( 0.225385, 0.956550, -0.184969 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.086488, -2.478001, 0.047376);
		glVertex3f( 0.130887, -2.497048, 0.002977);
		glVertex3f( 0.070559, -2.478001, 0.027966);
	glEnd();

	glNormal3f( 0.740024, 0.289003, -0.607323 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055068, -2.234067, 0.188932);
		glVertex3f( -0.041600, -2.296857, 0.175464);
		glVertex3f( -0.095894, -2.234067, 0.139186);
	glEnd();

	glNormal3f( 0.491807, -0.771505, -0.403616 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.045570, -1.890467, 0.088294);
		glVertex3f( 0.009705, -1.932093, 0.124159);
		glVertex3f( 0.022444, -1.890467, 0.060115);
	glEnd();

	glNormal3f( 0.598704, -0.632563, -0.491342 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.009705, -1.932093, 0.124159);
		glVertex3f( -0.019729, -1.982813, 0.153593);
		glVertex3f( -0.019729, -1.932093, 0.088294);
	glEnd();

	glNormal3f( 0.076131, 0.995137, -0.062498 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.130887, -2.497048, 0.002977);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.122766, -2.497048, -0.006918);
	glEnd();

	glNormal3f( 0.682463, 0.469629, -0.560083 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.041600, -2.296857, 0.175464);
		glVertex3f( -0.019729, -2.354724, 0.153593);
		glVertex3f( -0.054339, -2.354724, 0.111420);
	glEnd();

	glNormal3f( 0.086857, 0.995139, -0.046415 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.122766, -2.497048, -0.006918);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.116732, -2.497048, -0.018207);
	glEnd();

	glNormal3f( 0.778616, 0.469629, -0.416179 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.080057, -2.296857, 0.128604);
		glVertex3f( -0.054339, -2.354724, 0.111420);
		glVertex3f( -0.080057, -2.354724, 0.063305);
	glEnd();

	glNormal3f( 0.683056, -0.632563, -0.365102 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.019729, -1.932093, 0.088294);
		glVertex3f( -0.054339, -1.982813, 0.111420);
		glVertex3f( -0.041600, -1.932093, 0.047376);
	glEnd();

	glNormal3f( 0.778617, -0.469628, -0.416178 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.054339, -1.982813, 0.111420);
		glVertex3f( -0.080057, -2.040681, 0.128604);
		glVertex3f( -0.080057, -1.982813, 0.063305);
	glEnd();

	glNormal3f( 0.683058, 0.632563, -0.365098 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.054339, -2.354724, 0.111420);
		glVertex3f( -0.019729, -2.405445, 0.088294);
		glVertex3f( -0.080057, -2.354724, 0.063305);
	glEnd();

	glNormal3f( 0.844288, -0.289005, -0.451280 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.080057, -2.040681, 0.128604);
		glVertex3f( -0.095894, -2.103470, 0.139186);
		glVertex3f( -0.108633, -2.040681, 0.075142);
	glEnd();

	glNormal3f( 0.086857, -0.995138, -0.046434 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.122766, -1.840490, -0.006918);
		glVertex3f( 0.116732, -1.840490, -0.018207);
	glEnd();

	glNormal3f( 0.257143, -0.956550, -0.137437 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.122766, -1.840490, -0.006918);
		glVertex3f( 0.070559, -1.859537, 0.027966);
		glVertex3f( 0.116732, -1.840490, -0.018207);
	glEnd();

	glNormal3f( 0.561098, 0.771507, -0.299910 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.019729, -2.405445, 0.088294);
		glVertex3f( 0.022444, -2.447070, 0.060115);
		glVertex3f( -0.041600, -2.405445, 0.047376);
	glEnd();

	glNormal3f( 0.417299, 0.880971, -0.223053 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.022444, -2.447070, 0.060115);
		glVertex3f( 0.070559, -2.478001, 0.027966);
		glVertex3f( 0.005260, -2.447070, 0.027966);
	glEnd();

	glNormal3f( 0.877715, -0.097549, -0.469149 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.095894, -2.103470, 0.139186);
		glVertex3f( -0.101241, -2.168769, 0.142759);
		glVertex3f( -0.126230, -2.103470, 0.082431);
	glEnd();

	glNormal3f( 0.417296, -0.880972, -0.223052 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.070559, -1.859537, 0.027966);
		glVertex3f( 0.022444, -1.890467, 0.060115);
		glVertex3f( 0.058722, -1.859537, 0.005821);
	glEnd();

	glNormal3f( 0.257140, 0.956549, -0.137452 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.070559, -2.478001, 0.027966);
		glVertex3f( 0.122766, -2.497048, -0.006918);
		glVertex3f( 0.058722, -2.478001, 0.005821);
	glEnd();

	glNormal3f( 0.877716, 0.097550, -0.469147 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.101241, -2.168769, 0.142759);
		glVertex3f( -0.095894, -2.234067, 0.139186);
		glVertex3f( -0.132172, -2.168769, 0.084892);
	glEnd();

	glNormal3f( 0.844288, 0.289004, -0.451282 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.095894, -2.234067, 0.139186);
		glVertex3f( -0.080057, -2.296857, 0.128604);
		glVertex3f( -0.126230, -2.234067, 0.082431);
	glEnd();

	glNormal3f( 0.561099, -0.771505, -0.299912 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.022444, -1.890467, 0.060115);
		glVertex3f( -0.019729, -1.932093, 0.088294);
		glVertex3f( 0.005260, -1.890467, 0.027966);
	glEnd();

	glNormal3f( 0.952376, 0.097549, -0.288901 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.132172, -2.168769, 0.084892);
		glVertex3f( -0.126230, -2.234067, 0.082431);
		glVertex3f( -0.151219, -2.168769, 0.022103);
	glEnd();

	glNormal3f( 0.608827, -0.771506, -0.184685 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.005260, -1.890467, 0.027966);
		glVertex3f( -0.041600, -1.932093, 0.047376);
		glVertex3f( -0.005322, -1.890467, -0.006918);
	glEnd();

	glNormal3f( 0.094245, 0.995139, -0.028586 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.116732, -2.497048, -0.018207);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.113016, -2.497048, -0.030457);
	glEnd();

	glNormal3f( 0.916105, 0.289003, -0.277899 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.126230, -2.234067, 0.082431);
		glVertex3f( -0.108633, -2.296857, 0.075142);
		glVertex3f( -0.144911, -2.234067, 0.020848);
	glEnd();

	glNormal3f( 0.844848, 0.469630, -0.256280 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.108633, -2.296857, 0.075142);
		glVertex3f( -0.080057, -2.354724, 0.063305);
		glVertex3f( -0.126230, -2.296857, 0.017132);
	glEnd();

	glNormal3f( 0.741159, -0.632563, -0.224829 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.041600, -1.932093, 0.047376);
		glVertex3f( -0.080057, -1.982813, 0.063305);
		glVertex3f( -0.055068, -1.932093, 0.002977);
	glEnd();

	glNormal3f( 0.741160, 0.632562, -0.224829 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.080057, -2.354724, 0.063305);
		glVertex3f( -0.041600, -2.405445, 0.047376);
		glVertex3f( -0.095894, -2.354724, 0.011098);
	glEnd();

	glNormal3f( 0.844849, -0.469628, -0.256281 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.080057, -1.982813, 0.063305);
		glVertex3f( -0.108633, -2.040681, 0.075142);
		glVertex3f( -0.095894, -1.982813, 0.011098);
	glEnd();

	glNormal3f( 0.916106, -0.289004, -0.277898 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.108633, -2.040681, 0.075142);
		glVertex3f( -0.126230, -2.103470, 0.082431);
		glVertex3f( -0.126230, -2.040681, 0.017132);
	glEnd();

	glNormal3f( 0.094246, -0.995138, -0.028589 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.116732, -1.840490, -0.018207);
		glVertex3f( 0.113016, -1.840490, -0.030457);
	glEnd();

	glNormal3f( 0.608827, 0.771506, -0.184682 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.041600, -2.405445, 0.047376);
		glVertex3f( 0.005260, -2.447070, 0.027966);
		glVertex3f( -0.055068, -2.405445, 0.002977);
	glEnd();

	glNormal3f( 0.952376, -0.097550, -0.288900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.126230, -2.103470, 0.082431);
		glVertex3f( -0.132172, -2.168769, 0.084892);
		glVertex3f( -0.144911, -2.103470, 0.020848);
	glEnd();

	glNormal3f( 0.279016, -0.956549, -0.084635 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.116732, -1.840490, -0.018207);
		glVertex3f( 0.058722, -1.859537, 0.005821);
		glVertex3f( 0.113016, -1.840490, -0.030457);
	glEnd();

	glNormal3f( 0.452793, -0.880973, -0.137351 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.058722, -1.859537, 0.005821);
		glVertex3f( 0.005260, -1.890467, 0.027966);
		glVertex3f( 0.051433, -1.859537, -0.018207);
	glEnd();

	glNormal3f( 0.452795, 0.880971, -0.137357 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.005260, -2.447070, 0.027966);
		glVertex3f( 0.058722, -2.478001, 0.005821);
		glVertex3f( -0.005322, -2.447070, -0.006918);
	glEnd();

	glNormal3f( 0.279013, 0.956550, -0.084643 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.058722, -2.478001, 0.005821);
		glVertex3f( 0.116732, -2.497048, -0.018207);
		glVertex3f( 0.051433, -2.478001, -0.018207);
	glEnd();

	glNormal3f( 0.470892, 0.880971, -0.046374 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.005322, -2.447070, -0.006918);
		glVertex3f( 0.051433, -2.478001, -0.018207);
		glVertex3f( -0.008895, -2.447070, -0.043196);
	glEnd();

	glNormal3f( 0.990438, 0.097549, -0.097550 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.151219, -2.168769, 0.022103);
		glVertex3f( -0.144911, -2.234067, 0.020848);
		glVertex3f( -0.157650, -2.168769, -0.043196);
	glEnd();

	glNormal3f( 0.470889, -0.880973, -0.046376 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.051433, -1.859537, -0.018207);
		glVertex3f( -0.005322, -1.890467, -0.006918);
		glVertex3f( 0.048972, -1.859537, -0.043196);
	glEnd();

	glNormal3f( 0.633159, -0.771505, -0.062360 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.005322, -1.890467, -0.006918);
		glVertex3f( -0.055068, -1.932093, 0.002977);
		glVertex3f( -0.008895, -1.890467, -0.043196);
	glEnd();

	glNormal3f( 0.290164, 0.956550, -0.028578 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.051433, -2.478001, -0.018207);
		glVertex3f( 0.113016, -2.497048, -0.030457);
		glVertex3f( 0.048972, -2.478001, -0.043196);
	glEnd();

	glNormal3f( 0.098012, 0.995139, -0.009643 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.113016, -2.497048, -0.030457);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.111762, -2.497048, -0.043196);
	glEnd();

	glNormal3f( 0.952718, 0.289004, -0.093833 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.144911, -2.234067, 0.020848);
		glVertex3f( -0.126230, -2.296857, 0.017132);
		glVertex3f( -0.151219, -2.234067, -0.043196);
	glEnd();

	glNormal3f( 0.770780, -0.632563, -0.075916 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055068, -1.932093, 0.002977);
		glVertex3f( -0.095894, -1.982813, 0.011098);
		glVertex3f( -0.059616, -1.932093, -0.043196);
	glEnd();

	glNormal3f( 0.878612, 0.469630, -0.086535 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.126230, -2.296857, 0.017132);
		glVertex3f( -0.095894, -2.354724, 0.011098);
		glVertex3f( -0.132172, -2.296857, -0.043196);
	glEnd();

	glNormal3f( 0.770780, 0.632562, -0.075914 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.095894, -2.354724, 0.011098);
		glVertex3f( -0.055068, -2.405445, 0.002977);
		glVertex3f( -0.101241, -2.354724, -0.043196);
	glEnd();

	glNormal3f( 0.878613, -0.469628, -0.086537 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.095894, -1.982813, 0.011098);
		glVertex3f( -0.126230, -2.040681, 0.017132);
		glVertex3f( -0.101241, -1.982813, -0.043196);
	glEnd();

	glNormal3f( 0.098012, -0.995138, -0.009645 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.113016, -1.840490, -0.030457);
		glVertex3f( 0.111762, -1.840490, -0.043196);
	glEnd();

	glNormal3f( 0.633159, 0.771506, -0.062358 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055068, -2.405445, 0.002977);
		glVertex3f( -0.005322, -2.447070, -0.006918);
		glVertex3f( -0.059616, -2.405445, -0.043196);
	glEnd();

	glNormal3f( 0.952718, -0.289004, -0.093835 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.126230, -2.040681, 0.017132);
		glVertex3f( -0.144911, -2.103470, 0.020848);
		glVertex3f( -0.132172, -2.040681, -0.043196);
	glEnd();

	glNormal3f( 0.990438, -0.097549, -0.097549 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.144911, -2.103470, 0.020848);
		glVertex3f( -0.151219, -2.168769, 0.022103);
		glVertex3f( -0.151219, -2.103470, -0.043196);
	glEnd();

	glNormal3f( 0.290167, -0.956549, -0.028576 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.113016, -1.840490, -0.030457);
		glVertex3f( 0.051433, -1.859537, -0.018207);
		glVertex3f( 0.111762, -1.840490, -0.043196);
	glEnd();

	glNormal3f( 0.633158, 0.771506, 0.062363 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.059616, -2.405445, -0.043196);
		glVertex3f( -0.008895, -2.447070, -0.043196);
		glVertex3f( -0.055068, -2.405445, -0.089369);
	glEnd();

	glNormal3f( 0.952718, -0.289004, 0.093834 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.132172, -2.040681, -0.043196);
		glVertex3f( -0.151219, -2.103470, -0.043196);
		glVertex3f( -0.126230, -2.040681, -0.103524);
	glEnd();

	glNormal3f( 0.290167, -0.956549, 0.028575 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.111762, -1.840490, -0.043196);
		glVertex3f( 0.048972, -1.859537, -0.043196);
		glVertex3f( 0.113016, -1.840490, -0.055935);
	glEnd();

	glNormal3f( 0.470892, 0.880971, 0.046376 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.008895, -2.447070, -0.043196);
		glVertex3f( 0.048972, -2.478001, -0.043196);
		glVertex3f( -0.005322, -2.447070, -0.079474);
	glEnd();

	glNormal3f( 0.990438, -0.097549, 0.097550 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.151219, -2.103470, -0.043196);
		glVertex3f( -0.157650, -2.168769, -0.043196);
		glVertex3f( -0.144911, -2.103470, -0.107240);
	glEnd();

	glNormal3f( 0.990438, 0.097549, 0.097550 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.157650, -2.168769, -0.043196);
		glVertex3f( -0.151219, -2.234067, -0.043196);
		glVertex3f( -0.151219, -2.168769, -0.108495);
	glEnd();

	glNormal3f( 0.470889, -0.880973, 0.046380 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.048972, -1.859537, -0.043196);
		glVertex3f( -0.008895, -1.890467, -0.043196);
		glVertex3f( 0.051433, -1.859537, -0.068185);
	glEnd();

	glNormal3f( 0.290164, 0.956550, 0.028585 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.048972, -2.478001, -0.043196);
		glVertex3f( 0.111762, -2.497048, -0.043196);
		glVertex3f( 0.051433, -2.478001, -0.068185);
	glEnd();

	glNormal3f( 0.952718, 0.289003, 0.093835 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.151219, -2.234067, -0.043196);
		glVertex3f( -0.132172, -2.296857, -0.043196);
		glVertex3f( -0.144911, -2.234067, -0.107240);
	glEnd();

	glNormal3f( 0.633159, -0.771505, 0.062359 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.008895, -1.890467, -0.043196);
		glVertex3f( -0.059616, -1.932093, -0.043196);
		glVertex3f( -0.005322, -1.890467, -0.079474);
	glEnd();

	glNormal3f( 0.770779, -0.632563, 0.075916 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.059616, -1.932093, -0.043196);
		glVertex3f( -0.101241, -1.982813, -0.043196);
		glVertex3f( -0.055068, -1.932093, -0.089369);
	glEnd();

	glNormal3f( 0.098012, 0.995138, 0.009651 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.111762, -2.497048, -0.043196);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.113016, -2.497048, -0.055935);
	glEnd();

	glNormal3f( 0.878612, 0.469629, 0.086537 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.132172, -2.296857, -0.043196);
		glVertex3f( -0.101241, -2.354724, -0.043196);
		glVertex3f( -0.126230, -2.296857, -0.103524);
	glEnd();

	glNormal3f( 0.878613, -0.469628, 0.086536 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.101241, -1.982813, -0.043196);
		glVertex3f( -0.132172, -2.040681, -0.043196);
		glVertex3f( -0.095894, -1.982813, -0.097490);
	glEnd();

	glNormal3f( 0.098012, -0.995138, 0.009651 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.111762, -1.840490, -0.043196);
		glVertex3f( 0.113016, -1.840490, -0.055935);
	glEnd();

	glNormal3f( 0.770780, 0.632562, 0.075915 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.101241, -2.354724, -0.043196);
		glVertex3f( -0.059616, -2.405445, -0.043196);
		glVertex3f( -0.095894, -2.354724, -0.097490);
	glEnd();

	glNormal3f( 0.844849, -0.469628, 0.256280 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.095894, -1.982813, -0.097490);
		glVertex3f( -0.126230, -2.040681, -0.103524);
		glVertex3f( -0.080057, -1.982813, -0.149698);
	glEnd();

	glNormal3f( 0.741160, 0.632562, 0.224828 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.095894, -2.354724, -0.097490);
		glVertex3f( -0.055068, -2.405445, -0.089369);
		glVertex3f( -0.080057, -2.354724, -0.149698);
	glEnd();

	glNormal3f( 0.916106, -0.289005, 0.277896 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.126230, -2.040681, -0.103524);
		glVertex3f( -0.144911, -2.103470, -0.107240);
		glVertex3f( -0.108633, -2.040681, -0.161534);
	glEnd();

	glNormal3f( 0.094246, -0.995138, 0.028595 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.113016, -1.840490, -0.055935);
		glVertex3f( 0.116732, -1.840490, -0.068185);
	glEnd();

	glNormal3f( 0.279016, -0.956550, 0.084634 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.113016, -1.840490, -0.055935);
		glVertex3f( 0.051433, -1.859537, -0.068185);
		glVertex3f( 0.116732, -1.840490, -0.068185);
	glEnd();

	glNormal3f( 0.608826, 0.771506, 0.184687 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055068, -2.405445, -0.089369);
		glVertex3f( -0.005322, -2.447070, -0.079474);
		glVertex3f( -0.041600, -2.405445, -0.133768);
	glEnd();

	glNormal3f( 0.452796, 0.880971, 0.137355 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.005322, -2.447070, -0.079474);
		glVertex3f( 0.051433, -2.478001, -0.068185);
		glVertex3f( 0.005260, -2.447070, -0.114358);
	glEnd();

	glNormal3f( 0.952376, -0.097549, 0.288900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.144911, -2.103470, -0.107240);
		glVertex3f( -0.151219, -2.168769, -0.108495);
		glVertex3f( -0.126230, -2.103470, -0.168823);
	glEnd();

	glNormal3f( 0.452793, -0.880973, 0.137351 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.051433, -1.859537, -0.068185);
		glVertex3f( -0.005322, -1.890467, -0.079474);
		glVertex3f( 0.058722, -1.859537, -0.092213);
	glEnd();

	glNormal3f( 0.279013, 0.956550, 0.084641 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.051433, -2.478001, -0.068185);
		glVertex3f( 0.113016, -2.497048, -0.055935);
		glVertex3f( 0.058722, -2.478001, -0.092213);
	glEnd();

	glNormal3f( 0.952376, 0.097549, 0.288900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.151219, -2.168769, -0.108495);
		glVertex3f( -0.144911, -2.234067, -0.107240);
		glVertex3f( -0.132172, -2.168769, -0.171284);
	glEnd();

	glNormal3f( 0.916106, 0.289003, 0.277898 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.144911, -2.234067, -0.107240);
		glVertex3f( -0.126230, -2.296857, -0.103524);
		glVertex3f( -0.126230, -2.234067, -0.168823);
	glEnd();

	glNormal3f( 0.608827, -0.771505, 0.184685 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.005322, -1.890467, -0.079474);
		glVertex3f( -0.055068, -1.932093, -0.089369);
		glVertex3f( 0.005260, -1.890467, -0.114358);
	glEnd();

	glNormal3f( 0.094245, 0.995139, 0.028580 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.113016, -2.497048, -0.055935);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.116732, -2.497048, -0.068185);
	glEnd();

	glNormal3f( 0.844848, 0.469629, 0.256282 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.126230, -2.296857, -0.103524);
		glVertex3f( -0.095894, -2.354724, -0.097490);
		glVertex3f( -0.108633, -2.296857, -0.161534);
	glEnd();

	glNormal3f( 0.741159, -0.632563, 0.224829 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055068, -1.932093, -0.089369);
		glVertex3f( -0.095894, -1.982813, -0.097490);
		glVertex3f( -0.041600, -1.932093, -0.133768);
	glEnd();

	glNormal3f( 0.086857, 0.995138, 0.046437 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.116732, -2.497048, -0.068185);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.122766, -2.497048, -0.079474);
	glEnd();

	glNormal3f( 0.844288, 0.289003, 0.451282 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.126230, -2.234067, -0.168823);
		glVertex3f( -0.108633, -2.296857, -0.161534);
		glVertex3f( -0.095894, -2.234067, -0.225578);
	glEnd();

	glNormal3f( 0.778616, 0.469629, 0.416179 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.108633, -2.296857, -0.161534);
		glVertex3f( -0.080057, -2.354724, -0.149698);
		glVertex3f( -0.054339, -2.354724, -0.197812);
	glEnd();

	glNormal3f( 0.683056, -0.632563, 0.365101 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.041600, -1.932093, -0.133768);
		glVertex3f( -0.080057, -1.982813, -0.149698);
		glVertex3f( -0.019729, -1.932093, -0.174686);
	glEnd();

	glNormal3f( 0.683056, 0.632562, 0.365102 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.080057, -2.354724, -0.149698);
		glVertex3f( -0.041600, -2.405445, -0.133768);
		glVertex3f( -0.054339, -2.354724, -0.197812);
	glEnd();

	glNormal3f( 0.778616, -0.469627, 0.416182 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.080057, -1.982813, -0.149698);
		glVertex3f( -0.108633, -2.040681, -0.161534);
		glVertex3f( -0.054339, -1.982813, -0.197812);
	glEnd();

	glNormal3f( 0.844287, -0.289004, 0.451283 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.108633, -2.040681, -0.161534);
		glVertex3f( -0.126230, -2.103470, -0.168823);
		glVertex3f( -0.080057, -2.040681, -0.214996);
	glEnd();

	glNormal3f( 0.086857, -0.995139, 0.046420 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.116732, -1.840490, -0.068185);
		glVertex3f( 0.122766, -1.840490, -0.079474);
	glEnd();

	glNormal3f( 0.561098, 0.771506, 0.299913 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.041600, -2.405445, -0.133768);
		glVertex3f( 0.005260, -2.447070, -0.114358);
		glVertex3f( -0.019729, -2.405445, -0.174686);
	glEnd();

	glNormal3f( 0.877715, -0.097549, 0.469149 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.126230, -2.103470, -0.168823);
		glVertex3f( -0.132172, -2.168769, -0.171284);
		glVertex3f( -0.095894, -2.103470, -0.225578);
	glEnd();

	glNormal3f( 0.257143, -0.956550, 0.137441 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.116732, -1.840490, -0.068185);
		glVertex3f( 0.058722, -1.859537, -0.092213);
		glVertex3f( 0.122766, -1.840490, -0.079474);
	glEnd();

	glNormal3f( 0.417296, -0.880972, 0.223053 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.058722, -1.859537, -0.092213);
		glVertex3f( 0.005260, -1.890467, -0.114358);
		glVertex3f( 0.070559, -1.859537, -0.114358);
	glEnd();

	glNormal3f( 0.417299, 0.880971, 0.223049 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.005260, -2.447070, -0.114358);
		glVertex3f( 0.058722, -2.478001, -0.092213);
		glVertex3f( 0.022444, -2.447070, -0.146507);
	glEnd();

	glNormal3f( 0.257140, 0.956550, 0.137445 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.058722, -2.478001, -0.092213);
		glVertex3f( 0.116732, -2.497048, -0.068185);
		glVertex3f( 0.070559, -2.478001, -0.114358);
	glEnd();

	glNormal3f( 0.877716, 0.097549, 0.469148 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.132172, -2.168769, -0.171284);
		glVertex3f( -0.126230, -2.234067, -0.168823);
		glVertex3f( -0.101241, -2.168769, -0.229151);
	glEnd();

	glNormal3f( 0.561098, -0.771505, 0.299916 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.005260, -1.890467, -0.114358);
		glVertex3f( -0.041600, -1.932093, -0.133768);
		glVertex3f( 0.022444, -1.890467, -0.146507);
	glEnd();

	glNormal3f( 0.365763, -0.880973, 0.300173 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.070559, -1.859537, -0.114358);
		glVertex3f( 0.022444, -1.890467, -0.146507);
		glVertex3f( 0.086488, -1.859537, -0.133768);
	glEnd();

	glNormal3f( 0.491807, -0.771505, 0.403617 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.022444, -1.890467, -0.146507);
		glVertex3f( -0.019729, -1.932093, -0.174686);
		glVertex3f( 0.045570, -1.890467, -0.174686);
	glEnd();

	glNormal3f( 0.225385, 0.956550, 0.184970 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.070559, -2.478001, -0.114358);
		glVertex3f( 0.122766, -2.497048, -0.079474);
		glVertex3f( 0.086488, -2.478001, -0.133768);
	glEnd();

	glNormal3f( 0.076131, 0.995138, 0.062481 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.122766, -2.497048, -0.079474);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.130887, -2.497048, -0.089369);
	glEnd();

	glNormal3f( 0.740024, 0.289003, 0.607323 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.095894, -2.234067, -0.225578);
		glVertex3f( -0.080057, -2.296857, -0.214996);
		glVertex3f( -0.055068, -2.234067, -0.275324);
	glEnd();

	glNormal3f( 0.598703, -0.632563, 0.491344 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.019729, -1.932093, -0.174686);
		glVertex3f( -0.054339, -1.982813, -0.197812);
		glVertex3f( 0.009705, -1.932093, -0.210551);
	glEnd();

	glNormal3f( 0.682462, 0.469629, 0.560084 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.080057, -2.296857, -0.214996);
		glVertex3f( -0.054339, -2.354724, -0.197812);
		glVertex3f( -0.041600, -2.296857, -0.261856);
	glEnd();

	glNormal3f( 0.598705, 0.632562, 0.491343 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.054339, -2.354724, -0.197812);
		glVertex3f( -0.019729, -2.405445, -0.174686);
		glVertex3f( -0.019729, -2.354724, -0.239985);
	glEnd();

	glNormal3f( 0.682464, -0.469628, 0.560083 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.054339, -1.982813, -0.197812);
		glVertex3f( -0.080057, -2.040681, -0.214996);
		glVertex3f( -0.019729, -1.982813, -0.239985);
	glEnd();

	glNormal3f( 0.076131, -0.995139, 0.062474 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.122766, -1.840490, -0.079474);
		glVertex3f( 0.130887, -1.840490, -0.089369);
	glEnd();

	glNormal3f( 0.491807, 0.771507, 0.403613 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.019729, -2.405445, -0.174686);
		glVertex3f( 0.022444, -2.447070, -0.146507);
		glVertex3f( 0.009705, -2.405445, -0.210551);
	glEnd();

	glNormal3f( 0.740025, -0.289005, 0.607321 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.080057, -2.040681, -0.214996);
		glVertex3f( -0.095894, -2.103470, -0.225578);
		glVertex3f( -0.041600, -2.040681, -0.261856);
	glEnd();

	glNormal3f( 0.769324, -0.097549, 0.631367 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.095894, -2.103470, -0.225578);
		glVertex3f( -0.101241, -2.168769, -0.229151);
		glVertex3f( -0.055068, -2.103470, -0.275324);
	glEnd();

	glNormal3f( 0.225388, -0.956550, 0.184964 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.122766, -1.840490, -0.079474);
		glVertex3f( 0.070559, -1.859537, -0.114358);
		glVertex3f( 0.130887, -1.840490, -0.089369);
	glEnd();

	glNormal3f( 0.365765, 0.880971, 0.300177 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.022444, -2.447070, -0.146507);
		glVertex3f( 0.070559, -2.478001, -0.114358);
		glVertex3f( 0.045570, -2.447070, -0.174686);
	glEnd();

	glNormal3f( 0.769324, 0.097549, 0.631368 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.101241, -2.168769, -0.229151);
		glVertex3f( -0.095894, -2.234067, -0.225578);
		glVertex3f( -0.059616, -2.168769, -0.279872);
	glEnd();

	glNormal3f( 0.300176, 0.880972, 0.365762 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.045570, -2.447070, -0.174686);
		glVertex3f( 0.086488, -2.478001, -0.133768);
		glVertex3f( 0.073749, -2.447070, -0.197812);
	glEnd();

	glNormal3f( 0.631367, -0.097549, 0.769324 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055068, -2.103470, -0.275324);
		glVertex3f( -0.059616, -2.168769, -0.279872);
		glVertex3f( -0.005322, -2.103470, -0.316150);
	glEnd();

	glNormal3f( 0.631367, 0.097550, 0.769324 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.059616, -2.168769, -0.279872);
		glVertex3f( -0.055068, -2.234067, -0.275324);
		glVertex3f( -0.008895, -2.168769, -0.321498);
	glEnd();

	glNormal3f( 0.300174, -0.880973, 0.365762 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.086488, -1.859537, -0.133768);
		glVertex3f( 0.045570, -1.890467, -0.174686);
		glVertex3f( 0.105898, -1.859537, -0.149698);
	glEnd();

	glNormal3f( 0.184969, 0.956550, 0.225386 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.086488, -2.478001, -0.133768);
		glVertex3f( 0.130887, -2.497048, -0.089369);
		glVertex3f( 0.105898, -2.478001, -0.149698);
	glEnd();

	glNormal3f( 0.607322, 0.289003, 0.740025 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055068, -2.234067, -0.275324);
		glVertex3f( -0.041600, -2.296857, -0.261856);
		glVertex3f( -0.005322, -2.234067, -0.316150);
	glEnd();

	glNormal3f( 0.403615, -0.771504, 0.491809 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.045570, -1.890467, -0.174686);
		glVertex3f( 0.009705, -1.932093, -0.210551);
		glVertex3f( 0.073749, -1.890467, -0.197812);
	glEnd();

	glNormal3f( 0.491341, -0.632560, 0.598708 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.009705, -1.932093, -0.210551);
		glVertex3f( -0.019729, -1.982813, -0.239985);
		glVertex3f( 0.045570, -1.932093, -0.239985);
	glEnd();

	glNormal3f( 0.062479, 0.995138, 0.076131 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.130887, -2.497048, -0.089369);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.140782, -2.497048, -0.097490);
	glEnd();

	glNormal3f( 0.560083, 0.469629, 0.682463 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.041600, -2.296857, -0.261856);
		glVertex3f( -0.019729, -2.354724, -0.239985);
		glVertex3f( 0.005260, -2.296857, -0.300313);
	glEnd();

	glNormal3f( 0.560084, -0.469628, 0.682463 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.019729, -1.982813, -0.239985);
		glVertex3f( -0.041600, -2.040681, -0.261856);
		glVertex3f( 0.022444, -1.982813, -0.274595);
	glEnd();

	glNormal3f( 0.062479, -0.995138, 0.076140 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.130887, -1.840490, -0.089369);
		glVertex3f( 0.140782, -1.840490, -0.097490);
	glEnd();

	glNormal3f( 0.491344, 0.632562, 0.598704 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.019729, -2.354724, -0.239985);
		glVertex3f( 0.009705, -2.405445, -0.210551);
		glVertex3f( 0.022444, -2.354724, -0.274595);
	glEnd();

	glNormal3f( 0.403615, 0.771506, 0.491805 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.009705, -2.405445, -0.210551);
		glVertex3f( 0.045570, -2.447070, -0.174686);
		glVertex3f( 0.045570, -2.405445, -0.239985);
	glEnd();

	glNormal3f( 0.607322, -0.289004, 0.740025 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.041600, -2.040681, -0.261856);
		glVertex3f( -0.055068, -2.103470, -0.275324);
		glVertex3f( 0.005260, -2.040681, -0.300313);
	glEnd();

	glNormal3f( 0.184971, -0.956550, 0.225383 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.130887, -1.840490, -0.089369);
		glVertex3f( 0.086488, -1.859537, -0.133768);
		glVertex3f( 0.140782, -1.840490, -0.097490);
	glEnd();

	glNormal3f( 0.451281, -0.289004, 0.844288 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.005260, -2.040681, -0.300313);
		glVertex3f( -0.005322, -2.103470, -0.316150);
		glVertex3f( 0.058722, -2.040681, -0.328889);
	glEnd();

	glNormal3f( 0.046426, -0.995139, 0.086856 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.140782, -1.840490, -0.097490);
		glVertex3f( 0.152072, -1.840490, -0.103524);
	glEnd();

	glNormal3f( 0.137445, -0.956547, 0.257152 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.140782, -1.840490, -0.097490);
		glVertex3f( 0.105898, -1.859537, -0.149698);
		glVertex3f( 0.152072, -1.840490, -0.103524);
	glEnd();

	glNormal3f( 0.299913, 0.771506, 0.561098 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.045570, -2.405445, -0.239985);
		glVertex3f( 0.073749, -2.447070, -0.197812);
		glVertex3f( 0.086488, -2.405445, -0.261856);
	glEnd();

	glNormal3f( 0.223051, 0.880971, 0.417299 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.073749, -2.447070, -0.197812);
		glVertex3f( 0.105898, -2.478001, -0.149698);
		glVertex3f( 0.105898, -2.447070, -0.214996);
	glEnd();

	glNormal3f( 0.469147, -0.097549, 0.877716 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.005322, -2.103470, -0.316150);
		glVertex3f( -0.008895, -2.168769, -0.321498);
		glVertex3f( 0.051433, -2.103470, -0.346486);
	glEnd();

	glNormal3f( 0.223050, -0.880973, 0.417295 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.105898, -1.859537, -0.149698);
		glVertex3f( 0.073749, -1.890467, -0.197812);
		glVertex3f( 0.128043, -1.859537, -0.161534);
	glEnd();

	glNormal3f( 0.137444, 0.956551, 0.257136 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.105898, -2.478001, -0.149698);
		glVertex3f( 0.140782, -2.497048, -0.097490);
		glVertex3f( 0.128043, -2.478001, -0.161534);
	glEnd();

	glNormal3f( 0.469149, 0.097550, 0.877715 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.008895, -2.168769, -0.321498);
		glVertex3f( -0.005322, -2.234067, -0.316150);
		glVertex3f( 0.048972, -2.168769, -0.352428);
	glEnd();

	glNormal3f( 0.451281, 0.289003, 0.844288 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.005322, -2.234067, -0.316150);
		glVertex3f( 0.005260, -2.296857, -0.300313);
		glVertex3f( 0.051434, -2.234067, -0.346486);
	glEnd();

	glNormal3f( 0.299913, -0.771505, 0.561099 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.073749, -1.890467, -0.197812);
		glVertex3f( 0.045570, -1.932093, -0.239985);
		glVertex3f( 0.105898, -1.890467, -0.214996);
	glEnd();

	glNormal3f( 0.046426, 0.995138, 0.086863 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.140782, -2.497048, -0.097490);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.152072, -2.497048, -0.103524);
	glEnd();

	glNormal3f( 0.416179, 0.469629, 0.778616 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.005260, -2.296857, -0.300313);
		glVertex3f( 0.022444, -2.354724, -0.274595);
		glVertex3f( 0.058722, -2.296857, -0.328889);
	glEnd();

	glNormal3f( 0.365101, -0.632564, 0.683055 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.045570, -1.932093, -0.239985);
		glVertex3f( 0.022444, -1.982813, -0.274595);
		glVertex3f( 0.086488, -1.932093, -0.261856);
	glEnd();

	glNormal3f( 0.416181, -0.469629, 0.778615 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.022444, -1.982813, -0.274595);
		glVertex3f( 0.005260, -2.040681, -0.300313);
		glVertex3f( 0.070559, -1.982813, -0.300313);
	glEnd();

	glNormal3f( 0.365101, 0.632561, 0.683058 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.022444, -2.354724, -0.274595);
		glVertex3f( 0.045570, -2.405445, -0.239985);
		glVertex3f( 0.070559, -2.354724, -0.300313);
	glEnd();

	glNormal3f( 0.224828, 0.632562, 0.741159 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.070559, -2.354724, -0.300313);
		glVertex3f( 0.086488, -2.405445, -0.261856);
		glVertex3f( 0.122766, -2.354724, -0.316150);
	glEnd();

	glNormal3f( 0.256282, -0.469628, 0.844849 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.070559, -1.982813, -0.300313);
		glVertex3f( 0.058722, -2.040681, -0.328889);
		glVertex3f( 0.122766, -1.982813, -0.316150);
	glEnd();

	glNormal3f( 0.277898, -0.289004, 0.916106 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.058722, -2.040681, -0.328889);
		glVertex3f( 0.051433, -2.103470, -0.346486);
		glVertex3f( 0.116732, -2.040681, -0.346486);
	glEnd();

	glNormal3f( 0.028589, -0.995139, 0.094244 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.152072, -1.840490, -0.103524);
		glVertex3f( 0.164321, -1.840490, -0.107240);
	glEnd();

	glNormal3f( 0.184685, 0.771506, 0.608826 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.086488, -2.405445, -0.261856);
		glVertex3f( 0.105898, -2.447070, -0.214996);
		glVertex3f( 0.130887, -2.405445, -0.275324);
	glEnd();

	glNormal3f( 0.288899, -0.097549, 0.952377 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.051433, -2.103470, -0.346486);
		glVertex3f( 0.048972, -2.168769, -0.352428);
		glVertex3f( 0.113016, -2.103470, -0.365167);
	glEnd();

	glNormal3f( 0.084638, -0.956546, 0.279025 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.152072, -1.840490, -0.103524);
		glVertex3f( 0.128043, -1.859537, -0.161534);
		glVertex3f( 0.164321, -1.840490, -0.107240);
	glEnd();

	glNormal3f( 0.137353, -0.880971, 0.452795 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.128043, -1.859537, -0.161534);
		glVertex3f( 0.105898, -1.890467, -0.214996);
		glVertex3f( 0.152072, -1.859537, -0.168823);
	glEnd();

	glNormal3f( 0.137354, 0.880970, 0.452797 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.105898, -2.447070, -0.214996);
		glVertex3f( 0.128043, -2.478001, -0.161534);
		glVertex3f( 0.140782, -2.447070, -0.225578);
	glEnd();

	glNormal3f( 0.084638, 0.956551, 0.279012 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.128043, -2.478001, -0.161534);
		glVertex3f( 0.152072, -2.497048, -0.103524);
		glVertex3f( 0.152072, -2.478001, -0.168823);
	glEnd();

	glNormal3f( 0.288901, 0.097550, 0.952376 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.048972, -2.168769, -0.352428);
		glVertex3f( 0.051434, -2.234067, -0.346486);
		glVertex3f( 0.111762, -2.168769, -0.371475);
	glEnd();

	glNormal3f( 0.184685, -0.771504, 0.608830 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.105898, -1.890467, -0.214996);
		glVertex3f( 0.086488, -1.932093, -0.261856);
		glVertex3f( 0.140782, -1.890467, -0.225578);
	glEnd();

	glNormal3f( 0.028589, 0.995139, 0.094242 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.152072, -2.497048, -0.103524);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.164321, -2.497048, -0.107240);
	glEnd();

	glNormal3f( 0.277897, 0.289003, 0.916106 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.051434, -2.234067, -0.346486);
		glVertex3f( 0.058722, -2.296857, -0.328889);
		glVertex3f( 0.113016, -2.234067, -0.365167);
	glEnd();

	glNormal3f( 0.256282, 0.469631, 0.844847 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.058722, -2.296857, -0.328889);
		glVertex3f( 0.070559, -2.354724, -0.300313);
		glVertex3f( 0.116732, -2.296857, -0.346486);
	glEnd();

	glNormal3f( 0.224827, -0.632562, 0.741160 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.086488, -1.932093, -0.261856);
		glVertex3f( 0.070559, -1.982813, -0.300313);
		glVertex3f( 0.130887, -1.932093, -0.275324);
	glEnd();

	glNormal3f( 0.093834, 0.289004, 0.952718 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.113016, -2.234067, -0.365167);
		glVertex3f( 0.116732, -2.296857, -0.346486);
		glVertex3f( 0.177060, -2.234067, -0.371475);
	glEnd();

	glNormal3f( 0.075915, -0.632562, 0.770781 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.130887, -1.932093, -0.275324);
		glVertex3f( 0.122766, -1.982813, -0.316150);
		glVertex3f( 0.177060, -1.932093, -0.279872);
	glEnd();

	glNormal3f( 0.086536, 0.469630, 0.878612 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.116732, -2.296857, -0.346486);
		glVertex3f( 0.122766, -2.354724, -0.316150);
		glVertex3f( 0.177060, -2.296857, -0.352428);
	glEnd();

	glNormal3f( 0.075915, 0.632562, 0.770781 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.122766, -2.354724, -0.316150);
		glVertex3f( 0.130887, -2.405445, -0.275324);
		glVertex3f( 0.177060, -2.354724, -0.321498);
	glEnd();

	glNormal3f( 0.086535, -0.469627, 0.878614 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.122766, -1.982813, -0.316150);
		glVertex3f( 0.116732, -2.040681, -0.346486);
		glVertex3f( 0.177060, -1.982813, -0.321498);
	glEnd();

	glNormal3f( 0.009653, -0.995138, 0.098013 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.164321, -1.840490, -0.107240);
		glVertex3f( 0.177060, -1.840490, -0.108495);
	glEnd();

	glNormal3f( 0.062361, 0.771508, 0.633156 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.130887, -2.405445, -0.275324);
		glVertex3f( 0.140782, -2.447070, -0.225578);
		glVertex3f( 0.177060, -2.405445, -0.279872);
	glEnd();

	glNormal3f( 0.093835, -0.289004, 0.952718 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.116732, -2.040681, -0.346486);
		glVertex3f( 0.113016, -2.103470, -0.365167);
		glVertex3f( 0.177060, -2.040681, -0.352428);
	glEnd();

	glNormal3f( 0.097549, -0.097550, 0.990438 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.113016, -2.103470, -0.365167);
		glVertex3f( 0.111762, -2.168769, -0.371475);
		glVertex3f( 0.177060, -2.103470, -0.371475);
	glEnd();

	glNormal3f( 0.028579, -0.956548, 0.290170 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.164321, -1.840490, -0.107240);
		glVertex3f( 0.152072, -1.859537, -0.168823);
		glVertex3f( 0.177060, -1.840490, -0.108495);
	glEnd();

	glNormal3f( 0.046379, 0.880971, 0.470893 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.140782, -2.447070, -0.225578);
		glVertex3f( 0.152072, -2.478001, -0.168823);
		glVertex3f( 0.177060, -2.447070, -0.229151);
	glEnd();

	glNormal3f( 0.097549, 0.097550, 0.990438 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.111762, -2.168769, -0.371475);
		glVertex3f( 0.113016, -2.234067, -0.365167);
		glVertex3f( 0.177060, -2.168769, -0.377906);
	glEnd();

	glNormal3f( 0.046378, -0.880972, 0.470889 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.152072, -1.859537, -0.168823);
		glVertex3f( 0.140782, -1.890467, -0.225578);
		glVertex3f( 0.177060, -1.859537, -0.171284);
	glEnd();

	glNormal3f( 0.062361, -0.771507, 0.633158 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.140782, -1.890467, -0.225578);
		glVertex3f( 0.130887, -1.932093, -0.275324);
		glVertex3f( 0.177060, -1.890467, -0.229151);
	glEnd();

	glNormal3f( 0.028579, 0.956551, 0.290163 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.152072, -2.478001, -0.168823);
		glVertex3f( 0.164321, -2.497048, -0.107240);
		glVertex3f( 0.177060, -2.478001, -0.171284);
	glEnd();

	glNormal3f( 0.009653, 0.995138, 0.098013 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.164321, -2.497048, -0.107240);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.177060, -2.497048, -0.108495);
	glEnd();

	glNormal3f( -0.028579, 0.956550, 0.290163 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.478001, -0.171284);
		glVertex3f( 0.177060, -2.497048, -0.108495);
		glVertex3f( 0.202049, -2.478001, -0.168823);
	glEnd();

	glNormal3f( -0.093835, 0.289004, 0.952718 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.234067, -0.371475);
		glVertex3f( 0.177060, -2.296857, -0.352428);
		glVertex3f( 0.241104, -2.234067, -0.365167);
	glEnd();

	glNormal3f( -0.062361, -0.771505, 0.633160 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.890467, -0.229151);
		glVertex3f( 0.177060, -1.932093, -0.279872);
		glVertex3f( 0.213338, -1.890467, -0.225578);
	glEnd();

	glNormal3f( -0.075916, -0.632562, 0.770781 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.932093, -0.279872);
		glVertex3f( 0.177060, -1.982813, -0.321498);
		glVertex3f( 0.223234, -1.932093, -0.275324);
	glEnd();

	glNormal3f( -0.009653, 0.995138, 0.098013 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.497048, -0.108495);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.189800, -2.497048, -0.107240);
	glEnd();

	glNormal3f( -0.086535, 0.469629, 0.878613 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.296857, -0.352428);
		glVertex3f( 0.177060, -2.354724, -0.321498);
		glVertex3f( 0.237389, -2.296857, -0.346486);
	glEnd();

	glNormal3f( -0.086536, -0.469627, 0.878614 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.982813, -0.321498);
		glVertex3f( 0.177060, -2.040681, -0.352428);
		glVertex3f( 0.231354, -1.982813, -0.316150);
	glEnd();

	glNormal3f( -0.009653, -0.995138, 0.098012 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.177060, -1.840490, -0.108495);
		glVertex3f( 0.189800, -1.840490, -0.107240);
	glEnd();

	glNormal3f( -0.075916, 0.632562, 0.770781 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.354724, -0.321498);
		glVertex3f( 0.177060, -2.405445, -0.279872);
		glVertex3f( 0.223234, -2.405445, -0.275324);
	glEnd();

	glNormal3f( -0.062362, 0.771507, 0.633157 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.405445, -0.279872);
		glVertex3f( 0.177060, -2.447070, -0.229151);
		glVertex3f( 0.223234, -2.405445, -0.275324);
	glEnd();

	glNormal3f( -0.093835, -0.289005, 0.952718 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.040681, -0.352428);
		glVertex3f( 0.177060, -2.103470, -0.371475);
		glVertex3f( 0.237389, -2.040681, -0.346486);
	glEnd();

	glNormal3f( -0.028579, -0.956549, 0.290167 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.840490, -0.108495);
		glVertex3f( 0.177060, -1.859537, -0.171284);
		glVertex3f( 0.189800, -1.840490, -0.107240);
	glEnd();

	glNormal3f( -0.046379, 0.880971, 0.470892 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.447070, -0.229151);
		glVertex3f( 0.177060, -2.478001, -0.171284);
		glVertex3f( 0.213338, -2.447070, -0.225578);
	glEnd();

	glNormal3f( -0.097549, -0.097549, 0.990438 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.103470, -0.371475);
		glVertex3f( 0.177060, -2.168769, -0.377906);
		glVertex3f( 0.241104, -2.103470, -0.365167);
	glEnd();

	glNormal3f( -0.097550, 0.097550, 0.990438 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.168769, -0.377906);
		glVertex3f( 0.177060, -2.234067, -0.371475);
		glVertex3f( 0.242359, -2.168769, -0.371475);
	glEnd();

	glNormal3f( -0.046379, -0.880972, 0.470889 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.859537, -0.171284);
		glVertex3f( 0.177060, -1.890467, -0.229151);
		glVertex3f( 0.202049, -1.859537, -0.168823);
	glEnd();

	glNormal3f( -0.137354, 0.880970, 0.452797 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.213338, -2.447070, -0.225578);
		glVertex3f( 0.202049, -2.478001, -0.168823);
		glVertex3f( 0.248222, -2.447070, -0.214996);
	glEnd();

	glNormal3f( -0.288900, -0.097549, 0.952376 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.241104, -2.103470, -0.365167);
		glVertex3f( 0.242359, -2.168769, -0.371475);
		glVertex3f( 0.302687, -2.103470, -0.346486);
	glEnd();

	glNormal3f( -0.137353, -0.880973, 0.452792 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.202049, -1.859537, -0.168823);
		glVertex3f( 0.213338, -1.890467, -0.225578);
		glVertex3f( 0.226078, -1.859537, -0.161534);
	glEnd();

	glNormal3f( -0.084638, 0.956549, 0.279016 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.202049, -2.478001, -0.168823);
		glVertex3f( 0.189800, -2.497048, -0.107240);
		glVertex3f( 0.226078, -2.478001, -0.161534);
	glEnd();

	glNormal3f( -0.288901, 0.097550, 0.952376 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.242359, -2.168769, -0.371475);
		glVertex3f( 0.241104, -2.234067, -0.365167);
		glVertex3f( 0.305149, -2.168769, -0.352428);
	glEnd();

	glNormal3f( -0.277899, 0.289003, 0.916106 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.241104, -2.234067, -0.365167);
		glVertex3f( 0.237389, -2.296857, -0.346486);
		glVertex3f( 0.302687, -2.234067, -0.346486);
	glEnd();

	glNormal3f( -0.184686, -0.771506, 0.608826 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.213338, -1.890467, -0.225578);
		glVertex3f( 0.223234, -1.932093, -0.275324);
		glVertex3f( 0.248222, -1.890467, -0.214996);
	glEnd();

	glNormal3f( -0.028589, 0.995139, 0.094242 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.189800, -2.497048, -0.107240);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.202049, -2.497048, -0.103524);
	glEnd();

	glNormal3f( -0.256283, 0.469630, 0.844847 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.237389, -2.296857, -0.346486);
		glVertex3f( 0.231354, -2.354724, -0.316150);
		glVertex3f( 0.295398, -2.296857, -0.328889);
	glEnd();

	glNormal3f( -0.224828, -0.632563, 0.741159 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.223234, -1.932093, -0.275324);
		glVertex3f( 0.231354, -1.982813, -0.316150);
		glVertex3f( 0.267632, -1.932093, -0.261856);
	glEnd();

	glNormal3f( -0.256282, -0.469627, 0.844849 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.231354, -1.982813, -0.316150);
		glVertex3f( 0.237389, -2.040681, -0.346486);
		glVertex3f( 0.283562, -1.982813, -0.300313);
	glEnd();

	glNormal3f( -0.224828, 0.632562, 0.741160 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.231354, -2.354724, -0.316150);
		glVertex3f( 0.223234, -2.405445, -0.275324);
		glVertex3f( 0.283562, -2.354724, -0.300313);
	glEnd();

	glNormal3f( -0.277897, -0.289003, 0.916106 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.237389, -2.040681, -0.346486);
		glVertex3f( 0.241104, -2.103470, -0.365167);
		glVertex3f( 0.295398, -2.040681, -0.328889);
	glEnd();

	glNormal3f( -0.028589, -0.995138, 0.094249 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.189800, -1.840490, -0.107240);
		glVertex3f( 0.202049, -1.840490, -0.103524);
	glEnd();

	glNormal3f( -0.084639, -0.956550, 0.279014 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.189800, -1.840490, -0.107240);
		glVertex3f( 0.202049, -1.859537, -0.168823);
		glVertex3f( 0.202049, -1.840490, -0.103524);
	glEnd();

	glNormal3f( -0.184685, 0.771504, 0.608829 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.223234, -2.405445, -0.275324);
		glVertex3f( 0.213338, -2.447070, -0.225578);
		glVertex3f( 0.267632, -2.405445, -0.261856);
	glEnd();

	glNormal3f( -0.451282, -0.289004, 0.844288 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.295398, -2.040681, -0.328889);
		glVertex3f( 0.302687, -2.103470, -0.346486);
		glVertex3f( 0.348861, -2.040681, -0.300313);
	glEnd();

	glNormal3f( -0.046426, -0.995139, 0.086851 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.202049, -1.840490, -0.103524);
		glVertex3f( 0.213338, -1.840490, -0.097490);
	glEnd();

	glNormal3f( -0.299914, 0.771508, 0.561095 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.267632, -2.405445, -0.261856);
		glVertex3f( 0.248222, -2.447070, -0.214996);
		glVertex3f( 0.308551, -2.405445, -0.239985);
	glEnd();

	glNormal3f( -0.469149, -0.097549, 0.877715 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.302687, -2.103470, -0.346486);
		glVertex3f( 0.305149, -2.168769, -0.352428);
		glVertex3f( 0.359442, -2.103470, -0.316150);
	glEnd();

	glNormal3f( -0.137446, -0.956548, 0.257147 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.202049, -1.840490, -0.103524);
		glVertex3f( 0.226078, -1.859537, -0.161534);
		glVertex3f( 0.213338, -1.840490, -0.097490);
	glEnd();

	glNormal3f( -0.223049, -0.880972, 0.417298 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.226078, -1.859537, -0.161534);
		glVertex3f( 0.248222, -1.890467, -0.214996);
		glVertex3f( 0.248222, -1.859537, -0.149697);
	glEnd();

	glNormal3f( -0.223051, 0.880972, 0.417296 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.248222, -2.447070, -0.214996);
		glVertex3f( 0.226078, -2.478001, -0.161534);
		glVertex3f( 0.280372, -2.447070, -0.197812);
	glEnd();

	glNormal3f( -0.137444, 0.956550, 0.257140 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.226078, -2.478001, -0.161534);
		glVertex3f( 0.202049, -2.497048, -0.103524);
		glVertex3f( 0.248222, -2.478001, -0.149698);
	glEnd();

	glNormal3f( -0.469148, 0.097549, 0.877716 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.305149, -2.168769, -0.352428);
		glVertex3f( 0.302687, -2.234067, -0.346486);
		glVertex3f( 0.363016, -2.168769, -0.321498);
	glEnd();

	glNormal3f( -0.299914, -0.771506, 0.561098 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.248222, -1.890467, -0.214996);
		glVertex3f( 0.267632, -1.932093, -0.261856);
		glVertex3f( 0.280372, -1.890467, -0.197812);
	glEnd();

	glNormal3f( -0.046426, 0.995139, 0.086853 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.202049, -2.497048, -0.103524);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.213338, -2.497048, -0.097490);
	glEnd();

	glNormal3f( -0.451283, 0.289004, 0.844287 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.302687, -2.234067, -0.346486);
		glVertex3f( 0.295398, -2.296857, -0.328889);
		glVertex3f( 0.359442, -2.234067, -0.316150);
	glEnd();

	glNormal3f( -0.416179, 0.469629, 0.778616 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.295398, -2.296857, -0.328889);
		glVertex3f( 0.283562, -2.354724, -0.300313);
		glVertex3f( 0.348861, -2.296857, -0.300313);
	glEnd();

	glNormal3f( -0.365101, -0.632563, 0.683056 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.267632, -1.932093, -0.261856);
		glVertex3f( 0.283562, -1.982813, -0.300313);
		glVertex3f( 0.308551, -1.932093, -0.239985);
	glEnd();

	glNormal3f( -0.365102, 0.632563, 0.683056 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.283562, -2.354724, -0.300313);
		glVertex3f( 0.267632, -2.405445, -0.261856);
		glVertex3f( 0.331676, -2.354724, -0.274595);
	glEnd();

	glNormal3f( -0.416180, -0.469627, 0.778617 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.283562, -1.982813, -0.300313);
		glVertex3f( 0.295398, -2.040681, -0.328889);
		glVertex3f( 0.331676, -1.982813, -0.274595);
	glEnd();

	glNormal3f( -0.560082, 0.469629, 0.682464 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.348861, -2.296857, -0.300313);
		glVertex3f( 0.331676, -2.354724, -0.274595);
		glVertex3f( 0.395720, -2.296857, -0.261856);
	glEnd();

	glNormal3f( -0.491345, 0.632564, 0.598701 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.331676, -2.354724, -0.274595);
		glVertex3f( 0.308551, -2.405445, -0.239985);
		glVertex3f( 0.373849, -2.354724, -0.239985);
	glEnd();

	glNormal3f( -0.560083, -0.469627, 0.682464 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.331676, -1.982813, -0.274595);
		glVertex3f( 0.348861, -2.040681, -0.300313);
		glVertex3f( 0.373849, -1.982813, -0.239985);
	glEnd();

	glNormal3f( -0.062479, -0.995138, 0.076135 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.213338, -1.840490, -0.097490);
		glVertex3f( 0.223234, -1.840490, -0.089369);
	glEnd();

	glNormal3f( -0.403616, 0.771508, 0.491803 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.308551, -2.405445, -0.239985);
		glVertex3f( 0.280372, -2.447070, -0.197812);
		glVertex3f( 0.344416, -2.405445, -0.210551);
	glEnd();

	glNormal3f( -0.607323, -0.289003, 0.740024 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.348861, -2.040681, -0.300313);
		glVertex3f( 0.359442, -2.103470, -0.316150);
		glVertex3f( 0.395720, -2.040681, -0.261856);
	glEnd();

	glNormal3f( -0.631368, -0.097549, 0.769323 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.359442, -2.103470, -0.316150);
		glVertex3f( 0.363016, -2.168769, -0.321498);
		glVertex3f( 0.409189, -2.103470, -0.275324);
	glEnd();

	glNormal3f( -0.184971, -0.956549, 0.225386 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.213338, -1.840490, -0.097490);
		glVertex3f( 0.248222, -1.859537, -0.149697);
		glVertex3f( 0.223234, -1.840490, -0.089369);
	glEnd();

	glNormal3f( -0.300176, 0.880971, 0.365765 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.280372, -2.447070, -0.197812);
		glVertex3f( 0.248222, -2.478001, -0.149698);
		glVertex3f( 0.308551, -2.447070, -0.174686);
	glEnd();

	glNormal3f( -0.631368, 0.097550, 0.769324 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.363016, -2.168769, -0.321498);
		glVertex3f( 0.359442, -2.234067, -0.316150);
		glVertex3f( 0.413736, -2.168769, -0.279872);
	glEnd();

	glNormal3f( -0.300174, -0.880973, 0.365762 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.248222, -1.859537, -0.149697);
		glVertex3f( 0.280372, -1.890467, -0.197812);
		glVertex3f( 0.267632, -1.859537, -0.133768);
	glEnd();

	glNormal3f( -0.403616, -0.771505, 0.491808 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.280372, -1.890467, -0.197812);
		glVertex3f( 0.308551, -1.932093, -0.239985);
		glVertex3f( 0.308551, -1.890467, -0.174686);
	glEnd();

	glNormal3f( -0.184968, 0.956549, 0.225391 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.248222, -2.478001, -0.149698);
		glVertex3f( 0.213338, -2.497048, -0.097490);
		glVertex3f( 0.267632, -2.478001, -0.133768);
	glEnd();

	glNormal3f( -0.062479, 0.995138, 0.076135 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.213338, -2.497048, -0.097490);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.223234, -2.497048, -0.089369);
	glEnd();

	glNormal3f( -0.607322, 0.289002, 0.740025 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.359442, -2.234067, -0.316150);
		glVertex3f( 0.348861, -2.296857, -0.300313);
		glVertex3f( 0.409189, -2.234067, -0.275324);
	glEnd();

	glNormal3f( -0.491344, -0.632564, 0.598702 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.308551, -1.932093, -0.239985);
		glVertex3f( 0.331676, -1.982813, -0.274595);
		glVertex3f( 0.344416, -1.932093, -0.210551);
	glEnd();

	glNormal3f( -0.491807, -0.771505, 0.403616 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.308551, -1.890467, -0.174686);
		glVertex3f( 0.344416, -1.932093, -0.210551);
		glVertex3f( 0.331676, -1.890467, -0.146507);
	glEnd();

	glNormal3f( -0.598704, -0.632563, 0.491344 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.344416, -1.932093, -0.210551);
		glVertex3f( 0.373849, -1.982813, -0.239985);
		glVertex3f( 0.373849, -1.932093, -0.174686);
	glEnd();

	glNormal3f( -0.076131, 0.995137, 0.062498 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.223234, -2.497048, -0.089369);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.231354, -2.497048, -0.079474);
	glEnd();

	glNormal3f( -0.682464, 0.469630, 0.560080 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.395720, -2.296857, -0.261856);
		glVertex3f( 0.373849, -2.354724, -0.239985);
		glVertex3f( 0.434177, -2.296857, -0.214996);
	glEnd();

	glNormal3f( -0.682464, -0.469627, 0.560083 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.373849, -1.982813, -0.239985);
		glVertex3f( 0.395720, -2.040681, -0.261856);
		glVertex3f( 0.408460, -1.982813, -0.197812);
	glEnd();

	glNormal3f( -0.076131, -0.995139, 0.062473 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.223234, -1.840490, -0.089369);
		glVertex3f( 0.231354, -1.840490, -0.079474);
	glEnd();

	glNormal3f( -0.598704, 0.632562, 0.491344 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.373849, -2.354724, -0.239985);
		glVertex3f( 0.344416, -2.405445, -0.210551);
		glVertex3f( 0.408460, -2.354724, -0.197812);
	glEnd();

	glNormal3f( -0.491806, 0.771505, 0.403617 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.344416, -2.405445, -0.210551);
		glVertex3f( 0.308551, -2.447070, -0.174686);
		glVertex3f( 0.373849, -2.405445, -0.174686);
	glEnd();

	glNormal3f( -0.740024, -0.289005, 0.607323 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.395720, -2.040681, -0.261856);
		glVertex3f( 0.409189, -2.103470, -0.275324);
		glVertex3f( 0.434177, -2.040681, -0.214996);
	glEnd();

	glNormal3f( -0.225388, -0.956549, 0.184969 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.223234, -1.840490, -0.089369);
		glVertex3f( 0.267632, -1.859537, -0.133768);
		glVertex3f( 0.231354, -1.840490, -0.079474);
	glEnd();

	glNormal3f( -0.365766, 0.880971, 0.300176 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.308551, -2.447070, -0.174686);
		glVertex3f( 0.267632, -2.478001, -0.133768);
		glVertex3f( 0.331676, -2.447070, -0.146507);
	glEnd();

	glNormal3f( -0.769324, -0.097549, 0.631367 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.409189, -2.103470, -0.275324);
		glVertex3f( 0.413736, -2.168769, -0.279872);
		glVertex3f( 0.450014, -2.103470, -0.225578);
	glEnd();

	glNormal3f( -0.769324, 0.097550, 0.631367 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.413736, -2.168769, -0.279872);
		glVertex3f( 0.409189, -2.234067, -0.275324);
		glVertex3f( 0.455362, -2.168769, -0.229151);
	glEnd();

	glNormal3f( -0.365764, -0.880972, 0.300176 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.267632, -1.859537, -0.133768);
		glVertex3f( 0.308551, -1.890467, -0.174686);
		glVertex3f( 0.283562, -1.859537, -0.114358);
	glEnd();

	glNormal3f( -0.225385, 0.956551, 0.184965 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.267632, -2.478001, -0.133768);
		glVertex3f( 0.223234, -2.497048, -0.089369);
		glVertex3f( 0.283562, -2.478001, -0.114358);
	glEnd();

	glNormal3f( -0.740026, 0.289003, 0.607322 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.409189, -2.234067, -0.275324);
		glVertex3f( 0.395720, -2.296857, -0.261856);
		glVertex3f( 0.450014, -2.234067, -0.225578);
	glEnd();

	glNormal3f( -0.257140, 0.956551, 0.137435 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.283562, -2.478001, -0.114358);
		glVertex3f( 0.231354, -2.497048, -0.079474);
		glVertex3f( 0.295398, -2.478001, -0.092213);
	glEnd();

	glNormal3f( -0.877714, 0.097550, 0.469150 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.455362, -2.168769, -0.229151);
		glVertex3f( 0.450014, -2.234067, -0.225578);
		glVertex3f( 0.486292, -2.168769, -0.171284);
	glEnd();

	glNormal3f( -0.844288, 0.289003, 0.451282 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.450014, -2.234067, -0.225578);
		glVertex3f( 0.434177, -2.296857, -0.214996);
		glVertex3f( 0.480351, -2.234067, -0.168823);
	glEnd();

	glNormal3f( -0.561099, -0.771505, 0.299912 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.331676, -1.890467, -0.146507);
		glVertex3f( 0.373849, -1.932093, -0.174686);
		glVertex3f( 0.348860, -1.890467, -0.114358);
	glEnd();

	glNormal3f( -0.086857, 0.995138, 0.046441 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.231354, -2.497048, -0.079474);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.237389, -2.497048, -0.068185);
	glEnd();

	glNormal3f( -0.778617, 0.469629, 0.416179 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.434177, -2.296857, -0.214996);
		glVertex3f( 0.408460, -2.354724, -0.197812);
		glVertex3f( 0.462753, -2.296857, -0.161534);
	glEnd();

	glNormal3f( -0.683056, -0.632564, 0.365099 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.373849, -1.932093, -0.174686);
		glVertex3f( 0.408460, -1.982813, -0.197812);
		glVertex3f( 0.395720, -1.932093, -0.133768);
	glEnd();

	glNormal3f( -0.778618, -0.469627, 0.416179 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.408460, -1.982813, -0.197812);
		glVertex3f( 0.434177, -2.040681, -0.214996);
		glVertex3f( 0.434177, -1.982813, -0.149697);
	glEnd();

	glNormal3f( -0.683056, 0.632562, 0.365103 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.408460, -2.354724, -0.197812);
		glVertex3f( 0.373849, -2.405445, -0.174686);
		glVertex3f( 0.434177, -2.354724, -0.149697);
	glEnd();

	glNormal3f( -0.844288, -0.289005, 0.451280 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.434177, -2.040681, -0.214996);
		glVertex3f( 0.450014, -2.103470, -0.225578);
		glVertex3f( 0.480351, -2.103470, -0.168823);
	glEnd();

	glNormal3f( -0.086857, -0.995138, 0.046427 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.231354, -1.840490, -0.079474);
		glVertex3f( 0.237389, -1.840490, -0.068185);
	glEnd();

	glNormal3f( -0.257144, -0.956550, 0.137439 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.231354, -1.840490, -0.079474);
		glVertex3f( 0.283562, -1.859537, -0.114358);
		glVertex3f( 0.237389, -1.840490, -0.068185);
	glEnd();

	glNormal3f( -0.561098, 0.771506, 0.299913 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.373849, -2.405445, -0.174686);
		glVertex3f( 0.331676, -2.447070, -0.146507);
		glVertex3f( 0.395720, -2.405445, -0.133768);
	glEnd();

	glNormal3f( -0.417299, 0.880970, 0.223054 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.331676, -2.447070, -0.146507);
		glVertex3f( 0.283562, -2.478001, -0.114358);
		glVertex3f( 0.348861, -2.447070, -0.114358);
	glEnd();

	glNormal3f( -0.877716, -0.097549, 0.469147 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.450014, -2.103470, -0.225578);
		glVertex3f( 0.455362, -2.168769, -0.229151);
		glVertex3f( 0.480351, -2.103470, -0.168823);
	glEnd();

	glNormal3f( -0.417297, -0.880973, 0.223049 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.283562, -1.859537, -0.114358);
		glVertex3f( 0.331676, -1.890467, -0.146507);
		glVertex3f( 0.295398, -1.859537, -0.092213);
	glEnd();

	glNormal3f( -0.952376, -0.097548, 0.288901 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.480351, -2.103470, -0.168823);
		glVertex3f( 0.486292, -2.168769, -0.171284);
		glVertex3f( 0.499032, -2.103470, -0.107240);
	glEnd();

	glNormal3f( -0.279017, -0.956549, 0.084639 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.237389, -1.840490, -0.068185);
		glVertex3f( 0.295398, -1.859537, -0.092213);
		glVertex3f( 0.241104, -1.840490, -0.055935);
	glEnd();

	glNormal3f( -0.452793, -0.880972, 0.137355 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.295398, -1.859537, -0.092213);
		glVertex3f( 0.348860, -1.890467, -0.114358);
		glVertex3f( 0.302687, -1.859537, -0.068185);
	glEnd();

	glNormal3f( -0.452796, 0.880971, 0.137353 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.348861, -2.447070, -0.114358);
		glVertex3f( 0.295398, -2.478001, -0.092213);
		glVertex3f( 0.359442, -2.447070, -0.079474);
	glEnd();

	glNormal3f( -0.279013, 0.956549, 0.084646 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.295398, -2.478001, -0.092213);
		glVertex3f( 0.237389, -2.497048, -0.068185);
		glVertex3f( 0.302687, -2.478001, -0.068185);
	glEnd();

	glNormal3f( -0.952376, 0.097550, 0.288901 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.486292, -2.168769, -0.171284);
		glVertex3f( 0.480351, -2.234067, -0.168823);
		glVertex3f( 0.505339, -2.168769, -0.108495);
	glEnd();

	glNormal3f( -0.608828, -0.771505, 0.184685 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.348860, -1.890467, -0.114358);
		glVertex3f( 0.395720, -1.932093, -0.133768);
		glVertex3f( 0.359442, -1.890467, -0.079474);
	glEnd();

	glNormal3f( -0.094246, 0.995138, 0.028603 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.237389, -2.497048, -0.068185);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.241104, -2.497048, -0.055935);
	glEnd();

	glNormal3f( -0.916106, 0.289003, 0.277898 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.480351, -2.234067, -0.168823);
		glVertex3f( 0.462753, -2.296857, -0.161534);
		glVertex3f( 0.499031, -2.234067, -0.107240);
	glEnd();

	glNormal3f( -0.844848, 0.469629, 0.256281 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.462753, -2.296857, -0.161534);
		glVertex3f( 0.434177, -2.354724, -0.149697);
		glVertex3f( 0.480351, -2.296857, -0.103524);
	glEnd();

	glNormal3f( -0.741159, -0.632563, 0.224828 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.395720, -1.932093, -0.133768);
		glVertex3f( 0.434177, -1.982813, -0.149697);
		glVertex3f( 0.409189, -1.932093, -0.089369);
	glEnd();

	glNormal3f( -0.741159, 0.632563, 0.224828 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.434177, -2.354724, -0.149697);
		glVertex3f( 0.395720, -2.405445, -0.133768);
		glVertex3f( 0.409189, -2.405445, -0.089369);
	glEnd();

	glNormal3f( -0.844849, -0.469627, 0.256281 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.434177, -1.982813, -0.149697);
		glVertex3f( 0.462754, -2.040681, -0.161534);
		glVertex3f( 0.450014, -1.982813, -0.097490);
	glEnd();

	glNormal3f( -0.916106, -0.289004, 0.277898 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.462754, -2.040681, -0.161534);
		glVertex3f( 0.480351, -2.103470, -0.168823);
		glVertex3f( 0.499032, -2.103470, -0.107240);
	glEnd();

	glNormal3f( -0.094246, -0.995139, 0.028582 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.237389, -1.840490, -0.068185);
		glVertex3f( 0.241104, -1.840490, -0.055935);
	glEnd();

	glNormal3f( -0.608827, 0.771507, 0.184682 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.395720, -2.405445, -0.133768);
		glVertex3f( 0.348861, -2.447070, -0.114358);
		glVertex3f( 0.409189, -2.405445, -0.089369);
	glEnd();

	glNormal3f( -0.098012, -0.995138, 0.009658 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.241104, -1.840490, -0.055935);
		glVertex3f( 0.242359, -1.840490, -0.043196);
	glEnd();

	glNormal3f( -0.633158, 0.771506, 0.062366 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.409189, -2.405445, -0.089369);
		glVertex3f( 0.359442, -2.447070, -0.079474);
		glVertex3f( 0.413736, -2.405445, -0.043196);
	glEnd();

	glNormal3f( -0.952717, -0.289005, 0.093839 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.480351, -2.040681, -0.103524);
		glVertex3f( 0.499032, -2.103470, -0.107240);
		glVertex3f( 0.505340, -2.103470, -0.043196);
	glEnd();

	glNormal3f( -0.990438, -0.097550, 0.097554 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.499032, -2.103470, -0.107240);
		glVertex3f( 0.505339, -2.168769, -0.108495);
		glVertex3f( 0.511771, -2.168769, -0.043196);
	glEnd();

	glNormal3f( -0.290167, -0.956549, 0.028579 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.241104, -1.840490, -0.055935);
		glVertex3f( 0.302687, -1.859537, -0.068185);
		glVertex3f( 0.305149, -1.859537, -0.043196);
	glEnd();

	glNormal3f( -0.470892, 0.880971, 0.046381 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.359442, -2.447070, -0.079474);
		glVertex3f( 0.302687, -2.478001, -0.068185);
		glVertex3f( 0.363016, -2.447070, -0.043196);
	glEnd();

	glNormal3f( -0.990438, 0.097550, 0.097554 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.505339, -2.168769, -0.108495);
		glVertex3f( 0.499031, -2.234067, -0.107240);
		glVertex3f( 0.511771, -2.168769, -0.043196);
	glEnd();

	glNormal3f( -0.470889, -0.880973, 0.046384 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.302687, -1.859537, -0.068185);
		glVertex3f( 0.359442, -1.890467, -0.079474);
		glVertex3f( 0.363016, -1.890467, -0.043196);
	glEnd();

	glNormal3f( -0.633159, -0.771505, 0.062365 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.359442, -1.890467, -0.079474);
		glVertex3f( 0.409189, -1.932093, -0.089369);
		glVertex3f( 0.413736, -1.932093, -0.043196);
	glEnd();

	glNormal3f( -0.290164, 0.956550, 0.028583 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.302687, -2.478001, -0.068185);
		glVertex3f( 0.241104, -2.497048, -0.055935);
		glVertex3f( 0.305149, -2.478001, -0.043196);
	glEnd();

	glNormal3f( -0.098012, 0.995138, 0.009660 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.241104, -2.497048, -0.055935);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.242359, -2.497048, -0.043196);
	glEnd();

	glNormal3f( -0.952718, 0.289003, 0.093839 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.499031, -2.234067, -0.107240);
		glVertex3f( 0.480351, -2.296857, -0.103524);
		glVertex3f( 0.505340, -2.234067, -0.043196);
	glEnd();

	glNormal3f( -0.770779, -0.632563, 0.075920 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.409189, -1.932093, -0.089369);
		glVertex3f( 0.450014, -1.982813, -0.097490);
		glVertex3f( 0.455362, -1.982813, -0.043196);
	glEnd();

	glNormal3f( -0.878613, 0.469628, 0.086541 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.480351, -2.296857, -0.103524);
		glVertex3f( 0.450014, -2.354724, -0.097490);
		glVertex3f( 0.486293, -2.296857, -0.043196);
	glEnd();

	glNormal3f( -0.770780, 0.632562, 0.075920 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.450014, -2.354724, -0.097490);
		glVertex3f( 0.409189, -2.405445, -0.089369);
		glVertex3f( 0.455362, -2.354724, -0.043196);
	glEnd();

	glNormal3f( -0.878614, -0.469627, 0.086538 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.450014, -1.982813, -0.097490);
		glVertex3f( 0.480351, -2.040681, -0.103524);
		glVertex3f( 0.486293, -2.040681, -0.043196);
	glEnd();

	glNormal3f( -0.990438, -0.097550, -0.097549 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.511771, -2.168769, -0.043196);
		glVertex3f( 0.505340, -2.168769, 0.022103);
		glVertex3f( 0.499032, -2.103470, 0.020848);
	glEnd();

	glNormal3f( -0.470889, -0.880973, -0.046381 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.363016, -1.890467, -0.043196);
		glVertex3f( 0.359443, -1.890467, -0.006918);
		glVertex3f( 0.302687, -1.859537, -0.018207);
	glEnd();

	glNormal3f( -0.290164, 0.956550, -0.028589 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.242359, -2.497048, -0.043196);
		glVertex3f( 0.241105, -2.497048, -0.030457);
		glVertex3f( 0.302687, -2.478001, -0.018207);
	glEnd();

	glNormal3f( -0.990438, 0.097551, -0.097550 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.505340, -2.234067, -0.043196);
		glVertex3f( 0.499032, -2.234067, 0.020848);
		glVertex3f( 0.505340, -2.168769, 0.022103);
	glEnd();

	glNormal3f( -0.952718, 0.289003, -0.093836 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.486293, -2.296857, -0.043196);
		glVertex3f( 0.480351, -2.296857, 0.017132);
		glVertex3f( 0.499032, -2.234067, 0.020848);
	glEnd();

	glNormal3f( -0.633159, -0.771506, -0.062358 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.413736, -1.932093, -0.043196);
		glVertex3f( 0.409189, -1.932093, 0.002977);
		glVertex3f( 0.359443, -1.890467, -0.006918);
	glEnd();

	glNormal3f( -0.878613, 0.469629, -0.086535 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.455362, -2.354724, -0.043196);
		glVertex3f( 0.450015, -2.354724, 0.011098);
		glVertex3f( 0.480351, -2.296857, 0.017132);
	glEnd();

	glNormal3f( -0.770779, -0.632563, -0.075918 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.455362, -1.982813, -0.043196);
		glVertex3f( 0.450015, -1.982813, 0.011098);
		glVertex3f( 0.409189, -1.932093, 0.002977);
	glEnd();

	glNormal3f( -0.878613, -0.469627, -0.086536 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.486293, -2.040681, -0.043196);
		glVertex3f( 0.480351, -2.040681, 0.017132);
		glVertex3f( 0.450015, -1.982813, 0.011098);
	glEnd();

	glNormal3f( -0.770780, 0.632562, -0.075919 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.413736, -2.405445, -0.043196);
		glVertex3f( 0.409189, -2.405445, 0.002977);
		glVertex3f( 0.450015, -2.354724, 0.011098);
	glEnd();

	glNormal3f( -0.952718, -0.289004, -0.093833 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.505340, -2.103470, -0.043196);
		glVertex3f( 0.499032, -2.103470, 0.020848);
		glVertex3f( 0.480351, -2.040681, 0.017132);
	glEnd();

	glNormal3f( -0.290167, -0.956549, -0.028585 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.305149, -1.859537, -0.043196);
		glVertex3f( 0.302687, -1.859537, -0.018207);
		glVertex3f( 0.241104, -1.840490, -0.030457);
	glEnd();

	glNormal3f( -0.633159, 0.771506, -0.062360 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.363016, -2.447070, -0.043196);
		glVertex3f( 0.359443, -2.447070, -0.006918);
		glVertex3f( 0.409189, -2.405445, 0.002977);
	glEnd();

	glNormal3f( -0.470892, 0.880971, -0.046367 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.305149, -2.478001, -0.043196);
		glVertex3f( 0.302687, -2.478001, -0.018207);
		glVertex3f( 0.359443, -2.447070, -0.006918);
	glEnd();

	glNormal3f( -0.279016, -0.956550, -0.084632 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.302687, -1.859537, -0.018207);
		glVertex3f( 0.295398, -1.859537, 0.005821);
		glVertex3f( 0.237389, -1.840490, -0.018207);
	glEnd();

	glNormal3f( -0.608826, 0.771505, -0.184689 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.359443, -2.447070, -0.006918);
		glVertex3f( 0.348861, -2.447070, 0.027966);
		glVertex3f( 0.395721, -2.405445, 0.047376);
	glEnd();

	glNormal3f( -0.452795, 0.880970, -0.137365 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.302687, -2.478001, -0.018207);
		glVertex3f( 0.295398, -2.478001, 0.005821);
		glVertex3f( 0.348861, -2.447070, 0.027966);
	glEnd();

	glNormal3f( -0.952376, -0.097550, -0.288900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.505340, -2.168769, 0.022103);
		glVertex3f( 0.486293, -2.168769, 0.084892);
		glVertex3f( 0.480351, -2.103470, 0.082431);
	glEnd();

	glNormal3f( -0.452793, -0.880972, -0.137355 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.359443, -1.890467, -0.006918);
		glVertex3f( 0.348861, -1.890467, 0.027966);
		glVertex3f( 0.295398, -1.859537, 0.005821);
	glEnd();

	glNormal3f( -0.279014, 0.956552, -0.084614 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.241105, -2.497048, -0.030457);
		glVertex3f( 0.237389, -2.497048, -0.018207);
		glVertex3f( 0.295398, -2.478001, 0.005821);
	glEnd();

	glNormal3f( -0.952376, 0.097550, -0.288900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.499032, -2.234067, 0.020848);
		glVertex3f( 0.480351, -2.234067, 0.082431);
		glVertex3f( 0.486293, -2.168769, 0.084892);
	glEnd();

	glNormal3f( -0.916106, 0.289003, -0.277898 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.480351, -2.296857, 0.017132);
		glVertex3f( 0.462754, -2.296857, 0.075142);
		glVertex3f( 0.480351, -2.234067, 0.082431);
	glEnd();

	glNormal3f( -0.608827, -0.771505, -0.184687 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.409189, -1.932093, 0.002977);
		glVertex3f( 0.395721, -1.932093, 0.047376);
		glVertex3f( 0.348861, -1.890467, 0.027966);
	glEnd();

	glNormal3f( -0.844847, 0.469629, -0.256284 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.450015, -2.354724, 0.011098);
		glVertex3f( 0.434178, -2.354724, 0.063305);
		glVertex3f( 0.462754, -2.296857, 0.075142);
	glEnd();

	glNormal3f( -0.741159, -0.632563, -0.224829 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.450015, -1.982813, 0.011098);
		glVertex3f( 0.434178, -1.982813, 0.063305);
		glVertex3f( 0.395721, -1.932093, 0.047376);
	glEnd();

	glNormal3f( -0.844849, -0.469627, -0.256282 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.480351, -2.040681, 0.017132);
		glVertex3f( 0.462754, -2.040681, 0.075142);
		glVertex3f( 0.434178, -1.982813, 0.063305);
	glEnd();

	glNormal3f( -0.741159, 0.632562, -0.224831 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.409189, -2.405445, 0.002977);
		glVertex3f( 0.395721, -2.405445, 0.047376);
		glVertex3f( 0.434178, -2.354724, 0.063305);
	glEnd();

	glNormal3f( -0.916106, -0.289004, -0.277897 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.499032, -2.103470, 0.020848);
		glVertex3f( 0.480351, -2.103470, 0.082431);
		glVertex3f( 0.462754, -2.040681, 0.075142);
	glEnd();

	glNormal3f( -0.683056, 0.632562, -0.365102 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.395721, -2.405445, 0.047376);
		glVertex3f( 0.373849, -2.405445, 0.088294);
		glVertex3f( 0.408460, -2.354724, 0.111420);
	glEnd();

	glNormal3f( -0.778617, -0.469627, -0.416180 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.462754, -2.040681, 0.075142);
		glVertex3f( 0.434178, -2.040681, 0.128604);
		glVertex3f( 0.408460, -1.982813, 0.111420);
	glEnd();

	glNormal3f( -0.844288, -0.289004, -0.451282 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.480351, -2.103470, 0.082431);
		glVertex3f( 0.450015, -2.103470, 0.139186);
		glVertex3f( 0.434178, -2.040681, 0.128604);
	glEnd();

	glNormal3f( -0.561098, 0.771506, -0.299911 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.348861, -2.447070, 0.027966);
		glVertex3f( 0.331677, -2.447070, 0.060115);
		glVertex3f( 0.373849, -2.405445, 0.088294);
	glEnd();

	glNormal3f( -0.877715, -0.097550, -0.469149 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.486293, -2.168769, 0.084892);
		glVertex3f( 0.455362, -2.168769, 0.142759);
		glVertex3f( 0.450015, -2.103470, 0.139186);
	glEnd();

	glNormal3f( -0.257143, -0.956549, -0.137447 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.295398, -1.859537, 0.005821);
		glVertex3f( 0.283562, -1.859537, 0.027966);
		glVertex3f( 0.231354, -1.840490, -0.006918);
	glEnd();

	glNormal3f( -0.417296, -0.880973, -0.223048 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.348861, -1.890467, 0.027966);
		glVertex3f( 0.331676, -1.890467, 0.060115);
		glVertex3f( 0.283562, -1.859537, 0.027966);
	glEnd();

	glNormal3f( -0.417299, 0.880971, -0.223052 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.295398, -2.478001, 0.005821);
		glVertex3f( 0.283562, -2.478001, 0.027966);
		glVertex3f( 0.331677, -2.447070, 0.060115);
	glEnd();

	glNormal3f( -0.257139, 0.956549, -0.137452 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.237389, -2.497048, -0.018207);
		glVertex3f( 0.231354, -2.497048, -0.006918);
		glVertex3f( 0.283562, -2.478001, 0.027966);
	glEnd();

	glNormal3f( -0.877715, 0.097550, -0.469149 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.480351, -2.234067, 0.082431);
		glVertex3f( 0.450015, -2.234067, 0.139186);
		glVertex3f( 0.455362, -2.168769, 0.142759);
	glEnd();

	glNormal3f( -0.561099, -0.771506, -0.299911 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.395721, -1.932093, 0.047376);
		glVertex3f( 0.373849, -1.932093, 0.088294);
		glVertex3f( 0.331676, -1.890467, 0.060115);
	glEnd();

	glNormal3f( -0.844288, 0.289004, -0.451282 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.462754, -2.296857, 0.075142);
		glVertex3f( 0.434178, -2.296857, 0.128604);
		glVertex3f( 0.450015, -2.234067, 0.139186);
	glEnd();

	glNormal3f( -0.778617, 0.469629, -0.416178 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.434178, -2.354724, 0.063305);
		glVertex3f( 0.408460, -2.354724, 0.111420);
		glVertex3f( 0.434178, -2.296857, 0.128604);
	glEnd();

	glNormal3f( -0.683055, -0.632563, -0.365103 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.434178, -1.982813, 0.063305);
		glVertex3f( 0.408460, -1.982813, 0.111420);
		glVertex3f( 0.373849, -1.932093, 0.088294);
	glEnd();

	glNormal3f( -0.598702, -0.632562, -0.491346 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.408460, -1.982813, 0.111420);
		glVertex3f( 0.373849, -1.982813, 0.153593);
		glVertex3f( 0.344416, -1.932093, 0.124159);
	glEnd();

	glNormal3f( -0.682462, 0.469629, -0.560084 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.408460, -2.354724, 0.111420);
		glVertex3f( 0.373849, -2.354724, 0.153593);
		glVertex3f( 0.395721, -2.296857, 0.175464);
	glEnd();

	glNormal3f( -0.598703, 0.632562, -0.491344 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.373849, -2.405445, 0.088294);
		glVertex3f( 0.344416, -2.405445, 0.124159);
		glVertex3f( 0.373849, -2.354724, 0.153593);
	glEnd();

	glNormal3f( -0.682463, -0.469627, -0.560084 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.434178, -2.040681, 0.128604);
		glVertex3f( 0.395721, -2.040681, 0.175464);
		glVertex3f( 0.373849, -1.982813, 0.153593);
	glEnd();

	glNormal3f( -0.491806, 0.771506, -0.403615 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.331677, -2.447070, 0.060115);
		glVertex3f( 0.308551, -2.447070, 0.088294);
		glVertex3f( 0.344416, -2.405445, 0.124159);
	glEnd();

	glNormal3f( -0.740024, -0.289004, -0.607323 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.450015, -2.103470, 0.139186);
		glVertex3f( 0.409189, -2.103470, 0.188932);
		glVertex3f( 0.395721, -2.040681, 0.175464);
	glEnd();

	glNormal3f( -0.769324, -0.097549, -0.631368 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.455362, -2.168769, 0.142759);
		glVertex3f( 0.413736, -2.168769, 0.193480);
		glVertex3f( 0.409189, -2.103470, 0.188932);
	glEnd();

	glNormal3f( -0.225387, -0.956549, -0.184971 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.283562, -1.859537, 0.027966);
		glVertex3f( 0.267632, -1.859537, 0.047376);
		glVertex3f( 0.223234, -1.840490, 0.002977);
	glEnd();

	glNormal3f( -0.365765, 0.880970, -0.300181 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.283562, -2.478001, 0.027966);
		glVertex3f( 0.267632, -2.478001, 0.047376);
		glVertex3f( 0.308551, -2.447070, 0.088294);
	glEnd();

	glNormal3f( -0.769324, 0.097550, -0.631367 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.450015, -2.234067, 0.139186);
		glVertex3f( 0.409189, -2.234067, 0.188932);
		glVertex3f( 0.413736, -2.168769, 0.193480);
	glEnd();

	glNormal3f( -0.365763, -0.880973, -0.300175 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.331676, -1.890467, 0.060115);
		glVertex3f( 0.308551, -1.890467, 0.088294);
		glVertex3f( 0.267632, -1.859537, 0.047376);
	glEnd();

	glNormal3f( -0.491807, -0.771505, -0.403615 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.373849, -1.932093, 0.088294);
		glVertex3f( 0.344416, -1.932093, 0.124159);
		glVertex3f( 0.308551, -1.890467, 0.088294);
	glEnd();

	glNormal3f( -0.225385, 0.956550, -0.184971 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.231354, -2.497048, -0.006918);
		glVertex3f( 0.223234, -2.497048, 0.002977);
		glVertex3f( 0.267632, -2.478001, 0.047376);
	glEnd();

	glNormal3f( -0.740024, 0.289004, -0.607323 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.434178, -2.296857, 0.128604);
		glVertex3f( 0.395721, -2.296857, 0.175464);
		glVertex3f( 0.409189, -2.234067, 0.188932);
	glEnd();

	glNormal3f( -0.184969, 0.956551, -0.225381 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.223234, -2.497048, 0.002977);
		glVertex3f( 0.213338, -2.497048, 0.011098);
		glVertex3f( 0.248222, -2.478001, 0.063305);
	glEnd();

	glNormal3f( -0.607323, 0.289003, -0.740025 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.395721, -2.296857, 0.175464);
		glVertex3f( 0.348861, -2.296857, 0.213921);
		glVertex3f( 0.359442, -2.234067, 0.229758);
	glEnd();

	glNormal3f( -0.403615, -0.771505, -0.491807 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.344416, -1.932093, 0.124159);
		glVertex3f( 0.308551, -1.932093, 0.153593);
		glVertex3f( 0.280372, -1.890467, 0.111420);
	glEnd();

	glNormal3f( -0.491343, -0.632563, -0.598704 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.373849, -1.982813, 0.153593);
		glVertex3f( 0.331676, -1.982813, 0.188203);
		glVertex3f( 0.308551, -1.932093, 0.153593);
	glEnd();

	glNormal3f( -0.560083, 0.469630, -0.682462 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.373849, -2.354724, 0.153593);
		glVertex3f( 0.331676, -2.354724, 0.188203);
		glVertex3f( 0.348861, -2.296857, 0.213921);
	glEnd();

	glNormal3f( -0.560083, -0.469628, -0.682464 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.395721, -2.040681, 0.175464);
		glVertex3f( 0.348861, -2.040681, 0.213921);
		glVertex3f( 0.331676, -1.982813, 0.188203);
	glEnd();

	glNormal3f( -0.491343, 0.632562, -0.598705 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.344416, -2.405445, 0.124159);
		glVertex3f( 0.308551, -2.405445, 0.153593);
		glVertex3f( 0.331676, -2.354724, 0.188203);
	glEnd();

	glNormal3f( -0.403615, 0.771506, -0.491807 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.308551, -2.447070, 0.088294);
		glVertex3f( 0.280372, -2.447070, 0.111420);
		glVertex3f( 0.308551, -2.405445, 0.153593);
	glEnd();

	glNormal3f( -0.607323, -0.289005, -0.740024 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.409189, -2.103470, 0.188932);
		glVertex3f( 0.359442, -2.103470, 0.229758);
		glVertex3f( 0.348861, -2.040681, 0.213921);
	glEnd();

	glNormal3f( -0.184971, -0.956549, -0.225386 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.267632, -1.859537, 0.047376);
		glVertex3f( 0.248222, -1.859537, 0.063305);
		glVertex3f( 0.213338, -1.840490, 0.011098);
	glEnd();

	glNormal3f( -0.300176, 0.880971, -0.365766 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.267632, -2.478001, 0.047376);
		glVertex3f( 0.248222, -2.478001, 0.063305);
		glVertex3f( 0.280372, -2.447070, 0.111420);
	glEnd();

	glNormal3f( -0.631368, -0.097550, -0.769323 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.413736, -2.168769, 0.193480);
		glVertex3f( 0.363016, -2.168769, 0.235105);
		glVertex3f( 0.359442, -2.103470, 0.229758);
	glEnd();

	glNormal3f( -0.631368, 0.097550, -0.769324 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.409189, -2.234067, 0.188932);
		glVertex3f( 0.359442, -2.234067, 0.229758);
		glVertex3f( 0.363016, -2.168769, 0.235105);
	glEnd();

	glNormal3f( -0.300174, -0.880973, -0.365763 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.308551, -1.890467, 0.088294);
		glVertex3f( 0.280372, -1.890467, 0.111420);
		glVertex3f( 0.248222, -1.859537, 0.063305);
	glEnd();

	glNormal3f( -0.469149, -0.097550, -0.877715 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.363016, -2.168769, 0.235105);
		glVertex3f( 0.305149, -2.168769, 0.266036);
		glVertex3f( 0.302687, -2.103470, 0.260094);
	glEnd();

	glNormal3f( -0.223050, -0.880974, -0.417294 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.280372, -1.890467, 0.111420);
		glVertex3f( 0.248222, -1.890467, 0.128604);
		glVertex3f( 0.226078, -1.859537, 0.075142);
	glEnd();

	glNormal3f( -0.137444, 0.956549, -0.257142 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.213338, -2.497048, 0.011098);
		glVertex3f( 0.202049, -2.497048, 0.017132);
		glVertex3f( 0.226078, -2.478001, 0.075142);
	glEnd();

	glNormal3f( -0.469149, 0.097550, -0.877715 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.359442, -2.234067, 0.229758);
		glVertex3f( 0.302687, -2.234067, 0.260094);
		glVertex3f( 0.305149, -2.168769, 0.266036);
	glEnd();

	glNormal3f( -0.451281, 0.289004, -0.844288 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.348861, -2.296857, 0.213921);
		glVertex3f( 0.295398, -2.296857, 0.242497);
		glVertex3f( 0.302687, -2.234067, 0.260094);
	glEnd();

	glNormal3f( -0.299914, -0.771506, -0.561097 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.308551, -1.932093, 0.153593);
		glVertex3f( 0.267632, -1.932093, 0.175464);
		glVertex3f( 0.248222, -1.890467, 0.128604);
	glEnd();

	glNormal3f( -0.416179, 0.469629, -0.778616 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.331676, -2.354724, 0.188203);
		glVertex3f( 0.283562, -2.354724, 0.213921);
		glVertex3f( 0.295398, -2.296857, 0.242497);
	glEnd();

	glNormal3f( -0.365100, -0.632562, -0.683058 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.331676, -1.982813, 0.188203);
		glVertex3f( 0.283562, -1.982813, 0.213921);
		glVertex3f( 0.267632, -1.932093, 0.175464);
	glEnd();

	glNormal3f( -0.416179, -0.469627, -0.778618 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.348861, -2.040681, 0.213921);
		glVertex3f( 0.295398, -2.040681, 0.242497);
		glVertex3f( 0.283562, -1.982813, 0.213921);
	glEnd();

	glNormal3f( -0.365101, 0.632563, -0.683056 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.308551, -2.405445, 0.153593);
		glVertex3f( 0.267632, -2.405445, 0.175464);
		glVertex3f( 0.283562, -2.354724, 0.213921);
	glEnd();

	glNormal3f( -0.451281, -0.289004, -0.844288 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.359442, -2.103470, 0.229758);
		glVertex3f( 0.302687, -2.103470, 0.260094);
		glVertex3f( 0.295398, -2.040681, 0.242497);
	glEnd();

	glNormal3f( -0.137446, -0.956549, -0.257144 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.248222, -1.859537, 0.063305);
		glVertex3f( 0.226078, -1.859537, 0.075142);
		glVertex3f( 0.202049, -1.840490, 0.017132);
	glEnd();

	glNormal3f( -0.299912, 0.771506, -0.561098 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.280372, -2.447070, 0.111420);
		glVertex3f( 0.248222, -2.447070, 0.128604);
		glVertex3f( 0.267632, -2.405445, 0.175464);
	glEnd();

	glNormal3f( -0.223051, 0.880971, -0.417300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.248222, -2.478001, 0.063305);
		glVertex3f( 0.226078, -2.478001, 0.075142);
		glVertex3f( 0.248222, -2.447070, 0.128604);
	glEnd();

	glNormal3f( -0.184686, 0.771506, -0.608826 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.248222, -2.447070, 0.128604);
		glVertex3f( 0.213338, -2.447070, 0.139186);
		glVertex3f( 0.223234, -2.405445, 0.188932);
	glEnd();

	glNormal3f( -0.288899, -0.097549, -0.952377 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.305149, -2.168769, 0.266036);
		glVertex3f( 0.242359, -2.168769, 0.285083);
		glVertex3f( 0.241104, -2.103470, 0.278775);
	glEnd();

	glNormal3f( -0.084638, -0.956548, -0.279019 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.226078, -1.859537, 0.075142);
		glVertex3f( 0.202049, -1.859537, 0.082431);
		glVertex3f( 0.189800, -1.840490, 0.020848);
	glEnd();

	glNormal3f( -0.137353, -0.880973, -0.452792 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.248222, -1.890467, 0.128604);
		glVertex3f( 0.213338, -1.890467, 0.139186);
		glVertex3f( 0.202049, -1.859537, 0.082431);
	glEnd();

	glNormal3f( -0.137354, 0.880972, -0.452794 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.226078, -2.478001, 0.075142);
		glVertex3f( 0.202049, -2.478001, 0.082431);
		glVertex3f( 0.213338, -2.447070, 0.139186);
	glEnd();

	glNormal3f( -0.084638, 0.956550, -0.279012 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.202049, -2.497048, 0.017132);
		glVertex3f( 0.189800, -2.497048, 0.020848);
		glVertex3f( 0.202049, -2.478001, 0.082431);
	glEnd();

	glNormal3f( -0.288900, 0.097550, -0.952377 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.302687, -2.234067, 0.260094);
		glVertex3f( 0.241104, -2.234067, 0.278775);
		glVertex3f( 0.242359, -2.168769, 0.285083);
	glEnd();

	glNormal3f( -0.184686, -0.771507, -0.608825 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.267632, -1.932093, 0.175464);
		glVertex3f( 0.223234, -1.932093, 0.188932);
		glVertex3f( 0.213338, -1.890467, 0.139186);
	glEnd();

	glNormal3f( -0.277898, 0.289004, -0.916106 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.295398, -2.296857, 0.242497);
		glVertex3f( 0.237389, -2.296857, 0.260094);
		glVertex3f( 0.241104, -2.234067, 0.278775);
	glEnd();

	glNormal3f( -0.256282, 0.469630, -0.844847 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.283562, -2.354724, 0.213921);
		glVertex3f( 0.231354, -2.354724, 0.229758);
		glVertex3f( 0.237389, -2.296857, 0.260094);
	glEnd();

	glNormal3f( -0.224828, -0.632564, -0.741158 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.283562, -1.982813, 0.213921);
		glVertex3f( 0.231354, -1.982813, 0.229758);
		glVertex3f( 0.223234, -1.932093, 0.188932);
	glEnd();

	glNormal3f( -0.224829, 0.632563, -0.741159 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.267632, -2.405445, 0.175464);
		glVertex3f( 0.223234, -2.405445, 0.188932);
		glVertex3f( 0.231354, -2.354724, 0.229758);
	glEnd();

	glNormal3f( -0.256282, -0.469627, -0.844849 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.295398, -2.040681, 0.242497);
		glVertex3f( 0.237389, -2.040681, 0.260094);
		glVertex3f( 0.231354, -1.982813, 0.229758);
	glEnd();

	glNormal3f( -0.277898, -0.289004, -0.916106 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.302687, -2.103470, 0.260094);
		glVertex3f( 0.241104, -2.103470, 0.278775);
		glVertex3f( 0.237389, -2.040681, 0.260094);
	glEnd();

	glNormal3f( -0.075915, 0.632562, -0.770780 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.223234, -2.405445, 0.188932);
		glVertex3f( 0.177060, -2.405445, 0.193480);
		glVertex3f( 0.177060, -2.354724, 0.235105);
	glEnd();

	glNormal3f( -0.086536, -0.469627, -0.878614 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.237389, -2.040681, 0.260094);
		glVertex3f( 0.177060, -2.040681, 0.266036);
		glVertex3f( 0.177060, -1.982813, 0.235105);
	glEnd();

	glNormal3f( -0.062361, 0.771506, -0.633159 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.213338, -2.447070, 0.139186);
		glVertex3f( 0.177060, -2.447070, 0.142759);
		glVertex3f( 0.177060, -2.405445, 0.193480);
	glEnd();

	glNormal3f( -0.093835, -0.289004, -0.952718 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.241104, -2.103470, 0.278775);
		glVertex3f( 0.177060, -2.103470, 0.285083);
		glVertex3f( 0.177060, -2.040681, 0.266036);
	glEnd();

	glNormal3f( -0.097550, -0.097550, -0.990438 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.242359, -2.168769, 0.285083);
		glVertex3f( 0.177060, -2.168769, 0.291514);
		glVertex3f( 0.177060, -2.103470, 0.285083);
	glEnd();

	glNormal3f( -0.028579, -0.956550, -0.290165 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.202049, -1.859537, 0.082431);
		glVertex3f( 0.177060, -1.859537, 0.084892);
		glVertex3f( 0.177060, -1.840490, 0.022103);
	glEnd();

	glNormal3f( -0.046379, 0.880972, -0.470891 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.202049, -2.478001, 0.082431);
		glVertex3f( 0.177060, -2.478001, 0.084892);
		glVertex3f( 0.177060, -2.447070, 0.142759);
	glEnd();

	glNormal3f( -0.097549, 0.097549, -0.990438 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.241104, -2.234067, 0.278775);
		glVertex3f( 0.177060, -2.234067, 0.285083);
		glVertex3f( 0.177060, -2.168769, 0.291514);
	glEnd();

	glNormal3f( -0.046378, -0.880972, -0.470890 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.213338, -1.890467, 0.139186);
		glVertex3f( 0.177060, -1.890467, 0.142759);
		glVertex3f( 0.177060, -1.859537, 0.084892);
	glEnd();

	glNormal3f( -0.062360, -0.771505, -0.633159 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.223234, -1.932093, 0.188932);
		glVertex3f( 0.177060, -1.932093, 0.193480);
		glVertex3f( 0.177060, -1.890467, 0.142759);
	glEnd();

	glNormal3f( -0.028579, 0.956549, -0.290167 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.189800, -2.497048, 0.020848);
		glVertex3f( 0.177060, -2.497048, 0.022103);
		glVertex3f( 0.177060, -2.478001, 0.084892);
	glEnd();

	glNormal3f( -0.093834, 0.289003, -0.952718 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.237389, -2.296857, 0.260094);
		glVertex3f( 0.177060, -2.296857, 0.266036);
		glVertex3f( 0.177060, -2.234067, 0.285083);
	glEnd();

	glNormal3f( -0.075915, -0.632564, -0.770779 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.231354, -1.982813, 0.229758);
		glVertex3f( 0.177060, -1.982813, 0.235105);
		glVertex3f( 0.177060, -1.932093, 0.193480);
	glEnd();

	glNormal3f( -0.086536, 0.469629, -0.878613 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.231354, -2.354724, 0.229758);
		glVertex3f( 0.177060, -2.354724, 0.235105);
		glVertex3f( 0.177060, -2.296857, 0.266036);
	glEnd();

	glNormal3f( 0.075915, -0.632562, -0.770780 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.982813, 0.235105);
		glVertex3f( 0.122766, -1.982813, 0.229758);
		glVertex3f( 0.130887, -1.932093, 0.188932);
	glEnd();

	glNormal3f( 0.086536, 0.469629, -0.878613 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.354724, 0.235105);
		glVertex3f( 0.122766, -2.354724, 0.229758);
		glVertex3f( 0.116732, -2.296857, 0.260094);
	glEnd();

	glNormal3f( 0.086536, -0.469627, -0.878614 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.040681, 0.266036);
		glVertex3f( 0.116732, -2.040681, 0.260094);
		glVertex3f( 0.122766, -1.982813, 0.229758);
	glEnd();

	glNormal3f( 0.075915, 0.632565, -0.770778 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.405445, 0.193480);
		glVertex3f( 0.130887, -2.405445, 0.188932);
		glVertex3f( 0.122766, -2.354724, 0.229758);
	glEnd();

	glNormal3f( 0.062361, 0.771504, -0.633160 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.447070, 0.142759);
		glVertex3f( 0.140782, -2.447070, 0.139186);
		glVertex3f( 0.130887, -2.405445, 0.188932);
	glEnd();

	glNormal3f( 0.093835, -0.289005, -0.952718 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.103470, 0.285083);
		glVertex3f( 0.113016, -2.103470, 0.278775);
		glVertex3f( 0.116732, -2.040681, 0.260094);
	glEnd();

	glNormal3f( 0.028579, -0.956549, -0.290167 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.859537, 0.084892);
		glVertex3f( 0.152072, -1.859537, 0.082431);
		glVertex3f( 0.164321, -1.840490, 0.020848);
	glEnd();

	glNormal3f( 0.046379, 0.880970, -0.470894 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.478001, 0.084892);
		glVertex3f( 0.152072, -2.478001, 0.082431);
		glVertex3f( 0.140782, -2.447070, 0.139186);
	glEnd();

	glNormal3f( 0.097550, -0.097549, -0.990438 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.168769, 0.291514);
		glVertex3f( 0.111762, -2.168769, 0.285083);
		glVertex3f( 0.113016, -2.103470, 0.278775);
	glEnd();

	glNormal3f( 0.097550, 0.097550, -0.990438 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.234067, 0.285083);
		glVertex3f( 0.113016, -2.234067, 0.278775);
		glVertex3f( 0.111762, -2.168769, 0.285083);
	glEnd();

	glNormal3f( 0.046378, -0.880972, -0.470890 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.890467, 0.142759);
		glVertex3f( 0.140782, -1.890467, 0.139186);
		glVertex3f( 0.152072, -1.859537, 0.082431);
	glEnd();

	glNormal3f( 0.028579, 0.956549, -0.290167 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.497048, 0.022103);
		glVertex3f( 0.164321, -2.497048, 0.020848);
		glVertex3f( 0.152072, -2.478001, 0.082431);
	glEnd();

	glNormal3f( 0.093835, 0.289004, -0.952718 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.296857, 0.266036);
		glVertex3f( 0.116732, -2.296857, 0.260094);
		glVertex3f( 0.113016, -2.234067, 0.278775);
	glEnd();

	glNormal3f( 0.062361, -0.771506, -0.633158 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.932093, 0.193480);
		glVertex3f( 0.130887, -1.932093, 0.188932);
		glVertex3f( 0.140782, -1.890467, 0.139186);
	glEnd();

	glNormal3f( 0.084638, 0.956552, -0.279008 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.164321, -2.497048, 0.020848);
		glVertex3f( 0.152072, -2.497048, 0.017132);
		glVertex3f( 0.128043, -2.478001, 0.075142);
	glEnd();

	glNormal3f( 0.288901, 0.097550, -0.952376 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.113016, -2.234067, 0.278775);
		glVertex3f( 0.051433, -2.234067, 0.260094);
		glVertex3f( 0.048972, -2.168769, 0.266036);
	glEnd();

	glNormal3f( 0.277897, 0.289003, -0.916106 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.116732, -2.296857, 0.260094);
		glVertex3f( 0.058722, -2.296857, 0.242497);
		glVertex3f( 0.051433, -2.234067, 0.260094);
	glEnd();

	glNormal3f( 0.184686, -0.771505, -0.608827 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.130887, -1.932093, 0.188932);
		glVertex3f( 0.086488, -1.932093, 0.175464);
		glVertex3f( 0.105898, -1.890467, 0.128604);
	glEnd();

	glNormal3f( 0.256281, 0.469627, -0.844849 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.122766, -2.354724, 0.229758);
		glVertex3f( 0.070559, -2.354724, 0.213921);
		glVertex3f( 0.058722, -2.296857, 0.242497);
	glEnd();

	glNormal3f( 0.224828, -0.632563, -0.741159 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.122766, -1.982813, 0.229758);
		glVertex3f( 0.070559, -1.982813, 0.213921);
		glVertex3f( 0.086488, -1.932093, 0.175464);
	glEnd();

	glNormal3f( 0.256283, -0.469628, -0.844848 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.116732, -2.040681, 0.260094);
		glVertex3f( 0.058722, -2.040681, 0.242497);
		glVertex3f( 0.070559, -1.982813, 0.213921);
	glEnd();

	glNormal3f( 0.224828, 0.632561, -0.741161 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.130887, -2.405445, 0.188932);
		glVertex3f( 0.086488, -2.405445, 0.175464);
		glVertex3f( 0.070559, -2.354724, 0.213921);
	glEnd();

	glNormal3f( 0.277898, -0.289005, -0.916105 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.113016, -2.103470, 0.278775);
		glVertex3f( 0.051433, -2.103470, 0.260094);
		glVertex3f( 0.058722, -2.040681, 0.242497);
	glEnd();

	glNormal3f( 0.084639, -0.956549, -0.279015 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.152072, -1.859537, 0.082431);
		glVertex3f( 0.128043, -1.859537, 0.075142);
		glVertex3f( 0.152072, -1.840490, 0.017132);
	glEnd();

	glNormal3f( 0.184686, 0.771508, -0.608823 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.140782, -2.447070, 0.139186);
		glVertex3f( 0.105898, -2.447070, 0.128604);
		glVertex3f( 0.086488, -2.405445, 0.175464);
	glEnd();

	glNormal3f( 0.137354, 0.880972, -0.452794 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.152072, -2.478001, 0.082431);
		glVertex3f( 0.128043, -2.478001, 0.075142);
		glVertex3f( 0.105898, -2.447070, 0.128604);
	glEnd();

	glNormal3f( 0.288900, -0.097549, -0.952376 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.111762, -2.168769, 0.285083);
		glVertex3f( 0.048972, -2.168769, 0.266036);
		glVertex3f( 0.051433, -2.103470, 0.260094);
	glEnd();

	glNormal3f( 0.137353, -0.880973, -0.452792 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.140782, -1.890467, 0.139186);
		glVertex3f( 0.105898, -1.890467, 0.128604);
		glVertex3f( 0.128043, -1.859537, 0.075142);
	glEnd();

	glNormal3f( 0.137446, -0.956549, -0.257142 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.128043, -1.859537, 0.075142);
		glVertex3f( 0.105898, -1.859537, 0.063305);
		glVertex3f( 0.140782, -1.840490, 0.011098);
	glEnd();

	glNormal3f( 0.223050, -0.880973, -0.417295 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.105898, -1.890467, 0.128604);
		glVertex3f( 0.073749, -1.890467, 0.111420);
		glVertex3f( 0.105898, -1.859537, 0.063305);
	glEnd();

	glNormal3f( 0.223051, 0.880970, -0.417302 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.128043, -2.478001, 0.075142);
		glVertex3f( 0.105898, -2.478001, 0.063305);
		glVertex3f( 0.073749, -2.447070, 0.111420);
	glEnd();

	glNormal3f( 0.137444, 0.956550, -0.257141 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.152072, -2.497048, 0.017132);
		glVertex3f( 0.140782, -2.497048, 0.011098);
		glVertex3f( 0.105898, -2.478001, 0.063305);
	glEnd();

	glNormal3f( 0.469150, 0.097550, -0.877714 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.051433, -2.234067, 0.260094);
		glVertex3f( -0.005322, -2.234067, 0.229758);
		glVertex3f( -0.008895, -2.168769, 0.235105);
	glEnd();

	glNormal3f( 0.299914, -0.771505, -0.561099 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.086488, -1.932093, 0.175464);
		glVertex3f( 0.045570, -1.932093, 0.153593);
		glVertex3f( 0.073749, -1.890467, 0.111420);
	glEnd();

	glNormal3f( 0.451281, 0.289003, -0.844289 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.058722, -2.296857, 0.242497);
		glVertex3f( 0.005260, -2.296857, 0.213921);
		glVertex3f( -0.005322, -2.234067, 0.229758);
	glEnd();

	glNormal3f( 0.416178, 0.469628, -0.778617 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.070559, -2.354724, 0.213921);
		glVertex3f( 0.022444, -2.354724, 0.188203);
		glVertex3f( 0.005260, -2.296857, 0.213921);
	glEnd();

	glNormal3f( 0.365102, -0.632564, -0.683055 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.070559, -1.982813, 0.213921);
		glVertex3f( 0.022444, -1.982813, 0.188203);
		glVertex3f( 0.045570, -1.932093, 0.153593);
	glEnd();

	glNormal3f( 0.365102, 0.632563, -0.683056 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.022444, -2.354724, 0.188203);
		glVertex3f( 0.070559, -2.354724, 0.213921);
		glVertex3f( 0.045570, -2.405445, 0.153593);
	glEnd();

	glNormal3f( 0.416179, -0.469627, -0.778618 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.058722, -2.040681, 0.242497);
		glVertex3f( 0.005260, -2.040681, 0.213921);
		glVertex3f( 0.022444, -1.982813, 0.188203);
	glEnd();

	glNormal3f( 0.451281, -0.289005, -0.844288 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.051433, -2.103470, 0.260094);
		glVertex3f( -0.005322, -2.103470, 0.229758);
		glVertex3f( 0.005260, -2.040681, 0.213921);
	glEnd();

	glNormal3f( 0.299914, 0.771508, -0.561095 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.105898, -2.447070, 0.128604);
		glVertex3f( 0.073749, -2.447070, 0.111420);
		glVertex3f( 0.045570, -2.405445, 0.153593);
	glEnd();

	glNormal3f( 0.469149, -0.097549, -0.877715 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.048972, -2.168769, 0.266036);
		glVertex3f( -0.008895, -2.168769, 0.235105);
		glVertex3f( -0.005322, -2.103470, 0.229758);
	glEnd();

	glNormal3f( 0.403614, 0.771504, -0.491811 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.073749, -2.447070, 0.111420);
		glVertex3f( 0.045570, -2.447070, 0.088294);
		glVertex3f( 0.009705, -2.405445, 0.124159);
	glEnd();

	glNormal3f( 0.607322, -0.289004, -0.740025 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.005322, -2.103470, 0.229758);
		glVertex3f( -0.055068, -2.103470, 0.188932);
		glVertex3f( -0.041600, -2.040681, 0.175464);
	glEnd();

	glNormal3f( 0.631369, -0.097549, -0.769323 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.008895, -2.168769, 0.235105);
		glVertex3f( -0.059616, -2.168769, 0.193480);
		glVertex3f( -0.055068, -2.103470, 0.188932);
	glEnd();

	glNormal3f( 0.184971, -0.956550, -0.225384 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.105898, -1.859537, 0.063305);
		glVertex3f( 0.086488, -1.859537, 0.047376);
		glVertex3f( 0.130887, -1.840490, 0.002977);
	glEnd();

	glNormal3f( 0.300176, 0.880970, -0.365769 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.105898, -2.478001, 0.063305);
		glVertex3f( 0.086488, -2.478001, 0.047376);
		glVertex3f( 0.045570, -2.447070, 0.088294);
	glEnd();

	glNormal3f( 0.631367, 0.097549, -0.769324 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.005322, -2.234067, 0.229758);
		glVertex3f( -0.055068, -2.234067, 0.188932);
		glVertex3f( -0.059616, -2.168769, 0.193480);
	glEnd();

	glNormal3f( 0.300174, -0.880972, -0.365764 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.073749, -1.890467, 0.111420);
		glVertex3f( 0.045570, -1.890467, 0.088294);
		glVertex3f( 0.086488, -1.859537, 0.047376);
	glEnd();

	glNormal3f( 0.403616, -0.771506, -0.491806 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.045570, -1.932093, 0.153593);
		glVertex3f( 0.009705, -1.932093, 0.124159);
		glVertex3f( 0.045570, -1.890467, 0.088294);
	glEnd();

	glNormal3f( 0.184969, 0.956551, -0.225381 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.140782, -2.497048, 0.011098);
		glVertex3f( 0.130887, -2.497048, 0.002977);
		glVertex3f( 0.086488, -2.478001, 0.047376);
	glEnd();

	glNormal3f( 0.607323, 0.289003, -0.740025 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.005260, -2.296857, 0.213921);
		glVertex3f( -0.041600, -2.296857, 0.175464);
		glVertex3f( -0.055068, -2.234067, 0.188932);
	glEnd();

	glNormal3f( 0.491343, -0.632563, -0.598704 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.022444, -1.982813, 0.188203);
		glVertex3f( -0.019729, -1.982813, 0.153593);
		glVertex3f( 0.009705, -1.932093, 0.124159);
	glEnd();

	glNormal3f( 0.560081, 0.469628, -0.682465 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.022444, -2.354724, 0.188203);
		glVertex3f( -0.019729, -2.354724, 0.153593);
		glVertex3f( -0.041600, -2.296857, 0.175464);
	glEnd();

	glNormal3f( 0.491342, 0.632560, -0.598707 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.045570, -2.405445, 0.153593);
		glVertex3f( 0.009705, -2.405445, 0.124159);
		glVertex3f( -0.019729, -2.354724, 0.153593);
	glEnd();

	glNormal3f( 0.560084, -0.469628, -0.682463 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.005260, -2.040681, 0.213921);
		glVertex3f( -0.041600, -2.040681, 0.175464);
		glVertex3f( -0.019729, -1.982813, 0.153593);
	glEnd();

	glNormal3f( 0.682463, -0.469627, -0.560084 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.041600, -2.040681, 0.175464);
		glVertex3f( -0.080057, -2.040681, 0.128604);
		glVertex3f( -0.054339, -1.982813, 0.111420);
	glEnd();

	glNormal3f( 0.598705, 0.632563, -0.491342 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.009705, -2.405445, 0.124159);
		glVertex3f( -0.019729, -2.405445, 0.088294);
		glVertex3f( -0.054339, -2.354724, 0.111420);
	glEnd();

	glNormal3f( 0.491806, 0.771506, -0.403615 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.045570, -2.447070, 0.088294);
		glVertex3f( 0.022444, -2.447070, 0.060115);
		glVertex3f( -0.019729, -2.405445, 0.088294);
	glEnd();

	glNormal3f( 0.740024, -0.289004, -0.607323 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055068, -2.103470, 0.188932);
		glVertex3f( -0.095894, -2.103470, 0.139186);
		glVertex3f( -0.080057, -2.040681, 0.128604);
	glEnd();

	glNormal3f( 0.225387, -0.956549, -0.184974 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.086488, -1.859537, 0.047376);
		glVertex3f( 0.070559, -1.859537, 0.027966);
		glVertex3f( 0.122766, -1.840490, -0.006918);
	glEnd();

	glNormal3f( 0.365766, 0.880972, -0.300171 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.086488, -2.478001, 0.047376);
		glVertex3f( 0.070559, -2.478001, 0.027966);
		glVertex3f( 0.022444, -2.447070, 0.060115);
	glEnd();

	glNormal3f( 0.769324, -0.097549, -0.631368 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.059616, -2.168769, 0.193480);
		glVertex3f( -0.101241, -2.168769, 0.142759);
		glVertex3f( -0.095894, -2.103470, 0.139186);
	glEnd();

	glNormal3f( 0.769324, 0.097550, -0.631367 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055068, -2.234067, 0.188932);
		glVertex3f( -0.095894, -2.234067, 0.139186);
		glVertex3f( -0.101241, -2.168769, 0.142759);
	glEnd();

	glNormal3f( 0.365764, -0.880974, -0.300171 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.045570, -1.890467, 0.088294);
		glVertex3f( 0.022444, -1.890467, 0.060115);
		glVertex3f( 0.070559, -1.859537, 0.027966);
	glEnd();

	glNormal3f( 0.225386, 0.956553, -0.184952 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.130887, -2.497048, 0.002977);
		glVertex3f( 0.122766, -2.497048, -0.006918);
		glVertex3f( 0.070559, -2.478001, 0.027966);
	glEnd();

	glNormal3f( 0.740025, 0.289004, -0.607321 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.041600, -2.296857, 0.175464);
		glVertex3f( -0.080057, -2.296857, 0.128604);
		glVertex3f( -0.095894, -2.234067, 0.139186);
	glEnd();

	glNormal3f( 0.491807, -0.771505, -0.403616 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.009705, -1.932093, 0.124159);
		glVertex3f( -0.019729, -1.932093, 0.088294);
		glVertex3f( 0.022444, -1.890467, 0.060115);
	glEnd();

	glNormal3f( 0.598704, -0.632563, -0.491343 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.019729, -1.982813, 0.153593);
		glVertex3f( -0.054339, -1.982813, 0.111420);
		glVertex3f( -0.019729, -1.932093, 0.088294);
	glEnd();

	glNormal3f( 0.682463, 0.469629, -0.560082 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.080057, -2.296857, 0.128604);
		glVertex3f( -0.041600, -2.296857, 0.175464);
		glVertex3f( -0.054339, -2.354724, 0.111420);
	glEnd();

	glNormal3f( 0.778616, 0.469629, -0.416180 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.108633, -2.296857, 0.075142);
		glVertex3f( -0.080057, -2.296857, 0.128604);
		glVertex3f( -0.080057, -2.354724, 0.063305);
	glEnd();

	glNormal3f( 0.683056, -0.632563, -0.365100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.054339, -1.982813, 0.111420);
		glVertex3f( -0.080057, -1.982813, 0.063305);
		glVertex3f( -0.041600, -1.932093, 0.047376);
	glEnd();

	glNormal3f( 0.778617, -0.469628, -0.416180 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.080057, -2.040681, 0.128604);
		glVertex3f( -0.108633, -2.040681, 0.075142);
		glVertex3f( -0.080057, -1.982813, 0.063305);
	glEnd();

	glNormal3f( 0.683056, 0.632561, -0.365104 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.019729, -2.405445, 0.088294);
		glVertex3f( -0.041600, -2.405445, 0.047376);
		glVertex3f( -0.080057, -2.354724, 0.063305);
	glEnd();

	glNormal3f( 0.844288, -0.289004, -0.451281 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.095894, -2.103470, 0.139186);
		glVertex3f( -0.126230, -2.103470, 0.082431);
		glVertex3f( -0.108633, -2.040681, 0.075142);
	glEnd();

	glNormal3f( 0.257143, -0.956550, -0.137442 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.070559, -1.859537, 0.027966);
		glVertex3f( 0.058722, -1.859537, 0.005821);
		glVertex3f( 0.116732, -1.840490, -0.018207);
	glEnd();

	glNormal3f( 0.561098, 0.771507, -0.299911 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.022444, -2.447070, 0.060115);
		glVertex3f( 0.005260, -2.447070, 0.027966);
		glVertex3f( -0.041600, -2.405445, 0.047376);
	glEnd();

	glNormal3f( 0.417299, 0.880971, -0.223050 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.070559, -2.478001, 0.027966);
		glVertex3f( 0.058722, -2.478001, 0.005821);
		glVertex3f( 0.005260, -2.447070, 0.027966);
	glEnd();

	glNormal3f( 0.877715, -0.097549, -0.469148 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.101241, -2.168769, 0.142759);
		glVertex3f( -0.132172, -2.168769, 0.084892);
		glVertex3f( -0.126230, -2.103470, 0.082431);
	glEnd();

	glNormal3f( 0.417296, -0.880973, -0.223048 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.022444, -1.890467, 0.060115);
		glVertex3f( 0.005260, -1.890467, 0.027966);
		glVertex3f( 0.058722, -1.859537, 0.005821);
	glEnd();

	glNormal3f( 0.257139, 0.956547, -0.137464 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.122766, -2.497048, -0.006918);
		glVertex3f( 0.116732, -2.497048, -0.018207);
		glVertex3f( 0.058722, -2.478001, 0.005821);
	glEnd();

	glNormal3f( 0.877715, 0.097549, -0.469149 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.095894, -2.234067, 0.139186);
		glVertex3f( -0.126230, -2.234067, 0.082431);
		glVertex3f( -0.132172, -2.168769, 0.084892);
	glEnd();

	glNormal3f( 0.844288, 0.289004, -0.451281 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.080057, -2.296857, 0.128604);
		glVertex3f( -0.108633, -2.296857, 0.075142);
		glVertex3f( -0.126230, -2.234067, 0.082431);
	glEnd();

	glNormal3f( 0.561098, -0.771505, -0.299916 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.019729, -1.932093, 0.088294);
		glVertex3f( -0.041600, -1.932093, 0.047376);
		glVertex3f( 0.005260, -1.890467, 0.027966);
	glEnd();

	glNormal3f( 0.952376, 0.097549, -0.288900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.126230, -2.234067, 0.082431);
		glVertex3f( -0.144911, -2.234067, 0.020848);
		glVertex3f( -0.151219, -2.168769, 0.022103);
	glEnd();

	glNormal3f( 0.608828, -0.771505, -0.184686 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.041600, -1.932093, 0.047376);
		glVertex3f( -0.055068, -1.932093, 0.002977);
		glVertex3f( -0.005322, -1.890467, -0.006918);
	glEnd();

	glNormal3f( 0.916106, 0.289003, -0.277898 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.108633, -2.296857, 0.075142);
		glVertex3f( -0.126230, -2.296857, 0.017132);
		glVertex3f( -0.144911, -2.234067, 0.020848);
	glEnd();

	glNormal3f( 0.844847, 0.469629, -0.256283 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.080057, -2.354724, 0.063305);
		glVertex3f( -0.095894, -2.354724, 0.011098);
		glVertex3f( -0.126230, -2.296857, 0.017132);
	glEnd();

	glNormal3f( 0.741159, -0.632563, -0.224829 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.080057, -1.982813, 0.063305);
		glVertex3f( -0.095894, -1.982813, 0.011098);
		glVertex3f( -0.055068, -1.932093, 0.002977);
	glEnd();

	glNormal3f( 0.741159, 0.632561, -0.224830 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.041600, -2.405445, 0.047376);
		glVertex3f( -0.055068, -2.405445, 0.002977);
		glVertex3f( -0.095894, -2.354724, 0.011098);
	glEnd();

	glNormal3f( 0.844849, -0.469628, -0.256282 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.108633, -2.040681, 0.075142);
		glVertex3f( -0.126230, -2.040681, 0.017132);
		glVertex3f( -0.095894, -1.982813, 0.011098);
	glEnd();

	glNormal3f( 0.916106, -0.289004, -0.277898 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.126230, -2.103470, 0.082431);
		glVertex3f( -0.144911, -2.103470, 0.020848);
		glVertex3f( -0.126230, -2.040681, 0.017132);
	glEnd();

	glNormal3f( 0.608827, 0.771506, -0.184685 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.005260, -2.447070, 0.027966);
		glVertex3f( -0.005322, -2.447070, -0.006918);
		glVertex3f( -0.055068, -2.405445, 0.002977);
	glEnd();

	glNormal3f( 0.952377, -0.097549, -0.288900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.132172, -2.168769, 0.084892);
		glVertex3f( -0.151219, -2.168769, 0.022103);
		glVertex3f( -0.144911, -2.103470, 0.020848);
	glEnd();

	glNormal3f( 0.279016, -0.956549, -0.084646 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.058722, -1.859537, 0.005821);
		glVertex3f( 0.051433, -1.859537, -0.018207);
		glVertex3f( 0.113016, -1.840490, -0.030457);
	glEnd();

	glNormal3f( 0.452793, -0.880973, -0.137349 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.005260, -1.890467, 0.027966);
		glVertex3f( -0.005322, -1.890467, -0.006918);
		glVertex3f( 0.051433, -1.859537, -0.018207);
	glEnd();

	glNormal3f( 0.452796, 0.880972, -0.137347 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.058722, -2.478001, 0.005821);
		glVertex3f( 0.051433, -2.478001, -0.018207);
		glVertex3f( -0.005322, -2.447070, -0.006918);
	glEnd();

	glNormal3f( 0.279013, 0.956551, -0.084625 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.116732, -2.497048, -0.018207);
		glVertex3f( 0.113016, -2.497048, -0.030457);
		glVertex3f( 0.051433, -2.478001, -0.018207);
	glEnd();

	glNormal3f( 0.470892, 0.880971, -0.046369 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.051433, -2.478001, -0.018207);
		glVertex3f( 0.048972, -2.478001, -0.043196);
		glVertex3f( -0.008895, -2.447070, -0.043196);
	glEnd();

	glNormal3f( 0.990438, 0.097550, -0.097549 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.144911, -2.234067, 0.020848);
		glVertex3f( -0.151219, -2.234067, -0.043196);
		glVertex3f( -0.157650, -2.168769, -0.043196);
	glEnd();

	glNormal3f( 0.470889, -0.880973, -0.046380 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.005322, -1.890467, -0.006918);
		glVertex3f( -0.008895, -1.890467, -0.043196);
		glVertex3f( 0.048972, -1.859537, -0.043196);
	glEnd();

	glNormal3f( 0.633159, -0.771505, -0.062361 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055068, -1.932093, 0.002977);
		glVertex3f( -0.059616, -1.932093, -0.043196);
		glVertex3f( -0.008895, -1.890467, -0.043196);
	glEnd();

	glNormal3f( 0.290164, 0.956550, -0.028579 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.113016, -2.497048, -0.030457);
		glVertex3f( 0.111762, -2.497048, -0.043196);
		glVertex3f( 0.048972, -2.478001, -0.043196);
	glEnd();

	glNormal3f( 0.952718, 0.289003, -0.093834 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.126230, -2.296857, 0.017132);
		glVertex3f( -0.132172, -2.296857, -0.043196);
		glVertex3f( -0.151219, -2.234067, -0.043196);
	glEnd();

	glNormal3f( 0.770780, -0.632563, -0.075914 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.095894, -1.982813, 0.011098);
		glVertex3f( -0.101241, -1.982813, -0.043196);
		glVertex3f( -0.059616, -1.932093, -0.043196);
	glEnd();

	glNormal3f( 0.878612, 0.469629, -0.086537 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.095894, -2.354724, 0.011098);
		glVertex3f( -0.101241, -2.354724, -0.043196);
		glVertex3f( -0.132172, -2.296857, -0.043196);
	glEnd();

	glNormal3f( 0.770781, 0.632562, -0.075911 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055068, -2.405445, 0.002977);
		glVertex3f( -0.059616, -2.405445, -0.043196);
		glVertex3f( -0.101241, -2.354724, -0.043196);
	glEnd();

	glNormal3f( 0.878613, -0.469628, -0.086536 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.126230, -2.040681, 0.017132);
		glVertex3f( -0.132172, -2.040681, -0.043196);
		glVertex3f( -0.101241, -1.982813, -0.043196);
	glEnd();

	glNormal3f( 0.633158, 0.771506, -0.062366 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.005322, -2.447070, -0.006918);
		glVertex3f( -0.008895, -2.447070, -0.043196);
		glVertex3f( -0.059616, -2.405445, -0.043196);
	glEnd();

	glNormal3f( 0.952718, -0.289004, -0.093833 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.144911, -2.103470, 0.020848);
		glVertex3f( -0.151219, -2.103470, -0.043196);
		glVertex3f( -0.132172, -2.040681, -0.043196);
	glEnd();

	glNormal3f( 0.990438, -0.097549, -0.097549 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.151219, -2.168769, 0.022103);
		glVertex3f( -0.157650, -2.168769, -0.043196);
		glVertex3f( -0.151219, -2.103470, -0.043196);
	glEnd();

	glNormal3f( 0.290167, -0.956549, -0.028572 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.051433, -1.859537, -0.018207);
		glVertex3f( 0.048972, -1.859537, -0.043196);
		glVertex3f( 0.111762, -1.840490, -0.043196);
	glEnd();

	glNormal3f( 0.633158, 0.771506, 0.062360 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.008895, -2.447070, -0.043196);
		glVertex3f( -0.005322, -2.447070, -0.079474);
		glVertex3f( -0.055068, -2.405445, -0.089369);
	glEnd();

	glNormal3f( 0.952718, -0.289004, 0.093835 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.151219, -2.103470, -0.043196);
		glVertex3f( -0.144911, -2.103470, -0.107240);
		glVertex3f( -0.126230, -2.040681, -0.103524);
	glEnd();

	glNormal3f( 0.290167, -0.956549, 0.028575 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.048972, -1.859537, -0.043196);
		glVertex3f( 0.051433, -1.859537, -0.068185);
		glVertex3f( 0.113016, -1.840490, -0.055935);
	glEnd();

	glNormal3f( 0.470892, 0.880971, 0.046378 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.048972, -2.478001, -0.043196);
		glVertex3f( 0.051433, -2.478001, -0.068185);
		glVertex3f( -0.005322, -2.447070, -0.079474);
	glEnd();

	glNormal3f( 0.990438, -0.097549, 0.097550 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.157650, -2.168769, -0.043196);
		glVertex3f( -0.151219, -2.168769, -0.108495);
		glVertex3f( -0.144911, -2.103470, -0.107240);
	glEnd();

	glNormal3f( 0.990438, 0.097550, 0.097550 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.151219, -2.234067, -0.043196);
		glVertex3f( -0.144911, -2.234067, -0.107240);
		glVertex3f( -0.151219, -2.168769, -0.108495);
	glEnd();

	glNormal3f( 0.470889, -0.880973, 0.046376 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.008895, -1.890467, -0.043196);
		glVertex3f( -0.005322, -1.890467, -0.079474);
		glVertex3f( 0.051433, -1.859537, -0.068185);
	glEnd();

	glNormal3f( 0.290164, 0.956550, 0.028574 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.111762, -2.497048, -0.043196);
		glVertex3f( 0.113016, -2.497048, -0.055935);
		glVertex3f( 0.051433, -2.478001, -0.068185);
	glEnd();

	glNormal3f( 0.952718, 0.289003, 0.093836 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.132172, -2.296857, -0.043196);
		glVertex3f( -0.126230, -2.296857, -0.103524);
		glVertex3f( -0.144911, -2.234067, -0.107240);
	glEnd();

	glNormal3f( 0.633159, -0.771505, 0.062361 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.059616, -1.932093, -0.043196);
		glVertex3f( -0.055068, -1.932093, -0.089369);
		glVertex3f( -0.005322, -1.890467, -0.079474);
	glEnd();

	glNormal3f( 0.770780, -0.632563, 0.075915 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.101241, -1.982813, -0.043196);
		glVertex3f( -0.095894, -1.982813, -0.097490);
		glVertex3f( -0.055068, -1.932093, -0.089369);
	glEnd();

	glNormal3f( 0.878612, 0.469629, 0.086536 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.101241, -2.354724, -0.043196);
		glVertex3f( -0.095894, -2.354724, -0.097490);
		glVertex3f( -0.126230, -2.296857, -0.103524);
	glEnd();

	glNormal3f( 0.878613, -0.469628, 0.086536 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.132172, -2.040681, -0.043196);
		glVertex3f( -0.126230, -2.040681, -0.103524);
		glVertex3f( -0.095894, -1.982813, -0.097490);
	glEnd();

	glNormal3f( 0.770781, 0.632562, 0.075913 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.059616, -2.405445, -0.043196);
		glVertex3f( -0.055068, -2.405445, -0.089369);
		glVertex3f( -0.095894, -2.354724, -0.097490);
	glEnd();

	glNormal3f( 0.844849, -0.469628, 0.256282 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.126230, -2.040681, -0.103524);
		glVertex3f( -0.108633, -2.040681, -0.161534);
		glVertex3f( -0.080057, -1.982813, -0.149698);
	glEnd();

	glNormal3f( 0.741159, 0.632562, 0.224831 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055068, -2.405445, -0.089369);
		glVertex3f( -0.041600, -2.405445, -0.133768);
		glVertex3f( -0.080057, -2.354724, -0.149698);
	glEnd();

	glNormal3f( 0.916106, -0.289004, 0.277897 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.144911, -2.103470, -0.107240);
		glVertex3f( -0.126230, -2.103470, -0.168823);
		glVertex3f( -0.108633, -2.040681, -0.161534);
	glEnd();

	glNormal3f( 0.279016, -0.956549, 0.084639 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.051433, -1.859537, -0.068185);
		glVertex3f( 0.058722, -1.859537, -0.092213);
		glVertex3f( 0.116732, -1.840490, -0.068185);
	glEnd();

	glNormal3f( 0.608827, 0.771506, 0.184683 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.005322, -2.447070, -0.079474);
		glVertex3f( 0.005260, -2.447070, -0.114358);
		glVertex3f( -0.041600, -2.405445, -0.133768);
	glEnd();

	glNormal3f( 0.452795, 0.880970, 0.137359 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.051433, -2.478001, -0.068185);
		glVertex3f( 0.058722, -2.478001, -0.092213);
		glVertex3f( 0.005260, -2.447070, -0.114358);
	glEnd();

	glNormal3f( 0.952376, -0.097549, 0.288900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.151219, -2.168769, -0.108495);
		glVertex3f( -0.132172, -2.168769, -0.171284);
		glVertex3f( -0.126230, -2.103470, -0.168823);
	glEnd();

	glNormal3f( 0.452793, -0.880973, 0.137350 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.005322, -1.890467, -0.079474);
		glVertex3f( 0.005260, -1.890467, -0.114358);
		glVertex3f( 0.058722, -1.859537, -0.092213);
	glEnd();

	glNormal3f( 0.279014, 0.956551, 0.084622 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.113016, -2.497048, -0.055935);
		glVertex3f( 0.116732, -2.497048, -0.068185);
		glVertex3f( 0.058722, -2.478001, -0.092213);
	glEnd();

	glNormal3f( 0.952376, 0.097549, 0.288900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.144911, -2.234067, -0.107240);
		glVertex3f( -0.126230, -2.234067, -0.168823);
		glVertex3f( -0.132172, -2.168769, -0.171284);
	glEnd();

	glNormal3f( 0.916106, 0.289003, 0.277898 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.126230, -2.296857, -0.103524);
		glVertex3f( -0.108633, -2.296857, -0.161534);
		glVertex3f( -0.126230, -2.234067, -0.168823);
	glEnd();

	glNormal3f( 0.608827, -0.771506, 0.184684 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055068, -1.932093, -0.089369);
		glVertex3f( -0.041600, -1.932093, -0.133768);
		glVertex3f( 0.005260, -1.890467, -0.114358);
	glEnd();

	glNormal3f( 0.844848, 0.469629, 0.256283 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.095894, -2.354724, -0.097490);
		glVertex3f( -0.080057, -2.354724, -0.149698);
		glVertex3f( -0.108633, -2.296857, -0.161534);
	glEnd();

	glNormal3f( 0.741159, -0.632563, 0.224826 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.095894, -1.982813, -0.097490);
		glVertex3f( -0.080057, -1.982813, -0.149698);
		glVertex3f( -0.041600, -1.932093, -0.133768);
	glEnd();

	glNormal3f( 0.844288, 0.289003, 0.451282 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.108633, -2.296857, -0.161534);
		glVertex3f( -0.080057, -2.296857, -0.214996);
		glVertex3f( -0.095894, -2.234067, -0.225578);
	glEnd();

	glNormal3f( 0.778616, 0.469629, 0.416179 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.080057, -2.296857, -0.214996);
		glVertex3f( -0.108633, -2.296857, -0.161534);
		glVertex3f( -0.054339, -2.354724, -0.197812);
	glEnd();

	glNormal3f( 0.683056, -0.632563, 0.365101 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.080057, -1.982813, -0.149698);
		glVertex3f( -0.054339, -1.982813, -0.197812);
		glVertex3f( -0.019729, -1.932093, -0.174686);
	glEnd();

	glNormal3f( 0.683056, 0.632561, 0.365104 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.041600, -2.405445, -0.133768);
		glVertex3f( -0.019729, -2.405445, -0.174686);
		glVertex3f( -0.054339, -2.354724, -0.197812);
	glEnd();

	glNormal3f( 0.778616, -0.469627, 0.416181 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.108633, -2.040681, -0.161534);
		glVertex3f( -0.080057, -2.040681, -0.214996);
		glVertex3f( -0.054339, -1.982813, -0.197812);
	glEnd();

	glNormal3f( 0.844288, -0.289004, 0.451282 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.126230, -2.103470, -0.168823);
		glVertex3f( -0.095894, -2.103470, -0.225578);
		glVertex3f( -0.080057, -2.040681, -0.214996);
	glEnd();

	glNormal3f( 0.561098, 0.771506, 0.299912 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.005260, -2.447070, -0.114358);
		glVertex3f( 0.022444, -2.447070, -0.146507);
		glVertex3f( -0.019729, -2.405445, -0.174686);
	glEnd();

	glNormal3f( 0.877716, -0.097549, 0.469148 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.132172, -2.168769, -0.171284);
		glVertex3f( -0.101241, -2.168769, -0.229151);
		glVertex3f( -0.095894, -2.103470, -0.225578);
	glEnd();

	glNormal3f( 0.257143, -0.956549, 0.137445 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.058722, -1.859537, -0.092213);
		glVertex3f( 0.070559, -1.859537, -0.114358);
		glVertex3f( 0.122766, -1.840490, -0.079474);
	glEnd();

	glNormal3f( 0.417296, -0.880973, 0.223048 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.005260, -1.890467, -0.114358);
		glVertex3f( 0.022444, -1.890467, -0.146507);
		glVertex3f( 0.070559, -1.859537, -0.114358);
	glEnd();

	glNormal3f( 0.417299, 0.880971, 0.223051 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.058722, -2.478001, -0.092213);
		glVertex3f( 0.070559, -2.478001, -0.114358);
		glVertex3f( 0.022444, -2.447070, -0.146507);
	glEnd();

	glNormal3f( 0.257140, 0.956549, 0.137451 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.116732, -2.497048, -0.068185);
		glVertex3f( 0.122766, -2.497048, -0.079474);
		glVertex3f( 0.070559, -2.478001, -0.114358);
	glEnd();

	glNormal3f( 0.877715, 0.097549, 0.469149 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.126230, -2.234067, -0.168823);
		glVertex3f( -0.095894, -2.234067, -0.225578);
		glVertex3f( -0.101241, -2.168769, -0.229151);
	glEnd();

	glNormal3f( 0.561098, -0.771505, 0.299917 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.041600, -1.932093, -0.133768);
		glVertex3f( -0.019729, -1.932093, -0.174686);
		glVertex3f( 0.022444, -1.890467, -0.146507);
	glEnd();

	glNormal3f( 0.365764, -0.880974, 0.300171 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.022444, -1.890467, -0.146507);
		glVertex3f( 0.045570, -1.890467, -0.174686);
		glVertex3f( 0.086488, -1.859537, -0.133768);
	glEnd();

	glNormal3f( 0.491807, -0.771505, 0.403616 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.019729, -1.932093, -0.174686);
		glVertex3f( 0.009705, -1.932093, -0.210551);
		glVertex3f( 0.045570, -1.890467, -0.174686);
	glEnd();

	glNormal3f( 0.225385, 0.956550, 0.184971 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.122766, -2.497048, -0.079474);
		glVertex3f( 0.130887, -2.497048, -0.089369);
		glVertex3f( 0.086488, -2.478001, -0.133768);
	glEnd();

	glNormal3f( 0.740025, 0.289003, 0.607322 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.080057, -2.296857, -0.214996);
		glVertex3f( -0.041600, -2.296857, -0.261856);
		glVertex3f( -0.055068, -2.234067, -0.275324);
	glEnd();

	glNormal3f( 0.598704, -0.632564, 0.491340 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.054339, -1.982813, -0.197812);
		glVertex3f( -0.019729, -1.982813, -0.239985);
		glVertex3f( 0.009705, -1.932093, -0.210551);
	glEnd();

	glNormal3f( 0.682463, 0.469629, 0.560083 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.054339, -2.354724, -0.197812);
		glVertex3f( -0.019729, -2.354724, -0.239985);
		glVertex3f( -0.041600, -2.296857, -0.261856);
	glEnd();

	glNormal3f( 0.598704, 0.632562, 0.491344 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.019729, -2.405445, -0.174686);
		glVertex3f( 0.009705, -2.405445, -0.210551);
		glVertex3f( -0.019729, -2.354724, -0.239985);
	glEnd();

	glNormal3f( 0.682464, -0.469628, 0.560083 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.080057, -2.040681, -0.214996);
		glVertex3f( -0.041600, -2.040681, -0.261856);
		glVertex3f( -0.019729, -1.982813, -0.239985);
	glEnd();

	glNormal3f( 0.491806, 0.771506, 0.403614 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.022444, -2.447070, -0.146507);
		glVertex3f( 0.045570, -2.447070, -0.174686);
		glVertex3f( 0.009705, -2.405445, -0.210551);
	glEnd();

	glNormal3f( 0.740024, -0.289004, 0.607323 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.095894, -2.103470, -0.225578);
		glVertex3f( -0.055068, -2.103470, -0.275324);
		glVertex3f( -0.041600, -2.040681, -0.261856);
	glEnd();

	glNormal3f( 0.769324, -0.097549, 0.631368 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.101241, -2.168769, -0.229151);
		glVertex3f( -0.059616, -2.168769, -0.279872);
		glVertex3f( -0.055068, -2.103470, -0.275324);
	glEnd();

	glNormal3f( 0.225388, -0.956549, 0.184970 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.070559, -1.859537, -0.114358);
		glVertex3f( 0.086488, -1.859537, -0.133768);
		glVertex3f( 0.130887, -1.840490, -0.089369);
	glEnd();

	glNormal3f( 0.365766, 0.880972, 0.300173 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.070559, -2.478001, -0.114358);
		glVertex3f( 0.086488, -2.478001, -0.133768);
		glVertex3f( 0.045570, -2.447070, -0.174686);
	glEnd();

	glNormal3f( 0.769323, 0.097550, 0.631369 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.095894, -2.234067, -0.225578);
		glVertex3f( -0.055068, -2.234067, -0.275324);
		glVertex3f( -0.059616, -2.168769, -0.279872);
	glEnd();

	glNormal3f( 0.300176, 0.880971, 0.365765 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.086488, -2.478001, -0.133768);
		glVertex3f( 0.105898, -2.478001, -0.149698);
		glVertex3f( 0.073749, -2.447070, -0.197812);
	glEnd();

	glNormal3f( 0.631368, -0.097549, 0.769324 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.059616, -2.168769, -0.279872);
		glVertex3f( -0.008895, -2.168769, -0.321498);
		glVertex3f( -0.005322, -2.103470, -0.316150);
	glEnd();

	glNormal3f( 0.631367, 0.097549, 0.769324 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055068, -2.234067, -0.275324);
		glVertex3f( -0.005322, -2.234067, -0.316150);
		glVertex3f( -0.008895, -2.168769, -0.321498);
	glEnd();

	glNormal3f( 0.300174, -0.880972, 0.365766 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.045570, -1.890467, -0.174686);
		glVertex3f( 0.073749, -1.890467, -0.197812);
		glVertex3f( 0.105898, -1.859537, -0.149698);
	glEnd();

	glNormal3f( 0.184969, 0.956551, 0.225380 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.130887, -2.497048, -0.089369);
		glVertex3f( 0.140782, -2.497048, -0.097490);
		glVertex3f( 0.105898, -2.478001, -0.149698);
	glEnd();

	glNormal3f( 0.607322, 0.289003, 0.740026 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.041600, -2.296857, -0.261856);
		glVertex3f( 0.005260, -2.296857, -0.300313);
		glVertex3f( -0.005322, -2.234067, -0.316150);
	glEnd();

	glNormal3f( 0.403616, -0.771505, 0.491807 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.009705, -1.932093, -0.210551);
		glVertex3f( 0.045570, -1.932093, -0.239985);
		glVertex3f( 0.073749, -1.890467, -0.197812);
	glEnd();

	glNormal3f( 0.491343, -0.632563, 0.598703 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.019729, -1.982813, -0.239985);
		glVertex3f( 0.022444, -1.982813, -0.274595);
		glVertex3f( 0.045570, -1.932093, -0.239985);
	glEnd();

	glNormal3f( 0.560083, 0.469629, 0.682463 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.019729, -2.354724, -0.239985);
		glVertex3f( 0.022444, -2.354724, -0.274595);
		glVertex3f( 0.005260, -2.296857, -0.300313);
	glEnd();

	glNormal3f( 0.560084, -0.469628, 0.682462 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.041600, -2.040681, -0.261856);
		glVertex3f( 0.005260, -2.040681, -0.300313);
		glVertex3f( 0.022444, -1.982813, -0.274595);
	glEnd();

	glNormal3f( 0.491344, 0.632562, 0.598704 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.009705, -2.405445, -0.210551);
		glVertex3f( 0.045570, -2.405445, -0.239985);
		glVertex3f( 0.022444, -2.354724, -0.274595);
	glEnd();

	glNormal3f( 0.403615, 0.771507, 0.491805 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.045570, -2.447070, -0.174686);
		glVertex3f( 0.073749, -2.447070, -0.197812);
		glVertex3f( 0.045570, -2.405445, -0.239985);
	glEnd();

	glNormal3f( 0.607321, -0.289003, 0.740026 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055068, -2.103470, -0.275324);
		glVertex3f( -0.005322, -2.103470, -0.316150);
		glVertex3f( 0.005260, -2.040681, -0.300313);
	glEnd();

	glNormal3f( 0.184971, -0.956548, 0.225391 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.086488, -1.859537, -0.133768);
		glVertex3f( 0.105898, -1.859537, -0.149698);
		glVertex3f( 0.140782, -1.840490, -0.097490);
	glEnd();

	glNormal3f( 0.451281, -0.289004, 0.844288 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.005322, -2.103470, -0.316150);
		glVertex3f( 0.051433, -2.103470, -0.346486);
		glVertex3f( 0.058722, -2.040681, -0.328889);
	glEnd();

	glNormal3f( 0.137445, -0.956549, 0.257143 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.105898, -1.859537, -0.149698);
		glVertex3f( 0.128043, -1.859537, -0.161534);
		glVertex3f( 0.152072, -1.840490, -0.103524);
	glEnd();

	glNormal3f( 0.299913, 0.771506, 0.561098 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.073749, -2.447070, -0.197812);
		glVertex3f( 0.105898, -2.447070, -0.214996);
		glVertex3f( 0.086488, -2.405445, -0.261856);
	glEnd();

	glNormal3f( 0.223051, 0.880971, 0.417300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.105898, -2.478001, -0.149698);
		glVertex3f( 0.128043, -2.478001, -0.161534);
		glVertex3f( 0.105898, -2.447070, -0.214996);
	glEnd();

	glNormal3f( 0.469149, -0.097549, 0.877715 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.008895, -2.168769, -0.321498);
		glVertex3f( 0.048972, -2.168769, -0.352428);
		glVertex3f( 0.051433, -2.103470, -0.346486);
	glEnd();

	glNormal3f( 0.223050, -0.880973, 0.417295 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.073749, -1.890467, -0.197812);
		glVertex3f( 0.105898, -1.890467, -0.214996);
		glVertex3f( 0.128043, -1.859537, -0.161534);
	glEnd();

	glNormal3f( 0.137444, 0.956550, 0.257142 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.140782, -2.497048, -0.097490);
		glVertex3f( 0.152072, -2.497048, -0.103524);
		glVertex3f( 0.128043, -2.478001, -0.161534);
	glEnd();

	glNormal3f( 0.469148, 0.097550, 0.877715 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.005322, -2.234067, -0.316150);
		glVertex3f( 0.051434, -2.234067, -0.346486);
		glVertex3f( 0.048972, -2.168769, -0.352428);
	glEnd();

	glNormal3f( 0.451280, 0.289003, 0.844289 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.005260, -2.296857, -0.300313);
		glVertex3f( 0.058722, -2.296857, -0.328889);
		glVertex3f( 0.051434, -2.234067, -0.346486);
	glEnd();

	glNormal3f( 0.299913, -0.771505, 0.561100 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.045570, -1.932093, -0.239985);
		glVertex3f( 0.086488, -1.932093, -0.261856);
		glVertex3f( 0.105898, -1.890467, -0.214996);
	glEnd();

	glNormal3f( 0.416179, 0.469629, 0.778616 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.022444, -2.354724, -0.274595);
		glVertex3f( 0.070559, -2.354724, -0.300313);
		glVertex3f( 0.058722, -2.296857, -0.328889);
	glEnd();

	glNormal3f( 0.365101, -0.632564, 0.683055 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.022444, -1.982813, -0.274595);
		glVertex3f( 0.070559, -1.982813, -0.300313);
		glVertex3f( 0.086488, -1.932093, -0.261856);
	glEnd();

	glNormal3f( 0.416180, -0.469628, 0.778616 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.005260, -2.040681, -0.300313);
		glVertex3f( 0.058722, -2.040681, -0.328889);
		glVertex3f( 0.070559, -1.982813, -0.300313);
	glEnd();

	glNormal3f( 0.365101, 0.632561, 0.683057 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.045570, -2.405445, -0.239985);
		glVertex3f( 0.086488, -2.405445, -0.261856);
		glVertex3f( 0.070559, -2.354724, -0.300313);
	glEnd();

	glNormal3f( 0.224828, 0.632563, 0.741159 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.086488, -2.405445, -0.261856);
		glVertex3f( 0.130887, -2.405445, -0.275324);
		glVertex3f( 0.122766, -2.354724, -0.316150);
	glEnd();

	glNormal3f( 0.256282, -0.469627, 0.844849 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.058722, -2.040681, -0.328889);
		glVertex3f( 0.116732, -2.040681, -0.346486);
		glVertex3f( 0.122766, -1.982813, -0.316150);
	glEnd();

	glNormal3f( 0.277897, -0.289004, 0.916106 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.051433, -2.103470, -0.346486);
		glVertex3f( 0.113016, -2.103470, -0.365167);
		glVertex3f( 0.116732, -2.040681, -0.346486);
	glEnd();

	glNormal3f( 0.184685, 0.771506, 0.608826 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.105898, -2.447070, -0.214996);
		glVertex3f( 0.140782, -2.447070, -0.225578);
		glVertex3f( 0.130887, -2.405445, -0.275324);
	glEnd();

	glNormal3f( 0.288901, -0.097550, 0.952376 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.048972, -2.168769, -0.352428);
		glVertex3f( 0.111762, -2.168769, -0.371475);
		glVertex3f( 0.113016, -2.103470, -0.365167);
	glEnd();

	glNormal3f( 0.084639, -0.956549, 0.279018 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.128043, -1.859537, -0.161534);
		glVertex3f( 0.152072, -1.859537, -0.168823);
		glVertex3f( 0.164321, -1.840490, -0.107240);
	glEnd();

	glNormal3f( 0.137353, -0.880971, 0.452796 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.105898, -1.890467, -0.214996);
		glVertex3f( 0.140782, -1.890467, -0.225578);
		glVertex3f( 0.152072, -1.859537, -0.168823);
	glEnd();

	glNormal3f( 0.137354, 0.880972, 0.452794 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.128043, -2.478001, -0.161534);
		glVertex3f( 0.152072, -2.478001, -0.168823);
		glVertex3f( 0.140782, -2.447070, -0.225578);
	glEnd();

	glNormal3f( 0.084638, 0.956551, 0.279011 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.152072, -2.497048, -0.103524);
		glVertex3f( 0.164321, -2.497048, -0.107240);
		glVertex3f( 0.152072, -2.478001, -0.168823);
	glEnd();

	glNormal3f( 0.288900, 0.097550, 0.952376 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.051434, -2.234067, -0.346486);
		glVertex3f( 0.113016, -2.234067, -0.365167);
		glVertex3f( 0.111762, -2.168769, -0.371475);
	glEnd();

	glNormal3f( 0.184686, -0.771506, 0.608827 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.086488, -1.932093, -0.261856);
		glVertex3f( 0.130887, -1.932093, -0.275324);
		glVertex3f( 0.140782, -1.890467, -0.225578);
	glEnd();

	glNormal3f( 0.277898, 0.289003, 0.916106 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.058722, -2.296857, -0.328889);
		glVertex3f( 0.116732, -2.296857, -0.346486);
		glVertex3f( 0.113016, -2.234067, -0.365167);
	glEnd();

	glNormal3f( 0.256282, 0.469630, 0.844848 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.070559, -2.354724, -0.300313);
		glVertex3f( 0.122766, -2.354724, -0.316150);
		glVertex3f( 0.116732, -2.296857, -0.346486);
	glEnd();

	glNormal3f( 0.224828, -0.632563, 0.741158 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.070559, -1.982813, -0.300313);
		glVertex3f( 0.122766, -1.982813, -0.316150);
		glVertex3f( 0.130887, -1.932093, -0.275324);
	glEnd();

	glNormal3f( 0.093834, 0.289003, 0.952718 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.116732, -2.296857, -0.346486);
		glVertex3f( 0.177060, -2.296857, -0.352428);
		glVertex3f( 0.177060, -2.234067, -0.371475);
	glEnd();

	glNormal3f( 0.075915, -0.632563, 0.770779 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.122766, -1.982813, -0.316150);
		glVertex3f( 0.177060, -1.982813, -0.321498);
		glVertex3f( 0.177060, -1.932093, -0.279872);
	glEnd();

	glNormal3f( 0.086535, 0.469631, 0.878612 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.122766, -2.354724, -0.316150);
		glVertex3f( 0.177060, -2.354724, -0.321498);
		glVertex3f( 0.177060, -2.296857, -0.352428);
	glEnd();

	glNormal3f( 0.075915, 0.632562, 0.770781 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.130887, -2.405445, -0.275324);
		glVertex3f( 0.177060, -2.405445, -0.279872);
		glVertex3f( 0.177060, -2.354724, -0.321498);
	glEnd();

	glNormal3f( 0.086536, -0.469627, 0.878614 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.116732, -2.040681, -0.346486);
		glVertex3f( 0.177060, -2.040681, -0.352428);
		glVertex3f( 0.177060, -1.982813, -0.321498);
	glEnd();

	glNormal3f( 0.062360, 0.771505, 0.633159 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.140782, -2.447070, -0.225578);
		glVertex3f( 0.177060, -2.447070, -0.229151);
		glVertex3f( 0.177060, -2.405445, -0.279872);
	glEnd();

	glNormal3f( 0.093835, -0.289004, 0.952718 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.113016, -2.103470, -0.365167);
		glVertex3f( 0.177060, -2.103470, -0.371475);
		glVertex3f( 0.177060, -2.040681, -0.352428);
	glEnd();

	glNormal3f( 0.097549, -0.097549, 0.990439 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.111762, -2.168769, -0.371475);
		glVertex3f( 0.177060, -2.168769, -0.377906);
		glVertex3f( 0.177060, -2.103470, -0.371475);
	glEnd();

	glNormal3f( 0.028579, -0.956549, 0.290169 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.152072, -1.859537, -0.168823);
		glVertex3f( 0.177060, -1.859537, -0.171284);
		glVertex3f( 0.177060, -1.840490, -0.108495);
	glEnd();

	glNormal3f( 0.046379, 0.880971, 0.470892 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.152072, -2.478001, -0.168823);
		glVertex3f( 0.177060, -2.478001, -0.171284);
		glVertex3f( 0.177060, -2.447070, -0.229151);
	glEnd();

	glNormal3f( 0.097549, 0.097550, 0.990438 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.113016, -2.234067, -0.365167);
		glVertex3f( 0.177060, -2.234067, -0.371475);
		glVertex3f( 0.177060, -2.168769, -0.377906);
	glEnd();

	glNormal3f( 0.046378, -0.880971, 0.470891 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.140782, -1.890467, -0.225578);
		glVertex3f( 0.177060, -1.890467, -0.229151);
		glVertex3f( 0.177060, -1.859537, -0.171284);
	glEnd();

	glNormal3f( 0.062361, -0.771504, 0.633160 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.130887, -1.932093, -0.275324);
		glVertex3f( 0.177060, -1.932093, -0.279872);
		glVertex3f( 0.177060, -1.890467, -0.229151);
	glEnd();

	glNormal3f( 0.028578, 0.956549, 0.290167 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.164321, -2.497048, -0.107240);
		glVertex3f( 0.177060, -2.497048, -0.108495);
		glVertex3f( 0.177060, -2.478001, -0.171284);
	glEnd();

	glNormal3f( -0.028579, 0.956549, 0.290167 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.497048, -0.108495);
		glVertex3f( 0.189800, -2.497048, -0.107240);
		glVertex3f( 0.202049, -2.478001, -0.168823);
	glEnd();

	glNormal3f( -0.093834, 0.289002, 0.952719 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.296857, -0.352428);
		glVertex3f( 0.237389, -2.296857, -0.346486);
		glVertex3f( 0.241104, -2.234067, -0.365167);
	glEnd();

	glNormal3f( -0.062362, -0.771505, 0.633160 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.932093, -0.279872);
		glVertex3f( 0.223234, -1.932093, -0.275324);
		glVertex3f( 0.213338, -1.890467, -0.225578);
	glEnd();

	glNormal3f( -0.075915, -0.632564, 0.770779 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.982813, -0.321498);
		glVertex3f( 0.231354, -1.982813, -0.316150);
		glVertex3f( 0.223234, -1.932093, -0.275324);
	glEnd();

	glNormal3f( -0.086536, 0.469631, 0.878612 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.354724, -0.321498);
		glVertex3f( 0.231354, -2.354724, -0.316150);
		glVertex3f( 0.237389, -2.296857, -0.346486);
	glEnd();

	glNormal3f( -0.086536, -0.469627, 0.878614 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.040681, -0.352428);
		glVertex3f( 0.237389, -2.040681, -0.346486);
		glVertex3f( 0.231354, -1.982813, -0.316150);
	glEnd();

	glNormal3f( -0.075915, 0.632562, 0.770780 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.231354, -2.354724, -0.316150);
		glVertex3f( 0.177060, -2.354724, -0.321498);
		glVertex3f( 0.223234, -2.405445, -0.275324);
	glEnd();

	glNormal3f( -0.062360, 0.771505, 0.633160 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.447070, -0.229151);
		glVertex3f( 0.213338, -2.447070, -0.225578);
		glVertex3f( 0.223234, -2.405445, -0.275324);
	glEnd();

	glNormal3f( -0.093835, -0.289005, 0.952718 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.103470, -0.371475);
		glVertex3f( 0.241104, -2.103470, -0.365167);
		glVertex3f( 0.237389, -2.040681, -0.346486);
	glEnd();

	glNormal3f( -0.028579, -0.956549, 0.290167 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.859537, -0.171284);
		glVertex3f( 0.202049, -1.859537, -0.168823);
		glVertex3f( 0.189800, -1.840490, -0.107240);
	glEnd();

	glNormal3f( -0.046379, 0.880969, 0.470895 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.478001, -0.171284);
		glVertex3f( 0.202049, -2.478001, -0.168823);
		glVertex3f( 0.213338, -2.447070, -0.225578);
	glEnd();

	glNormal3f( -0.097550, -0.097549, 0.990438 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.168769, -0.377906);
		glVertex3f( 0.242359, -2.168769, -0.371475);
		glVertex3f( 0.241104, -2.103470, -0.365167);
	glEnd();

	glNormal3f( -0.097549, 0.097550, 0.990438 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.234067, -0.371475);
		glVertex3f( 0.241104, -2.234067, -0.365167);
		glVertex3f( 0.242359, -2.168769, -0.371475);
	glEnd();

	glNormal3f( -0.046379, -0.880973, 0.470889 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.890467, -0.229151);
		glVertex3f( 0.213338, -1.890467, -0.225578);
		glVertex3f( 0.202049, -1.859537, -0.168823);
	glEnd();

	glNormal3f( -0.137354, 0.880972, 0.452794 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.202049, -2.478001, -0.168823);
		glVertex3f( 0.226078, -2.478001, -0.161534);
		glVertex3f( 0.248222, -2.447070, -0.214996);
	glEnd();

	glNormal3f( -0.288900, -0.097549, 0.952376 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.242359, -2.168769, -0.371475);
		glVertex3f( 0.305149, -2.168769, -0.352428);
		glVertex3f( 0.302687, -2.103470, -0.346486);
	glEnd();

	glNormal3f( -0.137353, -0.880972, 0.452794 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.213338, -1.890467, -0.225578);
		glVertex3f( 0.248222, -1.890467, -0.214996);
		glVertex3f( 0.226078, -1.859537, -0.161534);
	glEnd();

	glNormal3f( -0.084638, 0.956552, 0.279008 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.189800, -2.497048, -0.107240);
		glVertex3f( 0.202049, -2.497048, -0.103524);
		glVertex3f( 0.226078, -2.478001, -0.161534);
	glEnd();

	glNormal3f( -0.288901, 0.097550, 0.952376 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.241104, -2.234067, -0.365167);
		glVertex3f( 0.302687, -2.234067, -0.346486);
		glVertex3f( 0.305149, -2.168769, -0.352428);
	glEnd();

	glNormal3f( -0.277899, 0.289004, 0.916105 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.237389, -2.296857, -0.346486);
		glVertex3f( 0.295398, -2.296857, -0.328889);
		glVertex3f( 0.302687, -2.234067, -0.346486);
	glEnd();

	glNormal3f( -0.184686, -0.771505, 0.608828 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.223234, -1.932093, -0.275324);
		glVertex3f( 0.267632, -1.932093, -0.261856);
		glVertex3f( 0.248222, -1.890467, -0.214996);
	glEnd();

	glNormal3f( -0.256282, 0.469630, 0.844847 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.231354, -2.354724, -0.316150);
		glVertex3f( 0.283562, -2.354724, -0.300313);
		glVertex3f( 0.295398, -2.296857, -0.328889);
	glEnd();

	glNormal3f( -0.224828, -0.632563, 0.741159 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.231354, -1.982813, -0.316150);
		glVertex3f( 0.283562, -1.982813, -0.300313);
		glVertex3f( 0.267632, -1.932093, -0.261856);
	glEnd();

	glNormal3f( -0.256282, -0.469628, 0.844849 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.237389, -2.040681, -0.346486);
		glVertex3f( 0.295398, -2.040681, -0.328889);
		glVertex3f( 0.283562, -1.982813, -0.300313);
	glEnd();

	glNormal3f( -0.224829, 0.632564, 0.741158 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.223234, -2.405445, -0.275324);
		glVertex3f( 0.267632, -2.405445, -0.261856);
		glVertex3f( 0.283562, -2.354724, -0.300313);
	glEnd();

	glNormal3f( -0.277898, -0.289004, 0.916106 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.241104, -2.103470, -0.365167);
		glVertex3f( 0.302687, -2.103470, -0.346486);
		glVertex3f( 0.295398, -2.040681, -0.328889);
	glEnd();

	glNormal3f( -0.084639, -0.956549, 0.279015 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.202049, -1.859537, -0.168823);
		glVertex3f( 0.226078, -1.859537, -0.161534);
		glVertex3f( 0.202049, -1.840490, -0.103524);
	glEnd();

	glNormal3f( -0.184686, 0.771505, 0.608827 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.213338, -2.447070, -0.225578);
		glVertex3f( 0.248222, -2.447070, -0.214996);
		glVertex3f( 0.267632, -2.405445, -0.261856);
	glEnd();

	glNormal3f( -0.451281, -0.289004, 0.844288 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.302687, -2.103470, -0.346486);
		glVertex3f( 0.359442, -2.103470, -0.316150);
		glVertex3f( 0.348861, -2.040681, -0.300313);
	glEnd();

	glNormal3f( -0.299913, 0.771507, 0.561096 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.248222, -2.447070, -0.214996);
		glVertex3f( 0.280372, -2.447070, -0.197812);
		glVertex3f( 0.308551, -2.405445, -0.239985);
	glEnd();

	glNormal3f( -0.469149, -0.097549, 0.877715 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.305149, -2.168769, -0.352428);
		glVertex3f( 0.363016, -2.168769, -0.321498);
		glVertex3f( 0.359442, -2.103470, -0.316150);
	glEnd();

	glNormal3f( -0.137446, -0.956550, 0.257139 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.226078, -1.859537, -0.161534);
		glVertex3f( 0.248222, -1.859537, -0.149697);
		glVertex3f( 0.213338, -1.840490, -0.097490);
	glEnd();

	glNormal3f( -0.223049, -0.880972, 0.417297 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.248222, -1.890467, -0.214996);
		glVertex3f( 0.280372, -1.890467, -0.197812);
		glVertex3f( 0.248222, -1.859537, -0.149697);
	glEnd();

	glNormal3f( -0.223051, 0.880969, 0.417303 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.226078, -2.478001, -0.161534);
		glVertex3f( 0.248222, -2.478001, -0.149698);
		glVertex3f( 0.280372, -2.447070, -0.197812);
	glEnd();

	glNormal3f( -0.137444, 0.956550, 0.257142 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.202049, -2.497048, -0.103524);
		glVertex3f( 0.213338, -2.497048, -0.097490);
		glVertex3f( 0.248222, -2.478001, -0.149698);
	glEnd();

	glNormal3f( -0.469150, 0.097550, 0.877714 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.302687, -2.234067, -0.346486);
		glVertex3f( 0.359442, -2.234067, -0.316150);
		glVertex3f( 0.363016, -2.168769, -0.321498);
	glEnd();

	glNormal3f( -0.299914, -0.771505, 0.561098 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.267632, -1.932093, -0.261856);
		glVertex3f( 0.308551, -1.932093, -0.239985);
		glVertex3f( 0.280372, -1.890467, -0.197812);
	glEnd();

	glNormal3f( -0.451282, 0.289004, 0.844287 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.295398, -2.296857, -0.328889);
		glVertex3f( 0.348861, -2.296857, -0.300313);
		glVertex3f( 0.359442, -2.234067, -0.316150);
	glEnd();

	glNormal3f( -0.416180, 0.469629, 0.778616 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.283562, -2.354724, -0.300313);
		glVertex3f( 0.331676, -2.354724, -0.274595);
		glVertex3f( 0.348861, -2.296857, -0.300313);
	glEnd();

	glNormal3f( -0.365102, -0.632563, 0.683055 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.283562, -1.982813, -0.300313);
		glVertex3f( 0.331676, -1.982813, -0.274595);
		glVertex3f( 0.308551, -1.932093, -0.239985);
	glEnd();

	glNormal3f( -0.365102, 0.632563, 0.683055 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.267632, -2.405445, -0.261856);
		glVertex3f( 0.308551, -2.405445, -0.239985);
		glVertex3f( 0.331676, -2.354724, -0.274595);
	glEnd();

	glNormal3f( -0.416180, -0.469627, 0.778618 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.295398, -2.040681, -0.328889);
		glVertex3f( 0.348861, -2.040681, -0.300313);
		glVertex3f( 0.331676, -1.982813, -0.274595);
	glEnd();

	glNormal3f( -0.560085, 0.469630, 0.682461 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.331676, -2.354724, -0.274595);
		glVertex3f( 0.373849, -2.354724, -0.239985);
		glVertex3f( 0.395720, -2.296857, -0.261856);
	glEnd();

	glNormal3f( -0.491343, 0.632562, 0.598705 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.308551, -2.405445, -0.239985);
		glVertex3f( 0.344416, -2.405445, -0.210551);
		glVertex3f( 0.373849, -2.354724, -0.239985);
	glEnd();

	glNormal3f( -0.560085, -0.469627, 0.682463 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.348861, -2.040681, -0.300313);
		glVertex3f( 0.395720, -2.040681, -0.261856);
		glVertex3f( 0.373849, -1.982813, -0.239985);
	glEnd();

	glNormal3f( -0.403615, 0.771506, 0.491806 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.280372, -2.447070, -0.197812);
		glVertex3f( 0.308551, -2.447070, -0.174686);
		glVertex3f( 0.344416, -2.405445, -0.210551);
	glEnd();

	glNormal3f( -0.607322, -0.289004, 0.740025 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.359442, -2.103470, -0.316150);
		glVertex3f( 0.409189, -2.103470, -0.275324);
		glVertex3f( 0.395720, -2.040681, -0.261856);
	glEnd();

	glNormal3f( -0.631368, -0.097548, 0.769324 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.363016, -2.168769, -0.321498);
		glVertex3f( 0.413736, -2.168769, -0.279872);
		glVertex3f( 0.409189, -2.103470, -0.275324);
	glEnd();

	glNormal3f( -0.184971, -0.956548, 0.225391 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.248222, -1.859537, -0.149697);
		glVertex3f( 0.267632, -1.859537, -0.133768);
		glVertex3f( 0.223234, -1.840490, -0.089369);
	glEnd();

	glNormal3f( -0.300176, 0.880970, 0.365768 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.248222, -2.478001, -0.149698);
		glVertex3f( 0.267632, -2.478001, -0.133768);
		glVertex3f( 0.308551, -2.447070, -0.174686);
	glEnd();

	glNormal3f( -0.631367, 0.097549, 0.769324 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.359442, -2.234067, -0.316150);
		glVertex3f( 0.409189, -2.234067, -0.275324);
		glVertex3f( 0.413736, -2.168769, -0.279872);
	glEnd();

	glNormal3f( -0.300175, -0.880973, 0.365762 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.280372, -1.890467, -0.197812);
		glVertex3f( 0.308551, -1.890467, -0.174686);
		glVertex3f( 0.267632, -1.859537, -0.133768);
	glEnd();

	glNormal3f( -0.403616, -0.771506, 0.491805 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.308551, -1.932093, -0.239985);
		glVertex3f( 0.344416, -1.932093, -0.210551);
		glVertex3f( 0.308551, -1.890467, -0.174686);
	glEnd();

	glNormal3f( -0.184968, 0.956547, 0.225398 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.213338, -2.497048, -0.097490);
		glVertex3f( 0.223234, -2.497048, -0.089369);
		glVertex3f( 0.267632, -2.478001, -0.133768);
	glEnd();

	glNormal3f( -0.607324, 0.289003, 0.740024 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.348861, -2.296857, -0.300313);
		glVertex3f( 0.395720, -2.296857, -0.261856);
		glVertex3f( 0.409189, -2.234067, -0.275324);
	glEnd();

	glNormal3f( -0.491343, -0.632563, 0.598704 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.331676, -1.982813, -0.274595);
		glVertex3f( 0.373849, -1.982813, -0.239985);
		glVertex3f( 0.344416, -1.932093, -0.210551);
	glEnd();

	glNormal3f( -0.491807, -0.771505, 0.403616 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.344416, -1.932093, -0.210551);
		glVertex3f( 0.373849, -1.932093, -0.174686);
		glVertex3f( 0.331676, -1.890467, -0.146507);
	glEnd();

	glNormal3f( -0.598703, -0.632563, 0.491343 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.373849, -1.982813, -0.239985);
		glVertex3f( 0.408460, -1.982813, -0.197812);
		glVertex3f( 0.373849, -1.932093, -0.174686);
	glEnd();

	glNormal3f( -0.682463, 0.469629, 0.560082 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.373849, -2.354724, -0.239985);
		glVertex3f( 0.408460, -2.354724, -0.197812);
		glVertex3f( 0.434177, -2.296857, -0.214996);
	glEnd();

	glNormal3f( -0.682464, -0.469627, 0.560083 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.395720, -2.040681, -0.261856);
		glVertex3f( 0.434177, -2.040681, -0.214996);
		glVertex3f( 0.408460, -1.982813, -0.197812);
	glEnd();

	glNormal3f( -0.598705, 0.632563, 0.491341 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.344416, -2.405445, -0.210551);
		glVertex3f( 0.373849, -2.405445, -0.174686);
		glVertex3f( 0.408460, -2.354724, -0.197812);
	glEnd();

	glNormal3f( -0.491807, 0.771506, 0.403614 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.308551, -2.447070, -0.174686);
		glVertex3f( 0.331676, -2.447070, -0.146507);
		glVertex3f( 0.373849, -2.405445, -0.174686);
	glEnd();

	glNormal3f( -0.740024, -0.289004, 0.607323 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.409189, -2.103470, -0.275324);
		glVertex3f( 0.450014, -2.103470, -0.225578);
		glVertex3f( 0.434177, -2.040681, -0.214996);
	glEnd();

	glNormal3f( -0.225388, -0.956548, 0.184975 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.267632, -1.859537, -0.133768);
		glVertex3f( 0.283562, -1.859537, -0.114358);
		glVertex3f( 0.231354, -1.840490, -0.079474);
	glEnd();

	glNormal3f( -0.365767, 0.880973, 0.300170 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.267632, -2.478001, -0.133768);
		glVertex3f( 0.283562, -2.478001, -0.114358);
		glVertex3f( 0.331676, -2.447070, -0.146507);
	glEnd();

	glNormal3f( -0.769324, -0.097548, 0.631368 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.413736, -2.168769, -0.279872);
		glVertex3f( 0.455362, -2.168769, -0.229151);
		glVertex3f( 0.450014, -2.103470, -0.225578);
	glEnd();

	glNormal3f( -0.769324, 0.097550, 0.631368 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.409189, -2.234067, -0.275324);
		glVertex3f( 0.450014, -2.234067, -0.225578);
		glVertex3f( 0.455362, -2.168769, -0.229151);
	glEnd();

	glNormal3f( -0.365764, -0.880972, 0.300176 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.308551, -1.890467, -0.174686);
		glVertex3f( 0.331676, -1.890467, -0.146507);
		glVertex3f( 0.283562, -1.859537, -0.114358);
	glEnd();

	glNormal3f( -0.225385, 0.956548, 0.184978 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.223234, -2.497048, -0.089369);
		glVertex3f( 0.231354, -2.497048, -0.079474);
		glVertex3f( 0.283562, -2.478001, -0.114358);
	glEnd();

	glNormal3f( -0.740025, 0.289003, 0.607322 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.395720, -2.296857, -0.261856);
		glVertex3f( 0.434177, -2.296857, -0.214996);
		glVertex3f( 0.450014, -2.234067, -0.225578);
	glEnd();

	glNormal3f( -0.257140, 0.956551, 0.137439 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.231354, -2.497048, -0.079474);
		glVertex3f( 0.237389, -2.497048, -0.068185);
		glVertex3f( 0.295398, -2.478001, -0.092213);
	glEnd();

	glNormal3f( -0.877715, 0.097550, 0.469148 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.450014, -2.234067, -0.225578);
		glVertex3f( 0.480351, -2.234067, -0.168823);
		glVertex3f( 0.486292, -2.168769, -0.171284);
	glEnd();

	glNormal3f( -0.844289, 0.289003, 0.451280 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.434177, -2.296857, -0.214996);
		glVertex3f( 0.462753, -2.296857, -0.161534);
		glVertex3f( 0.480351, -2.234067, -0.168823);
	glEnd();

	glNormal3f( -0.561099, -0.771505, 0.299913 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.373849, -1.932093, -0.174686);
		glVertex3f( 0.395720, -1.932093, -0.133768);
		glVertex3f( 0.348860, -1.890467, -0.114358);
	glEnd();

	glNormal3f( -0.778617, 0.469629, 0.416178 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.408460, -2.354724, -0.197812);
		glVertex3f( 0.434177, -2.354724, -0.149697);
		glVertex3f( 0.462753, -2.296857, -0.161534);
	glEnd();

	glNormal3f( -0.683055, -0.632564, 0.365101 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.408460, -1.982813, -0.197812);
		glVertex3f( 0.434177, -1.982813, -0.149697);
		glVertex3f( 0.395720, -1.932093, -0.133768);
	glEnd();

	glNormal3f( -0.778617, -0.469626, 0.416181 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.434177, -2.040681, -0.214996);
		glVertex3f( 0.462754, -2.040681, -0.161534);
		glVertex3f( 0.434177, -1.982813, -0.149697);
	glEnd();

	glNormal3f( -0.683057, 0.632563, 0.365098 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.373849, -2.405445, -0.174686);
		glVertex3f( 0.395720, -2.405445, -0.133768);
		glVertex3f( 0.434177, -2.354724, -0.149697);
	glEnd();

	glNormal3f( -0.844287, -0.289004, 0.451283 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.462754, -2.040681, -0.161534);
		glVertex3f( 0.434177, -2.040681, -0.214996);
		glVertex3f( 0.480351, -2.103470, -0.168823);
	glEnd();

	glNormal3f( -0.257143, -0.956549, 0.137444 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.283562, -1.859537, -0.114358);
		glVertex3f( 0.295398, -1.859537, -0.092213);
		glVertex3f( 0.237389, -1.840490, -0.068185);
	glEnd();

	glNormal3f( -0.561098, 0.771506, 0.299911 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.331676, -2.447070, -0.146507);
		glVertex3f( 0.348861, -2.447070, -0.114358);
		glVertex3f( 0.395720, -2.405445, -0.133768);
	glEnd();

	glNormal3f( -0.417300, 0.880972, 0.223047 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.283562, -2.478001, -0.114358);
		glVertex3f( 0.295398, -2.478001, -0.092213);
		glVertex3f( 0.348861, -2.447070, -0.114358);
	glEnd();

	glNormal3f( -0.877715, -0.097549, 0.469149 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.455362, -2.168769, -0.229151);
		glVertex3f( 0.486292, -2.168769, -0.171284);
		glVertex3f( 0.480351, -2.103470, -0.168823);
	glEnd();

	glNormal3f( -0.417296, -0.880973, 0.223049 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.331676, -1.890467, -0.146507);
		glVertex3f( 0.348860, -1.890467, -0.114358);
		glVertex3f( 0.295398, -1.859537, -0.092213);
	glEnd();

	glNormal3f( -0.952376, -0.097549, 0.288900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.486292, -2.168769, -0.171284);
		glVertex3f( 0.505339, -2.168769, -0.108495);
		glVertex3f( 0.499032, -2.103470, -0.107240);
	glEnd();

	glNormal3f( -0.279017, -0.956549, 0.084636 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.295398, -1.859537, -0.092213);
		glVertex3f( 0.302687, -1.859537, -0.068185);
		glVertex3f( 0.241104, -1.840490, -0.055935);
	glEnd();

	glNormal3f( -0.452793, -0.880973, 0.137353 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.348860, -1.890467, -0.114358);
		glVertex3f( 0.359442, -1.890467, -0.079474);
		glVertex3f( 0.302687, -1.859537, -0.068185);
	glEnd();

	glNormal3f( -0.452797, 0.880972, 0.137343 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.295398, -2.478001, -0.092213);
		glVertex3f( 0.302687, -2.478001, -0.068185);
		glVertex3f( 0.359442, -2.447070, -0.079474);
	glEnd();

	glNormal3f( -0.279013, 0.956550, 0.084639 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.237389, -2.497048, -0.068185);
		glVertex3f( 0.241104, -2.497048, -0.055935);
		glVertex3f( 0.302687, -2.478001, -0.068185);
	glEnd();

	glNormal3f( -0.952377, 0.097550, 0.288900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.480351, -2.234067, -0.168823);
		glVertex3f( 0.499031, -2.234067, -0.107240);
		glVertex3f( 0.505339, -2.168769, -0.108495);
	glEnd();

	glNormal3f( -0.608827, -0.771506, 0.184686 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.395720, -1.932093, -0.133768);
		glVertex3f( 0.409189, -1.932093, -0.089369);
		glVertex3f( 0.359442, -1.890467, -0.079474);
	glEnd();

	glNormal3f( -0.916106, 0.289003, 0.277897 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.462753, -2.296857, -0.161534);
		glVertex3f( 0.480351, -2.296857, -0.103524);
		glVertex3f( 0.499031, -2.234067, -0.107240);
	glEnd();

	glNormal3f( -0.844849, 0.469629, 0.256280 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.434177, -2.354724, -0.149697);
		glVertex3f( 0.450014, -2.354724, -0.097490);
		glVertex3f( 0.480351, -2.296857, -0.103524);
	glEnd();

	glNormal3f( -0.741159, -0.632563, 0.224825 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.434177, -1.982813, -0.149697);
		glVertex3f( 0.450014, -1.982813, -0.097490);
		glVertex3f( 0.409189, -1.932093, -0.089369);
	glEnd();

	glNormal3f( -0.741160, 0.632562, 0.224828 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.450014, -2.354724, -0.097490);
		glVertex3f( 0.434177, -2.354724, -0.149697);
		glVertex3f( 0.409189, -2.405445, -0.089369);
	glEnd();

	glNormal3f( -0.844849, -0.469626, 0.256282 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.462754, -2.040681, -0.161534);
		glVertex3f( 0.480351, -2.040681, -0.103524);
		glVertex3f( 0.450014, -1.982813, -0.097490);
	glEnd();

	glNormal3f( -0.916106, -0.289005, 0.277895 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.480351, -2.040681, -0.103524);
		glVertex3f( 0.462754, -2.040681, -0.161534);
		glVertex3f( 0.499032, -2.103470, -0.107240);
	glEnd();

	glNormal3f( -0.608826, 0.771506, 0.184687 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.348861, -2.447070, -0.114358);
		glVertex3f( 0.359442, -2.447070, -0.079474);
		glVertex3f( 0.409189, -2.405445, -0.089369);
	glEnd();

	glNormal3f( -0.633158, 0.771506, 0.062364 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.359442, -2.447070, -0.079474);
		glVertex3f( 0.363016, -2.447070, -0.043196);
		glVertex3f( 0.413736, -2.405445, -0.043196);
	glEnd();

	glNormal3f( -0.952717, -0.289005, 0.093838 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.486293, -2.040681, -0.043196);
		glVertex3f( 0.480351, -2.040681, -0.103524);
		glVertex3f( 0.505340, -2.103470, -0.043196);
	glEnd();

	glNormal3f( -0.990438, -0.097548, 0.097554 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.505340, -2.103470, -0.043196);
		glVertex3f( 0.499032, -2.103470, -0.107240);
		glVertex3f( 0.511771, -2.168769, -0.043196);
	glEnd();

	glNormal3f( -0.290167, -0.956549, 0.028581 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.242359, -1.840490, -0.043196);
		glVertex3f( 0.241104, -1.840490, -0.055935);
		glVertex3f( 0.305149, -1.859537, -0.043196);
	glEnd();

	glNormal3f( -0.470892, 0.880971, 0.046369 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.302687, -2.478001, -0.068185);
		glVertex3f( 0.305149, -2.478001, -0.043196);
		glVertex3f( 0.363016, -2.447070, -0.043196);
	glEnd();

	glNormal3f( -0.990438, 0.097550, 0.097554 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.499031, -2.234067, -0.107240);
		glVertex3f( 0.505340, -2.234067, -0.043196);
		glVertex3f( 0.511771, -2.168769, -0.043196);
	glEnd();

	glNormal3f( -0.470889, -0.880973, 0.046377 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.305149, -1.859537, -0.043196);
		glVertex3f( 0.302687, -1.859537, -0.068185);
		glVertex3f( 0.363016, -1.890467, -0.043196);
	glEnd();

	glNormal3f( -0.633159, -0.771505, 0.062368 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.363016, -1.890467, -0.043196);
		glVertex3f( 0.359442, -1.890467, -0.079474);
		glVertex3f( 0.413736, -1.932093, -0.043196);
	glEnd();

	glNormal3f( -0.290164, 0.956550, 0.028590 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.241104, -2.497048, -0.055935);
		glVertex3f( 0.242359, -2.497048, -0.043196);
		glVertex3f( 0.305149, -2.478001, -0.043196);
	glEnd();

	glNormal3f( -0.952718, 0.289003, 0.093840 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.480351, -2.296857, -0.103524);
		glVertex3f( 0.486293, -2.296857, -0.043196);
		glVertex3f( 0.505340, -2.234067, -0.043196);
	glEnd();

	glNormal3f( -0.770779, -0.632563, 0.075920 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.413736, -1.932093, -0.043196);
		glVertex3f( 0.409189, -1.932093, -0.089369);
		glVertex3f( 0.455362, -1.982813, -0.043196);
	glEnd();

	glNormal3f( -0.878612, 0.469630, 0.086538 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.450014, -2.354724, -0.097490);
		glVertex3f( 0.455362, -2.354724, -0.043196);
		glVertex3f( 0.486293, -2.296857, -0.043196);
	glEnd();

	glNormal3f( -0.770780, 0.632562, 0.075916 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.409189, -2.405445, -0.089369);
		glVertex3f( 0.413736, -2.405445, -0.043196);
		glVertex3f( 0.455362, -2.354724, -0.043196);
	glEnd();

	glNormal3f( -0.878613, -0.469627, 0.086541 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.455362, -1.982813, -0.043196);
		glVertex3f( 0.450014, -1.982813, -0.097490);
		glVertex3f( 0.486293, -2.040681, -0.043196);
	glEnd();

	glNormal3f( 0.399715, -0.877426, 0.265240 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.251563, -2.154142, 0.017140);
		glVertex3f( 0.311904, -2.100358, 0.104129);
		glVertex3f( 0.066369, -2.175079, 0.226966);
	glEnd();

	glNormal3f( 0.972450, -0.057654, 0.225869 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.360710, -1.024297, 0.168670);
		glVertex3f( 0.311904, -2.100358, 0.104129);
		glVertex3f( 0.392254, -1.424395, -0.069265);
	glEnd();

	glNormal3f( 0.055784, -0.997177, -0.050265 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.251563, -2.154142, 0.017140);
		glVertex3f( 0.066369, -2.175079, 0.226966);
		glVertex3f( -0.045349, -2.174005, 0.081676);
	glEnd();

	glNormal3f( -0.034195, -0.900094, -0.434352 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.251563, -2.154142, 0.017140);
		glVertex3f( -0.045349, -2.174005, 0.081676);
		glVertex3f( -0.098683, -2.058218, -0.154068);
	glEnd();

	glNormal3f( -0.033367, -0.899474, -0.435698 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.251563, -2.154142, 0.017140);
		glVertex3f( -0.098683, -2.058218, -0.154068);
		glVertex3f( 0.410980, -2.056240, -0.197184);
	glEnd();

	glNormal3f( 0.886330, -0.183063, 0.425332 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.360710, -1.024297, 0.168670);
		glVertex3f( 0.392254, -1.424395, -0.069265);
		glVertex3f( 0.433553, -0.800169, 0.113339);
	glEnd();

	glNormal3f( -0.190041, -0.207625, 0.959571 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.013771, -1.287779, 0.295708);
		glVertex3f( 0.162275, -1.025365, 0.381898);
		glVertex3f( 0.000000, -0.331006, 0.500000);
	glEnd();

	glNormal3f( -0.965105, -0.241695, -0.100778 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.255199, -1.188923, -0.018325);
		glVertex3f( -0.229704, -1.365993, 0.162187);
		glVertex3f( -0.389426, -0.714324, 0.128874);
	glEnd();

	glNormal3f( -0.636237, -0.249772, -0.729943 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.005087, -1.300993, -0.302965);
		glVertex3f( -0.170593, -1.191725, -0.187227);
		glVertex3f( -0.153469, -0.749432, -0.353497);
	glEnd();

	glNormal3f( 0.968957, 0.023428, -0.246119 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.320882, -1.412082, -0.297416);
		glVertex3f( 0.339457, -2.113662, -0.291070);
		glVertex3f( 0.289033, -0.797294, -0.364283);
	glEnd();

	glNormal3f( 0.802336, -0.116237, 0.585445 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.360710, -1.024297, 0.168670);
		glVertex3f( 0.433553, -0.800169, 0.113339);
		glVertex3f( 0.292774, -0.305391, 0.404508);
	glEnd();

	glNormal3f( -0.297413, -0.203458, 0.932818 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.013771, -1.287779, 0.295708);
		glVertex3f( 0.000000, -0.331006, 0.500000);
		glVertex3f( -0.256438, -0.651255, 0.348389);
	glEnd();

	glNormal3f( -0.962022, -0.272957, 0.002828 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.255199, -1.188923, -0.018325);
		glVertex3f( -0.389426, -0.714324, 0.128874);
		glVertex3f( -0.404103, -0.665732, -0.174167);
	glEnd();

	glNormal3f( -0.214074, -0.149970, -0.965236 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.005087, -1.300993, -0.302965);
		glVertex3f( -0.153469, -0.749432, -0.353497);
		glVertex3f( 0.174600, -0.944773, -0.395907);
	glEnd();

	glNormal3f( 0.741431, -0.034478, -0.670143 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.320882, -1.412082, -0.297416);
		glVertex3f( 0.289033, -0.797294, -0.364283);
		glVertex3f( 0.453524, -0.677163, -0.188474);
	glEnd();

	glNormal3f( 0.424114, 0.546140, 0.722398 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.108435, 0.015177, 0.425325);
		glVertex3f( 0.308420, 0.091786, 0.249998);
		glVertex3f( 0.025314, 0.311637, 0.249998);
	glEnd();

	glNormal3f( -0.583911, 0.457950, 0.670321 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.389660, -0.028401, 0.262863);
		glVertex3f( -0.165300, 0.050342, 0.404506);
		glVertex3f( -0.267457, 0.286023, 0.154506);
	glEnd();

	glNormal3f( -0.846067, 0.435014, -0.308112 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.389660, -0.028401, -0.262863);
		glVertex3f( -0.458071, 0.024726, 0.000000);
		glVertex3f( -0.267457, 0.286023, -0.154506);
	glEnd();

	glNormal3f( 0.008007, 0.330881, -0.943638 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.117670, -0.280889, -0.456980);
		glVertex3f( -0.133628, -0.155309, -0.415078);
		glVertex3f( 0.025314, 0.311637, -0.249998);
	glEnd();

	glNormal3f( 0.784949, 0.577706, -0.223856 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.416278, 0.042107, 0.000000);
		glVertex3f( 0.308420, 0.091786, -0.249998);
		glVertex3f( 0.206260, 0.327466, 0.000000);
	glEnd();

	glNormal3f( 0.298470, 0.914268, -0.273917 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.206260, 0.327466, 0.000000);
		glVertex3f( 0.025314, 0.311637, -0.249998);
		glVertex3f( -0.065367, 0.416140, 0.000000);
	glEnd();

	glNormal3f( 0.549919, 0.708140, -0.442862 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.206260, 0.327466, 0.000000);
		glVertex3f( 0.308420, 0.091786, -0.249998);
		glVertex3f( 0.025314, 0.311637, -0.249998);
	glEnd();

	glNormal3f( 0.275691, 0.355015, -0.893285 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.308420, 0.091786, -0.249998);
		glVertex3f( 0.117670, -0.280889, -0.456980);
		glVertex3f( 0.025314, 0.311637, -0.249998);
	glEnd();

	glNormal3f( -0.220575, 0.868858, -0.443207 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.025314, 0.311637, -0.249998);
		glVertex3f( -0.267457, 0.286023, -0.154506);
		glVertex3f( -0.065367, 0.416140, 0.000000);
	glEnd();

	glNormal3f( -0.315059, 0.409868, -0.856006 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.025314, 0.311637, -0.249998);
		glVertex3f( -0.133628, -0.155309, -0.415078);
		glVertex3f( -0.267457, 0.286023, -0.154506);
	glEnd();

	glNormal3f( -0.304720, 0.414030, -0.857744 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.133628, -0.155309, -0.415078);
		glVertex3f( -0.389660, -0.028401, -0.262863);
		glVertex3f( -0.267457, 0.286023, -0.154506);
	glEnd();

	glNormal3f( -0.541355, 0.840794, -0.000000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.267457, 0.286023, -0.154506);
		glVertex3f( -0.267457, 0.286023, 0.154506);
		glVertex3f( -0.065367, 0.416140, 0.000000);
	glEnd();

	glNormal3f( -0.807881, 0.589346, 0.000000 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.267457, 0.286023, -0.154506);
		glVertex3f( -0.458071, 0.024726, 0.000000);
		glVertex3f( -0.267457, 0.286023, 0.154506);
	glEnd();

	glNormal3f( -0.846067, 0.435014, 0.308112 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.458071, 0.024726, 0.000000);
		glVertex3f( -0.389660, -0.028401, 0.262863);
		glVertex3f( -0.267457, 0.286023, 0.154506);
	glEnd();

	glNormal3f( -0.220575, 0.868858, 0.443207 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.267457, 0.286023, 0.154506);
		glVertex3f( 0.025314, 0.311637, 0.249998);
		glVertex3f( -0.065367, 0.416140, 0.000000);
	glEnd();

	glNormal3f( -0.289250, 0.634723, 0.716562 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.267457, 0.286023, 0.154506);
		glVertex3f( -0.165300, 0.050342, 0.404506);
		glVertex3f( 0.025314, 0.311637, 0.249998);
	glEnd();

	glNormal3f( -0.000073, 0.509029, 0.860749 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.165300, 0.050342, 0.404506);
		glVertex3f( 0.108435, 0.015177, 0.425325);
		glVertex3f( 0.025314, 0.311637, 0.249998);
	glEnd();

	glNormal3f( 0.298470, 0.914267, 0.273917 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.025314, 0.311637, 0.249998);
		glVertex3f( 0.206260, 0.327466, 0.000000);
		glVertex3f( -0.065367, 0.416140, 0.000000);
	glEnd();

	glNormal3f( 0.549919, 0.708140, 0.442862 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.025314, 0.311637, 0.249998);
		glVertex3f( 0.308420, 0.091786, 0.249998);
		glVertex3f( 0.206260, 0.327466, 0.000000);
	glEnd();

	glNormal3f( 0.784949, 0.577706, 0.223856 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.308420, 0.091786, 0.249998);
		glVertex3f( 0.416278, 0.042107, 0.000000);
		glVertex3f( 0.206260, 0.327466, 0.000000);
	glEnd();

	glNormal3f( 0.918712, 0.143941, -0.367763 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.453524, -0.677163, -0.188474);
		glVertex3f( 0.308420, 0.091786, -0.249998);
		glVertex3f( 0.416278, 0.042107, 0.000000);
	glEnd();

	glNormal3f( 0.701775, 0.075752, -0.708360 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.453524, -0.677163, -0.188474);
		glVertex3f( 0.289033, -0.797294, -0.364283);
		glVertex3f( 0.308420, 0.091786, -0.249998);
	glEnd();

	glNormal3f( 0.654593, 0.082324, -0.751486 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.289033, -0.797294, -0.364283);
		glVertex3f( 0.117670, -0.280889, -0.456980);
		glVertex3f( 0.308420, 0.091786, -0.249998);
	glEnd();

	glNormal3f( -0.215680, -0.107775, -0.970498 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.174600, -0.944773, -0.395907);
		glVertex3f( -0.133628, -0.155309, -0.415078);
		glVertex3f( 0.117670, -0.280889, -0.456980);
	glEnd();

	glNormal3f( -0.183228, -0.095297, -0.978441 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.174600, -0.944773, -0.395907);
		glVertex3f( -0.153469, -0.749432, -0.353497);
		glVertex3f( -0.133628, -0.155309, -0.415078);
	glEnd();

	glNormal3f( -0.534989, -0.069408, -0.842003 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.153469, -0.749432, -0.353497);
		glVertex3f( -0.389660, -0.028401, -0.262863);
		glVertex3f( -0.133628, -0.155309, -0.415078);
	glEnd();

	glNormal3f( -0.968310, -0.012768, -0.249425 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.404103, -0.665732, -0.174167);
		glVertex3f( -0.458071, 0.024726, 0.000000);
		glVertex3f( -0.389660, -0.028401, -0.262863);
	glEnd();

	glNormal3f( -0.995660, -0.086489, 0.034356 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.404103, -0.665732, -0.174167);
		glVertex3f( -0.389426, -0.714324, 0.128874);
		glVertex3f( -0.458071, 0.024726, 0.000000);
	glEnd();

	glNormal3f( -0.968969, -0.047708, 0.242535 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.389426, -0.714324, 0.128874);
		glVertex3f( -0.389660, -0.028401, 0.262863);
		glVertex3f( -0.458071, 0.024726, 0.000000);
	glEnd();

	glNormal3f( -0.534286, 0.001793, 0.845302 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.256438, -0.651255, 0.348389);
		glVertex3f( -0.165300, 0.050342, 0.404506);
		glVertex3f( -0.389660, -0.028401, 0.262863);
	glEnd();

	glNormal3f( -0.505887, -0.003279, 0.862594 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.256438, -0.651255, 0.348389);
		glVertex3f( 0.000000, -0.331006, 0.500000);
		glVertex3f( -0.165300, 0.050342, 0.404506);
	glEnd();

	glNormal3f( -0.045242, 0.224166, 0.973500 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.331006, 0.500000);
		glVertex3f( 0.108435, 0.015177, 0.425325);
		glVertex3f( -0.165300, 0.050342, 0.404506);
	glEnd();

	glNormal3f( 0.570796, 0.278063, 0.772575 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.292774, -0.305391, 0.404508);
		glVertex3f( 0.308420, 0.091786, 0.249998);
		glVertex3f( 0.108435, 0.015177, 0.425325);
	glEnd();

	glNormal3f( 0.945831, 0.084671, 0.313424 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.292774, -0.305391, 0.404508);
		glVertex3f( 0.433553, -0.800169, 0.113339);
		glVertex3f( 0.308420, 0.091786, 0.249998);
	glEnd();

	glNormal3f( 0.920924, 0.070469, 0.383318 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.433553, -0.800169, 0.113339);
		glVertex3f( 0.416278, 0.042107, 0.000000);
		glVertex3f( 0.308420, 0.091786, 0.249998);
	glEnd();

	glNormal3f( 0.334493, -0.057847, -0.940621 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.289033, -0.797294, -0.364283);
		glVertex3f( 0.174600, -0.944773, -0.395907);
		glVertex3f( 0.117670, -0.280889, -0.456980);
	glEnd();

	glNormal3f( 0.314535, -0.040698, -0.948373 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.289033, -0.797294, -0.364283);
		glVertex3f( 0.339457, -2.113662, -0.291070);
		glVertex3f( 0.174600, -0.944773, -0.395907);
	glEnd();

	glNormal3f( -0.265403, -0.123196, -0.956234 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.339457, -2.113662, -0.291070);
		glVertex3f( 0.005087, -1.300993, -0.302965);
		glVertex3f( 0.174600, -0.944773, -0.395907);
	glEnd();

	glNormal3f( -0.600352, -0.096873, -0.793847 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.153469, -0.749432, -0.353497);
		glVertex3f( -0.404103, -0.665732, -0.174167);
		glVertex3f( -0.389660, -0.028401, -0.262863);
	glEnd();

	glNormal3f( -0.617575, -0.255699, -0.743787 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.153469, -0.749432, -0.353497);
		glVertex3f( -0.170593, -1.191725, -0.187227);
		glVertex3f( -0.404103, -0.665732, -0.174167);
	glEnd();

	glNormal3f( -0.836200, -0.360972, -0.412878 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.170593, -1.191725, -0.187227);
		glVertex3f( -0.255199, -1.188923, -0.018325);
		glVertex3f( -0.404103, -0.665732, -0.174167);
	glEnd();

	glNormal3f( -0.836853, -0.105227, 0.537220 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.389426, -0.714324, 0.128874);
		glVertex3f( -0.256438, -0.651255, 0.348389);
		glVertex3f( -0.389660, -0.028401, 0.262863);
	glEnd();

	glNormal3f( -0.819591, -0.172956, 0.546221 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.389426, -0.714324, 0.128874);
		glVertex3f( -0.229704, -1.365993, 0.162187);
		glVertex3f( -0.256438, -0.651255, 0.348389);
	glEnd();

	glNormal3f( -0.404613, -0.244688, 0.881145 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.229704, -1.365993, 0.162187);
		glVertex3f( 0.013771, -1.287779, 0.295708);
		glVertex3f( -0.256438, -0.651255, 0.348389);
	glEnd();

	glNormal3f( 0.299418, 0.110639, 0.947685 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.331006, 0.500000);
		glVertex3f( 0.292774, -0.305391, 0.404508);
		glVertex3f( 0.108435, 0.015177, 0.425325);
	glEnd();

	glNormal3f( 0.315775, -0.086909, 0.944845 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.331006, 0.500000);
		glVertex3f( 0.162275, -1.025365, 0.381898);
		glVertex3f( 0.292774, -0.305391, 0.404508);
	glEnd();

	glNormal3f( 0.723879, -0.152340, 0.672898 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.162275, -1.025365, 0.381898);
		glVertex3f( 0.360710, -1.024297, 0.168670);
		glVertex3f( 0.292774, -0.305391, 0.404508);
	glEnd();

	glNormal3f( 0.996426, 0.031010, 0.078572 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.433553, -0.800169, 0.113339);
		glVertex3f( 0.453524, -0.677163, -0.188474);
		glVertex3f( 0.416278, 0.042107, 0.000000);
	glEnd();

	glNormal3f( 0.996486, -0.076140, 0.034906 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.433553, -0.800169, 0.113339);
		glVertex3f( 0.392254, -1.424395, -0.069265);
		glVertex3f( 0.453524, -0.677163, -0.188474);
	glEnd();

	glNormal3f( 0.944866, -0.125714, -0.302364 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.392254, -1.424395, -0.069265);
		glVertex3f( 0.320882, -1.412082, -0.297416);
		glVertex3f( 0.453524, -0.677163, -0.188474);
	glEnd();

	glNormal3f( 0.790809, 0.015403, -0.611869 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.410980, -2.056240, -0.197184);
		glVertex3f( 0.339457, -2.113662, -0.291070);
		glVertex3f( 0.320882, -1.412082, -0.297416);
	glEnd();

	glNormal3f( 0.045315, -0.867210, 0.495877 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.410980, -2.056240, -0.197184);
		glVertex3f( -0.098683, -2.058218, -0.154068);
		glVertex3f( 0.339457, -2.113662, -0.291070);
	glEnd();

	glNormal3f( -0.311741, -0.142016, -0.939494 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.098683, -2.058218, -0.154068);
		glVertex3f( 0.005087, -1.300993, -0.302965);
		glVertex3f( 0.339457, -2.113662, -0.291070);
	glEnd();

	glNormal3f( -0.582333, -0.079289, -0.809074 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.098683, -2.058218, -0.154068);
		glVertex3f( -0.170593, -1.191725, -0.187227);
		glVertex3f( 0.005087, -1.300993, -0.302965);
	glEnd();

	glNormal3f( -0.979888, -0.074232, 0.185229 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.098683, -2.058218, -0.154068);
		glVertex3f( -0.045349, -2.174005, 0.081676);
		glVertex3f( -0.170593, -1.191725, -0.187227);
	glEnd();

	glNormal3f( -0.871725, -0.229643, -0.432851 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.045349, -2.174005, 0.081676);
		glVertex3f( -0.255199, -1.188923, -0.018325);
		glVertex3f( -0.170593, -1.191725, -0.187227);
	glEnd();

	glNormal3f( -0.973885, -0.214901, -0.073254 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.045349, -2.174005, 0.081676);
		glVertex3f( -0.229704, -1.365993, 0.162187);
		glVertex3f( -0.255199, -1.188923, -0.018325);
	glEnd();

	glNormal3f( -0.771391, -0.234928, 0.591409 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.045349, -2.174005, 0.081676);
		glVertex3f( 0.066369, -2.175079, 0.226966);
		glVertex3f( -0.229704, -1.365993, 0.162187);
	glEnd();

	glNormal3f( -0.454864, -0.095560, 0.885419 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.066369, -2.175079, 0.226966);
		glVertex3f( 0.013771, -1.287779, 0.295708);
		glVertex3f( -0.229704, -1.365993, 0.162187);
	glEnd();

	glNormal3f( 0.952063, 0.087558, -0.293105 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.392254, -1.424395, -0.069265);
		glVertex3f( 0.410980, -2.056240, -0.197184);
		glVertex3f( 0.320882, -1.412082, -0.297416);
	glEnd();

	glNormal3f( 0.950881, -0.034107, 0.307672 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.392254, -1.424395, -0.069265);
		glVertex3f( 0.311904, -2.100358, 0.104129);
		glVertex3f( 0.410980, -2.056240, -0.197184);
	glEnd();

	glNormal3f( 0.597031, -0.798276, 0.079432 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.311904, -2.100358, 0.104129);
		glVertex3f( 0.251563, -2.154142, 0.017140);
		glVertex3f( 0.410980, -2.056240, -0.197184);
	glEnd();

	glNormal3f( -0.370909, -0.093567, 0.923944 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.066369, -2.175079, 0.226966);
		glVertex3f( 0.162275, -1.025365, 0.381898);
		glVertex3f( 0.013771, -1.287779, 0.295708);
	glEnd();

	glNormal3f( 0.479563, -0.156361, 0.863464 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.066369, -2.175079, 0.226966);
		glVertex3f( 0.311904, -2.100358, 0.104129);
		glVertex3f( 0.162275, -1.025365, 0.381898);
	glEnd();

	glNormal3f( 0.730228, -0.073858, 0.679199 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.311904, -2.100358, 0.104129);
		glVertex3f( 0.360710, -1.024297, 0.168670);
		glVertex3f( 0.162275, -1.025365, 0.381898);
	glEnd();
}