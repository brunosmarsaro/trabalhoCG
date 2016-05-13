#include "Thigh.h"

void Thigh::setRotate( float x, float y, float z ){
	rotateX = x;
	rotateX = y;
	rotateX = z;
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

void Thigh::draw(){
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

void Thigh::privateDraw(){
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.505340, -2.103470, -0.043196);
		glVertex3f( 0.511771, -2.168769, -0.043196);
		glVertex3f( 0.499032, -2.103470, 0.020848);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.305149, -1.859537, -0.043196);
		glVertex3f( 0.363016, -1.890467, -0.043196);
		glVertex3f( 0.302687, -1.859537, -0.018207);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.305149, -2.478001, -0.043196);
		glVertex3f( 0.242359, -2.497048, -0.043196);
		glVertex3f( 0.302687, -2.478001, -0.018207);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.511771, -2.168769, -0.043196);
		glVertex3f( 0.505340, -2.234067, -0.043196);
		glVertex3f( 0.505340, -2.168769, 0.022103);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.505340, -2.234067, -0.043196);
		glVertex3f( 0.486293, -2.296857, -0.043196);
		glVertex3f( 0.499032, -2.234067, 0.020848);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.363016, -1.890467, -0.043196);
		glVertex3f( 0.413736, -1.932093, -0.043196);
		glVertex3f( 0.359443, -1.890467, -0.006918);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.242359, -2.497048, -0.043196);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.241105, -2.497048, -0.030457);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.486293, -2.296857, -0.043196);
		glVertex3f( 0.455362, -2.354724, -0.043196);
		glVertex3f( 0.480351, -2.296857, 0.017132);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.413736, -1.932093, -0.043196);
		glVertex3f( 0.455362, -1.982813, -0.043196);
		glVertex3f( 0.409189, -1.932093, 0.002977);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.455362, -1.982813, -0.043196);
		glVertex3f( 0.486293, -2.040681, -0.043196);
		glVertex3f( 0.450015, -1.982813, 0.011098);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.455362, -2.354724, -0.043196);
		glVertex3f( 0.413736, -2.405445, -0.043196);
		glVertex3f( 0.450015, -2.354724, 0.011098);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.486293, -2.040681, -0.043196);
		glVertex3f( 0.505340, -2.103470, -0.043196);
		glVertex3f( 0.480351, -2.040681, 0.017132);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.242359, -1.840490, -0.043196);
		glVertex3f( 0.241104, -1.840490, -0.030457);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.242359, -1.840490, -0.043196);
		glVertex3f( 0.305149, -1.859537, -0.043196);
		glVertex3f( 0.241104, -1.840490, -0.030457);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.413736, -2.405445, -0.043196);
		glVertex3f( 0.363016, -2.447070, -0.043196);
		glVertex3f( 0.409189, -2.405445, 0.002977);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.363016, -2.447070, -0.043196);
		glVertex3f( 0.305149, -2.478001, -0.043196);
		glVertex3f( 0.359443, -2.447070, -0.006918);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.241104, -1.840490, -0.030457);
		glVertex3f( 0.237389, -1.840490, -0.018207);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.241104, -1.840490, -0.030457);
		glVertex3f( 0.302687, -1.859537, -0.018207);
		glVertex3f( 0.237389, -1.840490, -0.018207);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.409189, -2.405445, 0.002977);
		glVertex3f( 0.359443, -2.447070, -0.006918);
		glVertex3f( 0.395721, -2.405445, 0.047376);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.359443, -2.447070, -0.006918);
		glVertex3f( 0.302687, -2.478001, -0.018207);
		glVertex3f( 0.348861, -2.447070, 0.027966);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.499032, -2.103470, 0.020848);
		glVertex3f( 0.505340, -2.168769, 0.022103);
		glVertex3f( 0.480351, -2.103470, 0.082431);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.302687, -1.859537, -0.018207);
		glVertex3f( 0.359443, -1.890467, -0.006918);
		glVertex3f( 0.295398, -1.859537, 0.005821);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.302687, -2.478001, -0.018207);
		glVertex3f( 0.241105, -2.497048, -0.030457);
		glVertex3f( 0.295398, -2.478001, 0.005821);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.505340, -2.168769, 0.022103);
		glVertex3f( 0.499032, -2.234067, 0.020848);
		glVertex3f( 0.486293, -2.168769, 0.084892);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.499032, -2.234067, 0.020848);
		glVertex3f( 0.480351, -2.296857, 0.017132);
		glVertex3f( 0.480351, -2.234067, 0.082431);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.359443, -1.890467, -0.006918);
		glVertex3f( 0.409189, -1.932093, 0.002977);
		glVertex3f( 0.348861, -1.890467, 0.027966);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.241105, -2.497048, -0.030457);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.237389, -2.497048, -0.018207);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.480351, -2.296857, 0.017132);
		glVertex3f( 0.450015, -2.354724, 0.011098);
		glVertex3f( 0.462754, -2.296857, 0.075142);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.409189, -1.932093, 0.002977);
		glVertex3f( 0.450015, -1.982813, 0.011098);
		glVertex3f( 0.395721, -1.932093, 0.047376);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.450015, -1.982813, 0.011098);
		glVertex3f( 0.480351, -2.040681, 0.017132);
		glVertex3f( 0.434178, -1.982813, 0.063305);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.450015, -2.354724, 0.011098);
		glVertex3f( 0.409189, -2.405445, 0.002977);
		glVertex3f( 0.434178, -2.354724, 0.063305);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.480351, -2.040681, 0.017132);
		glVertex3f( 0.499032, -2.103470, 0.020848);
		glVertex3f( 0.462754, -2.040681, 0.075142);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.434178, -2.354724, 0.063305);
		glVertex3f( 0.395721, -2.405445, 0.047376);
		glVertex3f( 0.408460, -2.354724, 0.111420);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.434178, -1.982813, 0.063305);
		glVertex3f( 0.462754, -2.040681, 0.075142);
		glVertex3f( 0.408460, -1.982813, 0.111420);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.462754, -2.040681, 0.075142);
		glVertex3f( 0.480351, -2.103470, 0.082431);
		glVertex3f( 0.434178, -2.040681, 0.128604);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.237389, -1.840490, -0.018207);
		glVertex3f( 0.231354, -1.840490, -0.006918);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.395721, -2.405445, 0.047376);
		glVertex3f( 0.348861, -2.447070, 0.027966);
		glVertex3f( 0.373849, -2.405445, 0.088294);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.480351, -2.103470, 0.082431);
		glVertex3f( 0.486293, -2.168769, 0.084892);
		glVertex3f( 0.450015, -2.103470, 0.139186);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.237389, -1.840490, -0.018207);
		glVertex3f( 0.295398, -1.859537, 0.005821);
		glVertex3f( 0.231354, -1.840490, -0.006918);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.295398, -1.859537, 0.005821);
		glVertex3f( 0.348861, -1.890467, 0.027966);
		glVertex3f( 0.283562, -1.859537, 0.027966);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.348861, -2.447070, 0.027966);
		glVertex3f( 0.295398, -2.478001, 0.005821);
		glVertex3f( 0.331677, -2.447070, 0.060115);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.295398, -2.478001, 0.005821);
		glVertex3f( 0.237389, -2.497048, -0.018207);
		glVertex3f( 0.283562, -2.478001, 0.027966);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.486293, -2.168769, 0.084892);
		glVertex3f( 0.480351, -2.234067, 0.082431);
		glVertex3f( 0.455362, -2.168769, 0.142759);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.348861, -1.890467, 0.027966);
		glVertex3f( 0.395721, -1.932093, 0.047376);
		glVertex3f( 0.331676, -1.890467, 0.060115);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.237389, -2.497048, -0.018207);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.231354, -2.497048, -0.006918);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.480351, -2.234067, 0.082431);
		glVertex3f( 0.462754, -2.296857, 0.075142);
		glVertex3f( 0.450015, -2.234067, 0.139186);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.462754, -2.296857, 0.075142);
		glVertex3f( 0.434178, -2.354724, 0.063305);
		glVertex3f( 0.434178, -2.296857, 0.128604);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.395721, -1.932093, 0.047376);
		glVertex3f( 0.434178, -1.982813, 0.063305);
		glVertex3f( 0.373849, -1.932093, 0.088294);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.373849, -1.932093, 0.088294);
		glVertex3f( 0.408460, -1.982813, 0.111420);
		glVertex3f( 0.344416, -1.932093, 0.124159);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.434178, -2.296857, 0.128604);
		glVertex3f( 0.408460, -2.354724, 0.111420);
		glVertex3f( 0.395721, -2.296857, 0.175464);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.408460, -2.354724, 0.111420);
		glVertex3f( 0.373849, -2.405445, 0.088294);
		glVertex3f( 0.373849, -2.354724, 0.153593);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.408460, -1.982813, 0.111420);
		glVertex3f( 0.434178, -2.040681, 0.128604);
		glVertex3f( 0.373849, -1.982813, 0.153593);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.231354, -1.840490, -0.006918);
		glVertex3f( 0.223234, -1.840490, 0.002977);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.373849, -2.405445, 0.088294);
		glVertex3f( 0.331677, -2.447070, 0.060115);
		glVertex3f( 0.344416, -2.405445, 0.124159);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.434178, -2.040681, 0.128604);
		glVertex3f( 0.450015, -2.103470, 0.139186);
		glVertex3f( 0.395721, -2.040681, 0.175464);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.450015, -2.103470, 0.139186);
		glVertex3f( 0.455362, -2.168769, 0.142759);
		glVertex3f( 0.409189, -2.103470, 0.188932);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.231354, -1.840490, -0.006918);
		glVertex3f( 0.283562, -1.859537, 0.027966);
		glVertex3f( 0.223234, -1.840490, 0.002977);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.331677, -2.447070, 0.060115);
		glVertex3f( 0.283562, -2.478001, 0.027966);
		glVertex3f( 0.308551, -2.447070, 0.088294);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.455362, -2.168769, 0.142759);
		glVertex3f( 0.450015, -2.234067, 0.139186);
		glVertex3f( 0.413736, -2.168769, 0.193480);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.283562, -1.859537, 0.027966);
		glVertex3f( 0.331676, -1.890467, 0.060115);
		glVertex3f( 0.267632, -1.859537, 0.047376);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.331676, -1.890467, 0.060115);
		glVertex3f( 0.373849, -1.932093, 0.088294);
		glVertex3f( 0.308551, -1.890467, 0.088294);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.283562, -2.478001, 0.027966);
		glVertex3f( 0.231354, -2.497048, -0.006918);
		glVertex3f( 0.267632, -2.478001, 0.047376);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.231354, -2.497048, -0.006918);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.223234, -2.497048, 0.002977);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.450015, -2.234067, 0.139186);
		glVertex3f( 0.434178, -2.296857, 0.128604);
		glVertex3f( 0.409189, -2.234067, 0.188932);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.267632, -2.478001, 0.047376);
		glVertex3f( 0.223234, -2.497048, 0.002977);
		glVertex3f( 0.248222, -2.478001, 0.063305);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.409189, -2.234067, 0.188932);
		glVertex3f( 0.395721, -2.296857, 0.175464);
		glVertex3f( 0.359442, -2.234067, 0.229758);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.308551, -1.890467, 0.088294);
		glVertex3f( 0.344416, -1.932093, 0.124159);
		glVertex3f( 0.280372, -1.890467, 0.111420);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.344416, -1.932093, 0.124159);
		glVertex3f( 0.373849, -1.982813, 0.153593);
		glVertex3f( 0.308551, -1.932093, 0.153593);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.223234, -2.497048, 0.002977);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.213338, -2.497048, 0.011098);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.395721, -2.296857, 0.175464);
		glVertex3f( 0.373849, -2.354724, 0.153593);
		glVertex3f( 0.348861, -2.296857, 0.213921);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.373849, -1.982813, 0.153593);
		glVertex3f( 0.395721, -2.040681, 0.175464);
		glVertex3f( 0.331676, -1.982813, 0.188203);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.223234, -1.840490, 0.002977);
		glVertex3f( 0.213338, -1.840490, 0.011098);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.373849, -2.354724, 0.153593);
		glVertex3f( 0.344416, -2.405445, 0.124159);
		glVertex3f( 0.331676, -2.354724, 0.188203);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.344416, -2.405445, 0.124159);
		glVertex3f( 0.308551, -2.447070, 0.088294);
		glVertex3f( 0.308551, -2.405445, 0.153593);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.395721, -2.040681, 0.175464);
		glVertex3f( 0.409189, -2.103470, 0.188932);
		glVertex3f( 0.348861, -2.040681, 0.213921);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.223234, -1.840490, 0.002977);
		glVertex3f( 0.267632, -1.859537, 0.047376);
		glVertex3f( 0.213338, -1.840490, 0.011098);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.308551, -2.447070, 0.088294);
		glVertex3f( 0.267632, -2.478001, 0.047376);
		glVertex3f( 0.280372, -2.447070, 0.111420);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.409189, -2.103470, 0.188932);
		glVertex3f( 0.413736, -2.168769, 0.193480);
		glVertex3f( 0.359442, -2.103470, 0.229758);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.413736, -2.168769, 0.193480);
		glVertex3f( 0.409189, -2.234067, 0.188932);
		glVertex3f( 0.363016, -2.168769, 0.235105);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.267632, -1.859537, 0.047376);
		glVertex3f( 0.308551, -1.890467, 0.088294);
		glVertex3f( 0.248222, -1.859537, 0.063305);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.359442, -2.103470, 0.229758);
		glVertex3f( 0.363016, -2.168769, 0.235105);
		glVertex3f( 0.302687, -2.103470, 0.260094);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.248222, -1.859537, 0.063305);
		glVertex3f( 0.280372, -1.890467, 0.111420);
		glVertex3f( 0.226078, -1.859537, 0.075142);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.248222, -2.478001, 0.063305);
		glVertex3f( 0.213338, -2.497048, 0.011098);
		glVertex3f( 0.226078, -2.478001, 0.075142);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.363016, -2.168769, 0.235105);
		glVertex3f( 0.359442, -2.234067, 0.229758);
		glVertex3f( 0.305149, -2.168769, 0.266036);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.359442, -2.234067, 0.229758);
		glVertex3f( 0.348861, -2.296857, 0.213921);
		glVertex3f( 0.302687, -2.234067, 0.260094);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.280372, -1.890467, 0.111420);
		glVertex3f( 0.308551, -1.932093, 0.153593);
		glVertex3f( 0.248222, -1.890467, 0.128604);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.213338, -2.497048, 0.011098);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.202049, -2.497048, 0.017132);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.348861, -2.296857, 0.213921);
		glVertex3f( 0.331676, -2.354724, 0.188203);
		glVertex3f( 0.295398, -2.296857, 0.242497);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.308551, -1.932093, 0.153593);
		glVertex3f( 0.331676, -1.982813, 0.188203);
		glVertex3f( 0.267632, -1.932093, 0.175464);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.331676, -1.982813, 0.188203);
		glVertex3f( 0.348861, -2.040681, 0.213921);
		glVertex3f( 0.283562, -1.982813, 0.213921);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.331676, -2.354724, 0.188203);
		glVertex3f( 0.308551, -2.405445, 0.153593);
		glVertex3f( 0.283562, -2.354724, 0.213921);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.348861, -2.040681, 0.213921);
		glVertex3f( 0.359442, -2.103470, 0.229758);
		glVertex3f( 0.295398, -2.040681, 0.242497);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.213338, -1.840490, 0.011098);
		glVertex3f( 0.202049, -1.840490, 0.017132);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.213338, -1.840490, 0.011098);
		glVertex3f( 0.248222, -1.859537, 0.063305);
		glVertex3f( 0.202049, -1.840490, 0.017132);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.308551, -2.405445, 0.153593);
		glVertex3f( 0.280372, -2.447070, 0.111420);
		glVertex3f( 0.267632, -2.405445, 0.175464);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.280372, -2.447070, 0.111420);
		glVertex3f( 0.248222, -2.478001, 0.063305);
		glVertex3f( 0.248222, -2.447070, 0.128604);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.267632, -2.405445, 0.175464);
		glVertex3f( 0.248222, -2.447070, 0.128604);
		glVertex3f( 0.223234, -2.405445, 0.188932);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.302687, -2.103470, 0.260094);
		glVertex3f( 0.305149, -2.168769, 0.266036);
		glVertex3f( 0.241104, -2.103470, 0.278775);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.202049, -1.840490, 0.017132);
		glVertex3f( 0.226078, -1.859537, 0.075142);
		glVertex3f( 0.189800, -1.840490, 0.020848);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.226078, -1.859537, 0.075142);
		glVertex3f( 0.248222, -1.890467, 0.128604);
		glVertex3f( 0.202049, -1.859537, 0.082431);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.248222, -2.447070, 0.128604);
		glVertex3f( 0.226078, -2.478001, 0.075142);
		glVertex3f( 0.213338, -2.447070, 0.139186);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.226078, -2.478001, 0.075142);
		glVertex3f( 0.202049, -2.497048, 0.017132);
		glVertex3f( 0.202049, -2.478001, 0.082431);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.305149, -2.168769, 0.266036);
		glVertex3f( 0.302687, -2.234067, 0.260094);
		glVertex3f( 0.242359, -2.168769, 0.285083);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.248222, -1.890467, 0.128604);
		glVertex3f( 0.267632, -1.932093, 0.175464);
		glVertex3f( 0.213338, -1.890467, 0.139186);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.202049, -2.497048, 0.017132);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.189800, -2.497048, 0.020848);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.302687, -2.234067, 0.260094);
		glVertex3f( 0.295398, -2.296857, 0.242497);
		glVertex3f( 0.241104, -2.234067, 0.278775);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.295398, -2.296857, 0.242497);
		glVertex3f( 0.283562, -2.354724, 0.213921);
		glVertex3f( 0.237389, -2.296857, 0.260094);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.267632, -1.932093, 0.175464);
		glVertex3f( 0.283562, -1.982813, 0.213921);
		glVertex3f( 0.223234, -1.932093, 0.188932);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.283562, -2.354724, 0.213921);
		glVertex3f( 0.267632, -2.405445, 0.175464);
		glVertex3f( 0.231354, -2.354724, 0.229758);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.283562, -1.982813, 0.213921);
		glVertex3f( 0.295398, -2.040681, 0.242497);
		glVertex3f( 0.231354, -1.982813, 0.229758);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.295398, -2.040681, 0.242497);
		glVertex3f( 0.302687, -2.103470, 0.260094);
		glVertex3f( 0.237389, -2.040681, 0.260094);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.202049, -1.840490, 0.017132);
		glVertex3f( 0.189800, -1.840490, 0.020848);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.231354, -2.354724, 0.229758);
		glVertex3f( 0.223234, -2.405445, 0.188932);
		glVertex3f( 0.177060, -2.354724, 0.235105);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.231354, -1.982813, 0.229758);
		glVertex3f( 0.237389, -2.040681, 0.260094);
		glVertex3f( 0.177060, -1.982813, 0.235105);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.189800, -1.840490, 0.020848);
		glVertex3f( 0.177060, -1.840490, 0.022103);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.223234, -2.405445, 0.188932);
		glVertex3f( 0.213338, -2.447070, 0.139186);
		glVertex3f( 0.177060, -2.405445, 0.193480);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.237389, -2.040681, 0.260094);
		glVertex3f( 0.241104, -2.103470, 0.278775);
		glVertex3f( 0.177060, -2.040681, 0.266036);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.241104, -2.103470, 0.278775);
		glVertex3f( 0.242359, -2.168769, 0.285083);
		glVertex3f( 0.177060, -2.103470, 0.285083);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.189800, -1.840490, 0.020848);
		glVertex3f( 0.202049, -1.859537, 0.082431);
		glVertex3f( 0.177060, -1.840490, 0.022103);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.213338, -2.447070, 0.139186);
		glVertex3f( 0.202049, -2.478001, 0.082431);
		glVertex3f( 0.177060, -2.447070, 0.142759);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.242359, -2.168769, 0.285083);
		glVertex3f( 0.241104, -2.234067, 0.278775);
		glVertex3f( 0.177060, -2.168769, 0.291514);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.202049, -1.859537, 0.082431);
		glVertex3f( 0.213338, -1.890467, 0.139186);
		glVertex3f( 0.177060, -1.859537, 0.084892);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.213338, -1.890467, 0.139186);
		glVertex3f( 0.223234, -1.932093, 0.188932);
		glVertex3f( 0.177060, -1.890467, 0.142759);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.202049, -2.478001, 0.082431);
		glVertex3f( 0.189800, -2.497048, 0.020848);
		glVertex3f( 0.177060, -2.478001, 0.084892);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.189800, -2.497048, 0.020848);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.177060, -2.497048, 0.022103);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.241104, -2.234067, 0.278775);
		glVertex3f( 0.237389, -2.296857, 0.260094);
		glVertex3f( 0.177060, -2.234067, 0.285083);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.223234, -1.932093, 0.188932);
		glVertex3f( 0.231354, -1.982813, 0.229758);
		glVertex3f( 0.177060, -1.932093, 0.193480);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.237389, -2.296857, 0.260094);
		glVertex3f( 0.231354, -2.354724, 0.229758);
		glVertex3f( 0.177060, -2.296857, 0.266036);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.932093, 0.193480);
		glVertex3f( 0.177060, -1.982813, 0.235105);
		glVertex3f( 0.130887, -1.932093, 0.188932);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.497048, 0.022103);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.164321, -2.497048, 0.020848);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.296857, 0.266036);
		glVertex3f( 0.177060, -2.354724, 0.235105);
		glVertex3f( 0.116732, -2.296857, 0.260094);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.982813, 0.235105);
		glVertex3f( 0.177060, -2.040681, 0.266036);
		glVertex3f( 0.122766, -1.982813, 0.229758);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.177060, -1.840490, 0.022103);
		glVertex3f( 0.164321, -1.840490, 0.020848);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.354724, 0.235105);
		glVertex3f( 0.177060, -2.405445, 0.193480);
		glVertex3f( 0.122766, -2.354724, 0.229758);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.405445, 0.193480);
		glVertex3f( 0.177060, -2.447070, 0.142759);
		glVertex3f( 0.130887, -2.405445, 0.188932);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.040681, 0.266036);
		glVertex3f( 0.177060, -2.103470, 0.285083);
		glVertex3f( 0.116732, -2.040681, 0.260094);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.840490, 0.022103);
		glVertex3f( 0.177060, -1.859537, 0.084892);
		glVertex3f( 0.164321, -1.840490, 0.020848);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.447070, 0.142759);
		glVertex3f( 0.177060, -2.478001, 0.084892);
		glVertex3f( 0.140782, -2.447070, 0.139186);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.103470, 0.285083);
		glVertex3f( 0.177060, -2.168769, 0.291514);
		glVertex3f( 0.113016, -2.103470, 0.278775);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.168769, 0.291514);
		glVertex3f( 0.177060, -2.234067, 0.285083);
		glVertex3f( 0.111762, -2.168769, 0.285083);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.859537, 0.084892);
		glVertex3f( 0.177060, -1.890467, 0.142759);
		glVertex3f( 0.152072, -1.859537, 0.082431);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.478001, 0.084892);
		glVertex3f( 0.177060, -2.497048, 0.022103);
		glVertex3f( 0.152072, -2.478001, 0.082431);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.234067, 0.285083);
		glVertex3f( 0.177060, -2.296857, 0.266036);
		glVertex3f( 0.113016, -2.234067, 0.278775);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.890467, 0.142759);
		glVertex3f( 0.177060, -1.932093, 0.193480);
		glVertex3f( 0.140782, -1.890467, 0.139186);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.152072, -2.478001, 0.082431);
		glVertex3f( 0.164321, -2.497048, 0.020848);
		glVertex3f( 0.128043, -2.478001, 0.075142);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.111762, -2.168769, 0.285083);
		glVertex3f( 0.113016, -2.234067, 0.278775);
		glVertex3f( 0.048972, -2.168769, 0.266036);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.113016, -2.234067, 0.278775);
		glVertex3f( 0.116732, -2.296857, 0.260094);
		glVertex3f( 0.051433, -2.234067, 0.260094);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.140782, -1.890467, 0.139186);
		glVertex3f( 0.130887, -1.932093, 0.188932);
		glVertex3f( 0.105898, -1.890467, 0.128604);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.164321, -2.497048, 0.020848);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.152072, -2.497048, 0.017132);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.116732, -2.296857, 0.260094);
		glVertex3f( 0.122766, -2.354724, 0.229758);
		glVertex3f( 0.058722, -2.296857, 0.242497);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.130887, -1.932093, 0.188932);
		glVertex3f( 0.122766, -1.982813, 0.229758);
		glVertex3f( 0.086488, -1.932093, 0.175464);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.122766, -1.982813, 0.229758);
		glVertex3f( 0.116732, -2.040681, 0.260094);
		glVertex3f( 0.070559, -1.982813, 0.213921);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.122766, -2.354724, 0.229758);
		glVertex3f( 0.130887, -2.405445, 0.188932);
		glVertex3f( 0.070559, -2.354724, 0.213921);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.116732, -2.040681, 0.260094);
		glVertex3f( 0.113016, -2.103470, 0.278775);
		glVertex3f( 0.058722, -2.040681, 0.242497);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.164321, -1.840490, 0.020848);
		glVertex3f( 0.152072, -1.840490, 0.017132);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.164321, -1.840490, 0.020848);
		glVertex3f( 0.152072, -1.859537, 0.082431);
		glVertex3f( 0.152072, -1.840490, 0.017132);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.130887, -2.405445, 0.188932);
		glVertex3f( 0.140782, -2.447070, 0.139186);
		glVertex3f( 0.086488, -2.405445, 0.175464);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.140782, -2.447070, 0.139186);
		glVertex3f( 0.152072, -2.478001, 0.082431);
		glVertex3f( 0.105898, -2.447070, 0.128604);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.113016, -2.103470, 0.278775);
		glVertex3f( 0.111762, -2.168769, 0.285083);
		glVertex3f( 0.051433, -2.103470, 0.260094);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.152072, -1.859537, 0.082431);
		glVertex3f( 0.140782, -1.890467, 0.139186);
		glVertex3f( 0.128043, -1.859537, 0.075142);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.152072, -1.840490, 0.017132);
		glVertex3f( 0.128043, -1.859537, 0.075142);
		glVertex3f( 0.140782, -1.840490, 0.011098);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.128043, -1.859537, 0.075142);
		glVertex3f( 0.105898, -1.890467, 0.128604);
		glVertex3f( 0.105898, -1.859537, 0.063305);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.105898, -2.447070, 0.128604);
		glVertex3f( 0.128043, -2.478001, 0.075142);
		glVertex3f( 0.073749, -2.447070, 0.111420);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.128043, -2.478001, 0.075142);
		glVertex3f( 0.152072, -2.497048, 0.017132);
		glVertex3f( 0.105898, -2.478001, 0.063305);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.048972, -2.168769, 0.266036);
		glVertex3f( 0.051433, -2.234067, 0.260094);
		glVertex3f( -0.008895, -2.168769, 0.235105);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.105898, -1.890467, 0.128604);
		glVertex3f( 0.086488, -1.932093, 0.175464);
		glVertex3f( 0.073749, -1.890467, 0.111420);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.152072, -2.497048, 0.017132);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.140782, -2.497048, 0.011098);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.051433, -2.234067, 0.260094);
		glVertex3f( 0.058722, -2.296857, 0.242497);
		glVertex3f( -0.005322, -2.234067, 0.229758);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.058722, -2.296857, 0.242497);
		glVertex3f( 0.070559, -2.354724, 0.213921);
		glVertex3f( 0.005260, -2.296857, 0.213921);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.086488, -1.932093, 0.175464);
		glVertex3f( 0.070559, -1.982813, 0.213921);
		glVertex3f( 0.045570, -1.932093, 0.153593);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.070559, -2.354724, 0.213921);
		glVertex3f( 0.086488, -2.405445, 0.175464);
		glVertex3f( 0.045570, -2.405445, 0.153593);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.070559, -1.982813, 0.213921);
		glVertex3f( 0.058722, -2.040681, 0.242497);
		glVertex3f( 0.022444, -1.982813, 0.188203);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.058722, -2.040681, 0.242497);
		glVertex3f( 0.051433, -2.103470, 0.260094);
		glVertex3f( 0.005260, -2.040681, 0.213921);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.152072, -1.840490, 0.017132);
		glVertex3f( 0.140782, -1.840490, 0.011098);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.086488, -2.405445, 0.175464);
		glVertex3f( 0.105898, -2.447070, 0.128604);
		glVertex3f( 0.045570, -2.405445, 0.153593);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.051433, -2.103470, 0.260094);
		glVertex3f( 0.048972, -2.168769, 0.266036);
		glVertex3f( -0.005322, -2.103470, 0.229758);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.045570, -2.405445, 0.153593);
		glVertex3f( 0.073749, -2.447070, 0.111420);
		glVertex3f( 0.009705, -2.405445, 0.124159);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.005260, -2.040681, 0.213921);
		glVertex3f( -0.005322, -2.103470, 0.229758);
		glVertex3f( -0.041600, -2.040681, 0.175464);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.005322, -2.103470, 0.229758);
		glVertex3f( -0.008895, -2.168769, 0.235105);
		glVertex3f( -0.055068, -2.103470, 0.188932);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.140782, -1.840490, 0.011098);
		glVertex3f( 0.105898, -1.859537, 0.063305);
		glVertex3f( 0.130887, -1.840490, 0.002977);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.073749, -2.447070, 0.111420);
		glVertex3f( 0.105898, -2.478001, 0.063305);
		glVertex3f( 0.045570, -2.447070, 0.088294);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.008895, -2.168769, 0.235105);
		glVertex3f( -0.005322, -2.234067, 0.229758);
		glVertex3f( -0.059616, -2.168769, 0.193480);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.105898, -1.859537, 0.063305);
		glVertex3f( 0.073749, -1.890467, 0.111420);
		glVertex3f( 0.086488, -1.859537, 0.047376);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.073749, -1.890467, 0.111420);
		glVertex3f( 0.045570, -1.932093, 0.153593);
		glVertex3f( 0.045570, -1.890467, 0.088294);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.105898, -2.478001, 0.063305);
		glVertex3f( 0.140782, -2.497048, 0.011098);
		glVertex3f( 0.086488, -2.478001, 0.047376);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.140782, -2.497048, 0.011098);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.130887, -2.497048, 0.002977);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.005322, -2.234067, 0.229758);
		glVertex3f( 0.005260, -2.296857, 0.213921);
		glVertex3f( -0.055068, -2.234067, 0.188932);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.045570, -1.932093, 0.153593);
		glVertex3f( 0.022444, -1.982813, 0.188203);
		glVertex3f( 0.009705, -1.932093, 0.124159);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.005260, -2.296857, 0.213921);
		glVertex3f( 0.022444, -2.354724, 0.188203);
		glVertex3f( -0.041600, -2.296857, 0.175464);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.022444, -2.354724, 0.188203);
		glVertex3f( 0.045570, -2.405445, 0.153593);
		glVertex3f( -0.019729, -2.354724, 0.153593);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.022444, -1.982813, 0.188203);
		glVertex3f( 0.005260, -2.040681, 0.213921);
		glVertex3f( -0.019729, -1.982813, 0.153593);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.140782, -1.840490, 0.011098);
		glVertex3f( 0.130887, -1.840490, 0.002977);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.019729, -1.982813, 0.153593);
		glVertex3f( -0.041600, -2.040681, 0.175464);
		glVertex3f( -0.054339, -1.982813, 0.111420);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.130887, -1.840490, 0.002977);
		glVertex3f( 0.122766, -1.840490, -0.006918);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.019729, -2.354724, 0.153593);
		glVertex3f( 0.009705, -2.405445, 0.124159);
		glVertex3f( -0.054339, -2.354724, 0.111420);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.009705, -2.405445, 0.124159);
		glVertex3f( 0.045570, -2.447070, 0.088294);
		glVertex3f( -0.019729, -2.405445, 0.088294);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.041600, -2.040681, 0.175464);
		glVertex3f( -0.055068, -2.103470, 0.188932);
		glVertex3f( -0.080057, -2.040681, 0.128604);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.130887, -1.840490, 0.002977);
		glVertex3f( 0.086488, -1.859537, 0.047376);
		glVertex3f( 0.122766, -1.840490, -0.006918);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.045570, -2.447070, 0.088294);
		glVertex3f( 0.086488, -2.478001, 0.047376);
		glVertex3f( 0.022444, -2.447070, 0.060115);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055068, -2.103470, 0.188932);
		glVertex3f( -0.059616, -2.168769, 0.193480);
		glVertex3f( -0.095894, -2.103470, 0.139186);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.059616, -2.168769, 0.193480);
		glVertex3f( -0.055068, -2.234067, 0.188932);
		glVertex3f( -0.101241, -2.168769, 0.142759);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.086488, -1.859537, 0.047376);
		glVertex3f( 0.045570, -1.890467, 0.088294);
		glVertex3f( 0.070559, -1.859537, 0.027966);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.086488, -2.478001, 0.047376);
		glVertex3f( 0.130887, -2.497048, 0.002977);
		glVertex3f( 0.070559, -2.478001, 0.027966);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055068, -2.234067, 0.188932);
		glVertex3f( -0.041600, -2.296857, 0.175464);
		glVertex3f( -0.095894, -2.234067, 0.139186);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.045570, -1.890467, 0.088294);
		glVertex3f( 0.009705, -1.932093, 0.124159);
		glVertex3f( 0.022444, -1.890467, 0.060115);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.009705, -1.932093, 0.124159);
		glVertex3f( -0.019729, -1.982813, 0.153593);
		glVertex3f( -0.019729, -1.932093, 0.088294);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.130887, -2.497048, 0.002977);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.122766, -2.497048, -0.006918);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.041600, -2.296857, 0.175464);
		glVertex3f( -0.019729, -2.354724, 0.153593);
		glVertex3f( -0.054339, -2.354724, 0.111420);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.122766, -2.497048, -0.006918);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.116732, -2.497048, -0.018207);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.080057, -2.296857, 0.128604);
		glVertex3f( -0.054339, -2.354724, 0.111420);
		glVertex3f( -0.080057, -2.354724, 0.063305);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.019729, -1.932093, 0.088294);
		glVertex3f( -0.054339, -1.982813, 0.111420);
		glVertex3f( -0.041600, -1.932093, 0.047376);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.054339, -1.982813, 0.111420);
		glVertex3f( -0.080057, -2.040681, 0.128604);
		glVertex3f( -0.080057, -1.982813, 0.063305);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.054339, -2.354724, 0.111420);
		glVertex3f( -0.019729, -2.405445, 0.088294);
		glVertex3f( -0.080057, -2.354724, 0.063305);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.080057, -2.040681, 0.128604);
		glVertex3f( -0.095894, -2.103470, 0.139186);
		glVertex3f( -0.108633, -2.040681, 0.075142);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.122766, -1.840490, -0.006918);
		glVertex3f( 0.116732, -1.840490, -0.018207);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.122766, -1.840490, -0.006918);
		glVertex3f( 0.070559, -1.859537, 0.027966);
		glVertex3f( 0.116732, -1.840490, -0.018207);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.019729, -2.405445, 0.088294);
		glVertex3f( 0.022444, -2.447070, 0.060115);
		glVertex3f( -0.041600, -2.405445, 0.047376);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.022444, -2.447070, 0.060115);
		glVertex3f( 0.070559, -2.478001, 0.027966);
		glVertex3f( 0.005260, -2.447070, 0.027966);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.095894, -2.103470, 0.139186);
		glVertex3f( -0.101241, -2.168769, 0.142759);
		glVertex3f( -0.126230, -2.103470, 0.082431);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.070559, -1.859537, 0.027966);
		glVertex3f( 0.022444, -1.890467, 0.060115);
		glVertex3f( 0.058722, -1.859537, 0.005821);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.070559, -2.478001, 0.027966);
		glVertex3f( 0.122766, -2.497048, -0.006918);
		glVertex3f( 0.058722, -2.478001, 0.005821);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.101241, -2.168769, 0.142759);
		glVertex3f( -0.095894, -2.234067, 0.139186);
		glVertex3f( -0.132172, -2.168769, 0.084892);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.095894, -2.234067, 0.139186);
		glVertex3f( -0.080057, -2.296857, 0.128604);
		glVertex3f( -0.126230, -2.234067, 0.082431);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.022444, -1.890467, 0.060115);
		glVertex3f( -0.019729, -1.932093, 0.088294);
		glVertex3f( 0.005260, -1.890467, 0.027966);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.132172, -2.168769, 0.084892);
		glVertex3f( -0.126230, -2.234067, 0.082431);
		glVertex3f( -0.151219, -2.168769, 0.022103);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.005260, -1.890467, 0.027966);
		glVertex3f( -0.041600, -1.932093, 0.047376);
		glVertex3f( -0.005322, -1.890467, -0.006918);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.116732, -2.497048, -0.018207);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.113016, -2.497048, -0.030457);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.126230, -2.234067, 0.082431);
		glVertex3f( -0.108633, -2.296857, 0.075142);
		glVertex3f( -0.144911, -2.234067, 0.020848);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.108633, -2.296857, 0.075142);
		glVertex3f( -0.080057, -2.354724, 0.063305);
		glVertex3f( -0.126230, -2.296857, 0.017132);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.041600, -1.932093, 0.047376);
		glVertex3f( -0.080057, -1.982813, 0.063305);
		glVertex3f( -0.055068, -1.932093, 0.002977);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.080057, -2.354724, 0.063305);
		glVertex3f( -0.041600, -2.405445, 0.047376);
		glVertex3f( -0.095894, -2.354724, 0.011098);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.080057, -1.982813, 0.063305);
		glVertex3f( -0.108633, -2.040681, 0.075142);
		glVertex3f( -0.095894, -1.982813, 0.011098);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.108633, -2.040681, 0.075142);
		glVertex3f( -0.126230, -2.103470, 0.082431);
		glVertex3f( -0.126230, -2.040681, 0.017132);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.116732, -1.840490, -0.018207);
		glVertex3f( 0.113016, -1.840490, -0.030457);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.041600, -2.405445, 0.047376);
		glVertex3f( 0.005260, -2.447070, 0.027966);
		glVertex3f( -0.055068, -2.405445, 0.002977);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.126230, -2.103470, 0.082431);
		glVertex3f( -0.132172, -2.168769, 0.084892);
		glVertex3f( -0.144911, -2.103470, 0.020848);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.116732, -1.840490, -0.018207);
		glVertex3f( 0.058722, -1.859537, 0.005821);
		glVertex3f( 0.113016, -1.840490, -0.030457);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.058722, -1.859537, 0.005821);
		glVertex3f( 0.005260, -1.890467, 0.027966);
		glVertex3f( 0.051433, -1.859537, -0.018207);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.005260, -2.447070, 0.027966);
		glVertex3f( 0.058722, -2.478001, 0.005821);
		glVertex3f( -0.005322, -2.447070, -0.006918);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.058722, -2.478001, 0.005821);
		glVertex3f( 0.116732, -2.497048, -0.018207);
		glVertex3f( 0.051433, -2.478001, -0.018207);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.005322, -2.447070, -0.006918);
		glVertex3f( 0.051433, -2.478001, -0.018207);
		glVertex3f( -0.008895, -2.447070, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.151219, -2.168769, 0.022103);
		glVertex3f( -0.144911, -2.234067, 0.020848);
		glVertex3f( -0.157650, -2.168769, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.051433, -1.859537, -0.018207);
		glVertex3f( -0.005322, -1.890467, -0.006918);
		glVertex3f( 0.048972, -1.859537, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.005322, -1.890467, -0.006918);
		glVertex3f( -0.055068, -1.932093, 0.002977);
		glVertex3f( -0.008895, -1.890467, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.051433, -2.478001, -0.018207);
		glVertex3f( 0.113016, -2.497048, -0.030457);
		glVertex3f( 0.048972, -2.478001, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.113016, -2.497048, -0.030457);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.111762, -2.497048, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.144911, -2.234067, 0.020848);
		glVertex3f( -0.126230, -2.296857, 0.017132);
		glVertex3f( -0.151219, -2.234067, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055068, -1.932093, 0.002977);
		glVertex3f( -0.095894, -1.982813, 0.011098);
		glVertex3f( -0.059616, -1.932093, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.126230, -2.296857, 0.017132);
		glVertex3f( -0.095894, -2.354724, 0.011098);
		glVertex3f( -0.132172, -2.296857, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.095894, -2.354724, 0.011098);
		glVertex3f( -0.055068, -2.405445, 0.002977);
		glVertex3f( -0.101241, -2.354724, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.095894, -1.982813, 0.011098);
		glVertex3f( -0.126230, -2.040681, 0.017132);
		glVertex3f( -0.101241, -1.982813, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.113016, -1.840490, -0.030457);
		glVertex3f( 0.111762, -1.840490, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055068, -2.405445, 0.002977);
		glVertex3f( -0.005322, -2.447070, -0.006918);
		glVertex3f( -0.059616, -2.405445, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.126230, -2.040681, 0.017132);
		glVertex3f( -0.144911, -2.103470, 0.020848);
		glVertex3f( -0.132172, -2.040681, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.144911, -2.103470, 0.020848);
		glVertex3f( -0.151219, -2.168769, 0.022103);
		glVertex3f( -0.151219, -2.103470, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.113016, -1.840490, -0.030457);
		glVertex3f( 0.051433, -1.859537, -0.018207);
		glVertex3f( 0.111762, -1.840490, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.059616, -2.405445, -0.043196);
		glVertex3f( -0.008895, -2.447070, -0.043196);
		glVertex3f( -0.055068, -2.405445, -0.089369);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.132172, -2.040681, -0.043196);
		glVertex3f( -0.151219, -2.103470, -0.043196);
		glVertex3f( -0.126230, -2.040681, -0.103524);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.111762, -1.840490, -0.043196);
		glVertex3f( 0.048972, -1.859537, -0.043196);
		glVertex3f( 0.113016, -1.840490, -0.055935);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.008895, -2.447070, -0.043196);
		glVertex3f( 0.048972, -2.478001, -0.043196);
		glVertex3f( -0.005322, -2.447070, -0.079474);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.151219, -2.103470, -0.043196);
		glVertex3f( -0.157650, -2.168769, -0.043196);
		glVertex3f( -0.144911, -2.103470, -0.107240);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.157650, -2.168769, -0.043196);
		glVertex3f( -0.151219, -2.234067, -0.043196);
		glVertex3f( -0.151219, -2.168769, -0.108495);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.048972, -1.859537, -0.043196);
		glVertex3f( -0.008895, -1.890467, -0.043196);
		glVertex3f( 0.051433, -1.859537, -0.068185);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.048972, -2.478001, -0.043196);
		glVertex3f( 0.111762, -2.497048, -0.043196);
		glVertex3f( 0.051433, -2.478001, -0.068185);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.151219, -2.234067, -0.043196);
		glVertex3f( -0.132172, -2.296857, -0.043196);
		glVertex3f( -0.144911, -2.234067, -0.107240);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.008895, -1.890467, -0.043196);
		glVertex3f( -0.059616, -1.932093, -0.043196);
		glVertex3f( -0.005322, -1.890467, -0.079474);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.059616, -1.932093, -0.043196);
		glVertex3f( -0.101241, -1.982813, -0.043196);
		glVertex3f( -0.055068, -1.932093, -0.089369);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.111762, -2.497048, -0.043196);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.113016, -2.497048, -0.055935);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.132172, -2.296857, -0.043196);
		glVertex3f( -0.101241, -2.354724, -0.043196);
		glVertex3f( -0.126230, -2.296857, -0.103524);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.101241, -1.982813, -0.043196);
		glVertex3f( -0.132172, -2.040681, -0.043196);
		glVertex3f( -0.095894, -1.982813, -0.097490);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.111762, -1.840490, -0.043196);
		glVertex3f( 0.113016, -1.840490, -0.055935);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.101241, -2.354724, -0.043196);
		glVertex3f( -0.059616, -2.405445, -0.043196);
		glVertex3f( -0.095894, -2.354724, -0.097490);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.095894, -1.982813, -0.097490);
		glVertex3f( -0.126230, -2.040681, -0.103524);
		glVertex3f( -0.080057, -1.982813, -0.149698);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.095894, -2.354724, -0.097490);
		glVertex3f( -0.055068, -2.405445, -0.089369);
		glVertex3f( -0.080057, -2.354724, -0.149698);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.126230, -2.040681, -0.103524);
		glVertex3f( -0.144911, -2.103470, -0.107240);
		glVertex3f( -0.108633, -2.040681, -0.161534);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.113016, -1.840490, -0.055935);
		glVertex3f( 0.116732, -1.840490, -0.068185);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.113016, -1.840490, -0.055935);
		glVertex3f( 0.051433, -1.859537, -0.068185);
		glVertex3f( 0.116732, -1.840490, -0.068185);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055068, -2.405445, -0.089369);
		glVertex3f( -0.005322, -2.447070, -0.079474);
		glVertex3f( -0.041600, -2.405445, -0.133768);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.005322, -2.447070, -0.079474);
		glVertex3f( 0.051433, -2.478001, -0.068185);
		glVertex3f( 0.005260, -2.447070, -0.114358);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.144911, -2.103470, -0.107240);
		glVertex3f( -0.151219, -2.168769, -0.108495);
		glVertex3f( -0.126230, -2.103470, -0.168823);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.051433, -1.859537, -0.068185);
		glVertex3f( -0.005322, -1.890467, -0.079474);
		glVertex3f( 0.058722, -1.859537, -0.092213);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.051433, -2.478001, -0.068185);
		glVertex3f( 0.113016, -2.497048, -0.055935);
		glVertex3f( 0.058722, -2.478001, -0.092213);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.151219, -2.168769, -0.108495);
		glVertex3f( -0.144911, -2.234067, -0.107240);
		glVertex3f( -0.132172, -2.168769, -0.171284);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.144911, -2.234067, -0.107240);
		glVertex3f( -0.126230, -2.296857, -0.103524);
		glVertex3f( -0.126230, -2.234067, -0.168823);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.005322, -1.890467, -0.079474);
		glVertex3f( -0.055068, -1.932093, -0.089369);
		glVertex3f( 0.005260, -1.890467, -0.114358);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.113016, -2.497048, -0.055935);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.116732, -2.497048, -0.068185);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.126230, -2.296857, -0.103524);
		glVertex3f( -0.095894, -2.354724, -0.097490);
		glVertex3f( -0.108633, -2.296857, -0.161534);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055068, -1.932093, -0.089369);
		glVertex3f( -0.095894, -1.982813, -0.097490);
		glVertex3f( -0.041600, -1.932093, -0.133768);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.116732, -2.497048, -0.068185);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.122766, -2.497048, -0.079474);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.126230, -2.234067, -0.168823);
		glVertex3f( -0.108633, -2.296857, -0.161534);
		glVertex3f( -0.095894, -2.234067, -0.225578);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.108633, -2.296857, -0.161534);
		glVertex3f( -0.080057, -2.354724, -0.149698);
		glVertex3f( -0.054339, -2.354724, -0.197812);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.041600, -1.932093, -0.133768);
		glVertex3f( -0.080057, -1.982813, -0.149698);
		glVertex3f( -0.019729, -1.932093, -0.174686);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.080057, -2.354724, -0.149698);
		glVertex3f( -0.041600, -2.405445, -0.133768);
		glVertex3f( -0.054339, -2.354724, -0.197812);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.080057, -1.982813, -0.149698);
		glVertex3f( -0.108633, -2.040681, -0.161534);
		glVertex3f( -0.054339, -1.982813, -0.197812);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.108633, -2.040681, -0.161534);
		glVertex3f( -0.126230, -2.103470, -0.168823);
		glVertex3f( -0.080057, -2.040681, -0.214996);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.116732, -1.840490, -0.068185);
		glVertex3f( 0.122766, -1.840490, -0.079474);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.041600, -2.405445, -0.133768);
		glVertex3f( 0.005260, -2.447070, -0.114358);
		glVertex3f( -0.019729, -2.405445, -0.174686);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.126230, -2.103470, -0.168823);
		glVertex3f( -0.132172, -2.168769, -0.171284);
		glVertex3f( -0.095894, -2.103470, -0.225578);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.116732, -1.840490, -0.068185);
		glVertex3f( 0.058722, -1.859537, -0.092213);
		glVertex3f( 0.122766, -1.840490, -0.079474);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.058722, -1.859537, -0.092213);
		glVertex3f( 0.005260, -1.890467, -0.114358);
		glVertex3f( 0.070559, -1.859537, -0.114358);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.005260, -2.447070, -0.114358);
		glVertex3f( 0.058722, -2.478001, -0.092213);
		glVertex3f( 0.022444, -2.447070, -0.146507);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.058722, -2.478001, -0.092213);
		glVertex3f( 0.116732, -2.497048, -0.068185);
		glVertex3f( 0.070559, -2.478001, -0.114358);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.132172, -2.168769, -0.171284);
		glVertex3f( -0.126230, -2.234067, -0.168823);
		glVertex3f( -0.101241, -2.168769, -0.229151);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.005260, -1.890467, -0.114358);
		glVertex3f( -0.041600, -1.932093, -0.133768);
		glVertex3f( 0.022444, -1.890467, -0.146507);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.070559, -1.859537, -0.114358);
		glVertex3f( 0.022444, -1.890467, -0.146507);
		glVertex3f( 0.086488, -1.859537, -0.133768);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.022444, -1.890467, -0.146507);
		glVertex3f( -0.019729, -1.932093, -0.174686);
		glVertex3f( 0.045570, -1.890467, -0.174686);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.070559, -2.478001, -0.114358);
		glVertex3f( 0.122766, -2.497048, -0.079474);
		glVertex3f( 0.086488, -2.478001, -0.133768);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.122766, -2.497048, -0.079474);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.130887, -2.497048, -0.089369);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.095894, -2.234067, -0.225578);
		glVertex3f( -0.080057, -2.296857, -0.214996);
		glVertex3f( -0.055068, -2.234067, -0.275324);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.019729, -1.932093, -0.174686);
		glVertex3f( -0.054339, -1.982813, -0.197812);
		glVertex3f( 0.009705, -1.932093, -0.210551);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.080057, -2.296857, -0.214996);
		glVertex3f( -0.054339, -2.354724, -0.197812);
		glVertex3f( -0.041600, -2.296857, -0.261856);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.054339, -2.354724, -0.197812);
		glVertex3f( -0.019729, -2.405445, -0.174686);
		glVertex3f( -0.019729, -2.354724, -0.239985);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.054339, -1.982813, -0.197812);
		glVertex3f( -0.080057, -2.040681, -0.214996);
		glVertex3f( -0.019729, -1.982813, -0.239985);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.122766, -1.840490, -0.079474);
		glVertex3f( 0.130887, -1.840490, -0.089369);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.019729, -2.405445, -0.174686);
		glVertex3f( 0.022444, -2.447070, -0.146507);
		glVertex3f( 0.009705, -2.405445, -0.210551);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.080057, -2.040681, -0.214996);
		glVertex3f( -0.095894, -2.103470, -0.225578);
		glVertex3f( -0.041600, -2.040681, -0.261856);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.095894, -2.103470, -0.225578);
		glVertex3f( -0.101241, -2.168769, -0.229151);
		glVertex3f( -0.055068, -2.103470, -0.275324);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.122766, -1.840490, -0.079474);
		glVertex3f( 0.070559, -1.859537, -0.114358);
		glVertex3f( 0.130887, -1.840490, -0.089369);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.022444, -2.447070, -0.146507);
		glVertex3f( 0.070559, -2.478001, -0.114358);
		glVertex3f( 0.045570, -2.447070, -0.174686);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.101241, -2.168769, -0.229151);
		glVertex3f( -0.095894, -2.234067, -0.225578);
		glVertex3f( -0.059616, -2.168769, -0.279872);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.045570, -2.447070, -0.174686);
		glVertex3f( 0.086488, -2.478001, -0.133768);
		glVertex3f( 0.073749, -2.447070, -0.197812);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055068, -2.103470, -0.275324);
		glVertex3f( -0.059616, -2.168769, -0.279872);
		glVertex3f( -0.005322, -2.103470, -0.316150);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.059616, -2.168769, -0.279872);
		glVertex3f( -0.055068, -2.234067, -0.275324);
		glVertex3f( -0.008895, -2.168769, -0.321498);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.086488, -1.859537, -0.133768);
		glVertex3f( 0.045570, -1.890467, -0.174686);
		glVertex3f( 0.105898, -1.859537, -0.149698);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.086488, -2.478001, -0.133768);
		glVertex3f( 0.130887, -2.497048, -0.089369);
		glVertex3f( 0.105898, -2.478001, -0.149698);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055068, -2.234067, -0.275324);
		glVertex3f( -0.041600, -2.296857, -0.261856);
		glVertex3f( -0.005322, -2.234067, -0.316150);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.045570, -1.890467, -0.174686);
		glVertex3f( 0.009705, -1.932093, -0.210551);
		glVertex3f( 0.073749, -1.890467, -0.197812);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.009705, -1.932093, -0.210551);
		glVertex3f( -0.019729, -1.982813, -0.239985);
		glVertex3f( 0.045570, -1.932093, -0.239985);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.130887, -2.497048, -0.089369);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.140782, -2.497048, -0.097490);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.041600, -2.296857, -0.261856);
		glVertex3f( -0.019729, -2.354724, -0.239985);
		glVertex3f( 0.005260, -2.296857, -0.300313);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.019729, -1.982813, -0.239985);
		glVertex3f( -0.041600, -2.040681, -0.261856);
		glVertex3f( 0.022444, -1.982813, -0.274595);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.130887, -1.840490, -0.089369);
		glVertex3f( 0.140782, -1.840490, -0.097490);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.019729, -2.354724, -0.239985);
		glVertex3f( 0.009705, -2.405445, -0.210551);
		glVertex3f( 0.022444, -2.354724, -0.274595);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.009705, -2.405445, -0.210551);
		glVertex3f( 0.045570, -2.447070, -0.174686);
		glVertex3f( 0.045570, -2.405445, -0.239985);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.041600, -2.040681, -0.261856);
		glVertex3f( -0.055068, -2.103470, -0.275324);
		glVertex3f( 0.005260, -2.040681, -0.300313);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.130887, -1.840490, -0.089369);
		glVertex3f( 0.086488, -1.859537, -0.133768);
		glVertex3f( 0.140782, -1.840490, -0.097490);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.005260, -2.040681, -0.300313);
		glVertex3f( -0.005322, -2.103470, -0.316150);
		glVertex3f( 0.058722, -2.040681, -0.328889);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.140782, -1.840490, -0.097490);
		glVertex3f( 0.152072, -1.840490, -0.103524);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.140782, -1.840490, -0.097490);
		glVertex3f( 0.105898, -1.859537, -0.149698);
		glVertex3f( 0.152072, -1.840490, -0.103524);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.045570, -2.405445, -0.239985);
		glVertex3f( 0.073749, -2.447070, -0.197812);
		glVertex3f( 0.086488, -2.405445, -0.261856);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.073749, -2.447070, -0.197812);
		glVertex3f( 0.105898, -2.478001, -0.149698);
		glVertex3f( 0.105898, -2.447070, -0.214996);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.005322, -2.103470, -0.316150);
		glVertex3f( -0.008895, -2.168769, -0.321498);
		glVertex3f( 0.051433, -2.103470, -0.346486);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.105898, -1.859537, -0.149698);
		glVertex3f( 0.073749, -1.890467, -0.197812);
		glVertex3f( 0.128043, -1.859537, -0.161534);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.105898, -2.478001, -0.149698);
		glVertex3f( 0.140782, -2.497048, -0.097490);
		glVertex3f( 0.128043, -2.478001, -0.161534);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.008895, -2.168769, -0.321498);
		glVertex3f( -0.005322, -2.234067, -0.316150);
		glVertex3f( 0.048972, -2.168769, -0.352428);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.005322, -2.234067, -0.316150);
		glVertex3f( 0.005260, -2.296857, -0.300313);
		glVertex3f( 0.051434, -2.234067, -0.346486);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.073749, -1.890467, -0.197812);
		glVertex3f( 0.045570, -1.932093, -0.239985);
		glVertex3f( 0.105898, -1.890467, -0.214996);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.140782, -2.497048, -0.097490);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.152072, -2.497048, -0.103524);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.005260, -2.296857, -0.300313);
		glVertex3f( 0.022444, -2.354724, -0.274595);
		glVertex3f( 0.058722, -2.296857, -0.328889);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.045570, -1.932093, -0.239985);
		glVertex3f( 0.022444, -1.982813, -0.274595);
		glVertex3f( 0.086488, -1.932093, -0.261856);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.022444, -1.982813, -0.274595);
		glVertex3f( 0.005260, -2.040681, -0.300313);
		glVertex3f( 0.070559, -1.982813, -0.300313);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.022444, -2.354724, -0.274595);
		glVertex3f( 0.045570, -2.405445, -0.239985);
		glVertex3f( 0.070559, -2.354724, -0.300313);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.070559, -2.354724, -0.300313);
		glVertex3f( 0.086488, -2.405445, -0.261856);
		glVertex3f( 0.122766, -2.354724, -0.316150);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.070559, -1.982813, -0.300313);
		glVertex3f( 0.058722, -2.040681, -0.328889);
		glVertex3f( 0.122766, -1.982813, -0.316150);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.058722, -2.040681, -0.328889);
		glVertex3f( 0.051433, -2.103470, -0.346486);
		glVertex3f( 0.116732, -2.040681, -0.346486);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.152072, -1.840490, -0.103524);
		glVertex3f( 0.164321, -1.840490, -0.107240);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.086488, -2.405445, -0.261856);
		glVertex3f( 0.105898, -2.447070, -0.214996);
		glVertex3f( 0.130887, -2.405445, -0.275324);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.051433, -2.103470, -0.346486);
		glVertex3f( 0.048972, -2.168769, -0.352428);
		glVertex3f( 0.113016, -2.103470, -0.365167);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.152072, -1.840490, -0.103524);
		glVertex3f( 0.128043, -1.859537, -0.161534);
		glVertex3f( 0.164321, -1.840490, -0.107240);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.128043, -1.859537, -0.161534);
		glVertex3f( 0.105898, -1.890467, -0.214996);
		glVertex3f( 0.152072, -1.859537, -0.168823);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.105898, -2.447070, -0.214996);
		glVertex3f( 0.128043, -2.478001, -0.161534);
		glVertex3f( 0.140782, -2.447070, -0.225578);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.128043, -2.478001, -0.161534);
		glVertex3f( 0.152072, -2.497048, -0.103524);
		glVertex3f( 0.152072, -2.478001, -0.168823);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.048972, -2.168769, -0.352428);
		glVertex3f( 0.051434, -2.234067, -0.346486);
		glVertex3f( 0.111762, -2.168769, -0.371475);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.105898, -1.890467, -0.214996);
		glVertex3f( 0.086488, -1.932093, -0.261856);
		glVertex3f( 0.140782, -1.890467, -0.225578);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.152072, -2.497048, -0.103524);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.164321, -2.497048, -0.107240);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.051434, -2.234067, -0.346486);
		glVertex3f( 0.058722, -2.296857, -0.328889);
		glVertex3f( 0.113016, -2.234067, -0.365167);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.058722, -2.296857, -0.328889);
		glVertex3f( 0.070559, -2.354724, -0.300313);
		glVertex3f( 0.116732, -2.296857, -0.346486);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.086488, -1.932093, -0.261856);
		glVertex3f( 0.070559, -1.982813, -0.300313);
		glVertex3f( 0.130887, -1.932093, -0.275324);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.113016, -2.234067, -0.365167);
		glVertex3f( 0.116732, -2.296857, -0.346486);
		glVertex3f( 0.177060, -2.234067, -0.371475);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.130887, -1.932093, -0.275324);
		glVertex3f( 0.122766, -1.982813, -0.316150);
		glVertex3f( 0.177060, -1.932093, -0.279872);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.116732, -2.296857, -0.346486);
		glVertex3f( 0.122766, -2.354724, -0.316150);
		glVertex3f( 0.177060, -2.296857, -0.352428);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.122766, -2.354724, -0.316150);
		glVertex3f( 0.130887, -2.405445, -0.275324);
		glVertex3f( 0.177060, -2.354724, -0.321498);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.122766, -1.982813, -0.316150);
		glVertex3f( 0.116732, -2.040681, -0.346486);
		glVertex3f( 0.177060, -1.982813, -0.321498);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.164321, -1.840490, -0.107240);
		glVertex3f( 0.177060, -1.840490, -0.108495);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.130887, -2.405445, -0.275324);
		glVertex3f( 0.140782, -2.447070, -0.225578);
		glVertex3f( 0.177060, -2.405445, -0.279872);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.116732, -2.040681, -0.346486);
		glVertex3f( 0.113016, -2.103470, -0.365167);
		glVertex3f( 0.177060, -2.040681, -0.352428);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.113016, -2.103470, -0.365167);
		glVertex3f( 0.111762, -2.168769, -0.371475);
		glVertex3f( 0.177060, -2.103470, -0.371475);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.164321, -1.840490, -0.107240);
		glVertex3f( 0.152072, -1.859537, -0.168823);
		glVertex3f( 0.177060, -1.840490, -0.108495);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.140782, -2.447070, -0.225578);
		glVertex3f( 0.152072, -2.478001, -0.168823);
		glVertex3f( 0.177060, -2.447070, -0.229151);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.111762, -2.168769, -0.371475);
		glVertex3f( 0.113016, -2.234067, -0.365167);
		glVertex3f( 0.177060, -2.168769, -0.377906);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.152072, -1.859537, -0.168823);
		glVertex3f( 0.140782, -1.890467, -0.225578);
		glVertex3f( 0.177060, -1.859537, -0.171284);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.140782, -1.890467, -0.225578);
		glVertex3f( 0.130887, -1.932093, -0.275324);
		glVertex3f( 0.177060, -1.890467, -0.229151);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.152072, -2.478001, -0.168823);
		glVertex3f( 0.164321, -2.497048, -0.107240);
		glVertex3f( 0.177060, -2.478001, -0.171284);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.164321, -2.497048, -0.107240);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.177060, -2.497048, -0.108495);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.478001, -0.171284);
		glVertex3f( 0.177060, -2.497048, -0.108495);
		glVertex3f( 0.202049, -2.478001, -0.168823);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.234067, -0.371475);
		glVertex3f( 0.177060, -2.296857, -0.352428);
		glVertex3f( 0.241104, -2.234067, -0.365167);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.890467, -0.229151);
		glVertex3f( 0.177060, -1.932093, -0.279872);
		glVertex3f( 0.213338, -1.890467, -0.225578);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.932093, -0.279872);
		glVertex3f( 0.177060, -1.982813, -0.321498);
		glVertex3f( 0.223234, -1.932093, -0.275324);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.497048, -0.108495);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.189800, -2.497048, -0.107240);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.296857, -0.352428);
		glVertex3f( 0.177060, -2.354724, -0.321498);
		glVertex3f( 0.237389, -2.296857, -0.346486);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.982813, -0.321498);
		glVertex3f( 0.177060, -2.040681, -0.352428);
		glVertex3f( 0.231354, -1.982813, -0.316150);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.177060, -1.840490, -0.108495);
		glVertex3f( 0.189800, -1.840490, -0.107240);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.354724, -0.321498);
		glVertex3f( 0.177060, -2.405445, -0.279872);
		glVertex3f( 0.223234, -2.405445, -0.275324);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.405445, -0.279872);
		glVertex3f( 0.177060, -2.447070, -0.229151);
		glVertex3f( 0.223234, -2.405445, -0.275324);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.040681, -0.352428);
		glVertex3f( 0.177060, -2.103470, -0.371475);
		glVertex3f( 0.237389, -2.040681, -0.346486);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.840490, -0.108495);
		glVertex3f( 0.177060, -1.859537, -0.171284);
		glVertex3f( 0.189800, -1.840490, -0.107240);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.447070, -0.229151);
		glVertex3f( 0.177060, -2.478001, -0.171284);
		glVertex3f( 0.213338, -2.447070, -0.225578);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.103470, -0.371475);
		glVertex3f( 0.177060, -2.168769, -0.377906);
		glVertex3f( 0.241104, -2.103470, -0.365167);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.168769, -0.377906);
		glVertex3f( 0.177060, -2.234067, -0.371475);
		glVertex3f( 0.242359, -2.168769, -0.371475);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.859537, -0.171284);
		glVertex3f( 0.177060, -1.890467, -0.229151);
		glVertex3f( 0.202049, -1.859537, -0.168823);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.213338, -2.447070, -0.225578);
		glVertex3f( 0.202049, -2.478001, -0.168823);
		glVertex3f( 0.248222, -2.447070, -0.214996);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.241104, -2.103470, -0.365167);
		glVertex3f( 0.242359, -2.168769, -0.371475);
		glVertex3f( 0.302687, -2.103470, -0.346486);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.202049, -1.859537, -0.168823);
		glVertex3f( 0.213338, -1.890467, -0.225578);
		glVertex3f( 0.226078, -1.859537, -0.161534);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.202049, -2.478001, -0.168823);
		glVertex3f( 0.189800, -2.497048, -0.107240);
		glVertex3f( 0.226078, -2.478001, -0.161534);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.242359, -2.168769, -0.371475);
		glVertex3f( 0.241104, -2.234067, -0.365167);
		glVertex3f( 0.305149, -2.168769, -0.352428);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.241104, -2.234067, -0.365167);
		glVertex3f( 0.237389, -2.296857, -0.346486);
		glVertex3f( 0.302687, -2.234067, -0.346486);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.213338, -1.890467, -0.225578);
		glVertex3f( 0.223234, -1.932093, -0.275324);
		glVertex3f( 0.248222, -1.890467, -0.214996);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.189800, -2.497048, -0.107240);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.202049, -2.497048, -0.103524);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.237389, -2.296857, -0.346486);
		glVertex3f( 0.231354, -2.354724, -0.316150);
		glVertex3f( 0.295398, -2.296857, -0.328889);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.223234, -1.932093, -0.275324);
		glVertex3f( 0.231354, -1.982813, -0.316150);
		glVertex3f( 0.267632, -1.932093, -0.261856);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.231354, -1.982813, -0.316150);
		glVertex3f( 0.237389, -2.040681, -0.346486);
		glVertex3f( 0.283562, -1.982813, -0.300313);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.231354, -2.354724, -0.316150);
		glVertex3f( 0.223234, -2.405445, -0.275324);
		glVertex3f( 0.283562, -2.354724, -0.300313);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.237389, -2.040681, -0.346486);
		glVertex3f( 0.241104, -2.103470, -0.365167);
		glVertex3f( 0.295398, -2.040681, -0.328889);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.189800, -1.840490, -0.107240);
		glVertex3f( 0.202049, -1.840490, -0.103524);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.189800, -1.840490, -0.107240);
		glVertex3f( 0.202049, -1.859537, -0.168823);
		glVertex3f( 0.202049, -1.840490, -0.103524);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.223234, -2.405445, -0.275324);
		glVertex3f( 0.213338, -2.447070, -0.225578);
		glVertex3f( 0.267632, -2.405445, -0.261856);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.295398, -2.040681, -0.328889);
		glVertex3f( 0.302687, -2.103470, -0.346486);
		glVertex3f( 0.348861, -2.040681, -0.300313);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.202049, -1.840490, -0.103524);
		glVertex3f( 0.213338, -1.840490, -0.097490);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.267632, -2.405445, -0.261856);
		glVertex3f( 0.248222, -2.447070, -0.214996);
		glVertex3f( 0.308551, -2.405445, -0.239985);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.302687, -2.103470, -0.346486);
		glVertex3f( 0.305149, -2.168769, -0.352428);
		glVertex3f( 0.359442, -2.103470, -0.316150);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.202049, -1.840490, -0.103524);
		glVertex3f( 0.226078, -1.859537, -0.161534);
		glVertex3f( 0.213338, -1.840490, -0.097490);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.226078, -1.859537, -0.161534);
		glVertex3f( 0.248222, -1.890467, -0.214996);
		glVertex3f( 0.248222, -1.859537, -0.149697);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.248222, -2.447070, -0.214996);
		glVertex3f( 0.226078, -2.478001, -0.161534);
		glVertex3f( 0.280372, -2.447070, -0.197812);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.226078, -2.478001, -0.161534);
		glVertex3f( 0.202049, -2.497048, -0.103524);
		glVertex3f( 0.248222, -2.478001, -0.149698);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.305149, -2.168769, -0.352428);
		glVertex3f( 0.302687, -2.234067, -0.346486);
		glVertex3f( 0.363016, -2.168769, -0.321498);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.248222, -1.890467, -0.214996);
		glVertex3f( 0.267632, -1.932093, -0.261856);
		glVertex3f( 0.280372, -1.890467, -0.197812);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.202049, -2.497048, -0.103524);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.213338, -2.497048, -0.097490);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.302687, -2.234067, -0.346486);
		glVertex3f( 0.295398, -2.296857, -0.328889);
		glVertex3f( 0.359442, -2.234067, -0.316150);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.295398, -2.296857, -0.328889);
		glVertex3f( 0.283562, -2.354724, -0.300313);
		glVertex3f( 0.348861, -2.296857, -0.300313);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.267632, -1.932093, -0.261856);
		glVertex3f( 0.283562, -1.982813, -0.300313);
		glVertex3f( 0.308551, -1.932093, -0.239985);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.283562, -2.354724, -0.300313);
		glVertex3f( 0.267632, -2.405445, -0.261856);
		glVertex3f( 0.331676, -2.354724, -0.274595);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.283562, -1.982813, -0.300313);
		glVertex3f( 0.295398, -2.040681, -0.328889);
		glVertex3f( 0.331676, -1.982813, -0.274595);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.348861, -2.296857, -0.300313);
		glVertex3f( 0.331676, -2.354724, -0.274595);
		glVertex3f( 0.395720, -2.296857, -0.261856);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.331676, -2.354724, -0.274595);
		glVertex3f( 0.308551, -2.405445, -0.239985);
		glVertex3f( 0.373849, -2.354724, -0.239985);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.331676, -1.982813, -0.274595);
		glVertex3f( 0.348861, -2.040681, -0.300313);
		glVertex3f( 0.373849, -1.982813, -0.239985);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.213338, -1.840490, -0.097490);
		glVertex3f( 0.223234, -1.840490, -0.089369);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.308551, -2.405445, -0.239985);
		glVertex3f( 0.280372, -2.447070, -0.197812);
		glVertex3f( 0.344416, -2.405445, -0.210551);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.348861, -2.040681, -0.300313);
		glVertex3f( 0.359442, -2.103470, -0.316150);
		glVertex3f( 0.395720, -2.040681, -0.261856);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.359442, -2.103470, -0.316150);
		glVertex3f( 0.363016, -2.168769, -0.321498);
		glVertex3f( 0.409189, -2.103470, -0.275324);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.213338, -1.840490, -0.097490);
		glVertex3f( 0.248222, -1.859537, -0.149697);
		glVertex3f( 0.223234, -1.840490, -0.089369);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.280372, -2.447070, -0.197812);
		glVertex3f( 0.248222, -2.478001, -0.149698);
		glVertex3f( 0.308551, -2.447070, -0.174686);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.363016, -2.168769, -0.321498);
		glVertex3f( 0.359442, -2.234067, -0.316150);
		glVertex3f( 0.413736, -2.168769, -0.279872);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.248222, -1.859537, -0.149697);
		glVertex3f( 0.280372, -1.890467, -0.197812);
		glVertex3f( 0.267632, -1.859537, -0.133768);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.280372, -1.890467, -0.197812);
		glVertex3f( 0.308551, -1.932093, -0.239985);
		glVertex3f( 0.308551, -1.890467, -0.174686);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.248222, -2.478001, -0.149698);
		glVertex3f( 0.213338, -2.497048, -0.097490);
		glVertex3f( 0.267632, -2.478001, -0.133768);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.213338, -2.497048, -0.097490);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.223234, -2.497048, -0.089369);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.359442, -2.234067, -0.316150);
		glVertex3f( 0.348861, -2.296857, -0.300313);
		glVertex3f( 0.409189, -2.234067, -0.275324);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.308551, -1.932093, -0.239985);
		glVertex3f( 0.331676, -1.982813, -0.274595);
		glVertex3f( 0.344416, -1.932093, -0.210551);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.308551, -1.890467, -0.174686);
		glVertex3f( 0.344416, -1.932093, -0.210551);
		glVertex3f( 0.331676, -1.890467, -0.146507);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.344416, -1.932093, -0.210551);
		glVertex3f( 0.373849, -1.982813, -0.239985);
		glVertex3f( 0.373849, -1.932093, -0.174686);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.223234, -2.497048, -0.089369);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.231354, -2.497048, -0.079474);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.395720, -2.296857, -0.261856);
		glVertex3f( 0.373849, -2.354724, -0.239985);
		glVertex3f( 0.434177, -2.296857, -0.214996);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.373849, -1.982813, -0.239985);
		glVertex3f( 0.395720, -2.040681, -0.261856);
		glVertex3f( 0.408460, -1.982813, -0.197812);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.223234, -1.840490, -0.089369);
		glVertex3f( 0.231354, -1.840490, -0.079474);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.373849, -2.354724, -0.239985);
		glVertex3f( 0.344416, -2.405445, -0.210551);
		glVertex3f( 0.408460, -2.354724, -0.197812);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.344416, -2.405445, -0.210551);
		glVertex3f( 0.308551, -2.447070, -0.174686);
		glVertex3f( 0.373849, -2.405445, -0.174686);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.395720, -2.040681, -0.261856);
		glVertex3f( 0.409189, -2.103470, -0.275324);
		glVertex3f( 0.434177, -2.040681, -0.214996);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.223234, -1.840490, -0.089369);
		glVertex3f( 0.267632, -1.859537, -0.133768);
		glVertex3f( 0.231354, -1.840490, -0.079474);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.308551, -2.447070, -0.174686);
		glVertex3f( 0.267632, -2.478001, -0.133768);
		glVertex3f( 0.331676, -2.447070, -0.146507);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.409189, -2.103470, -0.275324);
		glVertex3f( 0.413736, -2.168769, -0.279872);
		glVertex3f( 0.450014, -2.103470, -0.225578);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.413736, -2.168769, -0.279872);
		glVertex3f( 0.409189, -2.234067, -0.275324);
		glVertex3f( 0.455362, -2.168769, -0.229151);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.267632, -1.859537, -0.133768);
		glVertex3f( 0.308551, -1.890467, -0.174686);
		glVertex3f( 0.283562, -1.859537, -0.114358);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.267632, -2.478001, -0.133768);
		glVertex3f( 0.223234, -2.497048, -0.089369);
		glVertex3f( 0.283562, -2.478001, -0.114358);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.409189, -2.234067, -0.275324);
		glVertex3f( 0.395720, -2.296857, -0.261856);
		glVertex3f( 0.450014, -2.234067, -0.225578);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.283562, -2.478001, -0.114358);
		glVertex3f( 0.231354, -2.497048, -0.079474);
		glVertex3f( 0.295398, -2.478001, -0.092213);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.455362, -2.168769, -0.229151);
		glVertex3f( 0.450014, -2.234067, -0.225578);
		glVertex3f( 0.486292, -2.168769, -0.171284);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.450014, -2.234067, -0.225578);
		glVertex3f( 0.434177, -2.296857, -0.214996);
		glVertex3f( 0.480351, -2.234067, -0.168823);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.331676, -1.890467, -0.146507);
		glVertex3f( 0.373849, -1.932093, -0.174686);
		glVertex3f( 0.348860, -1.890467, -0.114358);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.231354, -2.497048, -0.079474);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.237389, -2.497048, -0.068185);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.434177, -2.296857, -0.214996);
		glVertex3f( 0.408460, -2.354724, -0.197812);
		glVertex3f( 0.462753, -2.296857, -0.161534);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.373849, -1.932093, -0.174686);
		glVertex3f( 0.408460, -1.982813, -0.197812);
		glVertex3f( 0.395720, -1.932093, -0.133768);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.408460, -1.982813, -0.197812);
		glVertex3f( 0.434177, -2.040681, -0.214996);
		glVertex3f( 0.434177, -1.982813, -0.149697);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.408460, -2.354724, -0.197812);
		glVertex3f( 0.373849, -2.405445, -0.174686);
		glVertex3f( 0.434177, -2.354724, -0.149697);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.434177, -2.040681, -0.214996);
		glVertex3f( 0.450014, -2.103470, -0.225578);
		glVertex3f( 0.480351, -2.103470, -0.168823);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.231354, -1.840490, -0.079474);
		glVertex3f( 0.237389, -1.840490, -0.068185);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.231354, -1.840490, -0.079474);
		glVertex3f( 0.283562, -1.859537, -0.114358);
		glVertex3f( 0.237389, -1.840490, -0.068185);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.373849, -2.405445, -0.174686);
		glVertex3f( 0.331676, -2.447070, -0.146507);
		glVertex3f( 0.395720, -2.405445, -0.133768);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.331676, -2.447070, -0.146507);
		glVertex3f( 0.283562, -2.478001, -0.114358);
		glVertex3f( 0.348861, -2.447070, -0.114358);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.450014, -2.103470, -0.225578);
		glVertex3f( 0.455362, -2.168769, -0.229151);
		glVertex3f( 0.480351, -2.103470, -0.168823);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.283562, -1.859537, -0.114358);
		glVertex3f( 0.331676, -1.890467, -0.146507);
		glVertex3f( 0.295398, -1.859537, -0.092213);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.480351, -2.103470, -0.168823);
		glVertex3f( 0.486292, -2.168769, -0.171284);
		glVertex3f( 0.499032, -2.103470, -0.107240);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.237389, -1.840490, -0.068185);
		glVertex3f( 0.295398, -1.859537, -0.092213);
		glVertex3f( 0.241104, -1.840490, -0.055935);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.295398, -1.859537, -0.092213);
		glVertex3f( 0.348860, -1.890467, -0.114358);
		glVertex3f( 0.302687, -1.859537, -0.068185);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.348861, -2.447070, -0.114358);
		glVertex3f( 0.295398, -2.478001, -0.092213);
		glVertex3f( 0.359442, -2.447070, -0.079474);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.295398, -2.478001, -0.092213);
		glVertex3f( 0.237389, -2.497048, -0.068185);
		glVertex3f( 0.302687, -2.478001, -0.068185);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.486292, -2.168769, -0.171284);
		glVertex3f( 0.480351, -2.234067, -0.168823);
		glVertex3f( 0.505339, -2.168769, -0.108495);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.348860, -1.890467, -0.114358);
		glVertex3f( 0.395720, -1.932093, -0.133768);
		glVertex3f( 0.359442, -1.890467, -0.079474);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.237389, -2.497048, -0.068185);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.241104, -2.497048, -0.055935);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.480351, -2.234067, -0.168823);
		glVertex3f( 0.462753, -2.296857, -0.161534);
		glVertex3f( 0.499031, -2.234067, -0.107240);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.462753, -2.296857, -0.161534);
		glVertex3f( 0.434177, -2.354724, -0.149697);
		glVertex3f( 0.480351, -2.296857, -0.103524);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.395720, -1.932093, -0.133768);
		glVertex3f( 0.434177, -1.982813, -0.149697);
		glVertex3f( 0.409189, -1.932093, -0.089369);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.434177, -2.354724, -0.149697);
		glVertex3f( 0.395720, -2.405445, -0.133768);
		glVertex3f( 0.409189, -2.405445, -0.089369);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.434177, -1.982813, -0.149697);
		glVertex3f( 0.462754, -2.040681, -0.161534);
		glVertex3f( 0.450014, -1.982813, -0.097490);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.462754, -2.040681, -0.161534);
		glVertex3f( 0.480351, -2.103470, -0.168823);
		glVertex3f( 0.499032, -2.103470, -0.107240);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.237389, -1.840490, -0.068185);
		glVertex3f( 0.241104, -1.840490, -0.055935);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.395720, -2.405445, -0.133768);
		glVertex3f( 0.348861, -2.447070, -0.114358);
		glVertex3f( 0.409189, -2.405445, -0.089369);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.834058, -0.043196);
		glVertex3f( 0.241104, -1.840490, -0.055935);
		glVertex3f( 0.242359, -1.840490, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.409189, -2.405445, -0.089369);
		glVertex3f( 0.359442, -2.447070, -0.079474);
		glVertex3f( 0.413736, -2.405445, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.480351, -2.040681, -0.103524);
		glVertex3f( 0.499032, -2.103470, -0.107240);
		glVertex3f( 0.505340, -2.103470, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.499032, -2.103470, -0.107240);
		glVertex3f( 0.505339, -2.168769, -0.108495);
		glVertex3f( 0.511771, -2.168769, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.241104, -1.840490, -0.055935);
		glVertex3f( 0.302687, -1.859537, -0.068185);
		glVertex3f( 0.305149, -1.859537, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.359442, -2.447070, -0.079474);
		glVertex3f( 0.302687, -2.478001, -0.068185);
		glVertex3f( 0.363016, -2.447070, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.505339, -2.168769, -0.108495);
		glVertex3f( 0.499031, -2.234067, -0.107240);
		glVertex3f( 0.511771, -2.168769, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.302687, -1.859537, -0.068185);
		glVertex3f( 0.359442, -1.890467, -0.079474);
		glVertex3f( 0.363016, -1.890467, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.359442, -1.890467, -0.079474);
		glVertex3f( 0.409189, -1.932093, -0.089369);
		glVertex3f( 0.413736, -1.932093, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.302687, -2.478001, -0.068185);
		glVertex3f( 0.241104, -2.497048, -0.055935);
		glVertex3f( 0.305149, -2.478001, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.241104, -2.497048, -0.055935);
		glVertex3f( 0.177060, -2.503479, -0.043196);
		glVertex3f( 0.242359, -2.497048, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.499031, -2.234067, -0.107240);
		glVertex3f( 0.480351, -2.296857, -0.103524);
		glVertex3f( 0.505340, -2.234067, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.409189, -1.932093, -0.089369);
		glVertex3f( 0.450014, -1.982813, -0.097490);
		glVertex3f( 0.455362, -1.982813, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.480351, -2.296857, -0.103524);
		glVertex3f( 0.450014, -2.354724, -0.097490);
		glVertex3f( 0.486293, -2.296857, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.450014, -2.354724, -0.097490);
		glVertex3f( 0.409189, -2.405445, -0.089369);
		glVertex3f( 0.455362, -2.354724, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.450014, -1.982813, -0.097490);
		glVertex3f( 0.480351, -2.040681, -0.103524);
		glVertex3f( 0.486293, -2.040681, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.511771, -2.168769, -0.043196);
		glVertex3f( 0.505340, -2.168769, 0.022103);
		glVertex3f( 0.499032, -2.103470, 0.020848);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.363016, -1.890467, -0.043196);
		glVertex3f( 0.359443, -1.890467, -0.006918);
		glVertex3f( 0.302687, -1.859537, -0.018207);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.242359, -2.497048, -0.043196);
		glVertex3f( 0.241105, -2.497048, -0.030457);
		glVertex3f( 0.302687, -2.478001, -0.018207);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.505340, -2.234067, -0.043196);
		glVertex3f( 0.499032, -2.234067, 0.020848);
		glVertex3f( 0.505340, -2.168769, 0.022103);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.486293, -2.296857, -0.043196);
		glVertex3f( 0.480351, -2.296857, 0.017132);
		glVertex3f( 0.499032, -2.234067, 0.020848);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.413736, -1.932093, -0.043196);
		glVertex3f( 0.409189, -1.932093, 0.002977);
		glVertex3f( 0.359443, -1.890467, -0.006918);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.455362, -2.354724, -0.043196);
		glVertex3f( 0.450015, -2.354724, 0.011098);
		glVertex3f( 0.480351, -2.296857, 0.017132);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.455362, -1.982813, -0.043196);
		glVertex3f( 0.450015, -1.982813, 0.011098);
		glVertex3f( 0.409189, -1.932093, 0.002977);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.486293, -2.040681, -0.043196);
		glVertex3f( 0.480351, -2.040681, 0.017132);
		glVertex3f( 0.450015, -1.982813, 0.011098);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.413736, -2.405445, -0.043196);
		glVertex3f( 0.409189, -2.405445, 0.002977);
		glVertex3f( 0.450015, -2.354724, 0.011098);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.505340, -2.103470, -0.043196);
		glVertex3f( 0.499032, -2.103470, 0.020848);
		glVertex3f( 0.480351, -2.040681, 0.017132);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.305149, -1.859537, -0.043196);
		glVertex3f( 0.302687, -1.859537, -0.018207);
		glVertex3f( 0.241104, -1.840490, -0.030457);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.363016, -2.447070, -0.043196);
		glVertex3f( 0.359443, -2.447070, -0.006918);
		glVertex3f( 0.409189, -2.405445, 0.002977);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.305149, -2.478001, -0.043196);
		glVertex3f( 0.302687, -2.478001, -0.018207);
		glVertex3f( 0.359443, -2.447070, -0.006918);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.302687, -1.859537, -0.018207);
		glVertex3f( 0.295398, -1.859537, 0.005821);
		glVertex3f( 0.237389, -1.840490, -0.018207);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.359443, -2.447070, -0.006918);
		glVertex3f( 0.348861, -2.447070, 0.027966);
		glVertex3f( 0.395721, -2.405445, 0.047376);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.302687, -2.478001, -0.018207);
		glVertex3f( 0.295398, -2.478001, 0.005821);
		glVertex3f( 0.348861, -2.447070, 0.027966);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.505340, -2.168769, 0.022103);
		glVertex3f( 0.486293, -2.168769, 0.084892);
		glVertex3f( 0.480351, -2.103470, 0.082431);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.359443, -1.890467, -0.006918);
		glVertex3f( 0.348861, -1.890467, 0.027966);
		glVertex3f( 0.295398, -1.859537, 0.005821);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.241105, -2.497048, -0.030457);
		glVertex3f( 0.237389, -2.497048, -0.018207);
		glVertex3f( 0.295398, -2.478001, 0.005821);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.499032, -2.234067, 0.020848);
		glVertex3f( 0.480351, -2.234067, 0.082431);
		glVertex3f( 0.486293, -2.168769, 0.084892);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.480351, -2.296857, 0.017132);
		glVertex3f( 0.462754, -2.296857, 0.075142);
		glVertex3f( 0.480351, -2.234067, 0.082431);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.409189, -1.932093, 0.002977);
		glVertex3f( 0.395721, -1.932093, 0.047376);
		glVertex3f( 0.348861, -1.890467, 0.027966);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.450015, -2.354724, 0.011098);
		glVertex3f( 0.434178, -2.354724, 0.063305);
		glVertex3f( 0.462754, -2.296857, 0.075142);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.450015, -1.982813, 0.011098);
		glVertex3f( 0.434178, -1.982813, 0.063305);
		glVertex3f( 0.395721, -1.932093, 0.047376);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.480351, -2.040681, 0.017132);
		glVertex3f( 0.462754, -2.040681, 0.075142);
		glVertex3f( 0.434178, -1.982813, 0.063305);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.409189, -2.405445, 0.002977);
		glVertex3f( 0.395721, -2.405445, 0.047376);
		glVertex3f( 0.434178, -2.354724, 0.063305);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.499032, -2.103470, 0.020848);
		glVertex3f( 0.480351, -2.103470, 0.082431);
		glVertex3f( 0.462754, -2.040681, 0.075142);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.395721, -2.405445, 0.047376);
		glVertex3f( 0.373849, -2.405445, 0.088294);
		glVertex3f( 0.408460, -2.354724, 0.111420);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.462754, -2.040681, 0.075142);
		glVertex3f( 0.434178, -2.040681, 0.128604);
		glVertex3f( 0.408460, -1.982813, 0.111420);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.480351, -2.103470, 0.082431);
		glVertex3f( 0.450015, -2.103470, 0.139186);
		glVertex3f( 0.434178, -2.040681, 0.128604);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.348861, -2.447070, 0.027966);
		glVertex3f( 0.331677, -2.447070, 0.060115);
		glVertex3f( 0.373849, -2.405445, 0.088294);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.486293, -2.168769, 0.084892);
		glVertex3f( 0.455362, -2.168769, 0.142759);
		glVertex3f( 0.450015, -2.103470, 0.139186);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.295398, -1.859537, 0.005821);
		glVertex3f( 0.283562, -1.859537, 0.027966);
		glVertex3f( 0.231354, -1.840490, -0.006918);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.348861, -1.890467, 0.027966);
		glVertex3f( 0.331676, -1.890467, 0.060115);
		glVertex3f( 0.283562, -1.859537, 0.027966);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.295398, -2.478001, 0.005821);
		glVertex3f( 0.283562, -2.478001, 0.027966);
		glVertex3f( 0.331677, -2.447070, 0.060115);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.237389, -2.497048, -0.018207);
		glVertex3f( 0.231354, -2.497048, -0.006918);
		glVertex3f( 0.283562, -2.478001, 0.027966);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.480351, -2.234067, 0.082431);
		glVertex3f( 0.450015, -2.234067, 0.139186);
		glVertex3f( 0.455362, -2.168769, 0.142759);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.395721, -1.932093, 0.047376);
		glVertex3f( 0.373849, -1.932093, 0.088294);
		glVertex3f( 0.331676, -1.890467, 0.060115);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.462754, -2.296857, 0.075142);
		glVertex3f( 0.434178, -2.296857, 0.128604);
		glVertex3f( 0.450015, -2.234067, 0.139186);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.434178, -2.354724, 0.063305);
		glVertex3f( 0.408460, -2.354724, 0.111420);
		glVertex3f( 0.434178, -2.296857, 0.128604);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.434178, -1.982813, 0.063305);
		glVertex3f( 0.408460, -1.982813, 0.111420);
		glVertex3f( 0.373849, -1.932093, 0.088294);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.408460, -1.982813, 0.111420);
		glVertex3f( 0.373849, -1.982813, 0.153593);
		glVertex3f( 0.344416, -1.932093, 0.124159);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.408460, -2.354724, 0.111420);
		glVertex3f( 0.373849, -2.354724, 0.153593);
		glVertex3f( 0.395721, -2.296857, 0.175464);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.373849, -2.405445, 0.088294);
		glVertex3f( 0.344416, -2.405445, 0.124159);
		glVertex3f( 0.373849, -2.354724, 0.153593);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.434178, -2.040681, 0.128604);
		glVertex3f( 0.395721, -2.040681, 0.175464);
		glVertex3f( 0.373849, -1.982813, 0.153593);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.331677, -2.447070, 0.060115);
		glVertex3f( 0.308551, -2.447070, 0.088294);
		glVertex3f( 0.344416, -2.405445, 0.124159);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.450015, -2.103470, 0.139186);
		glVertex3f( 0.409189, -2.103470, 0.188932);
		glVertex3f( 0.395721, -2.040681, 0.175464);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.455362, -2.168769, 0.142759);
		glVertex3f( 0.413736, -2.168769, 0.193480);
		glVertex3f( 0.409189, -2.103470, 0.188932);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.283562, -1.859537, 0.027966);
		glVertex3f( 0.267632, -1.859537, 0.047376);
		glVertex3f( 0.223234, -1.840490, 0.002977);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.283562, -2.478001, 0.027966);
		glVertex3f( 0.267632, -2.478001, 0.047376);
		glVertex3f( 0.308551, -2.447070, 0.088294);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.450015, -2.234067, 0.139186);
		glVertex3f( 0.409189, -2.234067, 0.188932);
		glVertex3f( 0.413736, -2.168769, 0.193480);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.331676, -1.890467, 0.060115);
		glVertex3f( 0.308551, -1.890467, 0.088294);
		glVertex3f( 0.267632, -1.859537, 0.047376);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.373849, -1.932093, 0.088294);
		glVertex3f( 0.344416, -1.932093, 0.124159);
		glVertex3f( 0.308551, -1.890467, 0.088294);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.231354, -2.497048, -0.006918);
		glVertex3f( 0.223234, -2.497048, 0.002977);
		glVertex3f( 0.267632, -2.478001, 0.047376);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.434178, -2.296857, 0.128604);
		glVertex3f( 0.395721, -2.296857, 0.175464);
		glVertex3f( 0.409189, -2.234067, 0.188932);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.223234, -2.497048, 0.002977);
		glVertex3f( 0.213338, -2.497048, 0.011098);
		glVertex3f( 0.248222, -2.478001, 0.063305);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.395721, -2.296857, 0.175464);
		glVertex3f( 0.348861, -2.296857, 0.213921);
		glVertex3f( 0.359442, -2.234067, 0.229758);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.344416, -1.932093, 0.124159);
		glVertex3f( 0.308551, -1.932093, 0.153593);
		glVertex3f( 0.280372, -1.890467, 0.111420);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.373849, -1.982813, 0.153593);
		glVertex3f( 0.331676, -1.982813, 0.188203);
		glVertex3f( 0.308551, -1.932093, 0.153593);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.373849, -2.354724, 0.153593);
		glVertex3f( 0.331676, -2.354724, 0.188203);
		glVertex3f( 0.348861, -2.296857, 0.213921);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.395721, -2.040681, 0.175464);
		glVertex3f( 0.348861, -2.040681, 0.213921);
		glVertex3f( 0.331676, -1.982813, 0.188203);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.344416, -2.405445, 0.124159);
		glVertex3f( 0.308551, -2.405445, 0.153593);
		glVertex3f( 0.331676, -2.354724, 0.188203);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.308551, -2.447070, 0.088294);
		glVertex3f( 0.280372, -2.447070, 0.111420);
		glVertex3f( 0.308551, -2.405445, 0.153593);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.409189, -2.103470, 0.188932);
		glVertex3f( 0.359442, -2.103470, 0.229758);
		glVertex3f( 0.348861, -2.040681, 0.213921);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.267632, -1.859537, 0.047376);
		glVertex3f( 0.248222, -1.859537, 0.063305);
		glVertex3f( 0.213338, -1.840490, 0.011098);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.267632, -2.478001, 0.047376);
		glVertex3f( 0.248222, -2.478001, 0.063305);
		glVertex3f( 0.280372, -2.447070, 0.111420);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.413736, -2.168769, 0.193480);
		glVertex3f( 0.363016, -2.168769, 0.235105);
		glVertex3f( 0.359442, -2.103470, 0.229758);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.409189, -2.234067, 0.188932);
		glVertex3f( 0.359442, -2.234067, 0.229758);
		glVertex3f( 0.363016, -2.168769, 0.235105);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.308551, -1.890467, 0.088294);
		glVertex3f( 0.280372, -1.890467, 0.111420);
		glVertex3f( 0.248222, -1.859537, 0.063305);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.363016, -2.168769, 0.235105);
		glVertex3f( 0.305149, -2.168769, 0.266036);
		glVertex3f( 0.302687, -2.103470, 0.260094);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.280372, -1.890467, 0.111420);
		glVertex3f( 0.248222, -1.890467, 0.128604);
		glVertex3f( 0.226078, -1.859537, 0.075142);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.213338, -2.497048, 0.011098);
		glVertex3f( 0.202049, -2.497048, 0.017132);
		glVertex3f( 0.226078, -2.478001, 0.075142);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.359442, -2.234067, 0.229758);
		glVertex3f( 0.302687, -2.234067, 0.260094);
		glVertex3f( 0.305149, -2.168769, 0.266036);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.348861, -2.296857, 0.213921);
		glVertex3f( 0.295398, -2.296857, 0.242497);
		glVertex3f( 0.302687, -2.234067, 0.260094);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.308551, -1.932093, 0.153593);
		glVertex3f( 0.267632, -1.932093, 0.175464);
		glVertex3f( 0.248222, -1.890467, 0.128604);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.331676, -2.354724, 0.188203);
		glVertex3f( 0.283562, -2.354724, 0.213921);
		glVertex3f( 0.295398, -2.296857, 0.242497);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.331676, -1.982813, 0.188203);
		glVertex3f( 0.283562, -1.982813, 0.213921);
		glVertex3f( 0.267632, -1.932093, 0.175464);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.348861, -2.040681, 0.213921);
		glVertex3f( 0.295398, -2.040681, 0.242497);
		glVertex3f( 0.283562, -1.982813, 0.213921);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.308551, -2.405445, 0.153593);
		glVertex3f( 0.267632, -2.405445, 0.175464);
		glVertex3f( 0.283562, -2.354724, 0.213921);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.359442, -2.103470, 0.229758);
		glVertex3f( 0.302687, -2.103470, 0.260094);
		glVertex3f( 0.295398, -2.040681, 0.242497);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.248222, -1.859537, 0.063305);
		glVertex3f( 0.226078, -1.859537, 0.075142);
		glVertex3f( 0.202049, -1.840490, 0.017132);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.280372, -2.447070, 0.111420);
		glVertex3f( 0.248222, -2.447070, 0.128604);
		glVertex3f( 0.267632, -2.405445, 0.175464);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.248222, -2.478001, 0.063305);
		glVertex3f( 0.226078, -2.478001, 0.075142);
		glVertex3f( 0.248222, -2.447070, 0.128604);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.248222, -2.447070, 0.128604);
		glVertex3f( 0.213338, -2.447070, 0.139186);
		glVertex3f( 0.223234, -2.405445, 0.188932);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.305149, -2.168769, 0.266036);
		glVertex3f( 0.242359, -2.168769, 0.285083);
		glVertex3f( 0.241104, -2.103470, 0.278775);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.226078, -1.859537, 0.075142);
		glVertex3f( 0.202049, -1.859537, 0.082431);
		glVertex3f( 0.189800, -1.840490, 0.020848);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.248222, -1.890467, 0.128604);
		glVertex3f( 0.213338, -1.890467, 0.139186);
		glVertex3f( 0.202049, -1.859537, 0.082431);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.226078, -2.478001, 0.075142);
		glVertex3f( 0.202049, -2.478001, 0.082431);
		glVertex3f( 0.213338, -2.447070, 0.139186);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.202049, -2.497048, 0.017132);
		glVertex3f( 0.189800, -2.497048, 0.020848);
		glVertex3f( 0.202049, -2.478001, 0.082431);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.302687, -2.234067, 0.260094);
		glVertex3f( 0.241104, -2.234067, 0.278775);
		glVertex3f( 0.242359, -2.168769, 0.285083);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.267632, -1.932093, 0.175464);
		glVertex3f( 0.223234, -1.932093, 0.188932);
		glVertex3f( 0.213338, -1.890467, 0.139186);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.295398, -2.296857, 0.242497);
		glVertex3f( 0.237389, -2.296857, 0.260094);
		glVertex3f( 0.241104, -2.234067, 0.278775);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.283562, -2.354724, 0.213921);
		glVertex3f( 0.231354, -2.354724, 0.229758);
		glVertex3f( 0.237389, -2.296857, 0.260094);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.283562, -1.982813, 0.213921);
		glVertex3f( 0.231354, -1.982813, 0.229758);
		glVertex3f( 0.223234, -1.932093, 0.188932);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.267632, -2.405445, 0.175464);
		glVertex3f( 0.223234, -2.405445, 0.188932);
		glVertex3f( 0.231354, -2.354724, 0.229758);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.295398, -2.040681, 0.242497);
		glVertex3f( 0.237389, -2.040681, 0.260094);
		glVertex3f( 0.231354, -1.982813, 0.229758);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.302687, -2.103470, 0.260094);
		glVertex3f( 0.241104, -2.103470, 0.278775);
		glVertex3f( 0.237389, -2.040681, 0.260094);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.223234, -2.405445, 0.188932);
		glVertex3f( 0.177060, -2.405445, 0.193480);
		glVertex3f( 0.177060, -2.354724, 0.235105);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.237389, -2.040681, 0.260094);
		glVertex3f( 0.177060, -2.040681, 0.266036);
		glVertex3f( 0.177060, -1.982813, 0.235105);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.213338, -2.447070, 0.139186);
		glVertex3f( 0.177060, -2.447070, 0.142759);
		glVertex3f( 0.177060, -2.405445, 0.193480);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.241104, -2.103470, 0.278775);
		glVertex3f( 0.177060, -2.103470, 0.285083);
		glVertex3f( 0.177060, -2.040681, 0.266036);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.242359, -2.168769, 0.285083);
		glVertex3f( 0.177060, -2.168769, 0.291514);
		glVertex3f( 0.177060, -2.103470, 0.285083);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.202049, -1.859537, 0.082431);
		glVertex3f( 0.177060, -1.859537, 0.084892);
		glVertex3f( 0.177060, -1.840490, 0.022103);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.202049, -2.478001, 0.082431);
		glVertex3f( 0.177060, -2.478001, 0.084892);
		glVertex3f( 0.177060, -2.447070, 0.142759);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.241104, -2.234067, 0.278775);
		glVertex3f( 0.177060, -2.234067, 0.285083);
		glVertex3f( 0.177060, -2.168769, 0.291514);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.213338, -1.890467, 0.139186);
		glVertex3f( 0.177060, -1.890467, 0.142759);
		glVertex3f( 0.177060, -1.859537, 0.084892);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.223234, -1.932093, 0.188932);
		glVertex3f( 0.177060, -1.932093, 0.193480);
		glVertex3f( 0.177060, -1.890467, 0.142759);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.189800, -2.497048, 0.020848);
		glVertex3f( 0.177060, -2.497048, 0.022103);
		glVertex3f( 0.177060, -2.478001, 0.084892);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.237389, -2.296857, 0.260094);
		glVertex3f( 0.177060, -2.296857, 0.266036);
		glVertex3f( 0.177060, -2.234067, 0.285083);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.231354, -1.982813, 0.229758);
		glVertex3f( 0.177060, -1.982813, 0.235105);
		glVertex3f( 0.177060, -1.932093, 0.193480);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.231354, -2.354724, 0.229758);
		glVertex3f( 0.177060, -2.354724, 0.235105);
		glVertex3f( 0.177060, -2.296857, 0.266036);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.982813, 0.235105);
		glVertex3f( 0.122766, -1.982813, 0.229758);
		glVertex3f( 0.130887, -1.932093, 0.188932);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.354724, 0.235105);
		glVertex3f( 0.122766, -2.354724, 0.229758);
		glVertex3f( 0.116732, -2.296857, 0.260094);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.040681, 0.266036);
		glVertex3f( 0.116732, -2.040681, 0.260094);
		glVertex3f( 0.122766, -1.982813, 0.229758);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.405445, 0.193480);
		glVertex3f( 0.130887, -2.405445, 0.188932);
		glVertex3f( 0.122766, -2.354724, 0.229758);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.447070, 0.142759);
		glVertex3f( 0.140782, -2.447070, 0.139186);
		glVertex3f( 0.130887, -2.405445, 0.188932);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.103470, 0.285083);
		glVertex3f( 0.113016, -2.103470, 0.278775);
		glVertex3f( 0.116732, -2.040681, 0.260094);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.859537, 0.084892);
		glVertex3f( 0.152072, -1.859537, 0.082431);
		glVertex3f( 0.164321, -1.840490, 0.020848);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.478001, 0.084892);
		glVertex3f( 0.152072, -2.478001, 0.082431);
		glVertex3f( 0.140782, -2.447070, 0.139186);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.168769, 0.291514);
		glVertex3f( 0.111762, -2.168769, 0.285083);
		glVertex3f( 0.113016, -2.103470, 0.278775);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.234067, 0.285083);
		glVertex3f( 0.113016, -2.234067, 0.278775);
		glVertex3f( 0.111762, -2.168769, 0.285083);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.890467, 0.142759);
		glVertex3f( 0.140782, -1.890467, 0.139186);
		glVertex3f( 0.152072, -1.859537, 0.082431);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.497048, 0.022103);
		glVertex3f( 0.164321, -2.497048, 0.020848);
		glVertex3f( 0.152072, -2.478001, 0.082431);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.296857, 0.266036);
		glVertex3f( 0.116732, -2.296857, 0.260094);
		glVertex3f( 0.113016, -2.234067, 0.278775);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.932093, 0.193480);
		glVertex3f( 0.130887, -1.932093, 0.188932);
		glVertex3f( 0.140782, -1.890467, 0.139186);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.164321, -2.497048, 0.020848);
		glVertex3f( 0.152072, -2.497048, 0.017132);
		glVertex3f( 0.128043, -2.478001, 0.075142);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.113016, -2.234067, 0.278775);
		glVertex3f( 0.051433, -2.234067, 0.260094);
		glVertex3f( 0.048972, -2.168769, 0.266036);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.116732, -2.296857, 0.260094);
		glVertex3f( 0.058722, -2.296857, 0.242497);
		glVertex3f( 0.051433, -2.234067, 0.260094);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.130887, -1.932093, 0.188932);
		glVertex3f( 0.086488, -1.932093, 0.175464);
		glVertex3f( 0.105898, -1.890467, 0.128604);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.122766, -2.354724, 0.229758);
		glVertex3f( 0.070559, -2.354724, 0.213921);
		glVertex3f( 0.058722, -2.296857, 0.242497);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.122766, -1.982813, 0.229758);
		glVertex3f( 0.070559, -1.982813, 0.213921);
		glVertex3f( 0.086488, -1.932093, 0.175464);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.116732, -2.040681, 0.260094);
		glVertex3f( 0.058722, -2.040681, 0.242497);
		glVertex3f( 0.070559, -1.982813, 0.213921);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.130887, -2.405445, 0.188932);
		glVertex3f( 0.086488, -2.405445, 0.175464);
		glVertex3f( 0.070559, -2.354724, 0.213921);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.113016, -2.103470, 0.278775);
		glVertex3f( 0.051433, -2.103470, 0.260094);
		glVertex3f( 0.058722, -2.040681, 0.242497);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.152072, -1.859537, 0.082431);
		glVertex3f( 0.128043, -1.859537, 0.075142);
		glVertex3f( 0.152072, -1.840490, 0.017132);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.140782, -2.447070, 0.139186);
		glVertex3f( 0.105898, -2.447070, 0.128604);
		glVertex3f( 0.086488, -2.405445, 0.175464);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.152072, -2.478001, 0.082431);
		glVertex3f( 0.128043, -2.478001, 0.075142);
		glVertex3f( 0.105898, -2.447070, 0.128604);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.111762, -2.168769, 0.285083);
		glVertex3f( 0.048972, -2.168769, 0.266036);
		glVertex3f( 0.051433, -2.103470, 0.260094);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.140782, -1.890467, 0.139186);
		glVertex3f( 0.105898, -1.890467, 0.128604);
		glVertex3f( 0.128043, -1.859537, 0.075142);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.128043, -1.859537, 0.075142);
		glVertex3f( 0.105898, -1.859537, 0.063305);
		glVertex3f( 0.140782, -1.840490, 0.011098);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.105898, -1.890467, 0.128604);
		glVertex3f( 0.073749, -1.890467, 0.111420);
		glVertex3f( 0.105898, -1.859537, 0.063305);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.128043, -2.478001, 0.075142);
		glVertex3f( 0.105898, -2.478001, 0.063305);
		glVertex3f( 0.073749, -2.447070, 0.111420);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.152072, -2.497048, 0.017132);
		glVertex3f( 0.140782, -2.497048, 0.011098);
		glVertex3f( 0.105898, -2.478001, 0.063305);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.051433, -2.234067, 0.260094);
		glVertex3f( -0.005322, -2.234067, 0.229758);
		glVertex3f( -0.008895, -2.168769, 0.235105);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.086488, -1.932093, 0.175464);
		glVertex3f( 0.045570, -1.932093, 0.153593);
		glVertex3f( 0.073749, -1.890467, 0.111420);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.058722, -2.296857, 0.242497);
		glVertex3f( 0.005260, -2.296857, 0.213921);
		glVertex3f( -0.005322, -2.234067, 0.229758);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.070559, -2.354724, 0.213921);
		glVertex3f( 0.022444, -2.354724, 0.188203);
		glVertex3f( 0.005260, -2.296857, 0.213921);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.070559, -1.982813, 0.213921);
		glVertex3f( 0.022444, -1.982813, 0.188203);
		glVertex3f( 0.045570, -1.932093, 0.153593);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.022444, -2.354724, 0.188203);
		glVertex3f( 0.070559, -2.354724, 0.213921);
		glVertex3f( 0.045570, -2.405445, 0.153593);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.058722, -2.040681, 0.242497);
		glVertex3f( 0.005260, -2.040681, 0.213921);
		glVertex3f( 0.022444, -1.982813, 0.188203);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.051433, -2.103470, 0.260094);
		glVertex3f( -0.005322, -2.103470, 0.229758);
		glVertex3f( 0.005260, -2.040681, 0.213921);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.105898, -2.447070, 0.128604);
		glVertex3f( 0.073749, -2.447070, 0.111420);
		glVertex3f( 0.045570, -2.405445, 0.153593);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.048972, -2.168769, 0.266036);
		glVertex3f( -0.008895, -2.168769, 0.235105);
		glVertex3f( -0.005322, -2.103470, 0.229758);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.073749, -2.447070, 0.111420);
		glVertex3f( 0.045570, -2.447070, 0.088294);
		glVertex3f( 0.009705, -2.405445, 0.124159);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.005322, -2.103470, 0.229758);
		glVertex3f( -0.055068, -2.103470, 0.188932);
		glVertex3f( -0.041600, -2.040681, 0.175464);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.008895, -2.168769, 0.235105);
		glVertex3f( -0.059616, -2.168769, 0.193480);
		glVertex3f( -0.055068, -2.103470, 0.188932);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.105898, -1.859537, 0.063305);
		glVertex3f( 0.086488, -1.859537, 0.047376);
		glVertex3f( 0.130887, -1.840490, 0.002977);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.105898, -2.478001, 0.063305);
		glVertex3f( 0.086488, -2.478001, 0.047376);
		glVertex3f( 0.045570, -2.447070, 0.088294);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.005322, -2.234067, 0.229758);
		glVertex3f( -0.055068, -2.234067, 0.188932);
		glVertex3f( -0.059616, -2.168769, 0.193480);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.073749, -1.890467, 0.111420);
		glVertex3f( 0.045570, -1.890467, 0.088294);
		glVertex3f( 0.086488, -1.859537, 0.047376);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.045570, -1.932093, 0.153593);
		glVertex3f( 0.009705, -1.932093, 0.124159);
		glVertex3f( 0.045570, -1.890467, 0.088294);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.140782, -2.497048, 0.011098);
		glVertex3f( 0.130887, -2.497048, 0.002977);
		glVertex3f( 0.086488, -2.478001, 0.047376);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.005260, -2.296857, 0.213921);
		glVertex3f( -0.041600, -2.296857, 0.175464);
		glVertex3f( -0.055068, -2.234067, 0.188932);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.022444, -1.982813, 0.188203);
		glVertex3f( -0.019729, -1.982813, 0.153593);
		glVertex3f( 0.009705, -1.932093, 0.124159);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.022444, -2.354724, 0.188203);
		glVertex3f( -0.019729, -2.354724, 0.153593);
		glVertex3f( -0.041600, -2.296857, 0.175464);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.045570, -2.405445, 0.153593);
		glVertex3f( 0.009705, -2.405445, 0.124159);
		glVertex3f( -0.019729, -2.354724, 0.153593);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.005260, -2.040681, 0.213921);
		glVertex3f( -0.041600, -2.040681, 0.175464);
		glVertex3f( -0.019729, -1.982813, 0.153593);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.041600, -2.040681, 0.175464);
		glVertex3f( -0.080057, -2.040681, 0.128604);
		glVertex3f( -0.054339, -1.982813, 0.111420);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.009705, -2.405445, 0.124159);
		glVertex3f( -0.019729, -2.405445, 0.088294);
		glVertex3f( -0.054339, -2.354724, 0.111420);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.045570, -2.447070, 0.088294);
		glVertex3f( 0.022444, -2.447070, 0.060115);
		glVertex3f( -0.019729, -2.405445, 0.088294);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055068, -2.103470, 0.188932);
		glVertex3f( -0.095894, -2.103470, 0.139186);
		glVertex3f( -0.080057, -2.040681, 0.128604);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.086488, -1.859537, 0.047376);
		glVertex3f( 0.070559, -1.859537, 0.027966);
		glVertex3f( 0.122766, -1.840490, -0.006918);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.086488, -2.478001, 0.047376);
		glVertex3f( 0.070559, -2.478001, 0.027966);
		glVertex3f( 0.022444, -2.447070, 0.060115);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.059616, -2.168769, 0.193480);
		glVertex3f( -0.101241, -2.168769, 0.142759);
		glVertex3f( -0.095894, -2.103470, 0.139186);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055068, -2.234067, 0.188932);
		glVertex3f( -0.095894, -2.234067, 0.139186);
		glVertex3f( -0.101241, -2.168769, 0.142759);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.045570, -1.890467, 0.088294);
		glVertex3f( 0.022444, -1.890467, 0.060115);
		glVertex3f( 0.070559, -1.859537, 0.027966);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.130887, -2.497048, 0.002977);
		glVertex3f( 0.122766, -2.497048, -0.006918);
		glVertex3f( 0.070559, -2.478001, 0.027966);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.041600, -2.296857, 0.175464);
		glVertex3f( -0.080057, -2.296857, 0.128604);
		glVertex3f( -0.095894, -2.234067, 0.139186);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.009705, -1.932093, 0.124159);
		glVertex3f( -0.019729, -1.932093, 0.088294);
		glVertex3f( 0.022444, -1.890467, 0.060115);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.019729, -1.982813, 0.153593);
		glVertex3f( -0.054339, -1.982813, 0.111420);
		glVertex3f( -0.019729, -1.932093, 0.088294);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.080057, -2.296857, 0.128604);
		glVertex3f( -0.041600, -2.296857, 0.175464);
		glVertex3f( -0.054339, -2.354724, 0.111420);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.108633, -2.296857, 0.075142);
		glVertex3f( -0.080057, -2.296857, 0.128604);
		glVertex3f( -0.080057, -2.354724, 0.063305);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.054339, -1.982813, 0.111420);
		glVertex3f( -0.080057, -1.982813, 0.063305);
		glVertex3f( -0.041600, -1.932093, 0.047376);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.080057, -2.040681, 0.128604);
		glVertex3f( -0.108633, -2.040681, 0.075142);
		glVertex3f( -0.080057, -1.982813, 0.063305);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.019729, -2.405445, 0.088294);
		glVertex3f( -0.041600, -2.405445, 0.047376);
		glVertex3f( -0.080057, -2.354724, 0.063305);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.095894, -2.103470, 0.139186);
		glVertex3f( -0.126230, -2.103470, 0.082431);
		glVertex3f( -0.108633, -2.040681, 0.075142);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.070559, -1.859537, 0.027966);
		glVertex3f( 0.058722, -1.859537, 0.005821);
		glVertex3f( 0.116732, -1.840490, -0.018207);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.022444, -2.447070, 0.060115);
		glVertex3f( 0.005260, -2.447070, 0.027966);
		glVertex3f( -0.041600, -2.405445, 0.047376);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.070559, -2.478001, 0.027966);
		glVertex3f( 0.058722, -2.478001, 0.005821);
		glVertex3f( 0.005260, -2.447070, 0.027966);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.101241, -2.168769, 0.142759);
		glVertex3f( -0.132172, -2.168769, 0.084892);
		glVertex3f( -0.126230, -2.103470, 0.082431);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.022444, -1.890467, 0.060115);
		glVertex3f( 0.005260, -1.890467, 0.027966);
		glVertex3f( 0.058722, -1.859537, 0.005821);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.122766, -2.497048, -0.006918);
		glVertex3f( 0.116732, -2.497048, -0.018207);
		glVertex3f( 0.058722, -2.478001, 0.005821);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.095894, -2.234067, 0.139186);
		glVertex3f( -0.126230, -2.234067, 0.082431);
		glVertex3f( -0.132172, -2.168769, 0.084892);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.080057, -2.296857, 0.128604);
		glVertex3f( -0.108633, -2.296857, 0.075142);
		glVertex3f( -0.126230, -2.234067, 0.082431);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.019729, -1.932093, 0.088294);
		glVertex3f( -0.041600, -1.932093, 0.047376);
		glVertex3f( 0.005260, -1.890467, 0.027966);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.126230, -2.234067, 0.082431);
		glVertex3f( -0.144911, -2.234067, 0.020848);
		glVertex3f( -0.151219, -2.168769, 0.022103);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.041600, -1.932093, 0.047376);
		glVertex3f( -0.055068, -1.932093, 0.002977);
		glVertex3f( -0.005322, -1.890467, -0.006918);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.108633, -2.296857, 0.075142);
		glVertex3f( -0.126230, -2.296857, 0.017132);
		glVertex3f( -0.144911, -2.234067, 0.020848);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.080057, -2.354724, 0.063305);
		glVertex3f( -0.095894, -2.354724, 0.011098);
		glVertex3f( -0.126230, -2.296857, 0.017132);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.080057, -1.982813, 0.063305);
		glVertex3f( -0.095894, -1.982813, 0.011098);
		glVertex3f( -0.055068, -1.932093, 0.002977);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.041600, -2.405445, 0.047376);
		glVertex3f( -0.055068, -2.405445, 0.002977);
		glVertex3f( -0.095894, -2.354724, 0.011098);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.108633, -2.040681, 0.075142);
		glVertex3f( -0.126230, -2.040681, 0.017132);
		glVertex3f( -0.095894, -1.982813, 0.011098);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.126230, -2.103470, 0.082431);
		glVertex3f( -0.144911, -2.103470, 0.020848);
		glVertex3f( -0.126230, -2.040681, 0.017132);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.005260, -2.447070, 0.027966);
		glVertex3f( -0.005322, -2.447070, -0.006918);
		glVertex3f( -0.055068, -2.405445, 0.002977);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.132172, -2.168769, 0.084892);
		glVertex3f( -0.151219, -2.168769, 0.022103);
		glVertex3f( -0.144911, -2.103470, 0.020848);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.058722, -1.859537, 0.005821);
		glVertex3f( 0.051433, -1.859537, -0.018207);
		glVertex3f( 0.113016, -1.840490, -0.030457);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.005260, -1.890467, 0.027966);
		glVertex3f( -0.005322, -1.890467, -0.006918);
		glVertex3f( 0.051433, -1.859537, -0.018207);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.058722, -2.478001, 0.005821);
		glVertex3f( 0.051433, -2.478001, -0.018207);
		glVertex3f( -0.005322, -2.447070, -0.006918);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.116732, -2.497048, -0.018207);
		glVertex3f( 0.113016, -2.497048, -0.030457);
		glVertex3f( 0.051433, -2.478001, -0.018207);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.051433, -2.478001, -0.018207);
		glVertex3f( 0.048972, -2.478001, -0.043196);
		glVertex3f( -0.008895, -2.447070, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.144911, -2.234067, 0.020848);
		glVertex3f( -0.151219, -2.234067, -0.043196);
		glVertex3f( -0.157650, -2.168769, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.005322, -1.890467, -0.006918);
		glVertex3f( -0.008895, -1.890467, -0.043196);
		glVertex3f( 0.048972, -1.859537, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055068, -1.932093, 0.002977);
		glVertex3f( -0.059616, -1.932093, -0.043196);
		glVertex3f( -0.008895, -1.890467, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.113016, -2.497048, -0.030457);
		glVertex3f( 0.111762, -2.497048, -0.043196);
		glVertex3f( 0.048972, -2.478001, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.126230, -2.296857, 0.017132);
		glVertex3f( -0.132172, -2.296857, -0.043196);
		glVertex3f( -0.151219, -2.234067, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.095894, -1.982813, 0.011098);
		glVertex3f( -0.101241, -1.982813, -0.043196);
		glVertex3f( -0.059616, -1.932093, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.095894, -2.354724, 0.011098);
		glVertex3f( -0.101241, -2.354724, -0.043196);
		glVertex3f( -0.132172, -2.296857, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055068, -2.405445, 0.002977);
		glVertex3f( -0.059616, -2.405445, -0.043196);
		glVertex3f( -0.101241, -2.354724, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.126230, -2.040681, 0.017132);
		glVertex3f( -0.132172, -2.040681, -0.043196);
		glVertex3f( -0.101241, -1.982813, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.005322, -2.447070, -0.006918);
		glVertex3f( -0.008895, -2.447070, -0.043196);
		glVertex3f( -0.059616, -2.405445, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.144911, -2.103470, 0.020848);
		glVertex3f( -0.151219, -2.103470, -0.043196);
		glVertex3f( -0.132172, -2.040681, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.151219, -2.168769, 0.022103);
		glVertex3f( -0.157650, -2.168769, -0.043196);
		glVertex3f( -0.151219, -2.103470, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.051433, -1.859537, -0.018207);
		glVertex3f( 0.048972, -1.859537, -0.043196);
		glVertex3f( 0.111762, -1.840490, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.008895, -2.447070, -0.043196);
		glVertex3f( -0.005322, -2.447070, -0.079474);
		glVertex3f( -0.055068, -2.405445, -0.089369);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.151219, -2.103470, -0.043196);
		glVertex3f( -0.144911, -2.103470, -0.107240);
		glVertex3f( -0.126230, -2.040681, -0.103524);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.048972, -1.859537, -0.043196);
		glVertex3f( 0.051433, -1.859537, -0.068185);
		glVertex3f( 0.113016, -1.840490, -0.055935);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.048972, -2.478001, -0.043196);
		glVertex3f( 0.051433, -2.478001, -0.068185);
		glVertex3f( -0.005322, -2.447070, -0.079474);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.157650, -2.168769, -0.043196);
		glVertex3f( -0.151219, -2.168769, -0.108495);
		glVertex3f( -0.144911, -2.103470, -0.107240);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.151219, -2.234067, -0.043196);
		glVertex3f( -0.144911, -2.234067, -0.107240);
		glVertex3f( -0.151219, -2.168769, -0.108495);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.008895, -1.890467, -0.043196);
		glVertex3f( -0.005322, -1.890467, -0.079474);
		glVertex3f( 0.051433, -1.859537, -0.068185);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.111762, -2.497048, -0.043196);
		glVertex3f( 0.113016, -2.497048, -0.055935);
		glVertex3f( 0.051433, -2.478001, -0.068185);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.132172, -2.296857, -0.043196);
		glVertex3f( -0.126230, -2.296857, -0.103524);
		glVertex3f( -0.144911, -2.234067, -0.107240);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.059616, -1.932093, -0.043196);
		glVertex3f( -0.055068, -1.932093, -0.089369);
		glVertex3f( -0.005322, -1.890467, -0.079474);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.101241, -1.982813, -0.043196);
		glVertex3f( -0.095894, -1.982813, -0.097490);
		glVertex3f( -0.055068, -1.932093, -0.089369);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.101241, -2.354724, -0.043196);
		glVertex3f( -0.095894, -2.354724, -0.097490);
		glVertex3f( -0.126230, -2.296857, -0.103524);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.132172, -2.040681, -0.043196);
		glVertex3f( -0.126230, -2.040681, -0.103524);
		glVertex3f( -0.095894, -1.982813, -0.097490);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.059616, -2.405445, -0.043196);
		glVertex3f( -0.055068, -2.405445, -0.089369);
		glVertex3f( -0.095894, -2.354724, -0.097490);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.126230, -2.040681, -0.103524);
		glVertex3f( -0.108633, -2.040681, -0.161534);
		glVertex3f( -0.080057, -1.982813, -0.149698);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055068, -2.405445, -0.089369);
		glVertex3f( -0.041600, -2.405445, -0.133768);
		glVertex3f( -0.080057, -2.354724, -0.149698);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.144911, -2.103470, -0.107240);
		glVertex3f( -0.126230, -2.103470, -0.168823);
		glVertex3f( -0.108633, -2.040681, -0.161534);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.051433, -1.859537, -0.068185);
		glVertex3f( 0.058722, -1.859537, -0.092213);
		glVertex3f( 0.116732, -1.840490, -0.068185);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.005322, -2.447070, -0.079474);
		glVertex3f( 0.005260, -2.447070, -0.114358);
		glVertex3f( -0.041600, -2.405445, -0.133768);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.051433, -2.478001, -0.068185);
		glVertex3f( 0.058722, -2.478001, -0.092213);
		glVertex3f( 0.005260, -2.447070, -0.114358);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.151219, -2.168769, -0.108495);
		glVertex3f( -0.132172, -2.168769, -0.171284);
		glVertex3f( -0.126230, -2.103470, -0.168823);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.005322, -1.890467, -0.079474);
		glVertex3f( 0.005260, -1.890467, -0.114358);
		glVertex3f( 0.058722, -1.859537, -0.092213);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.113016, -2.497048, -0.055935);
		glVertex3f( 0.116732, -2.497048, -0.068185);
		glVertex3f( 0.058722, -2.478001, -0.092213);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.144911, -2.234067, -0.107240);
		glVertex3f( -0.126230, -2.234067, -0.168823);
		glVertex3f( -0.132172, -2.168769, -0.171284);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.126230, -2.296857, -0.103524);
		glVertex3f( -0.108633, -2.296857, -0.161534);
		glVertex3f( -0.126230, -2.234067, -0.168823);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055068, -1.932093, -0.089369);
		glVertex3f( -0.041600, -1.932093, -0.133768);
		glVertex3f( 0.005260, -1.890467, -0.114358);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.095894, -2.354724, -0.097490);
		glVertex3f( -0.080057, -2.354724, -0.149698);
		glVertex3f( -0.108633, -2.296857, -0.161534);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.095894, -1.982813, -0.097490);
		glVertex3f( -0.080057, -1.982813, -0.149698);
		glVertex3f( -0.041600, -1.932093, -0.133768);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.108633, -2.296857, -0.161534);
		glVertex3f( -0.080057, -2.296857, -0.214996);
		glVertex3f( -0.095894, -2.234067, -0.225578);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.080057, -2.296857, -0.214996);
		glVertex3f( -0.108633, -2.296857, -0.161534);
		glVertex3f( -0.054339, -2.354724, -0.197812);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.080057, -1.982813, -0.149698);
		glVertex3f( -0.054339, -1.982813, -0.197812);
		glVertex3f( -0.019729, -1.932093, -0.174686);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.041600, -2.405445, -0.133768);
		glVertex3f( -0.019729, -2.405445, -0.174686);
		glVertex3f( -0.054339, -2.354724, -0.197812);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.108633, -2.040681, -0.161534);
		glVertex3f( -0.080057, -2.040681, -0.214996);
		glVertex3f( -0.054339, -1.982813, -0.197812);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.126230, -2.103470, -0.168823);
		glVertex3f( -0.095894, -2.103470, -0.225578);
		glVertex3f( -0.080057, -2.040681, -0.214996);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.005260, -2.447070, -0.114358);
		glVertex3f( 0.022444, -2.447070, -0.146507);
		glVertex3f( -0.019729, -2.405445, -0.174686);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.132172, -2.168769, -0.171284);
		glVertex3f( -0.101241, -2.168769, -0.229151);
		glVertex3f( -0.095894, -2.103470, -0.225578);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.058722, -1.859537, -0.092213);
		glVertex3f( 0.070559, -1.859537, -0.114358);
		glVertex3f( 0.122766, -1.840490, -0.079474);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.005260, -1.890467, -0.114358);
		glVertex3f( 0.022444, -1.890467, -0.146507);
		glVertex3f( 0.070559, -1.859537, -0.114358);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.058722, -2.478001, -0.092213);
		glVertex3f( 0.070559, -2.478001, -0.114358);
		glVertex3f( 0.022444, -2.447070, -0.146507);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.116732, -2.497048, -0.068185);
		glVertex3f( 0.122766, -2.497048, -0.079474);
		glVertex3f( 0.070559, -2.478001, -0.114358);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.126230, -2.234067, -0.168823);
		glVertex3f( -0.095894, -2.234067, -0.225578);
		glVertex3f( -0.101241, -2.168769, -0.229151);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.041600, -1.932093, -0.133768);
		glVertex3f( -0.019729, -1.932093, -0.174686);
		glVertex3f( 0.022444, -1.890467, -0.146507);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.022444, -1.890467, -0.146507);
		glVertex3f( 0.045570, -1.890467, -0.174686);
		glVertex3f( 0.086488, -1.859537, -0.133768);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.019729, -1.932093, -0.174686);
		glVertex3f( 0.009705, -1.932093, -0.210551);
		glVertex3f( 0.045570, -1.890467, -0.174686);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.122766, -2.497048, -0.079474);
		glVertex3f( 0.130887, -2.497048, -0.089369);
		glVertex3f( 0.086488, -2.478001, -0.133768);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.080057, -2.296857, -0.214996);
		glVertex3f( -0.041600, -2.296857, -0.261856);
		glVertex3f( -0.055068, -2.234067, -0.275324);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.054339, -1.982813, -0.197812);
		glVertex3f( -0.019729, -1.982813, -0.239985);
		glVertex3f( 0.009705, -1.932093, -0.210551);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.054339, -2.354724, -0.197812);
		glVertex3f( -0.019729, -2.354724, -0.239985);
		glVertex3f( -0.041600, -2.296857, -0.261856);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.019729, -2.405445, -0.174686);
		glVertex3f( 0.009705, -2.405445, -0.210551);
		glVertex3f( -0.019729, -2.354724, -0.239985);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.080057, -2.040681, -0.214996);
		glVertex3f( -0.041600, -2.040681, -0.261856);
		glVertex3f( -0.019729, -1.982813, -0.239985);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.022444, -2.447070, -0.146507);
		glVertex3f( 0.045570, -2.447070, -0.174686);
		glVertex3f( 0.009705, -2.405445, -0.210551);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.095894, -2.103470, -0.225578);
		glVertex3f( -0.055068, -2.103470, -0.275324);
		glVertex3f( -0.041600, -2.040681, -0.261856);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.101241, -2.168769, -0.229151);
		glVertex3f( -0.059616, -2.168769, -0.279872);
		glVertex3f( -0.055068, -2.103470, -0.275324);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.070559, -1.859537, -0.114358);
		glVertex3f( 0.086488, -1.859537, -0.133768);
		glVertex3f( 0.130887, -1.840490, -0.089369);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.070559, -2.478001, -0.114358);
		glVertex3f( 0.086488, -2.478001, -0.133768);
		glVertex3f( 0.045570, -2.447070, -0.174686);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.095894, -2.234067, -0.225578);
		glVertex3f( -0.055068, -2.234067, -0.275324);
		glVertex3f( -0.059616, -2.168769, -0.279872);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.086488, -2.478001, -0.133768);
		glVertex3f( 0.105898, -2.478001, -0.149698);
		glVertex3f( 0.073749, -2.447070, -0.197812);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.059616, -2.168769, -0.279872);
		glVertex3f( -0.008895, -2.168769, -0.321498);
		glVertex3f( -0.005322, -2.103470, -0.316150);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055068, -2.234067, -0.275324);
		glVertex3f( -0.005322, -2.234067, -0.316150);
		glVertex3f( -0.008895, -2.168769, -0.321498);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.045570, -1.890467, -0.174686);
		glVertex3f( 0.073749, -1.890467, -0.197812);
		glVertex3f( 0.105898, -1.859537, -0.149698);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.130887, -2.497048, -0.089369);
		glVertex3f( 0.140782, -2.497048, -0.097490);
		glVertex3f( 0.105898, -2.478001, -0.149698);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.041600, -2.296857, -0.261856);
		glVertex3f( 0.005260, -2.296857, -0.300313);
		glVertex3f( -0.005322, -2.234067, -0.316150);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.009705, -1.932093, -0.210551);
		glVertex3f( 0.045570, -1.932093, -0.239985);
		glVertex3f( 0.073749, -1.890467, -0.197812);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.019729, -1.982813, -0.239985);
		glVertex3f( 0.022444, -1.982813, -0.274595);
		glVertex3f( 0.045570, -1.932093, -0.239985);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.019729, -2.354724, -0.239985);
		glVertex3f( 0.022444, -2.354724, -0.274595);
		glVertex3f( 0.005260, -2.296857, -0.300313);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.041600, -2.040681, -0.261856);
		glVertex3f( 0.005260, -2.040681, -0.300313);
		glVertex3f( 0.022444, -1.982813, -0.274595);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.009705, -2.405445, -0.210551);
		glVertex3f( 0.045570, -2.405445, -0.239985);
		glVertex3f( 0.022444, -2.354724, -0.274595);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.045570, -2.447070, -0.174686);
		glVertex3f( 0.073749, -2.447070, -0.197812);
		glVertex3f( 0.045570, -2.405445, -0.239985);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.055068, -2.103470, -0.275324);
		glVertex3f( -0.005322, -2.103470, -0.316150);
		glVertex3f( 0.005260, -2.040681, -0.300313);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.086488, -1.859537, -0.133768);
		glVertex3f( 0.105898, -1.859537, -0.149698);
		glVertex3f( 0.140782, -1.840490, -0.097490);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.005322, -2.103470, -0.316150);
		glVertex3f( 0.051433, -2.103470, -0.346486);
		glVertex3f( 0.058722, -2.040681, -0.328889);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.105898, -1.859537, -0.149698);
		glVertex3f( 0.128043, -1.859537, -0.161534);
		glVertex3f( 0.152072, -1.840490, -0.103524);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.073749, -2.447070, -0.197812);
		glVertex3f( 0.105898, -2.447070, -0.214996);
		glVertex3f( 0.086488, -2.405445, -0.261856);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.105898, -2.478001, -0.149698);
		glVertex3f( 0.128043, -2.478001, -0.161534);
		glVertex3f( 0.105898, -2.447070, -0.214996);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.008895, -2.168769, -0.321498);
		glVertex3f( 0.048972, -2.168769, -0.352428);
		glVertex3f( 0.051433, -2.103470, -0.346486);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.073749, -1.890467, -0.197812);
		glVertex3f( 0.105898, -1.890467, -0.214996);
		glVertex3f( 0.128043, -1.859537, -0.161534);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.140782, -2.497048, -0.097490);
		glVertex3f( 0.152072, -2.497048, -0.103524);
		glVertex3f( 0.128043, -2.478001, -0.161534);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.005322, -2.234067, -0.316150);
		glVertex3f( 0.051434, -2.234067, -0.346486);
		glVertex3f( 0.048972, -2.168769, -0.352428);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.005260, -2.296857, -0.300313);
		glVertex3f( 0.058722, -2.296857, -0.328889);
		glVertex3f( 0.051434, -2.234067, -0.346486);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.045570, -1.932093, -0.239985);
		glVertex3f( 0.086488, -1.932093, -0.261856);
		glVertex3f( 0.105898, -1.890467, -0.214996);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.022444, -2.354724, -0.274595);
		glVertex3f( 0.070559, -2.354724, -0.300313);
		glVertex3f( 0.058722, -2.296857, -0.328889);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.022444, -1.982813, -0.274595);
		glVertex3f( 0.070559, -1.982813, -0.300313);
		glVertex3f( 0.086488, -1.932093, -0.261856);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.005260, -2.040681, -0.300313);
		glVertex3f( 0.058722, -2.040681, -0.328889);
		glVertex3f( 0.070559, -1.982813, -0.300313);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.045570, -2.405445, -0.239985);
		glVertex3f( 0.086488, -2.405445, -0.261856);
		glVertex3f( 0.070559, -2.354724, -0.300313);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.086488, -2.405445, -0.261856);
		glVertex3f( 0.130887, -2.405445, -0.275324);
		glVertex3f( 0.122766, -2.354724, -0.316150);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.058722, -2.040681, -0.328889);
		glVertex3f( 0.116732, -2.040681, -0.346486);
		glVertex3f( 0.122766, -1.982813, -0.316150);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.051433, -2.103470, -0.346486);
		glVertex3f( 0.113016, -2.103470, -0.365167);
		glVertex3f( 0.116732, -2.040681, -0.346486);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.105898, -2.447070, -0.214996);
		glVertex3f( 0.140782, -2.447070, -0.225578);
		glVertex3f( 0.130887, -2.405445, -0.275324);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.048972, -2.168769, -0.352428);
		glVertex3f( 0.111762, -2.168769, -0.371475);
		glVertex3f( 0.113016, -2.103470, -0.365167);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.128043, -1.859537, -0.161534);
		glVertex3f( 0.152072, -1.859537, -0.168823);
		glVertex3f( 0.164321, -1.840490, -0.107240);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.105898, -1.890467, -0.214996);
		glVertex3f( 0.140782, -1.890467, -0.225578);
		glVertex3f( 0.152072, -1.859537, -0.168823);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.128043, -2.478001, -0.161534);
		glVertex3f( 0.152072, -2.478001, -0.168823);
		glVertex3f( 0.140782, -2.447070, -0.225578);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.152072, -2.497048, -0.103524);
		glVertex3f( 0.164321, -2.497048, -0.107240);
		glVertex3f( 0.152072, -2.478001, -0.168823);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.051434, -2.234067, -0.346486);
		glVertex3f( 0.113016, -2.234067, -0.365167);
		glVertex3f( 0.111762, -2.168769, -0.371475);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.086488, -1.932093, -0.261856);
		glVertex3f( 0.130887, -1.932093, -0.275324);
		glVertex3f( 0.140782, -1.890467, -0.225578);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.058722, -2.296857, -0.328889);
		glVertex3f( 0.116732, -2.296857, -0.346486);
		glVertex3f( 0.113016, -2.234067, -0.365167);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.070559, -2.354724, -0.300313);
		glVertex3f( 0.122766, -2.354724, -0.316150);
		glVertex3f( 0.116732, -2.296857, -0.346486);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.070559, -1.982813, -0.300313);
		glVertex3f( 0.122766, -1.982813, -0.316150);
		glVertex3f( 0.130887, -1.932093, -0.275324);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.116732, -2.296857, -0.346486);
		glVertex3f( 0.177060, -2.296857, -0.352428);
		glVertex3f( 0.177060, -2.234067, -0.371475);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.122766, -1.982813, -0.316150);
		glVertex3f( 0.177060, -1.982813, -0.321498);
		glVertex3f( 0.177060, -1.932093, -0.279872);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.122766, -2.354724, -0.316150);
		glVertex3f( 0.177060, -2.354724, -0.321498);
		glVertex3f( 0.177060, -2.296857, -0.352428);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.130887, -2.405445, -0.275324);
		glVertex3f( 0.177060, -2.405445, -0.279872);
		glVertex3f( 0.177060, -2.354724, -0.321498);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.116732, -2.040681, -0.346486);
		glVertex3f( 0.177060, -2.040681, -0.352428);
		glVertex3f( 0.177060, -1.982813, -0.321498);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.140782, -2.447070, -0.225578);
		glVertex3f( 0.177060, -2.447070, -0.229151);
		glVertex3f( 0.177060, -2.405445, -0.279872);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.113016, -2.103470, -0.365167);
		glVertex3f( 0.177060, -2.103470, -0.371475);
		glVertex3f( 0.177060, -2.040681, -0.352428);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.111762, -2.168769, -0.371475);
		glVertex3f( 0.177060, -2.168769, -0.377906);
		glVertex3f( 0.177060, -2.103470, -0.371475);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.152072, -1.859537, -0.168823);
		glVertex3f( 0.177060, -1.859537, -0.171284);
		glVertex3f( 0.177060, -1.840490, -0.108495);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.152072, -2.478001, -0.168823);
		glVertex3f( 0.177060, -2.478001, -0.171284);
		glVertex3f( 0.177060, -2.447070, -0.229151);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.113016, -2.234067, -0.365167);
		glVertex3f( 0.177060, -2.234067, -0.371475);
		glVertex3f( 0.177060, -2.168769, -0.377906);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.140782, -1.890467, -0.225578);
		glVertex3f( 0.177060, -1.890467, -0.229151);
		glVertex3f( 0.177060, -1.859537, -0.171284);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.130887, -1.932093, -0.275324);
		glVertex3f( 0.177060, -1.932093, -0.279872);
		glVertex3f( 0.177060, -1.890467, -0.229151);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.164321, -2.497048, -0.107240);
		glVertex3f( 0.177060, -2.497048, -0.108495);
		glVertex3f( 0.177060, -2.478001, -0.171284);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.497048, -0.108495);
		glVertex3f( 0.189800, -2.497048, -0.107240);
		glVertex3f( 0.202049, -2.478001, -0.168823);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.296857, -0.352428);
		glVertex3f( 0.237389, -2.296857, -0.346486);
		glVertex3f( 0.241104, -2.234067, -0.365167);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.932093, -0.279872);
		glVertex3f( 0.223234, -1.932093, -0.275324);
		glVertex3f( 0.213338, -1.890467, -0.225578);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.982813, -0.321498);
		glVertex3f( 0.231354, -1.982813, -0.316150);
		glVertex3f( 0.223234, -1.932093, -0.275324);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.354724, -0.321498);
		glVertex3f( 0.231354, -2.354724, -0.316150);
		glVertex3f( 0.237389, -2.296857, -0.346486);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.040681, -0.352428);
		glVertex3f( 0.237389, -2.040681, -0.346486);
		glVertex3f( 0.231354, -1.982813, -0.316150);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.231354, -2.354724, -0.316150);
		glVertex3f( 0.177060, -2.354724, -0.321498);
		glVertex3f( 0.223234, -2.405445, -0.275324);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.447070, -0.229151);
		glVertex3f( 0.213338, -2.447070, -0.225578);
		glVertex3f( 0.223234, -2.405445, -0.275324);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.103470, -0.371475);
		glVertex3f( 0.241104, -2.103470, -0.365167);
		glVertex3f( 0.237389, -2.040681, -0.346486);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.859537, -0.171284);
		glVertex3f( 0.202049, -1.859537, -0.168823);
		glVertex3f( 0.189800, -1.840490, -0.107240);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.478001, -0.171284);
		glVertex3f( 0.202049, -2.478001, -0.168823);
		glVertex3f( 0.213338, -2.447070, -0.225578);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.168769, -0.377906);
		glVertex3f( 0.242359, -2.168769, -0.371475);
		glVertex3f( 0.241104, -2.103470, -0.365167);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -2.234067, -0.371475);
		glVertex3f( 0.241104, -2.234067, -0.365167);
		glVertex3f( 0.242359, -2.168769, -0.371475);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.177060, -1.890467, -0.229151);
		glVertex3f( 0.213338, -1.890467, -0.225578);
		glVertex3f( 0.202049, -1.859537, -0.168823);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.202049, -2.478001, -0.168823);
		glVertex3f( 0.226078, -2.478001, -0.161534);
		glVertex3f( 0.248222, -2.447070, -0.214996);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.242359, -2.168769, -0.371475);
		glVertex3f( 0.305149, -2.168769, -0.352428);
		glVertex3f( 0.302687, -2.103470, -0.346486);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.213338, -1.890467, -0.225578);
		glVertex3f( 0.248222, -1.890467, -0.214996);
		glVertex3f( 0.226078, -1.859537, -0.161534);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.189800, -2.497048, -0.107240);
		glVertex3f( 0.202049, -2.497048, -0.103524);
		glVertex3f( 0.226078, -2.478001, -0.161534);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.241104, -2.234067, -0.365167);
		glVertex3f( 0.302687, -2.234067, -0.346486);
		glVertex3f( 0.305149, -2.168769, -0.352428);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.237389, -2.296857, -0.346486);
		glVertex3f( 0.295398, -2.296857, -0.328889);
		glVertex3f( 0.302687, -2.234067, -0.346486);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.223234, -1.932093, -0.275324);
		glVertex3f( 0.267632, -1.932093, -0.261856);
		glVertex3f( 0.248222, -1.890467, -0.214996);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.231354, -2.354724, -0.316150);
		glVertex3f( 0.283562, -2.354724, -0.300313);
		glVertex3f( 0.295398, -2.296857, -0.328889);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.231354, -1.982813, -0.316150);
		glVertex3f( 0.283562, -1.982813, -0.300313);
		glVertex3f( 0.267632, -1.932093, -0.261856);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.237389, -2.040681, -0.346486);
		glVertex3f( 0.295398, -2.040681, -0.328889);
		glVertex3f( 0.283562, -1.982813, -0.300313);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.223234, -2.405445, -0.275324);
		glVertex3f( 0.267632, -2.405445, -0.261856);
		glVertex3f( 0.283562, -2.354724, -0.300313);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.241104, -2.103470, -0.365167);
		glVertex3f( 0.302687, -2.103470, -0.346486);
		glVertex3f( 0.295398, -2.040681, -0.328889);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.202049, -1.859537, -0.168823);
		glVertex3f( 0.226078, -1.859537, -0.161534);
		glVertex3f( 0.202049, -1.840490, -0.103524);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.213338, -2.447070, -0.225578);
		glVertex3f( 0.248222, -2.447070, -0.214996);
		glVertex3f( 0.267632, -2.405445, -0.261856);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.302687, -2.103470, -0.346486);
		glVertex3f( 0.359442, -2.103470, -0.316150);
		glVertex3f( 0.348861, -2.040681, -0.300313);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.248222, -2.447070, -0.214996);
		glVertex3f( 0.280372, -2.447070, -0.197812);
		glVertex3f( 0.308551, -2.405445, -0.239985);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.305149, -2.168769, -0.352428);
		glVertex3f( 0.363016, -2.168769, -0.321498);
		glVertex3f( 0.359442, -2.103470, -0.316150);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.226078, -1.859537, -0.161534);
		glVertex3f( 0.248222, -1.859537, -0.149697);
		glVertex3f( 0.213338, -1.840490, -0.097490);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.248222, -1.890467, -0.214996);
		glVertex3f( 0.280372, -1.890467, -0.197812);
		glVertex3f( 0.248222, -1.859537, -0.149697);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.226078, -2.478001, -0.161534);
		glVertex3f( 0.248222, -2.478001, -0.149698);
		glVertex3f( 0.280372, -2.447070, -0.197812);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.202049, -2.497048, -0.103524);
		glVertex3f( 0.213338, -2.497048, -0.097490);
		glVertex3f( 0.248222, -2.478001, -0.149698);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.302687, -2.234067, -0.346486);
		glVertex3f( 0.359442, -2.234067, -0.316150);
		glVertex3f( 0.363016, -2.168769, -0.321498);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.267632, -1.932093, -0.261856);
		glVertex3f( 0.308551, -1.932093, -0.239985);
		glVertex3f( 0.280372, -1.890467, -0.197812);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.295398, -2.296857, -0.328889);
		glVertex3f( 0.348861, -2.296857, -0.300313);
		glVertex3f( 0.359442, -2.234067, -0.316150);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.283562, -2.354724, -0.300313);
		glVertex3f( 0.331676, -2.354724, -0.274595);
		glVertex3f( 0.348861, -2.296857, -0.300313);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.283562, -1.982813, -0.300313);
		glVertex3f( 0.331676, -1.982813, -0.274595);
		glVertex3f( 0.308551, -1.932093, -0.239985);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.267632, -2.405445, -0.261856);
		glVertex3f( 0.308551, -2.405445, -0.239985);
		glVertex3f( 0.331676, -2.354724, -0.274595);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.295398, -2.040681, -0.328889);
		glVertex3f( 0.348861, -2.040681, -0.300313);
		glVertex3f( 0.331676, -1.982813, -0.274595);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.331676, -2.354724, -0.274595);
		glVertex3f( 0.373849, -2.354724, -0.239985);
		glVertex3f( 0.395720, -2.296857, -0.261856);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.308551, -2.405445, -0.239985);
		glVertex3f( 0.344416, -2.405445, -0.210551);
		glVertex3f( 0.373849, -2.354724, -0.239985);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.348861, -2.040681, -0.300313);
		glVertex3f( 0.395720, -2.040681, -0.261856);
		glVertex3f( 0.373849, -1.982813, -0.239985);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.280372, -2.447070, -0.197812);
		glVertex3f( 0.308551, -2.447070, -0.174686);
		glVertex3f( 0.344416, -2.405445, -0.210551);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.359442, -2.103470, -0.316150);
		glVertex3f( 0.409189, -2.103470, -0.275324);
		glVertex3f( 0.395720, -2.040681, -0.261856);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.363016, -2.168769, -0.321498);
		glVertex3f( 0.413736, -2.168769, -0.279872);
		glVertex3f( 0.409189, -2.103470, -0.275324);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.248222, -1.859537, -0.149697);
		glVertex3f( 0.267632, -1.859537, -0.133768);
		glVertex3f( 0.223234, -1.840490, -0.089369);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.248222, -2.478001, -0.149698);
		glVertex3f( 0.267632, -2.478001, -0.133768);
		glVertex3f( 0.308551, -2.447070, -0.174686);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.359442, -2.234067, -0.316150);
		glVertex3f( 0.409189, -2.234067, -0.275324);
		glVertex3f( 0.413736, -2.168769, -0.279872);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.280372, -1.890467, -0.197812);
		glVertex3f( 0.308551, -1.890467, -0.174686);
		glVertex3f( 0.267632, -1.859537, -0.133768);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.308551, -1.932093, -0.239985);
		glVertex3f( 0.344416, -1.932093, -0.210551);
		glVertex3f( 0.308551, -1.890467, -0.174686);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.213338, -2.497048, -0.097490);
		glVertex3f( 0.223234, -2.497048, -0.089369);
		glVertex3f( 0.267632, -2.478001, -0.133768);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.348861, -2.296857, -0.300313);
		glVertex3f( 0.395720, -2.296857, -0.261856);
		glVertex3f( 0.409189, -2.234067, -0.275324);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.331676, -1.982813, -0.274595);
		glVertex3f( 0.373849, -1.982813, -0.239985);
		glVertex3f( 0.344416, -1.932093, -0.210551);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.344416, -1.932093, -0.210551);
		glVertex3f( 0.373849, -1.932093, -0.174686);
		glVertex3f( 0.331676, -1.890467, -0.146507);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.373849, -1.982813, -0.239985);
		glVertex3f( 0.408460, -1.982813, -0.197812);
		glVertex3f( 0.373849, -1.932093, -0.174686);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.373849, -2.354724, -0.239985);
		glVertex3f( 0.408460, -2.354724, -0.197812);
		glVertex3f( 0.434177, -2.296857, -0.214996);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.395720, -2.040681, -0.261856);
		glVertex3f( 0.434177, -2.040681, -0.214996);
		glVertex3f( 0.408460, -1.982813, -0.197812);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.344416, -2.405445, -0.210551);
		glVertex3f( 0.373849, -2.405445, -0.174686);
		glVertex3f( 0.408460, -2.354724, -0.197812);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.308551, -2.447070, -0.174686);
		glVertex3f( 0.331676, -2.447070, -0.146507);
		glVertex3f( 0.373849, -2.405445, -0.174686);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.409189, -2.103470, -0.275324);
		glVertex3f( 0.450014, -2.103470, -0.225578);
		glVertex3f( 0.434177, -2.040681, -0.214996);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.267632, -1.859537, -0.133768);
		glVertex3f( 0.283562, -1.859537, -0.114358);
		glVertex3f( 0.231354, -1.840490, -0.079474);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.267632, -2.478001, -0.133768);
		glVertex3f( 0.283562, -2.478001, -0.114358);
		glVertex3f( 0.331676, -2.447070, -0.146507);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.413736, -2.168769, -0.279872);
		glVertex3f( 0.455362, -2.168769, -0.229151);
		glVertex3f( 0.450014, -2.103470, -0.225578);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.409189, -2.234067, -0.275324);
		glVertex3f( 0.450014, -2.234067, -0.225578);
		glVertex3f( 0.455362, -2.168769, -0.229151);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.308551, -1.890467, -0.174686);
		glVertex3f( 0.331676, -1.890467, -0.146507);
		glVertex3f( 0.283562, -1.859537, -0.114358);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.223234, -2.497048, -0.089369);
		glVertex3f( 0.231354, -2.497048, -0.079474);
		glVertex3f( 0.283562, -2.478001, -0.114358);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.395720, -2.296857, -0.261856);
		glVertex3f( 0.434177, -2.296857, -0.214996);
		glVertex3f( 0.450014, -2.234067, -0.225578);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.231354, -2.497048, -0.079474);
		glVertex3f( 0.237389, -2.497048, -0.068185);
		glVertex3f( 0.295398, -2.478001, -0.092213);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.450014, -2.234067, -0.225578);
		glVertex3f( 0.480351, -2.234067, -0.168823);
		glVertex3f( 0.486292, -2.168769, -0.171284);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.434177, -2.296857, -0.214996);
		glVertex3f( 0.462753, -2.296857, -0.161534);
		glVertex3f( 0.480351, -2.234067, -0.168823);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.373849, -1.932093, -0.174686);
		glVertex3f( 0.395720, -1.932093, -0.133768);
		glVertex3f( 0.348860, -1.890467, -0.114358);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.408460, -2.354724, -0.197812);
		glVertex3f( 0.434177, -2.354724, -0.149697);
		glVertex3f( 0.462753, -2.296857, -0.161534);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.408460, -1.982813, -0.197812);
		glVertex3f( 0.434177, -1.982813, -0.149697);
		glVertex3f( 0.395720, -1.932093, -0.133768);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.434177, -2.040681, -0.214996);
		glVertex3f( 0.462754, -2.040681, -0.161534);
		glVertex3f( 0.434177, -1.982813, -0.149697);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.373849, -2.405445, -0.174686);
		glVertex3f( 0.395720, -2.405445, -0.133768);
		glVertex3f( 0.434177, -2.354724, -0.149697);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.462754, -2.040681, -0.161534);
		glVertex3f( 0.434177, -2.040681, -0.214996);
		glVertex3f( 0.480351, -2.103470, -0.168823);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.283562, -1.859537, -0.114358);
		glVertex3f( 0.295398, -1.859537, -0.092213);
		glVertex3f( 0.237389, -1.840490, -0.068185);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.331676, -2.447070, -0.146507);
		glVertex3f( 0.348861, -2.447070, -0.114358);
		glVertex3f( 0.395720, -2.405445, -0.133768);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.283562, -2.478001, -0.114358);
		glVertex3f( 0.295398, -2.478001, -0.092213);
		glVertex3f( 0.348861, -2.447070, -0.114358);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.455362, -2.168769, -0.229151);
		glVertex3f( 0.486292, -2.168769, -0.171284);
		glVertex3f( 0.480351, -2.103470, -0.168823);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.331676, -1.890467, -0.146507);
		glVertex3f( 0.348860, -1.890467, -0.114358);
		glVertex3f( 0.295398, -1.859537, -0.092213);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.486292, -2.168769, -0.171284);
		glVertex3f( 0.505339, -2.168769, -0.108495);
		glVertex3f( 0.499032, -2.103470, -0.107240);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.295398, -1.859537, -0.092213);
		glVertex3f( 0.302687, -1.859537, -0.068185);
		glVertex3f( 0.241104, -1.840490, -0.055935);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.348860, -1.890467, -0.114358);
		glVertex3f( 0.359442, -1.890467, -0.079474);
		glVertex3f( 0.302687, -1.859537, -0.068185);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.295398, -2.478001, -0.092213);
		glVertex3f( 0.302687, -2.478001, -0.068185);
		glVertex3f( 0.359442, -2.447070, -0.079474);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.237389, -2.497048, -0.068185);
		glVertex3f( 0.241104, -2.497048, -0.055935);
		glVertex3f( 0.302687, -2.478001, -0.068185);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.480351, -2.234067, -0.168823);
		glVertex3f( 0.499031, -2.234067, -0.107240);
		glVertex3f( 0.505339, -2.168769, -0.108495);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.395720, -1.932093, -0.133768);
		glVertex3f( 0.409189, -1.932093, -0.089369);
		glVertex3f( 0.359442, -1.890467, -0.079474);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.462753, -2.296857, -0.161534);
		glVertex3f( 0.480351, -2.296857, -0.103524);
		glVertex3f( 0.499031, -2.234067, -0.107240);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.434177, -2.354724, -0.149697);
		glVertex3f( 0.450014, -2.354724, -0.097490);
		glVertex3f( 0.480351, -2.296857, -0.103524);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.434177, -1.982813, -0.149697);
		glVertex3f( 0.450014, -1.982813, -0.097490);
		glVertex3f( 0.409189, -1.932093, -0.089369);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.450014, -2.354724, -0.097490);
		glVertex3f( 0.434177, -2.354724, -0.149697);
		glVertex3f( 0.409189, -2.405445, -0.089369);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.462754, -2.040681, -0.161534);
		glVertex3f( 0.480351, -2.040681, -0.103524);
		glVertex3f( 0.450014, -1.982813, -0.097490);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.480351, -2.040681, -0.103524);
		glVertex3f( 0.462754, -2.040681, -0.161534);
		glVertex3f( 0.499032, -2.103470, -0.107240);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.348861, -2.447070, -0.114358);
		glVertex3f( 0.359442, -2.447070, -0.079474);
		glVertex3f( 0.409189, -2.405445, -0.089369);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.359442, -2.447070, -0.079474);
		glVertex3f( 0.363016, -2.447070, -0.043196);
		glVertex3f( 0.413736, -2.405445, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.486293, -2.040681, -0.043196);
		glVertex3f( 0.480351, -2.040681, -0.103524);
		glVertex3f( 0.505340, -2.103470, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.505340, -2.103470, -0.043196);
		glVertex3f( 0.499032, -2.103470, -0.107240);
		glVertex3f( 0.511771, -2.168769, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.242359, -1.840490, -0.043196);
		glVertex3f( 0.241104, -1.840490, -0.055935);
		glVertex3f( 0.305149, -1.859537, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.302687, -2.478001, -0.068185);
		glVertex3f( 0.305149, -2.478001, -0.043196);
		glVertex3f( 0.363016, -2.447070, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.499031, -2.234067, -0.107240);
		glVertex3f( 0.505340, -2.234067, -0.043196);
		glVertex3f( 0.511771, -2.168769, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.305149, -1.859537, -0.043196);
		glVertex3f( 0.302687, -1.859537, -0.068185);
		glVertex3f( 0.363016, -1.890467, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.363016, -1.890467, -0.043196);
		glVertex3f( 0.359442, -1.890467, -0.079474);
		glVertex3f( 0.413736, -1.932093, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.241104, -2.497048, -0.055935);
		glVertex3f( 0.242359, -2.497048, -0.043196);
		glVertex3f( 0.305149, -2.478001, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.480351, -2.296857, -0.103524);
		glVertex3f( 0.486293, -2.296857, -0.043196);
		glVertex3f( 0.505340, -2.234067, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.413736, -1.932093, -0.043196);
		glVertex3f( 0.409189, -1.932093, -0.089369);
		glVertex3f( 0.455362, -1.982813, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.450014, -2.354724, -0.097490);
		glVertex3f( 0.455362, -2.354724, -0.043196);
		glVertex3f( 0.486293, -2.296857, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.409189, -2.405445, -0.089369);
		glVertex3f( 0.413736, -2.405445, -0.043196);
		glVertex3f( 0.455362, -2.354724, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.455362, -1.982813, -0.043196);
		glVertex3f( 0.450014, -1.982813, -0.097490);
		glVertex3f( 0.486293, -2.040681, -0.043196);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.251563, -2.154142, 0.017140);
		glVertex3f( 0.311904, -2.100358, 0.104129);
		glVertex3f( 0.066369, -2.175079, 0.226966);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.360710, -1.024297, 0.168670);
		glVertex3f( 0.311904, -2.100358, 0.104129);
		glVertex3f( 0.392254, -1.424395, -0.069265);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.251563, -2.154142, 0.017140);
		glVertex3f( 0.066369, -2.175079, 0.226966);
		glVertex3f( -0.045349, -2.174005, 0.081676);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.251563, -2.154142, 0.017140);
		glVertex3f( -0.045349, -2.174005, 0.081676);
		glVertex3f( -0.098683, -2.058218, -0.154068);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.251563, -2.154142, 0.017140);
		glVertex3f( -0.098683, -2.058218, -0.154068);
		glVertex3f( 0.410980, -2.056240, -0.197184);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.360710, -1.024297, 0.168670);
		glVertex3f( 0.392254, -1.424395, -0.069265);
		glVertex3f( 0.433553, -0.800169, 0.113339);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.013771, -1.287779, 0.295708);
		glVertex3f( 0.162275, -1.025365, 0.381898);
		glVertex3f( 0.000000, -0.331006, 0.500000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.255199, -1.188923, -0.018325);
		glVertex3f( -0.229704, -1.365993, 0.162187);
		glVertex3f( -0.389426, -0.714324, 0.128874);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.005087, -1.300993, -0.302965);
		glVertex3f( -0.170593, -1.191725, -0.187227);
		glVertex3f( -0.153469, -0.749432, -0.353497);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.320882, -1.412082, -0.297416);
		glVertex3f( 0.339457, -2.113662, -0.291070);
		glVertex3f( 0.289033, -0.797294, -0.364283);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.360710, -1.024297, 0.168670);
		glVertex3f( 0.433553, -0.800169, 0.113339);
		glVertex3f( 0.292774, -0.305391, 0.404508);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.013771, -1.287779, 0.295708);
		glVertex3f( 0.000000, -0.331006, 0.500000);
		glVertex3f( -0.256438, -0.651255, 0.348389);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.255199, -1.188923, -0.018325);
		glVertex3f( -0.389426, -0.714324, 0.128874);
		glVertex3f( -0.404103, -0.665732, -0.174167);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.005087, -1.300993, -0.302965);
		glVertex3f( -0.153469, -0.749432, -0.353497);
		glVertex3f( 0.174600, -0.944773, -0.395907);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.320882, -1.412082, -0.297416);
		glVertex3f( 0.289033, -0.797294, -0.364283);
		glVertex3f( 0.453524, -0.677163, -0.188474);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.108435, 0.015177, 0.425325);
		glVertex3f( 0.308420, 0.091786, 0.249998);
		glVertex3f( 0.025314, 0.311637, 0.249998);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.389660, -0.028401, 0.262863);
		glVertex3f( -0.165300, 0.050342, 0.404506);
		glVertex3f( -0.267457, 0.286023, 0.154506);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.389660, -0.028401, -0.262863);
		glVertex3f( -0.458071, 0.024726, 0.000000);
		glVertex3f( -0.267457, 0.286023, -0.154506);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.117670, -0.280889, -0.456980);
		glVertex3f( -0.133628, -0.155309, -0.415078);
		glVertex3f( 0.025314, 0.311637, -0.249998);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.416278, 0.042107, 0.000000);
		glVertex3f( 0.308420, 0.091786, -0.249998);
		glVertex3f( 0.206260, 0.327466, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.206260, 0.327466, 0.000000);
		glVertex3f( 0.025314, 0.311637, -0.249998);
		glVertex3f( -0.065367, 0.416140, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.206260, 0.327466, 0.000000);
		glVertex3f( 0.308420, 0.091786, -0.249998);
		glVertex3f( 0.025314, 0.311637, -0.249998);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.308420, 0.091786, -0.249998);
		glVertex3f( 0.117670, -0.280889, -0.456980);
		glVertex3f( 0.025314, 0.311637, -0.249998);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.025314, 0.311637, -0.249998);
		glVertex3f( -0.267457, 0.286023, -0.154506);
		glVertex3f( -0.065367, 0.416140, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.025314, 0.311637, -0.249998);
		glVertex3f( -0.133628, -0.155309, -0.415078);
		glVertex3f( -0.267457, 0.286023, -0.154506);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.133628, -0.155309, -0.415078);
		glVertex3f( -0.389660, -0.028401, -0.262863);
		glVertex3f( -0.267457, 0.286023, -0.154506);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.267457, 0.286023, -0.154506);
		glVertex3f( -0.267457, 0.286023, 0.154506);
		glVertex3f( -0.065367, 0.416140, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.267457, 0.286023, -0.154506);
		glVertex3f( -0.458071, 0.024726, 0.000000);
		glVertex3f( -0.267457, 0.286023, 0.154506);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.458071, 0.024726, 0.000000);
		glVertex3f( -0.389660, -0.028401, 0.262863);
		glVertex3f( -0.267457, 0.286023, 0.154506);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.267457, 0.286023, 0.154506);
		glVertex3f( 0.025314, 0.311637, 0.249998);
		glVertex3f( -0.065367, 0.416140, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.267457, 0.286023, 0.154506);
		glVertex3f( -0.165300, 0.050342, 0.404506);
		glVertex3f( 0.025314, 0.311637, 0.249998);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.165300, 0.050342, 0.404506);
		glVertex3f( 0.108435, 0.015177, 0.425325);
		glVertex3f( 0.025314, 0.311637, 0.249998);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.025314, 0.311637, 0.249998);
		glVertex3f( 0.206260, 0.327466, 0.000000);
		glVertex3f( -0.065367, 0.416140, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.025314, 0.311637, 0.249998);
		glVertex3f( 0.308420, 0.091786, 0.249998);
		glVertex3f( 0.206260, 0.327466, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.308420, 0.091786, 0.249998);
		glVertex3f( 0.416278, 0.042107, 0.000000);
		glVertex3f( 0.206260, 0.327466, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.453524, -0.677163, -0.188474);
		glVertex3f( 0.308420, 0.091786, -0.249998);
		glVertex3f( 0.416278, 0.042107, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.453524, -0.677163, -0.188474);
		glVertex3f( 0.289033, -0.797294, -0.364283);
		glVertex3f( 0.308420, 0.091786, -0.249998);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.289033, -0.797294, -0.364283);
		glVertex3f( 0.117670, -0.280889, -0.456980);
		glVertex3f( 0.308420, 0.091786, -0.249998);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.174600, -0.944773, -0.395907);
		glVertex3f( -0.133628, -0.155309, -0.415078);
		glVertex3f( 0.117670, -0.280889, -0.456980);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.174600, -0.944773, -0.395907);
		glVertex3f( -0.153469, -0.749432, -0.353497);
		glVertex3f( -0.133628, -0.155309, -0.415078);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.153469, -0.749432, -0.353497);
		glVertex3f( -0.389660, -0.028401, -0.262863);
		glVertex3f( -0.133628, -0.155309, -0.415078);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.404103, -0.665732, -0.174167);
		glVertex3f( -0.458071, 0.024726, 0.000000);
		glVertex3f( -0.389660, -0.028401, -0.262863);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.404103, -0.665732, -0.174167);
		glVertex3f( -0.389426, -0.714324, 0.128874);
		glVertex3f( -0.458071, 0.024726, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.389426, -0.714324, 0.128874);
		glVertex3f( -0.389660, -0.028401, 0.262863);
		glVertex3f( -0.458071, 0.024726, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.256438, -0.651255, 0.348389);
		glVertex3f( -0.165300, 0.050342, 0.404506);
		glVertex3f( -0.389660, -0.028401, 0.262863);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.256438, -0.651255, 0.348389);
		glVertex3f( 0.000000, -0.331006, 0.500000);
		glVertex3f( -0.165300, 0.050342, 0.404506);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.331006, 0.500000);
		glVertex3f( 0.108435, 0.015177, 0.425325);
		glVertex3f( -0.165300, 0.050342, 0.404506);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.292774, -0.305391, 0.404508);
		glVertex3f( 0.308420, 0.091786, 0.249998);
		glVertex3f( 0.108435, 0.015177, 0.425325);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.292774, -0.305391, 0.404508);
		glVertex3f( 0.433553, -0.800169, 0.113339);
		glVertex3f( 0.308420, 0.091786, 0.249998);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.433553, -0.800169, 0.113339);
		glVertex3f( 0.416278, 0.042107, 0.000000);
		glVertex3f( 0.308420, 0.091786, 0.249998);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.289033, -0.797294, -0.364283);
		glVertex3f( 0.174600, -0.944773, -0.395907);
		glVertex3f( 0.117670, -0.280889, -0.456980);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.289033, -0.797294, -0.364283);
		glVertex3f( 0.339457, -2.113662, -0.291070);
		glVertex3f( 0.174600, -0.944773, -0.395907);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.339457, -2.113662, -0.291070);
		glVertex3f( 0.005087, -1.300993, -0.302965);
		glVertex3f( 0.174600, -0.944773, -0.395907);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.153469, -0.749432, -0.353497);
		glVertex3f( -0.404103, -0.665732, -0.174167);
		glVertex3f( -0.389660, -0.028401, -0.262863);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.153469, -0.749432, -0.353497);
		glVertex3f( -0.170593, -1.191725, -0.187227);
		glVertex3f( -0.404103, -0.665732, -0.174167);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.170593, -1.191725, -0.187227);
		glVertex3f( -0.255199, -1.188923, -0.018325);
		glVertex3f( -0.404103, -0.665732, -0.174167);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.389426, -0.714324, 0.128874);
		glVertex3f( -0.256438, -0.651255, 0.348389);
		glVertex3f( -0.389660, -0.028401, 0.262863);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.389426, -0.714324, 0.128874);
		glVertex3f( -0.229704, -1.365993, 0.162187);
		glVertex3f( -0.256438, -0.651255, 0.348389);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.229704, -1.365993, 0.162187);
		glVertex3f( 0.013771, -1.287779, 0.295708);
		glVertex3f( -0.256438, -0.651255, 0.348389);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.331006, 0.500000);
		glVertex3f( 0.292774, -0.305391, 0.404508);
		glVertex3f( 0.108435, 0.015177, 0.425325);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.331006, 0.500000);
		glVertex3f( 0.162275, -1.025365, 0.381898);
		glVertex3f( 0.292774, -0.305391, 0.404508);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.162275, -1.025365, 0.381898);
		glVertex3f( 0.360710, -1.024297, 0.168670);
		glVertex3f( 0.292774, -0.305391, 0.404508);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.433553, -0.800169, 0.113339);
		glVertex3f( 0.453524, -0.677163, -0.188474);
		glVertex3f( 0.416278, 0.042107, 0.000000);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.433553, -0.800169, 0.113339);
		glVertex3f( 0.392254, -1.424395, -0.069265);
		glVertex3f( 0.453524, -0.677163, -0.188474);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.392254, -1.424395, -0.069265);
		glVertex3f( 0.320882, -1.412082, -0.297416);
		glVertex3f( 0.453524, -0.677163, -0.188474);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.410980, -2.056240, -0.197184);
		glVertex3f( 0.339457, -2.113662, -0.291070);
		glVertex3f( 0.320882, -1.412082, -0.297416);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.410980, -2.056240, -0.197184);
		glVertex3f( -0.098683, -2.058218, -0.154068);
		glVertex3f( 0.339457, -2.113662, -0.291070);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.098683, -2.058218, -0.154068);
		glVertex3f( 0.005087, -1.300993, -0.302965);
		glVertex3f( 0.339457, -2.113662, -0.291070);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.098683, -2.058218, -0.154068);
		glVertex3f( -0.170593, -1.191725, -0.187227);
		glVertex3f( 0.005087, -1.300993, -0.302965);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.098683, -2.058218, -0.154068);
		glVertex3f( -0.045349, -2.174005, 0.081676);
		glVertex3f( -0.170593, -1.191725, -0.187227);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.045349, -2.174005, 0.081676);
		glVertex3f( -0.255199, -1.188923, -0.018325);
		glVertex3f( -0.170593, -1.191725, -0.187227);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.045349, -2.174005, 0.081676);
		glVertex3f( -0.229704, -1.365993, 0.162187);
		glVertex3f( -0.255199, -1.188923, -0.018325);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( -0.045349, -2.174005, 0.081676);
		glVertex3f( 0.066369, -2.175079, 0.226966);
		glVertex3f( -0.229704, -1.365993, 0.162187);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.066369, -2.175079, 0.226966);
		glVertex3f( 0.013771, -1.287779, 0.295708);
		glVertex3f( -0.229704, -1.365993, 0.162187);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.392254, -1.424395, -0.069265);
		glVertex3f( 0.410980, -2.056240, -0.197184);
		glVertex3f( 0.320882, -1.412082, -0.297416);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.392254, -1.424395, -0.069265);
		glVertex3f( 0.311904, -2.100358, 0.104129);
		glVertex3f( 0.410980, -2.056240, -0.197184);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.311904, -2.100358, 0.104129);
		glVertex3f( 0.251563, -2.154142, 0.017140);
		glVertex3f( 0.410980, -2.056240, -0.197184);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.066369, -2.175079, 0.226966);
		glVertex3f( 0.162275, -1.025365, 0.381898);
		glVertex3f( 0.013771, -1.287779, 0.295708);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.066369, -2.175079, 0.226966);
		glVertex3f( 0.311904, -2.100358, 0.104129);
		glVertex3f( 0.162275, -1.025365, 0.381898);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex3f( 0.311904, -2.100358, 0.104129);
		glVertex3f( 0.360710, -1.024297, 0.168670);
		glVertex3f( 0.162275, -1.025365, 0.381898);
	glEnd();
}