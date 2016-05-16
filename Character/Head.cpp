#include "Head.h"

void Head::setRotate( float x, float y, float z ){
	rotateX = x;
	rotateY = y;
	rotateZ = z;
}
void Head::setScale( float x, float y, float z ){
	scaleX = x;
	scaleY = y;
	scaleZ = z;
}
void Head::setHeadPosition( float x, float y, float z ){
	posX = x;
	posY = y;
	posZ = z;
}
void Head::setColor( float r, float g, float b){
	colorR = r;
	colorG = g;
	colorB = b;
}
void Head::draw(){
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
void Head::privateDraw(){
	glNormal3f( 0.663036, -0.192883, 0.723312 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.468750, 0.242188, 0.757812);
		glVertex3f( 0.437500, 0.164062, 0.765625);
		glVertex3f( 0.562500, 0.242188, 0.671875);
	glEnd();

	glNormal3f( -0.666010, -0.204926, 0.717242 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.500000, 0.093750, 0.687500);
		glVertex3f( -0.437500, 0.164062, 0.765625);
		glVertex3f( -0.562500, 0.242188, 0.671875);
	glEnd();

	glNormal3f( 0.828520, -0.299015, 0.473440 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.562500, 0.242188, 0.671875);
		glVertex3f( 0.500000, 0.093750, 0.687500);
		glVertex3f( 0.625000, 0.242188, 0.562500);
	glEnd();

	glNormal3f( -0.830101, -0.307090, 0.465433 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.546875, 0.054688, 0.578125);
		glVertex3f( -0.500000, 0.093750, 0.687500);
		glVertex3f( -0.625000, 0.242188, 0.562500);
	glEnd();

	glNormal3f( 0.425062, -0.779280, 0.460484 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.500000, 0.093750, 0.687500);
		glVertex3f( 0.351562, 0.031250, 0.718750);
		glVertex3f( 0.546875, 0.054688, 0.578125);
	glEnd();

	glNormal3f( -0.408092, -0.803818, 0.432825 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.351562, -0.023438, 0.617188);
		glVertex3f( -0.351562, 0.031250, 0.718750);
		glVertex3f( -0.546875, 0.054688, 0.578125);
	glEnd();

	glNormal3f( 0.338487, -0.548583, 0.764515 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.437500, 0.164062, 0.765625);
		glVertex3f( 0.351562, 0.132812, 0.781250);
		glVertex3f( 0.500000, 0.093750, 0.687500);
	glEnd();

	glNormal3f( -0.371366, -0.486617, 0.790753 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.351562, 0.031250, 0.718750);
		glVertex3f( -0.351562, 0.132812, 0.781250);
		glVertex3f( -0.500000, 0.093750, 0.687500);
	glEnd();

	glNormal3f( -0.039277, -0.523693, 0.851001 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.351562, 0.132812, 0.781250);
		glVertex3f( 0.273438, 0.164062, 0.796875);
		glVertex3f( 0.351562, 0.031250, 0.718750);
	glEnd();

	glNormal3f( 0.099184, -0.547220, 0.831091 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.203125, 0.093750, 0.742188);
		glVertex3f( -0.273438, 0.164062, 0.796875);
		glVertex3f( -0.351562, 0.031250, 0.718750);
	glEnd();

	glNormal3f( -0.283710, -0.844293, 0.454619 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.351562, 0.031250, 0.718750);
		glVertex3f( 0.203125, 0.093750, 0.742188);
		glVertex3f( 0.351562, -0.023438, 0.617188);
	glEnd();

	glNormal3f( 0.258889, -0.838801, 0.478945 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.156250, 0.054688, 0.648438);
		glVertex3f( -0.203125, 0.093750, 0.742188);
		glVertex3f( -0.351562, -0.023438, 0.617188);
	glEnd();

	glNormal3f( -0.765568, -0.322344, 0.556777 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.203125, 0.093750, 0.742188);
		glVertex3f( 0.140625, 0.242188, 0.742188);
		glVertex3f( 0.078125, 0.242188, 0.656250);
	glEnd();

	glNormal3f( 0.765568, -0.322344, 0.556777 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.078125, 0.242188, 0.656250);
		glVertex3f( -0.140625, 0.242188, 0.742188);
		glVertex3f( -0.203125, 0.093750, 0.742188);
	glEnd();

	glNormal3f( -0.465798, -0.186319, 0.865053 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.273438, 0.164062, 0.796875);
		glVertex3f( 0.242188, 0.242188, 0.796875);
		glVertex3f( 0.140625, 0.242188, 0.742188);
	glEnd();

	glNormal3f( 0.465798, -0.186319, 0.865053 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.140625, 0.242188, 0.742188);
		glVertex3f( -0.242188, 0.242188, 0.796875);
		glVertex3f( -0.273438, 0.164062, 0.796875);
	glEnd();

	glNormal3f( -0.467208, 0.169894, 0.867671 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.242188, 0.242188, 0.796875);
		glVertex3f( 0.273438, 0.328125, 0.796875);
		glVertex3f( 0.140625, 0.242188, 0.742188);
	glEnd();

	glNormal3f( 0.482283, 0.203067, 0.852154 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.203125, 0.390625, 0.742188);
		glVertex3f( -0.273438, 0.328125, 0.796875);
		glVertex3f( -0.140625, 0.242188, 0.742188);
	glEnd();

	glNormal3f( -0.771027, 0.324643, 0.547835 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.140625, 0.242188, 0.742188);
		glVertex3f( 0.203125, 0.390625, 0.742188);
		glVertex3f( 0.156250, 0.437500, 0.648438);
	glEnd();

	glNormal3f( 0.771027, 0.324643, 0.547835 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.156250, 0.437500, 0.648438);
		glVertex3f( -0.203125, 0.390625, 0.742188);
		glVertex3f( -0.140625, 0.242188, 0.742188);
	glEnd();

	glNormal3f( -0.265910, 0.820997, 0.505229 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.203125, 0.390625, 0.742188);
		glVertex3f( 0.351562, 0.453125, 0.718750);
		glVertex3f( 0.351562, 0.515625, 0.617188);
	glEnd();

	glNormal3f( 0.265910, 0.820997, 0.505229 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.351562, 0.515625, 0.617188);
		glVertex3f( -0.351562, 0.453125, 0.718750);
		glVertex3f( -0.203125, 0.390625, 0.742188);
	glEnd();

	glNormal3f( -0.055385, 0.553849, 0.830773 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.273438, 0.328125, 0.796875);
		glVertex3f( 0.351562, 0.359375, 0.781250);
		glVertex3f( 0.351562, 0.453125, 0.718750);
	glEnd();

	glNormal3f( 0.055385, 0.553849, 0.830773 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.351562, 0.453125, 0.718750);
		glVertex3f( -0.351562, 0.359375, 0.781250);
		glVertex3f( -0.273438, 0.328125, 0.796875);
	glEnd();

	glNormal3f( 0.344839, 0.578837, 0.738941 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.351562, 0.359375, 0.781250);
		glVertex3f( 0.437500, 0.328125, 0.765625);
		glVertex3f( 0.500000, 0.390625, 0.687500);
	glEnd();

	glNormal3f( -0.344839, 0.578837, 0.738941 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.500000, 0.390625, 0.687500);
		glVertex3f( -0.437500, 0.328125, 0.765625);
		glVertex3f( -0.351562, 0.359375, 0.781250);
	glEnd();

	glNormal3f( 0.423136, 0.752934, 0.504030 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.351562, 0.453125, 0.718750);
		glVertex3f( 0.500000, 0.390625, 0.687500);
		glVertex3f( 0.546875, 0.437500, 0.578125);
	glEnd();

	glNormal3f( -0.423136, 0.752934, 0.504030 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.546875, 0.437500, 0.578125);
		glVertex3f( -0.500000, 0.390625, 0.687500);
		glVertex3f( -0.351562, 0.453125, 0.718750);
	glEnd();

	glNormal3f( 0.828520, 0.299015, 0.473440 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.500000, 0.390625, 0.687500);
		glVertex3f( 0.562500, 0.242188, 0.671875);
		glVertex3f( 0.625000, 0.242188, 0.562500);
	glEnd();

	glNormal3f( -0.828520, 0.299015, 0.473440 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.625000, 0.242188, 0.562500);
		glVertex3f( -0.562500, 0.242188, 0.671875);
		glVertex3f( -0.500000, 0.390625, 0.687500);
	glEnd();

	glNormal3f( 0.665187, 0.175917, 0.725658 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.437500, 0.328125, 0.765625);
		glVertex3f( 0.468750, 0.242188, 0.757812);
		glVertex3f( 0.562500, 0.242188, 0.671875);
	glEnd();

	glNormal3f( -0.665187, 0.175917, 0.725658 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.562500, 0.242188, 0.671875);
		glVertex3f( -0.468750, 0.242188, 0.757812);
		glVertex3f( -0.437500, 0.328125, 0.765625);
	glEnd();

	glNormal3f( 0.768350, 0.329293, -0.548821 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.468750, 0.242188, 0.757812);
		glVertex3f( 0.437500, 0.328125, 0.765625);
		glVertex3f( 0.445312, 0.335938, 0.781250);
	glEnd();

	glNormal3f( -0.768350, 0.329293, -0.548821 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.445312, 0.335938, 0.781250);
		glVertex3f( -0.437500, 0.328125, 0.765625);
		glVertex3f( -0.468750, 0.242188, 0.757812);
	glEnd();

	glNormal3f( 0.197727, 0.815623, -0.543749 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.437500, 0.328125, 0.765625);
		glVertex3f( 0.351562, 0.359375, 0.781250);
		glVertex3f( 0.351562, 0.375000, 0.804688);
	glEnd();

	glNormal3f( -0.197727, 0.815623, -0.543749 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.351562, 0.375000, 0.804688);
		glVertex3f( -0.351562, 0.359375, 0.781250);
		glVertex3f( -0.437500, 0.328125, 0.765625);
	glEnd();

	glNormal3f( -0.408248, 0.816497, -0.408248 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.351562, 0.359375, 0.781250);
		glVertex3f( 0.273438, 0.328125, 0.796875);
		glVertex3f( 0.265625, 0.335938, 0.820312);
	glEnd();

	glNormal3f( 0.408248, 0.816497, -0.408248 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.265625, 0.335938, 0.820312);
		glVertex3f( -0.273438, 0.328125, 0.796875);
		glVertex3f( -0.351562, 0.359375, 0.781250);
	glEnd();

	glNormal3f( -0.796395, 0.289598, -0.530930 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.273438, 0.328125, 0.796875);
		glVertex3f( 0.242188, 0.242188, 0.796875);
		glVertex3f( 0.226562, 0.242188, 0.820312);
	glEnd();

	glNormal3f( 0.796395, 0.289598, -0.530930 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.226562, 0.242188, 0.820312);
		glVertex3f( -0.242188, 0.242188, 0.796875);
		glVertex3f( -0.273438, 0.328125, 0.796875);
	glEnd();

	glNormal3f( -0.789474, -0.315789, -0.526316 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.242188, 0.242188, 0.796875);
		glVertex3f( 0.273438, 0.164062, 0.796875);
		glVertex3f( 0.226562, 0.242188, 0.820312);
	glEnd();

	glNormal3f( 0.832845, -0.378566, -0.403804 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.265625, 0.156250, 0.820312);
		glVertex3f( -0.273438, 0.164062, 0.796875);
		glVertex3f( -0.226562, 0.242188, 0.820312);
	glEnd();

	glNormal3f( -0.408248, -0.816497, -0.408248 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.273438, 0.164062, 0.796875);
		glVertex3f( 0.351562, 0.132812, 0.781250);
		glVertex3f( 0.265625, 0.156250, 0.820312);
	glEnd();

	glNormal3f( 0.432041, -0.750388, -0.500258 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.351562, 0.117188, 0.804688);
		glVertex3f( -0.351562, 0.132812, 0.781250);
		glVertex3f( -0.265625, 0.156250, 0.820312);
	glEnd();

	glNormal3f( 0.197727, -0.815623, -0.543749 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.351562, 0.132812, 0.781250);
		glVertex3f( 0.437500, 0.164062, 0.765625);
		glVertex3f( 0.351562, 0.117188, 0.804688);
	glEnd();

	glNormal3f( -0.214297, -0.826574, -0.520435 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.445312, 0.156250, 0.781250);
		glVertex3f( -0.437500, 0.164062, 0.765625);
		glVertex3f( -0.351562, 0.117188, 0.804688);
	glEnd();

	glNormal3f( 0.752217, -0.356313, -0.554265 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.437500, 0.164062, 0.765625);
		glVertex3f( 0.468750, 0.242188, 0.757812);
		glVertex3f( 0.445312, 0.156250, 0.781250);
	glEnd();

	glNormal3f( -0.839964, -0.343622, -0.419982 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.476562, 0.242188, 0.773438);
		glVertex3f( -0.468750, 0.242188, 0.757812);
		glVertex3f( -0.445312, 0.156250, 0.781250);
	glEnd();

	glNormal3f( 0.400039, -0.062344, 0.914375 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.351562, 0.242188, 0.828125);
		glVertex3f( 0.445312, 0.156250, 0.781250);
		glVertex3f( 0.476562, 0.242188, 0.773438);
	glEnd();

	glNormal3f( -0.400039, -0.062344, 0.914375 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.476562, 0.242188, 0.773438);
		glVertex3f( -0.445312, 0.156250, 0.781250);
		glVertex3f( -0.351562, 0.242188, 0.828125);
	glEnd();

	glNormal3f( 0.306938, -0.175393, 0.935429 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.351562, 0.117188, 0.804688);
		glVertex3f( 0.445312, 0.156250, 0.781250);
		glVertex3f( 0.351562, 0.242188, 0.828125);
	glEnd();

	glNormal3f( -0.306938, -0.175393, 0.935429 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.351562, 0.242188, 0.828125);
		glVertex3f( -0.445312, 0.156250, 0.781250);
		glVertex3f( -0.351562, 0.117188, 0.804688);
	glEnd();

	glNormal3f( 0.094512, -0.183464, 0.978473 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.351562, 0.242188, 0.828125);
		glVertex3f( 0.265625, 0.156250, 0.820312);
		glVertex3f( 0.351562, 0.117188, 0.804688);
	glEnd();

	glNormal3f( -0.094512, -0.183464, 0.978473 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.351562, 0.117188, 0.804688);
		glVertex3f( -0.265625, 0.156250, 0.820312);
		glVertex3f( -0.351562, 0.242188, 0.828125);
	glEnd();

	glNormal3f( -0.062353, -0.028342, 0.997652 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.351562, 0.242188, 0.828125);
		glVertex3f( 0.226562, 0.242188, 0.820312);
		glVertex3f( 0.265625, 0.156250, 0.820312);
	glEnd();

	glNormal3f( 0.062353, -0.028342, 0.997652 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.265625, 0.156250, 0.820312);
		glVertex3f( -0.226562, 0.242188, 0.820312);
		glVertex3f( -0.351562, 0.242188, 0.828125);
	glEnd();

	glNormal3f( -0.062357, 0.025982, 0.997716 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.351562, 0.242188, 0.828125);
		glVertex3f( 0.265625, 0.335938, 0.820312);
		glVertex3f( 0.226562, 0.242188, 0.820312);
	glEnd();

	glNormal3f( 0.062357, 0.025982, 0.997716 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.226562, 0.242188, 0.820312);
		glVertex3f( -0.265625, 0.335938, 0.820312);
		glVertex3f( -0.351562, 0.242188, 0.828125);
	glEnd();

	glNormal3f( 0.099561, 0.172922, 0.979891 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.351562, 0.242188, 0.828125);
		glVertex3f( 0.351562, 0.375000, 0.804688);
		glVertex3f( 0.265625, 0.335938, 0.820312);
	glEnd();

	glNormal3f( -0.099561, 0.172922, 0.979891 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.265625, 0.335938, 0.820312);
		glVertex3f( -0.351562, 0.375000, 0.804688);
		glVertex3f( -0.351562, 0.242188, 0.828125);
	glEnd();

	glNormal3f( 0.303571, 0.165584, 0.938310 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.351562, 0.242188, 0.828125);
		glVertex3f( 0.445312, 0.335938, 0.781250);
		glVertex3f( 0.351562, 0.375000, 0.804688);
	glEnd();

	glNormal3f( -0.303571, 0.165584, 0.938310 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.351562, 0.375000, 0.804688);
		glVertex3f( -0.445312, 0.335938, 0.781250);
		glVertex3f( -0.351562, 0.242188, 0.828125);
	glEnd();

	glNormal3f( 0.400163, 0.057166, 0.914659 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.351562, 0.242188, 0.828125);
		glVertex3f( 0.476562, 0.242188, 0.773438);
		glVertex3f( 0.445312, 0.335938, 0.781250);
	glEnd();

	glNormal3f( -0.400163, 0.057166, 0.914659 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.445312, 0.335938, 0.781250);
		glVertex3f( -0.476562, 0.242188, 0.773438);
		glVertex3f( -0.351562, 0.242188, 0.828125);
	glEnd();

	glNormal3f( 0.020542, -0.611088, 0.791296 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.148618, -0.908363, 0.600169);
		glVertex3f( 0.145101, -0.875598, 0.625564);
		glVertex3f( 0.000000, -0.941904, 0.578125);
	glEnd();

	glNormal3f( -0.119729, -0.737520, 0.664628 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.869588, 0.658372);
		glVertex3f( -0.145101, -0.875598, 0.625564);
		glVertex3f( 0.000000, -0.941904, 0.578125);
	glEnd();

	glNormal3f( 0.483572, -0.727242, 0.487111 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.285838, -0.850421, 0.523438);
		glVertex3f( 0.234375, -0.818374, 0.622373);
		glVertex3f( 0.145101, -0.875598, 0.625564);
	glEnd();

	glNormal3f( -0.483572, -0.727242, 0.487111 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.145101, -0.875598, 0.625564);
		glVertex3f( -0.234375, -0.818374, 0.622373);
		glVertex3f( -0.285838, -0.850421, 0.523438);
	glEnd();

	glNormal3f( 0.596115, -0.312362, 0.739646 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.340562, -0.727487, 0.531250);
		glVertex3f( 0.235353, -0.613780, 0.664062);
		glVertex3f( 0.285838, -0.850421, 0.523438);
	glEnd();

	glNormal3f( -0.868387, -0.102994, 0.485073 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.234375, -0.818374, 0.622373);
		glVertex3f( -0.235353, -0.613780, 0.664062);
		glVertex3f( -0.285838, -0.850421, 0.523438);
	glEnd();

	glNormal3f( 0.723420, -0.156307, 0.672482 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.337997, -0.571298, 0.570312);
		glVertex3f( 0.234668, -0.540117, 0.688716);
		glVertex3f( 0.340562, -0.727487, 0.531250);
	glEnd();

	glNormal3f( -0.654186, -0.234565, 0.719041 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.235353, -0.613780, 0.664062);
		glVertex3f( -0.234668, -0.540117, 0.688716);
		glVertex3f( -0.340562, -0.727487, 0.531250);
	glEnd();

	glNormal3f( 0.781245, 0.148877, 0.606211 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.325860, -0.507610, 0.570312);
		glVertex3f( 0.223372, -0.494990, 0.699293);
		glVertex3f( 0.337997, -0.571298, 0.570312);
	glEnd();

	glNormal3f( -0.784336, 0.051423, 0.618202 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.223372, -0.494990, 0.699293);
		glVertex3f( -0.210938, -0.445312, 0.710938);
		glVertex3f( -0.325860, -0.507610, 0.570312);
	glEnd();

	glNormal3f( 0.409296, -0.476121, 0.778322 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.471425, -0.187500, 0.562500);
		glVertex3f( 0.622254, -0.108926, 0.531250);
		glVertex3f( 0.146892, -0.101562, 0.785732);
	glEnd();

	glNormal3f( -0.446706, -0.299423, 0.843089 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.398438, -0.046875, 0.671875);
		glVertex3f( -0.622254, -0.108926, 0.531250);
		glVertex3f( -0.146892, -0.101562, 0.785732);
	glEnd();

	glNormal3f( 0.436294, -0.326515, 0.838472 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.622254, -0.108926, 0.531250);
		glVertex3f( 0.682918, -0.007803, 0.539062);
		glVertex3f( 0.398438, -0.046875, 0.671875);
	glEnd();

	glNormal3f( -0.412953, -0.556791, 0.720732 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.617188, 0.054688, 0.625000);
		glVertex3f( -0.682918, -0.007803, 0.539062);
		glVertex3f( -0.398438, -0.046875, 0.671875);
	glEnd();

	glNormal3f( 0.807114, 0.038802, 0.589118 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.682918, -0.007803, 0.539062);
		glVertex3f( 0.743836, 0.148438, 0.445312);
		glVertex3f( 0.617188, 0.054688, 0.625000);
	glEnd();

	glNormal3f( -0.793892, -0.541206, 0.277186 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.726562, 0.203125, 0.601562);
		glVertex3f( -0.743836, 0.148438, 0.445312);
		glVertex3f( -0.617188, 0.054688, 0.625000);
	glEnd();

	glNormal3f( 0.948160, 0.157321, 0.276123 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.775987, 0.312053, 0.531665);
		glVertex3f( 0.738388, 0.429688, 0.593750);
		glVertex3f( 0.729261, 0.375000, 0.656250);
	glEnd();

	glNormal3f( -0.854887, -0.363410, 0.370272 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.728132, 0.303112, 0.633377);
		glVertex3f( -0.775987, 0.312053, 0.531665);
		glVertex3f( -0.743836, 0.148438, 0.445312);
	glEnd();

	glNormal3f( 0.610030, 0.550037, 0.570370 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.738388, 0.429688, 0.593750);
		glVertex3f( 0.688381, 0.484375, 0.594497);
		glVertex3f( 0.729261, 0.375000, 0.656250);
	glEnd();

	glNormal3f( -0.284962, 0.549816, 0.785174 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.660410, 0.415876, 0.652615);
		glVertex3f( -0.688381, 0.484375, 0.594497);
		glVertex3f( -0.729261, 0.375000, 0.656250);
	glEnd();

	glNormal3f( 0.489474, 0.439265, 0.753300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.688381, 0.484375, 0.594497);
		glVertex3f( 0.492188, 0.601562, 0.653644);
		glVertex3f( 0.660410, 0.415876, 0.652615);
	glEnd();

	glNormal3f( -0.444775, 0.398499, 0.802106 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.468661, 0.531378, 0.701558);
		glVertex3f( -0.492188, 0.601562, 0.653644);
		glVertex3f( -0.660410, 0.415876, 0.652615);
	glEnd();

	glNormal3f( 0.057711, 0.611141, 0.789415 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.492188, 0.601562, 0.653644);
		glVertex3f( 0.320312, 0.618205, 0.653325);
		glVertex3f( 0.330258, 0.542119, 0.711501);
	glEnd();

	glNormal3f( -0.057711, 0.611141, 0.789415 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.330258, 0.542119, 0.711501);
		glVertex3f( -0.320312, 0.618205, 0.653325);
		glVertex3f( -0.492188, 0.601562, 0.653644);
	glEnd();

	glNormal3f( 0.045469, 0.610519, 0.790695 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.320312, 0.618205, 0.653325);
		glVertex3f( 0.176552, 0.598552, 0.676767);
		glVertex3f( 0.330258, 0.542119, 0.711501);
	glEnd();

	glNormal3f( -0.170994, 0.810530, 0.560181 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.191359, 0.555589, 0.734410);
		glVertex3f( -0.176552, 0.598552, 0.676767);
		glVertex3f( -0.330258, 0.542119, 0.711501);
	glEnd();

	glNormal3f( 0.514386, 0.060847, 0.855398 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.176552, 0.598552, 0.676767);
		glVertex3f( 0.062500, 0.533188, 0.750000);
		glVertex3f( 0.101562, 0.429688, 0.733872);
	glEnd();

	glNormal3f( -0.514385, 0.060847, 0.855398 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.101562, 0.429688, 0.733872);
		glVertex3f( -0.062500, 0.533188, 0.750000);
		glVertex3f( -0.176552, 0.598552, 0.676767);
	glEnd();

	glNormal3f( -0.140679, 0.183589, 0.972885 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.062500, 0.533188, 0.750000);
		glVertex3f( 0.000000, 0.526697, 0.742188);
		glVertex3f( 0.000000, 0.351562, 0.775236);
	glEnd();

	glNormal3f( 0.140678, 0.183589, 0.972885 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.351562, 0.775236);
		glVertex3f( 0.000000, 0.526697, 0.742188);
		glVertex3f( -0.062500, 0.533188, 0.750000);
	glEnd();

	glNormal3f( -0.284561, 0.648808, 0.705742 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.164062, 0.414062, 0.773438);
		glVertex3f( 0.250000, 0.468750, 0.757812);
		glVertex3f( 0.101562, 0.429688, 0.733872);
	glEnd();

	glNormal3f( 0.191730, 0.132594, 0.972450 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.191359, 0.555589, 0.734410);
		glVertex3f( -0.250000, 0.468750, 0.757812);
		glVertex3f( -0.101562, 0.429688, 0.733872);
	glEnd();

	glNormal3f( 0.149873, 0.350364, 0.924545 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.250000, 0.468750, 0.757812);
		glVertex3f( 0.328125, 0.476562, 0.742188);
		glVertex3f( 0.191359, 0.555589, 0.734410);
	glEnd();

	glNormal3f( -0.187027, 0.411464, 0.892030 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.330258, 0.542119, 0.711501);
		glVertex3f( -0.328125, 0.476562, 0.742188);
		glVertex3f( -0.191359, 0.555589, 0.734410);
	glEnd();

	glNormal3f( 0.250724, 0.072688, 0.965326 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.429688, 0.437500, 0.718750);
		glVertex3f( 0.468661, 0.531378, 0.701558);
		glVertex3f( 0.328125, 0.476562, 0.742188);
	glEnd();

	glNormal3f( -0.097385, 0.419327, 0.902597 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.330258, 0.542119, 0.711501);
		glVertex3f( -0.468661, 0.531378, 0.701558);
		glVertex3f( -0.328125, 0.476562, 0.742188);
	glEnd();

	glNormal3f( 0.264106, -0.111938, 0.957976 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.601562, 0.375000, 0.664062);
		glVertex3f( 0.660410, 0.415876, 0.652615);
		glVertex3f( 0.429688, 0.437500, 0.718750);
	glEnd();

	glNormal3f( -0.280182, 0.059140, 0.958123 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.468661, 0.531378, 0.701558);
		glVertex3f( -0.660410, 0.415876, 0.652615);
		glVertex3f( -0.429688, 0.437500, 0.718750);
	glEnd();

	glNormal3f( 0.060210, -0.166727, 0.984163 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.640625, 0.296875, 0.648438);
		glVertex3f( 0.729261, 0.375000, 0.656250);
		glVertex3f( 0.601562, 0.375000, 0.664062);
	glEnd();

	glNormal3f( -0.059974, 0.188198, 0.980298 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.660410, 0.415876, 0.652615);
		glVertex3f( -0.729261, 0.375000, 0.656250);
		glVertex3f( -0.601562, 0.375000, 0.664062);
	glEnd();

	glNormal3f( 0.306947, -0.292940, 0.905522 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.634090, 0.251128, 0.648438);
		glVertex3f( 0.728132, 0.303112, 0.633377);
		glVertex3f( 0.729261, 0.375000, 0.656250);
	glEnd();

	glNormal3f( -0.437471, -0.278881, 0.854894 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.728132, 0.303112, 0.633377);
		glVertex3f( -0.726562, 0.203125, 0.601562);
		glVertex3f( -0.625000, 0.187500, 0.648438);
	glEnd();

	glNormal3f( 0.343363, -0.105650, 0.933242 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.492188, 0.062500, 0.671875);
		glVertex3f( 0.617188, 0.054688, 0.625000);
		glVertex3f( 0.726562, 0.203125, 0.601562);
	glEnd();

	glNormal3f( -0.343363, -0.105650, 0.933242 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.726562, 0.203125, 0.601562);
		glVertex3f( -0.617188, 0.054688, 0.625000);
		glVertex3f( -0.492188, 0.062500, 0.671875);
	glEnd();

	glNormal3f( 0.357888, -0.306761, 0.881938 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.375000, 0.015625, 0.703125);
		glVertex3f( 0.398438, -0.046875, 0.671875);
		glVertex3f( 0.492188, 0.062500, 0.671875);
	glEnd();

	glNormal3f( -0.322277, -0.276237, 0.905445 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.617188, 0.054688, 0.625000);
		glVertex3f( -0.398438, -0.046875, 0.671875);
		glVertex3f( -0.492188, 0.062500, 0.671875);
	glEnd();

	glNormal3f( 0.276580, 0.132574, 0.951802 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.203125, 0.093750, 0.742188);
		glVertex3f( 0.146892, -0.101562, 0.785732);
		glVertex3f( 0.375000, 0.015625, 0.703125);
	glEnd();

	glNormal3f( -0.444627, -0.261597, 0.856664 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.398438, -0.046875, 0.671875);
		glVertex3f( -0.146892, -0.101562, 0.785732);
		glVertex3f( -0.375000, 0.015625, 0.703125);
	glEnd();

	glNormal3f( 0.326043, 0.115321, 0.938295 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.203125, 0.093750, 0.742188);
		glVertex3f( 0.164062, 0.140625, 0.750000);
		glVertex3f( 0.146892, -0.101562, 0.785732);
	glEnd();

	glNormal3f( 0.227498, 0.157899, 0.960892 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.046875, 0.726562);
		glVertex3f( -0.164062, 0.140625, 0.750000);
		glVertex3f( -0.146892, -0.101562, 0.785732);
	glEnd();

	glNormal3f( -0.255656, 0.690570, 0.676574 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.164062, 0.414062, 0.773438);
		glVertex3f( 0.101562, 0.429688, 0.733872);
		glVertex3f( 0.000000, 0.351562, 0.775236);
	glEnd();

	glNormal3f( 0.255656, 0.690570, 0.676574 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.351562, 0.775236);
		glVertex3f( -0.101562, 0.429688, 0.733872);
		glVertex3f( -0.164062, 0.414062, 0.773438);
	glEnd();

	glNormal3f( 0.046913, -0.079071, 0.995764 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.125000, 0.304688, 0.765625);
		glVertex3f( 0.000000, 0.351562, 0.775236);
		glVertex3f( 0.132812, 0.210938, 0.757812);
	glEnd();

	glNormal3f( -0.058586, -0.068071, 0.995959 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.210938, 0.765625);
		glVertex3f( 0.000000, 0.351562, 0.775236);
		glVertex3f( -0.132812, 0.210938, 0.757812);
	glEnd();

	glNormal3f( -0.062564, -0.137640, 0.988504 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.046875, 0.726562);
		glVertex3f( 0.164062, 0.140625, 0.750000);
		glVertex3f( 0.132812, 0.210938, 0.757812);
	glEnd();

	glNormal3f( 0.062564, -0.137640, 0.988504 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.132812, 0.210938, 0.757812);
		glVertex3f( -0.164062, 0.140625, 0.750000);
		glVertex3f( 0.000000, 0.046875, 0.726562);
	glEnd();

	glNormal3f( -0.096225, -0.707266, 0.700368 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.062500, -0.795292, 0.695312);
		glVertex3f( 0.000000, -0.794525, 0.687500);
		glVertex3f( 0.145101, -0.875598, 0.625564);
	glEnd();

	glNormal3f( -0.192159, -0.355021, 0.914896 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.869588, 0.658372);
		glVertex3f( 0.000000, -0.794525, 0.687500);
		glVertex3f( -0.145101, -0.875598, 0.625564);
	glEnd();

	glNormal3f( 0.205693, -0.683023, 0.700835 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.170613, -0.792491, 0.666311);
		glVertex3f( 0.062500, -0.795292, 0.695312);
		glVertex3f( 0.234375, -0.818374, 0.622373);
	glEnd();

	glNormal3f( -0.304086, -0.426900, 0.851638 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.145101, -0.875598, 0.625564);
		glVertex3f( -0.062500, -0.795292, 0.695312);
		glVertex3f( -0.234375, -0.818374, 0.622373);
	glEnd();

	glNormal3f( 0.493664, -0.214558, 0.842770 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.195077, -0.602474, 0.700357);
		glVertex3f( 0.170613, -0.792491, 0.666311);
		glVertex3f( 0.234375, -0.818374, 0.622373);
	glEnd();

	glNormal3f( -0.493664, -0.214558, 0.842770 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.234375, -0.818374, 0.622373);
		glVertex3f( -0.170613, -0.792491, 0.666311);
		glVertex3f( -0.195077, -0.602474, 0.700357);
	glEnd();

	glNormal3f( 0.276931, -0.153034, 0.948625 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.223372, -0.494990, 0.699293);
		glVertex3f( 0.098594, -0.457223, 0.741813);
		glVertex3f( 0.234668, -0.540117, 0.688716);
	glEnd();

	glNormal3f( -0.316302, -0.022692, 0.948387 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.098594, -0.457223, 0.741813);
		glVertex3f( -0.078125, -0.400351, 0.750000);
		glVertex3f( -0.223372, -0.494990, 0.699293);
	glEnd();

	glNormal3f( 0.681408, 0.329564, 0.653506 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.195077, -0.602474, 0.700357);
		glVertex3f( 0.235353, -0.613780, 0.664062);
		glVertex3f( 0.117188, -0.508885, 0.734375);
	glEnd();

	glNormal3f( -0.274203, -0.302916, 0.912718 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.234668, -0.540117, 0.688716);
		glVertex3f( -0.235353, -0.613780, 0.664062);
		glVertex3f( -0.117188, -0.508885, 0.734375);
	glEnd();

	glNormal3f( -0.048781, 0.107317, 0.993027 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.085938, -0.289062, 0.742188);
		glVertex3f( 0.000000, -0.328125, 0.742188);
		glVertex3f( 0.000000, -0.400416, 0.750000);
	glEnd();

	glNormal3f( 0.048781, 0.107317, 0.993027 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400416, 0.750000);
		glVertex3f( 0.000000, -0.328125, 0.742188);
		glVertex3f( -0.085938, -0.289062, 0.742188);
	glEnd();

	glNormal3f( 0.000120, -0.142451, 0.989802 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.098594, -0.457223, 0.741813);
		glVertex3f( 0.078125, -0.400351, 0.750000);
		glVertex3f( 0.000000, -0.400416, 0.750000);
	glEnd();

	glNormal3f( -0.001993, -0.141791, 0.989895 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.458609, 0.741813);
		glVertex3f( -0.098594, -0.457223, 0.741813);
		glVertex3f( -0.117188, -0.508885, 0.734375);
	glEnd();

	glNormal3f( 0.171789, 0.000000, 0.985134 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.572729, 0.734375);
		glVertex3f( 0.195077, -0.602474, 0.700357);
		glVertex3f( 0.000000, -0.511471, 0.734375);
	glEnd();

	glNormal3f( -0.007416, -0.336146, 0.941781 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.117188, -0.508885, 0.734375);
		glVertex3f( -0.195077, -0.602474, 0.700357);
		glVertex3f( 0.000000, -0.511471, 0.734375);
	glEnd();

	glNormal3f( 0.847337, -0.511933, -0.141223 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.125000, -0.226562, 0.750000);
		glVertex3f( 0.132812, -0.226562, 0.796875);
		glVertex3f( 0.085938, -0.289062, 0.742188);
	glEnd();

	glNormal3f( -0.744073, -0.658218, 0.114473 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.093750, -0.273438, 0.781250);
		glVertex3f( -0.132812, -0.226562, 0.796875);
		glVertex3f( -0.085938, -0.289062, 0.742188);
	glEnd();

	glNormal3f( 0.944759, 0.191904, -0.265713 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.101562, -0.148438, 0.742188);
		glVertex3f( 0.109375, -0.132812, 0.781250);
		glVertex3f( 0.132812, -0.226562, 0.796875);
	glEnd();

	glNormal3f( -0.944759, 0.191904, -0.265713 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.132812, -0.226562, 0.796875);
		glVertex3f( -0.109375, -0.132812, 0.781250);
		glVertex3f( -0.101562, -0.148438, 0.742188);
	glEnd();

	glNormal3f( 0.098456, 0.886108, -0.452900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.140625, 0.742188);
		glVertex3f( 0.039062, -0.125000, 0.781250);
		glVertex3f( 0.109375, -0.132812, 0.781250);
	glEnd();

	glNormal3f( -0.098456, 0.886108, -0.452900 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.109375, -0.132812, 0.781250);
		glVertex3f( -0.039062, -0.125000, 0.781250);
		glVertex3f( 0.000000, -0.140625, 0.742188);
	glEnd();

	glNormal3f( -0.854358, 0.512615, -0.085436 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.195312, 0.750000);
		glVertex3f( 0.000000, -0.187500, 0.796875);
		glVertex3f( 0.039062, -0.125000, 0.781250);
	glEnd();

	glNormal3f( 0.854358, 0.512615, -0.085436 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.039062, -0.125000, 0.781250);
		glVertex3f( 0.000000, -0.187500, 0.796875);
		glVertex3f( 0.000000, -0.195312, 0.750000);
	glEnd();

	glNormal3f( 0.398334, -0.876334, 0.270867 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.328125, 0.742188);
		glVertex3f( 0.085938, -0.289062, 0.742188);
		glVertex3f( 0.093750, -0.273438, 0.781250);
	glEnd();

	glNormal3f( -0.398334, -0.876334, 0.270867 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.093750, -0.273438, 0.781250);
		glVertex3f( -0.085938, -0.289062, 0.742188);
		glVertex3f( 0.000000, -0.328125, 0.742188);
	glEnd();

	glNormal3f( 0.287348, -0.574696, 0.766261 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.320312, 0.781250);
		glVertex3f( 0.093750, -0.273438, 0.781250);
		glVertex3f( 0.078125, -0.250000, 0.804688);
	glEnd();

	glNormal3f( -0.287348, -0.574696, 0.766261 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.078125, -0.250000, 0.804688);
		glVertex3f( -0.093750, -0.273438, 0.781250);
		glVertex3f( 0.000000, -0.320312, 0.781250);
	glEnd();

	glNormal3f( -0.781404, 0.558146, 0.279073 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.187500, 0.796875);
		glVertex3f( 0.000000, -0.203125, 0.828125);
		glVertex3f( 0.039062, -0.125000, 0.781250);
	glEnd();

	glNormal3f( 0.520719, 0.615395, 0.591726 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.046875, -0.148438, 0.812500);
		glVertex3f( 0.000000, -0.203125, 0.828125);
		glVertex3f( -0.039062, -0.125000, 0.781250);
	glEnd();

	glNormal3f( 0.089712, 0.807410, 0.583130 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.039062, -0.125000, 0.781250);
		glVertex3f( 0.046875, -0.148438, 0.812500);
		glVertex3f( 0.109375, -0.132812, 0.781250);
	glEnd();

	glNormal3f( -0.127000, 0.762001, 0.635001 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.093750, -0.156250, 0.812500);
		glVertex3f( -0.046875, -0.148438, 0.812500);
		glVertex3f( -0.109375, -0.132812, 0.781250);
	glEnd();

	glNormal3f( 0.745356, 0.298142, 0.596285 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.109375, -0.132812, 0.781250);
		glVertex3f( 0.093750, -0.156250, 0.812500);
		glVertex3f( 0.109375, -0.226562, 0.828125);
	glEnd();

	glNormal3f( -0.745356, 0.298142, 0.596285 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.109375, -0.226562, 0.828125);
		glVertex3f( -0.093750, -0.156250, 0.812500);
		glVertex3f( -0.109375, -0.132812, 0.781250);
	glEnd();

	glNormal3f( 0.604551, -0.654931, 0.453413 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.132812, -0.226562, 0.796875);
		glVertex3f( 0.109375, -0.226562, 0.828125);
		glVertex3f( 0.093750, -0.273438, 0.781250);
	glEnd();

	glNormal3f( 0.000000, -0.707107, 0.707107 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.078125, -0.250000, 0.804688);
		glVertex3f( -0.109375, -0.226562, 0.828125);
		glVertex3f( -0.093750, -0.273438, 0.781250);
	glEnd();

	glNormal3f( 0.048634, 0.226961, 0.972689 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.203125, 0.828125);
		glVertex3f( 0.109375, -0.226562, 0.828125);
		glVertex3f( 0.093750, -0.156250, 0.812500);
	glEnd();

	glNormal3f( -0.048634, 0.226961, 0.972689 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.093750, -0.156250, 0.812500);
		glVertex3f( -0.109375, -0.226562, 0.828125);
		glVertex3f( 0.000000, -0.203125, 0.828125);
	glEnd();

	glNormal3f( -0.056293, -0.262700, 0.963234 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.203125, 0.828125);
		glVertex3f( 0.000000, -0.289062, 0.804688);
		glVertex3f( 0.109375, -0.226562, 0.828125);
	glEnd();

	glNormal3f( -0.428571, -0.857143, 0.285714 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.078125, -0.250000, 0.804688);
		glVertex3f( 0.000000, -0.289062, 0.804688);
		glVertex3f( -0.109375, -0.226562, 0.828125);
	glEnd();

	glNormal3f( 0.006388, 0.083044, 0.996525 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.140625, 0.742188);
		glVertex3f( 0.101562, -0.148438, 0.742188);
		glVertex3f( 0.000000, 0.046875, 0.726562);
	glEnd();

	glNormal3f( 0.547679, -0.220218, 0.807187 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.146892, -0.101562, 0.785732);
		glVertex3f( -0.101562, -0.148438, 0.742188);
		glVertex3f( 0.000000, 0.046875, 0.726562);
	glEnd();

	glNormal3f( -0.626523, -0.110808, 0.771485 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.101562, -0.148438, 0.742188);
		glVertex3f( 0.125000, -0.226562, 0.750000);
		glVertex3f( 0.146892, -0.101562, 0.785732);
	glEnd();

	glNormal3f( -0.605150, -0.314990, 0.731146 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.164062, -0.242188, 0.710938);
		glVertex3f( -0.125000, -0.226562, 0.750000);
		glVertex3f( -0.146892, -0.101562, 0.785732);
	glEnd();

	glNormal3f( 0.243483, -0.268670, 0.931951 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.125000, -0.226562, 0.750000);
		glVertex3f( 0.085938, -0.289062, 0.742188);
		glVertex3f( 0.179688, -0.312500, 0.710938);
	glEnd();

	glNormal3f( -0.243483, -0.268670, 0.931951 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.179688, -0.312500, 0.710938);
		glVertex3f( -0.085938, -0.289062, 0.742188);
		glVertex3f( -0.125000, -0.226562, 0.750000);
	glEnd();

	glNormal3f( 0.296221, 0.046177, 0.954002 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.085938, -0.289062, 0.742188);
		glVertex3f( 0.078125, -0.400351, 0.750000);
		glVertex3f( 0.210938, -0.445312, 0.710938);
	glEnd();

	glNormal3f( -0.296221, 0.046177, 0.954002 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.210938, -0.445312, 0.710938);
		glVertex3f( -0.078125, -0.400351, 0.750000);
		glVertex3f( -0.085938, -0.289062, 0.742188);
	glEnd();

	glNormal3f( 0.764402, -0.364498, 0.531818 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.312500, -0.437500, 0.570312);
		glVertex3f( 0.382976, -0.312500, 0.554688);
		glVertex3f( 0.210938, -0.445312, 0.710938);
	glEnd();

	glNormal3f( -0.603233, 0.141937, 0.784834 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.179688, -0.312500, 0.710938);
		glVertex3f( -0.382976, -0.312500, 0.554688);
		glVertex3f( -0.210938, -0.445312, 0.710938);
	glEnd();

	glNormal3f( 0.610506, 0.194825, 0.767675 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.382976, -0.312500, 0.554688);
		glVertex3f( 0.363031, -0.250000, 0.554688);
		glVertex3f( 0.164062, -0.242188, 0.710938);
	glEnd();

	glNormal3f( -0.610506, 0.194825, 0.767675 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.164062, -0.242188, 0.710938);
		glVertex3f( -0.363031, -0.250000, 0.554688);
		glVertex3f( -0.382976, -0.312500, 0.554688);
	glEnd();

	glNormal3f( 0.315930, -0.635936, 0.704112 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.471425, -0.187500, 0.562500);
		glVertex3f( 0.146892, -0.101562, 0.785732);
		glVertex3f( 0.363031, -0.250000, 0.554688);
	glEnd();

	glNormal3f( -0.575408, -0.328187, 0.749132 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.164062, -0.242188, 0.710938);
		glVertex3f( -0.146892, -0.101562, 0.785732);
		glVertex3f( -0.363031, -0.250000, 0.554688);
	glEnd();

	glNormal3f( 0.161295, -0.068156, 0.984550 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.195077, -0.602474, 0.700357);
		glVertex3f( 0.000000, -0.572729, 0.734375);
		glVertex3f( 0.123996, -0.625345, 0.710419);
	glEnd();

	glNormal3f( -0.036214, -0.342160, 0.938944 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.615607, 0.718750);
		glVertex3f( 0.000000, -0.572729, 0.734375);
		glVertex3f( -0.123996, -0.625345, 0.710419);
	glEnd();

	glNormal3f( 0.199450, -0.197643, 0.959769 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.170613, -0.792491, 0.666311);
		glVertex3f( 0.195077, -0.602474, 0.700357);
		glVertex3f( 0.123996, -0.625345, 0.710419);
	glEnd();

	glNormal3f( -0.199450, -0.197643, 0.959769 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.123996, -0.625345, 0.710419);
		glVertex3f( -0.195077, -0.602474, 0.700357);
		glVertex3f( -0.170613, -0.792491, 0.666311);
	glEnd();

	glNormal3f( 0.245554, 0.241769, 0.938750 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.062500, -0.795292, 0.695312);
		glVertex3f( 0.170613, -0.792491, 0.666311);
		glVertex3f( 0.046875, -0.749088, 0.687500);
	glEnd();

	glNormal3f( 0.164311, -0.769635, 0.616979 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.093750, -0.740307, 0.710938);
		glVertex3f( -0.170613, -0.792491, 0.666311);
		glVertex3f( -0.046875, -0.749088, 0.687500);
	glEnd();

	glNormal3f( -0.124035, 0.000000, 0.992278 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.794525, 0.687500);
		glVertex3f( 0.062500, -0.795292, 0.695312);
		glVertex3f( 0.000000, -0.749354, 0.687500);
	glEnd();

	glNormal3f( 0.000945, 0.166410, 0.986056 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.046875, -0.749088, 0.687500);
		glVertex3f( -0.062500, -0.795292, 0.695312);
		glVertex3f( 0.000000, -0.749354, 0.687500);
	glEnd();

	glNormal3f( -0.005249, 0.925652, 0.378341 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.749354, 0.687500);
		glVertex3f( 0.046875, -0.749088, 0.687500);
		glVertex3f( 0.046875, -0.726736, 0.632812);
	glEnd();

	glNormal3f( 0.005249, 0.925652, 0.378341 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.046875, -0.726736, 0.632812);
		glVertex3f( -0.046875, -0.749088, 0.687500);
		glVertex3f( 0.000000, -0.749354, 0.687500);
	glEnd();

	glNormal3f( -0.340867, 0.870228, 0.355687 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.046875, -0.749088, 0.687500);
		glVertex3f( 0.093750, -0.740307, 0.710938);
		glVertex3f( 0.046875, -0.726736, 0.632812);
	glEnd();

	glNormal3f( -0.029354, 0.987642, 0.153951 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.093750, -0.729347, 0.640625);
		glVertex3f( -0.093750, -0.740307, 0.710938);
		glVertex3f( -0.046875, -0.726736, 0.632812);
	glEnd();

	glNormal3f( -0.966285, 0.254403, 0.039656 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.093750, -0.740307, 0.710938);
		glVertex3f( 0.123996, -0.625345, 0.710419);
		glVertex3f( 0.093750, -0.729347, 0.640625);
	glEnd();

	glNormal3f( 0.828463, -0.125365, 0.545832 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.093750, -0.627301, 0.664062);
		glVertex3f( -0.123996, -0.625345, 0.710419);
		glVertex3f( -0.093750, -0.729347, 0.640625);
	glEnd();

	glNormal3f( -0.075754, -0.996430, 0.037258 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.123996, -0.625345, 0.710419);
		glVertex3f( 0.000000, -0.615607, 0.718750);
		glVertex3f( 0.000000, -0.617944, 0.656250);
	glEnd();

	glNormal3f( 0.075754, -0.996430, 0.037258 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.617944, 0.656250);
		glVertex3f( 0.000000, -0.615607, 0.718750);
		glVertex3f( -0.123996, -0.625345, 0.710419);
	glEnd();

	glNormal3f( -0.101331, -0.201880, 0.974154 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.617944, 0.656250);
		glVertex3f( 0.000000, -0.731039, 0.632812);
		glVertex3f( 0.093750, -0.627301, 0.664062);
	glEnd();

	glNormal3f( -0.028638, -0.311959, 0.949664 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.046875, -0.726736, 0.632812);
		glVertex3f( 0.000000, -0.731039, 0.632812);
		glVertex3f( -0.093750, -0.627301, 0.664062);
	glEnd();

	glNormal3f( -0.172290, -0.220501, 0.960050 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.093750, -0.627301, 0.664062);
		glVertex3f( 0.046875, -0.726736, 0.632812);
		glVertex3f( 0.093750, -0.729347, 0.640625);
	glEnd();

	glNormal3f( 0.172289, -0.220502, 0.960050 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.093750, -0.729347, 0.640625);
		glVertex3f( -0.046875, -0.726736, 0.632812);
		glVertex3f( -0.093750, -0.627301, 0.664062);
	glEnd();

	glNormal3f( -0.448143, -0.293016, 0.844577 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.132812, 0.210938, 0.757812);
		glVertex3f( 0.164062, 0.140625, 0.750000);
		glVertex3f( 0.171875, 0.218750, 0.781250);
	glEnd();

	glNormal3f( 0.598986, -0.245040, 0.762346 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.187500, 0.156250, 0.773438);
		glVertex3f( -0.164062, 0.140625, 0.750000);
		glVertex3f( -0.171875, 0.218750, 0.781250);
	glEnd();

	glNormal3f( -0.286864, -0.103271, 0.952389 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.125000, 0.304688, 0.765625);
		glVertex3f( 0.132812, 0.210938, 0.757812);
		glVertex3f( 0.179688, 0.296875, 0.781250);
	glEnd();

	glNormal3f( 0.521443, 0.052144, 0.851691 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.171875, 0.218750, 0.781250);
		glVertex3f( -0.132812, 0.210938, 0.757812);
		glVertex3f( -0.179688, 0.296875, 0.781250);
	glEnd();

	glNormal3f( -0.270910, 0.028025, 0.962197 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.164062, 0.414062, 0.773438);
		glVertex3f( 0.125000, 0.304688, 0.765625);
		glVertex3f( 0.179688, 0.296875, 0.781250);
	glEnd();

	glNormal3f( 0.270910, 0.028025, 0.962197 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.179688, 0.296875, 0.781250);
		glVertex3f( -0.125000, 0.304688, 0.765625);
		glVertex3f( -0.164062, 0.414062, 0.773438);
	glEnd();

	glNormal3f( -0.577350, -0.577350, 0.577350 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.164062, 0.140625, 0.750000);
		glVertex3f( 0.203125, 0.093750, 0.742188);
		glVertex3f( 0.226562, 0.109375, 0.781250);
	glEnd();

	glNormal3f( 0.577350, -0.577350, 0.577350 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.226562, 0.109375, 0.781250);
		glVertex3f( -0.203125, 0.093750, 0.742188);
		glVertex3f( -0.164062, 0.140625, 0.750000);
	glEnd();

	glNormal3f( -0.265483, -0.829636, 0.491144 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.203125, 0.093750, 0.742188);
		glVertex3f( 0.375000, 0.015625, 0.703125);
		glVertex3f( 0.226562, 0.109375, 0.781250);
	glEnd();

	glNormal3f( 0.000000, -0.640184, 0.768221 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.375000, 0.062500, 0.742188);
		glVertex3f( -0.375000, 0.015625, 0.703125);
		glVertex3f( -0.226562, 0.109375, 0.781250);
	glEnd();

	glNormal3f( 0.418605, -0.581395, 0.697674 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.375000, 0.015625, 0.703125);
		glVertex3f( 0.492188, 0.062500, 0.671875);
		glVertex3f( 0.375000, 0.062500, 0.742188);
	glEnd();

	glNormal3f( -0.397220, -0.635553, 0.662034 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.476562, 0.101562, 0.718750);
		glVertex3f( -0.492188, 0.062500, 0.671875);
		glVertex3f( -0.375000, 0.062500, 0.742188);
	glEnd();

	glNormal3f( 0.591414, -0.511493, 0.623382 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.492188, 0.062500, 0.671875);
		glVertex3f( 0.625000, 0.187500, 0.648438);
		glVertex3f( 0.476562, 0.101562, 0.718750);
	glEnd();

	glNormal3f( -0.516784, -0.214514, 0.828805 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.578125, 0.195312, 0.679688);
		glVertex3f( -0.625000, 0.187500, 0.648438);
		glVertex3f( -0.476562, 0.101562, 0.718750);
	glEnd();

	glNormal3f( 0.570790, -0.081542, 0.817037 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.634090, 0.251128, 0.648438);
		glVertex3f( 0.640625, 0.296875, 0.648438);
		glVertex3f( 0.582670, 0.249851, 0.684232);
	glEnd();

	glNormal3f( -0.569448, -0.115280, 0.813904 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.582670, 0.249851, 0.684232);
		glVertex3f( -0.634090, 0.251128, 0.648438);
		glVertex3f( -0.578125, 0.195312, 0.679688);
	glEnd();

	glNormal3f( 0.573167, 0.124602, 0.809910 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.640625, 0.296875, 0.648438);
		glVertex3f( 0.601562, 0.375000, 0.664062);
		glVertex3f( 0.562500, 0.351562, 0.695312);
	glEnd();

	glNormal3f( -0.573167, 0.124602, 0.809910 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.562500, 0.351562, 0.695312);
		glVertex3f( -0.601562, 0.375000, 0.664062);
		glVertex3f( -0.640625, 0.296875, 0.648438);
	glEnd();

	glNormal3f( 0.434745, 0.702281, 0.563736 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.601562, 0.375000, 0.664062);
		glVertex3f( 0.429688, 0.437500, 0.718750);
		glVertex3f( 0.421875, 0.398438, 0.773438);
	glEnd();

	glNormal3f( -0.434745, 0.702281, 0.563736 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.421875, 0.398438, 0.773438);
		glVertex3f( -0.429688, 0.437500, 0.718750);
		glVertex3f( -0.601562, 0.375000, 0.664062);
	glEnd();

	glNormal3f( 0.406303, 0.715093, 0.568824 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.429688, 0.437500, 0.718750);
		glVertex3f( 0.328125, 0.476562, 0.742188);
		glVertex3f( 0.421875, 0.398438, 0.773438);
	glEnd();

	glNormal3f( 0.061285, 0.306426, 0.949920 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.335938, 0.429688, 0.757812);
		glVertex3f( -0.328125, 0.476562, 0.742188);
		glVertex3f( -0.421875, 0.398438, 0.773438);
	glEnd();

	glNormal3f( 0.152410, 0.335302, 0.929701 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.328125, 0.476562, 0.742188);
		glVertex3f( 0.250000, 0.468750, 0.757812);
		glVertex3f( 0.335938, 0.429688, 0.757812);
	glEnd();

	glNormal3f( -0.177192, 0.389823, 0.903682 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.273438, 0.421875, 0.773438);
		glVertex3f( -0.250000, 0.468750, 0.757812);
		glVertex3f( -0.335938, 0.429688, 0.757812);
	glEnd();

	glNormal3f( -0.021878, 0.306290, 0.951687 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.250000, 0.468750, 0.757812);
		glVertex3f( 0.164062, 0.414062, 0.773438);
		glVertex3f( 0.273438, 0.421875, 0.773438);
	glEnd();

	glNormal3f( 0.012939, 0.181147, 0.983371 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.210938, 0.375000, 0.781250);
		glVertex3f( -0.164062, 0.414062, 0.773438);
		glVertex3f( -0.273438, 0.421875, 0.773438);
	glEnd();

	glNormal3f( 0.280430, -0.218112, 0.934765 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.273438, 0.421875, 0.773438);
		glVertex3f( 0.210938, 0.375000, 0.781250);
		glVertex3f( 0.281250, 0.398438, 0.765625);
	glEnd();

	glNormal3f( -0.355266, -0.573890, 0.737859 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.234375, 0.359375, 0.757812);
		glVertex3f( -0.210938, 0.375000, 0.781250);
		glVertex3f( -0.281250, 0.398438, 0.765625);
	glEnd();

	glNormal3f( 0.266679, -0.304776, 0.914327 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.335938, 0.429688, 0.757812);
		glVertex3f( 0.273438, 0.421875, 0.773438);
		glVertex3f( 0.335938, 0.406250, 0.750000);
	glEnd();

	glNormal3f( -0.296334, -0.211667, 0.931334 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.281250, 0.398438, 0.765625);
		glVertex3f( -0.273438, 0.421875, 0.773438);
		glVertex3f( -0.335938, 0.406250, 0.750000);
	glEnd();

	glNormal3f( -0.276289, -0.303918, 0.911755 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.421875, 0.398438, 0.773438);
		glVertex3f( 0.335938, 0.429688, 0.757812);
		glVertex3f( 0.335938, 0.406250, 0.750000);
	glEnd();

	glNormal3f( 0.276289, -0.303918, 0.911755 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.335938, 0.406250, 0.750000);
		glVertex3f( -0.335938, 0.429688, 0.757812);
		glVertex3f( -0.421875, 0.398438, 0.773438);
	glEnd();

	glNormal3f( -0.116248, -0.929981, 0.348743 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.562500, 0.351562, 0.695312);
		glVertex3f( 0.421875, 0.398438, 0.773438);
		glVertex3f( 0.414062, 0.390625, 0.750000);
	glEnd();

	glNormal3f( 0.116248, -0.929981, 0.348743 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.414062, 0.390625, 0.750000);
		glVertex3f( -0.421875, 0.398438, 0.773438);
		glVertex3f( -0.562500, 0.351562, 0.695312);
	glEnd();

	glNormal3f( -0.381000, -0.254000, 0.889001 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.585938, 0.289062, 0.687500);
		glVertex3f( 0.562500, 0.351562, 0.695312);
		glVertex3f( 0.554688, 0.281250, 0.671875);
	glEnd();

	glNormal3f( 0.320713, -0.267261, 0.908688 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.531250, 0.335938, 0.679688);
		glVertex3f( -0.562500, 0.351562, 0.695312);
		glVertex3f( -0.554688, 0.281250, 0.671875);
	glEnd();

	glNormal3f( -0.369892, -0.046501, 0.927910 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.582670, 0.249851, 0.684232);
		glVertex3f( 0.585938, 0.289062, 0.687500);
		glVertex3f( 0.551420, 0.251841, 0.671875);
	glEnd();

	glNormal3f( 0.369892, -0.046502, 0.927910 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.551420, 0.251841, 0.671875);
		glVertex3f( -0.582670, 0.249851, 0.684232);
		glVertex3f( -0.578125, 0.195312, 0.679688);
	glEnd();

	glNormal3f( -0.221581, 0.569780, 0.791361 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.476562, 0.101562, 0.718750);
		glVertex3f( 0.578125, 0.195312, 0.679688);
		glVertex3f( 0.460938, 0.117188, 0.703125);
	glEnd();

	glNormal3f( 0.053239, 0.359362, 0.931678 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.546875, 0.210938, 0.671875);
		glVertex3f( -0.578125, 0.195312, 0.679688);
		glVertex3f( -0.460938, 0.117188, 0.703125);
	glEnd();

	glNormal3f( -0.082761, 0.662085, 0.744845 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.375000, 0.062500, 0.742188);
		glVertex3f( 0.476562, 0.101562, 0.718750);
		glVertex3f( 0.460938, 0.117188, 0.703125);
	glEnd();

	glNormal3f( 0.082761, 0.662085, 0.744845 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.460938, 0.117188, 0.703125);
		glVertex3f( -0.476562, 0.101562, 0.718750);
		glVertex3f( -0.375000, 0.062500, 0.742188);
	glEnd();

	glNormal3f( 0.366677, 0.516064, 0.774096 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.226562, 0.109375, 0.781250);
		glVertex3f( 0.375000, 0.062500, 0.742188);
		glVertex3f( 0.375000, 0.085938, 0.726562);
	glEnd();

	glNormal3f( -0.366677, 0.516064, 0.774096 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.375000, 0.085938, 0.726562);
		glVertex3f( -0.375000, 0.062500, 0.742188);
		glVertex3f( -0.226562, 0.109375, 0.781250);
	glEnd();

	glNormal3f( 0.498784, 0.529958, 0.685828 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.187500, 0.156250, 0.773438);
		glVertex3f( 0.226562, 0.109375, 0.781250);
		glVertex3f( 0.203125, 0.171875, 0.750000);
	glEnd();

	glNormal3f( -0.498784, 0.529958, 0.685828 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.242188, 0.125000, 0.757812);
		glVertex3f( -0.226562, 0.109375, 0.781250);
		glVertex3f( -0.203125, 0.171875, 0.750000);
	glEnd();

	glNormal3f( 0.601445, -0.240578, 0.761831 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.210938, 0.375000, 0.781250);
		glVertex3f( 0.179688, 0.296875, 0.781250);
		glVertex3f( 0.234375, 0.359375, 0.757812);
	glEnd();

	glNormal3f( -0.738200, -0.461375, 0.492133 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.195312, 0.296875, 0.757812);
		glVertex3f( -0.179688, 0.296875, 0.781250);
		glVertex3f( -0.234375, 0.359375, 0.757812);
	glEnd();

	glNormal3f( 0.829185, -0.082919, 0.552790 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.179688, 0.296875, 0.781250);
		glVertex3f( 0.171875, 0.218750, 0.781250);
		glVertex3f( 0.195312, 0.296875, 0.757812);
	glEnd();

	glNormal3f( -0.806064, -0.065357, 0.588209 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.195312, 0.226562, 0.750000);
		glVertex3f( -0.171875, 0.218750, 0.781250);
		glVertex3f( -0.195312, 0.296875, 0.757812);
	glEnd();

	glNormal3f( 0.779987, 0.118180, 0.614535 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.171875, 0.218750, 0.781250);
		glVertex3f( 0.187500, 0.156250, 0.773438);
		glVertex3f( 0.195312, 0.226562, 0.750000);
	glEnd();

	glNormal3f( -0.790345, 0.112906, 0.602168 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.203125, 0.171875, 0.750000);
		glVertex3f( -0.187500, 0.156250, 0.773438);
		glVertex3f( -0.195312, 0.226562, 0.750000);
	glEnd();

	glNormal3f( -0.133240, 0.952258, 0.274686 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.526697, 0.742188);
		glVertex3f( 0.062500, 0.533188, 0.750000);
		glVertex3f( 0.109375, 0.580311, 0.609375);
	glEnd();

	glNormal3f( 0.133240, 0.952258, 0.274686 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.109375, 0.580311, 0.609375);
		glVertex3f( -0.062500, 0.533188, 0.750000);
		glVertex3f( 0.000000, 0.526697, 0.742188);
	glEnd();

	glNormal3f( -0.599613, 0.757723, -0.257526 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.062500, 0.533188, 0.750000);
		glVertex3f( 0.176552, 0.598552, 0.676767);
		glVertex3f( 0.195312, 0.593149, 0.617188);
	glEnd();

	glNormal3f( 0.599613, 0.757723, -0.257527 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.195312, 0.593149, 0.617188);
		glVertex3f( -0.176552, 0.598552, 0.676767);
		glVertex3f( -0.062500, 0.533188, 0.750000);
	glEnd();

	glNormal3f( -0.152327, 0.982102, -0.110779 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.176552, 0.598552, 0.676767);
		glVertex3f( 0.320312, 0.618205, 0.653325);
		glVertex3f( 0.335938, 0.613909, 0.593750);
	glEnd();

	glNormal3f( 0.152327, 0.982102, -0.110778 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.335938, 0.613909, 0.593750);
		glVertex3f( -0.320312, 0.618205, 0.653325);
		glVertex3f( -0.176552, 0.598552, 0.676767);
	glEnd();

	glNormal3f( 0.096298, 0.995006, 0.026263 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.320312, 0.618205, 0.653325);
		glVertex3f( 0.492188, 0.601562, 0.653644);
		glVertex3f( 0.484375, 0.604931, 0.554688);
	glEnd();

	glNormal3f( -0.096298, 0.995006, 0.026263 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.484375, 0.604931, 0.554688);
		glVertex3f( -0.492188, 0.601562, 0.653644);
		glVertex3f( -0.320312, 0.618205, 0.653325);
	glEnd();

	glNormal3f( 0.522438, 0.851435, 0.046007 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.492188, 0.601562, 0.653644);
		glVertex3f( 0.688381, 0.484375, 0.594497);
		glVertex3f( 0.679688, 0.495237, 0.492188);
	glEnd();

	glNormal3f( -0.522438, 0.851435, 0.046007 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.679688, 0.495237, 0.492188);
		glVertex3f( -0.688381, 0.484375, 0.594497);
		glVertex3f( -0.492188, 0.601562, 0.653644);
	glEnd();

	glNormal3f( 0.737975, 0.674571, 0.018626 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.688381, 0.484375, 0.594497);
		glVertex3f( 0.738388, 0.429688, 0.593750);
		glVertex3f( 0.763164, 0.406250, 0.460938);
	glEnd();

	glNormal3f( -0.737975, 0.674571, 0.018626 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.763164, 0.406250, 0.460938);
		glVertex3f( -0.738388, 0.429688, 0.593750);
		glVertex3f( -0.688381, 0.484375, 0.594497);
	glEnd();

	glNormal3f( 0.892823, -0.334584, 0.301530 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.775987, 0.312053, 0.531665);
		glVertex3f( 0.743836, 0.148438, 0.445312);
		glVertex3f( 0.773438, 0.164062, 0.375000);
	glEnd();

	glNormal3f( -0.931855, 0.349421, -0.097733 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.767461, 0.304954, 0.424994);
		glVertex3f( -0.775987, 0.312053, 0.531665);
		glVertex3f( -0.738388, 0.429688, 0.593750);
	glEnd();

	glNormal3f( 0.922950, -0.146196, 0.356077 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.743836, 0.148438, 0.445312);
		glVertex3f( 0.682918, -0.007803, 0.539062);
		glVertex3f( 0.773438, 0.164062, 0.375000);
	glEnd();

	glNormal3f( -0.742690, -0.623741, -0.243638 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.648466, 0.000000, 0.414062);
		glVertex3f( -0.682918, -0.007803, 0.539062);
		glVertex3f( -0.773438, 0.164062, 0.375000);
	glEnd();

	glNormal3f( 0.836633, -0.481765, -0.260667 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.682918, -0.007803, 0.539062);
		glVertex3f( 0.622254, -0.108926, 0.531250);
		glVertex3f( 0.648466, 0.000000, 0.414062);
	glEnd();

	glNormal3f( -0.895807, -0.407191, -0.178116 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.616725, -0.093750, 0.468750);
		glVertex3f( -0.622254, -0.108926, 0.531250);
		glVertex3f( -0.648466, 0.000000, 0.414062);
	glEnd();

	glNormal3f( 0.179901, -0.817364, -0.547314 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.529406, 0.143331);
		glVertex3f( 0.000000, -0.484375, 0.076081);
		glVertex3f( 0.284179, -0.435212, 0.096069);
	glEnd();

	glNormal3f( -0.088227, -0.827680, -0.554222 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.200769, -0.522227, 0.164570);
		glVertex3f( 0.000000, -0.529406, 0.143331);
		glVertex3f( 0.000000, -0.570312, 0.204420);
	glEnd();

	glNormal3f( 0.299228, -0.487585, -0.820197 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.804688, 0.343750);
		glVertex3f( 0.000000, -0.570312, 0.204420);
		glVertex3f( 0.140625, -0.757812, 0.367188);
	glEnd();

	glNormal3f( 0.056351, -0.678270, -0.732649 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.125000, -0.604867, 0.226796);
		glVertex3f( 0.000000, -0.570312, 0.204420);
		glVertex3f( -0.140625, -0.757812, 0.367188);
	glEnd();

	glNormal3f( 0.318619, -0.581626, -0.748461 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.955489, 0.460938);
		glVertex3f( 0.000000, -0.804688, 0.343750);
		glVertex3f( 0.140625, -0.757812, 0.367188);
	glEnd();

	glNormal3f( -0.318619, -0.581626, -0.748461 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.140625, -0.757812, 0.367188);
		glVertex3f( 0.000000, -0.804688, 0.343750);
		glVertex3f( 0.000000, -0.955489, 0.460938);
	glEnd();

	glNormal3f( 0.202799, -0.972706, 0.112761 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.148618, -0.908363, 0.600169);
		glVertex3f( 0.000000, -0.941904, 0.578125);
		glVertex3f( 0.000000, -0.955489, 0.460938);
	glEnd();

	glNormal3f( -0.202799, -0.972706, 0.112761 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.955489, 0.460938);
		glVertex3f( 0.000000, -0.941904, 0.578125);
		glVertex3f( -0.148618, -0.908363, 0.600169);
	glEnd();

	glNormal3f( 0.417996, -0.906250, 0.063170 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.285838, -0.850421, 0.523438);
		glVertex3f( 0.148618, -0.908363, 0.600169);
		glVertex3f( 0.257577, -0.868753, 0.447454);
	glEnd();

	glNormal3f( -0.487521, -0.864311, 0.123653 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.164062, -0.920833, 0.452116);
		glVertex3f( -0.148618, -0.908363, 0.600169);
		glVertex3f( -0.257577, -0.868753, 0.447454);
	glEnd();

	glNormal3f( 0.866601, -0.364076, -0.341251 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.340562, -0.727487, 0.531250);
		glVertex3f( 0.285838, -0.850421, 0.523438);
		glVertex3f( 0.289062, -0.710938, 0.382812);
	glEnd();

	glNormal3f( -0.916937, -0.293619, -0.270212 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.257577, -0.868753, 0.447454);
		glVertex3f( -0.285838, -0.850421, 0.523438);
		glVertex3f( -0.289062, -0.710938, 0.382812);
	glEnd();

	glNormal3f( 0.971290, -0.042589, 0.234057 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.337997, -0.571298, 0.570312);
		glVertex3f( 0.340562, -0.727487, 0.531250);
		glVertex3f( 0.385948, -0.542544, 0.376559);
	glEnd();

	glNormal3f( -0.811293, -0.479214, -0.334899 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.289062, -0.710938, 0.382812);
		glVertex3f( -0.340562, -0.727487, 0.531250);
		glVertex3f( -0.385948, -0.542544, 0.376559);
	glEnd();

	glNormal3f( 0.140549, -0.117374, -0.983092 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.289062, -0.710938, 0.382812);
		glVertex3f( 0.140625, -0.757812, 0.367188);
		glVertex3f( 0.385948, -0.542544, 0.376559);
	glEnd();

	glNormal3f( -0.510188, -0.552730, -0.658937 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.125000, -0.604867, 0.226796);
		glVertex3f( -0.140625, -0.757812, 0.367188);
		glVertex3f( -0.385948, -0.542544, 0.376559);
	glEnd();

	glNormal3f( 0.179922, -0.403379, -0.897170 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.289062, -0.710938, 0.382812);
		glVertex3f( 0.257577, -0.868753, 0.447454);
		glVertex3f( 0.164062, -0.920833, 0.452116);
	glEnd();

	glNormal3f( -0.179922, -0.403379, -0.897170 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.164062, -0.920833, 0.452116);
		glVertex3f( -0.257577, -0.868753, 0.447454);
		glVertex3f( -0.289062, -0.710938, 0.382812);
	glEnd();

	glNormal3f( 0.522150, -0.186352, -0.832245 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.460622, -0.429344, 0.398062);
		glVertex3f( 0.385948, -0.542544, 0.376559);
		glVertex3f( 0.125000, -0.604867, 0.226796);
	glEnd();

	glNormal3f( -0.694484, -0.306469, -0.650975 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.200769, -0.522227, 0.164570);
		glVertex3f( -0.460622, -0.429344, 0.398062);
		glVertex3f( -0.502621, -0.351562, 0.406250);
	glEnd();

	glNormal3f( 0.747146, 0.142379, 0.649231 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.325860, -0.507610, 0.570312);
		glVertex3f( 0.337997, -0.571298, 0.570312);
		glVertex3f( 0.460622, -0.429344, 0.398062);
	glEnd();

	glNormal3f( -0.786795, -0.467283, 0.403236 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.460622, -0.429344, 0.398062);
		glVertex3f( -0.325860, -0.507610, 0.570312);
		glVertex3f( -0.502621, -0.351562, 0.406250);
	glEnd();

	glNormal3f( 0.610236, 0.194739, 0.767912 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.382976, -0.312500, 0.554688);
		glVertex3f( 0.530301, -0.281250, 0.429688);
		glVertex3f( 0.363031, -0.250000, 0.554688);
	glEnd();

	glNormal3f( -0.400992, -0.605033, 0.687852 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.545809, -0.226562, 0.468750);
		glVertex3f( -0.530301, -0.281250, 0.429688);
		glVertex3f( -0.363031, -0.250000, 0.554688);
	glEnd();

	glNormal3f( 0.690285, -0.458361, 0.559831 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.312500, -0.437500, 0.570312);
		glVertex3f( 0.502621, -0.351562, 0.406250);
		glVertex3f( 0.530301, -0.281250, 0.429688);
	glEnd();

	glNormal3f( -0.690285, -0.458361, 0.559832 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.530301, -0.281250, 0.429688);
		glVertex3f( -0.502621, -0.351562, 0.406250);
		glVertex3f( -0.312500, -0.437500, 0.570312);
	glEnd();

	glNormal3f( 0.309645, -0.626438, 0.715329 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.471425, -0.187500, 0.562500);
		glVertex3f( 0.363031, -0.250000, 0.554688);
		glVertex3f( 0.533663, -0.192480, 0.531198);
	glEnd();

	glNormal3f( -0.337619, -0.797072, 0.500690 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.545809, -0.226562, 0.468750);
		glVertex3f( -0.363031, -0.250000, 0.554688);
		glVertex3f( -0.533663, -0.192480, 0.531198);
	glEnd();

	glNormal3f( 0.453574, 0.171572, 0.874548 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.471425, -0.187500, 0.562500);
		glVertex3f( 0.533663, -0.192480, 0.531198);
		glVertex3f( 0.616725, -0.093750, 0.468750);
	glEnd();

	glNormal3f( -0.453574, 0.171571, 0.874548 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.616725, -0.093750, 0.468750);
		glVertex3f( -0.533663, -0.192480, 0.531198);
		glVertex3f( -0.471425, -0.187500, 0.562500);
	glEnd();

	glNormal3f( 0.314317, -0.488737, -0.813843 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.070312, -0.803189);
		glVertex3f( 0.335938, 0.054688, -0.664062);
		glVertex3f( 0.343750, -0.148438, -0.539062);
	glEnd();

	glNormal3f( -0.314317, -0.488737, -0.813843 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.343750, -0.148438, -0.539062);
		glVertex3f( -0.335938, 0.054688, -0.664062);
		glVertex3f( 0.000000, 0.070312, -0.803189);
	glEnd();

	glNormal3f( 0.306947, -0.838396, -0.450418 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.288044, -0.513459);
		glVertex3f( 0.320567, -0.229578, -0.403829);
		glVertex3f( 0.296875, -0.312500, -0.265625);
	glEnd();

	glNormal3f( -0.290628, -0.841642, -0.455163 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.320567, -0.229578, -0.403829);
		glVertex3f( -0.343750, -0.148438, -0.539062);
		glVertex3f( 0.000000, -0.195312, -0.671875);
	glEnd();

	glNormal3f( 0.303469, -0.900443, -0.311623 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.382812, -0.351562);
		glVertex3f( 0.296875, -0.312500, -0.265625);
		glVertex3f( 0.372316, -0.390625, 0.033586);
	glEnd();

	glNormal3f( -0.303469, -0.900443, -0.311623 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.372316, -0.390625, 0.033586);
		glVertex3f( -0.296875, -0.312500, -0.265625);
		glVertex3f( 0.000000, -0.382812, -0.351562);
	glEnd();

	glNormal3f( 0.212627, -0.949328, -0.231441 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.460938, -0.020056);
		glVertex3f( 0.372316, -0.390625, 0.033586);
		glVertex3f( 0.000000, -0.484375, 0.076081);
	glEnd();

	glNormal3f( -0.183551, -0.903986, -0.386158 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.284179, -0.435212, 0.096069);
		glVertex3f( -0.372316, -0.390625, 0.033586);
		glVertex3f( 0.000000, -0.484375, 0.076081);
	glEnd();

	glNormal3f( 0.826945, -0.144410, -0.543423 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.502621, -0.351562, 0.406250);
		glVertex3f( 0.284179, -0.435212, 0.096069);
		glVertex3f( 0.530301, -0.281250, 0.429688);
	glEnd();

	glNormal3f( -0.479263, -0.876200, 0.050789 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.372316, -0.390625, 0.033586);
		glVertex3f( -0.284179, -0.435212, 0.096069);
		glVertex3f( -0.530301, -0.281250, 0.429688);
	glEnd();

	glNormal3f( 0.793709, -0.608118, -0.014794 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.773438, 0.164062, 0.375000);
		glVertex3f( 0.648466, 0.000000, 0.414062);
		glVertex3f( 0.821338, 0.234375, 0.054688);
	glEnd();

	glNormal3f( -0.924524, -0.270977, 0.268007 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.734375, -0.046875, 0.070312);
		glVertex3f( -0.648466, 0.000000, 0.414062);
		glVertex3f( -0.821338, 0.234375, 0.054688);
	glEnd();

	glNormal3f( 0.175685, 0.047424, -0.983303 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.505541, -0.782198);
		glVertex3f( 0.460938, 0.437500, -0.703125);
		glVertex3f( 0.000000, 0.070312, -0.803189);
	glEnd();

	glNormal3f( -0.365518, -0.211840, -0.906377 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.335938, 0.054688, -0.664062);
		glVertex3f( -0.460938, 0.437500, -0.703125);
		glVertex3f( 0.000000, 0.070312, -0.803189);
	glEnd();

	glNormal3f( 0.235730, 0.946248, 0.221462 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.898438, 0.289062);
		glVertex3f( 0.453125, 0.798354, 0.234375);
		glVertex3f( 0.000000, 0.984375, -0.078125);
	glEnd();

	glNormal3f( -0.103449, 0.913394, 0.393713 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.453125, 0.929688, -0.070312);
		glVertex3f( -0.453125, 0.798354, 0.234375);
		glVertex3f( 0.000000, 0.984375, -0.078125);
	glEnd();

	glNormal3f( 0.126510, 0.975704, -0.178879 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.940939, -0.315046);
		glVertex3f( 0.453125, 0.898098, -0.228260);
		glVertex3f( 0.000000, 0.898438, -0.546875);
	glEnd();

	glNormal3f( -0.129181, 0.972364, -0.194473 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.453125, 0.898098, -0.228260);
		glVertex3f( -0.453125, 0.929688, -0.070312);
		glVertex3f( 0.000000, 0.940939, -0.315046);
	glEnd();

	glNormal3f( 0.345814, 0.564825, -0.749257 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.757930, -0.674312);
		glVertex3f( 0.456393, 0.687469, -0.516785);
		glVertex3f( 0.460938, 0.437500, -0.703125);
	glEnd();

	glNormal3f( -0.345813, 0.564824, -0.749257 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.456393, 0.687469, -0.516785);
		glVertex3f( -0.453125, 0.867188, -0.382812);
		glVertex3f( 0.000000, 0.757930, -0.674312);
	glEnd();

	glNormal3f( 0.743522, 0.660259, 0.105989 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.679688, 0.495237, 0.492188);
		glVertex3f( 0.763164, 0.406250, 0.460938);
		glVertex3f( 0.632812, 0.581885, 0.281250);
	glEnd();

	glNormal3f( -0.845553, 0.524258, -0.100961 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.726562, 0.438318, 0.320916);
		glVertex3f( -0.763164, 0.406250, 0.460938);
		glVertex3f( -0.632812, 0.581885, 0.281250);
	glEnd();

	glNormal3f( 0.743814, 0.578305, 0.335117 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.632812, 0.581885, 0.281250);
		glVertex3f( 0.726562, 0.438318, 0.320916);
		glVertex3f( 0.640625, 0.703125, 0.054688);
	glEnd();

	glNormal3f( -0.455936, 0.700250, 0.549337 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.771888, 0.562500, 0.125000);
		glVertex3f( -0.726562, 0.438318, 0.320916);
		glVertex3f( -0.640625, 0.703125, 0.054688);
	glEnd();

	glNormal3f( 0.690367, 0.711068, 0.133325 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.640625, 0.703125, 0.054688);
		glVertex3f( 0.771888, 0.562500, 0.125000);
		glVertex3f( 0.640625, 0.750000, -0.195312);
	glEnd();

	glNormal3f( -0.557602, 0.795509, 0.237160 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.796875, 0.617188, -0.117188);
		glVertex3f( -0.771888, 0.562500, 0.125000);
		glVertex3f( -0.640625, 0.750000, -0.195312);
	glEnd();

	glNormal3f( 0.701669, 0.685891, -0.192907 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.640625, 0.714462, -0.321671);
		glVertex3f( 0.796875, 0.577701, -0.239597);
		glVertex3f( 0.640625, 0.679688, -0.445312);
	glEnd();

	glNormal3f( -0.705070, 0.674893, -0.217707 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.796875, 0.577701, -0.239597);
		glVertex3f( -0.796875, 0.617188, -0.117188);
		glVertex3f( -0.640625, 0.714462, -0.321671);
	glEnd();

	glNormal3f( 0.669067, 0.237138, -0.704355 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.787072, 0.424696, -0.392051);
		glVertex3f( 0.630822, 0.532645, -0.504130);
		glVertex3f( 0.640625, 0.679688, -0.445312);
	glEnd();

	glNormal3f( -0.716578, 0.217340, -0.662781 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.630822, 0.532645, -0.504130);
		glVertex3f( -0.617188, 0.328125, -0.585938);
		glVertex3f( -0.773438, 0.265625, -0.437500);
	glEnd();

	glNormal3f( 0.510967, 0.519705, -0.684703 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.456393, 0.687469, -0.516785);
		glVertex3f( 0.453125, 0.867188, -0.382812);
		glVertex3f( 0.630822, 0.532645, -0.504130);
	glEnd();

	glNormal3f( -0.353776, 0.326946, -0.876327 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.630822, 0.532645, -0.504130);
		glVertex3f( -0.456393, 0.687469, -0.516785);
		glVertex3f( -0.617188, 0.328125, -0.585938);
	glEnd();

	glNormal3f( 0.653201, 0.742481, -0.148496 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.453125, 0.898098, -0.228260);
		glVertex3f( 0.453125, 0.929688, -0.070312);
		glVertex3f( 0.640625, 0.714462, -0.321671);
	glEnd();

	glNormal3f( -0.628450, 0.748798, -0.210600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.640625, 0.714462, -0.321671);
		glVertex3f( -0.453125, 0.898098, -0.228260);
		glVertex3f( -0.640625, 0.679688, -0.445312);
	glEnd();

	glNormal3f( 0.752888, 0.604392, 0.260519 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.453125, 0.929688, -0.070312);
		glVertex3f( 0.453125, 0.798354, 0.234375);
		glVertex3f( 0.640625, 0.750000, -0.195312);
	glEnd();

	glNormal3f( -0.559927, 0.814351, 0.152691 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.640625, 0.703125, 0.054688);
		glVertex3f( -0.453125, 0.798354, 0.234375);
		glVertex3f( -0.640625, 0.750000, -0.195312);
	glEnd();

	glNormal3f( 0.708598, 0.541457, 0.452452 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.453125, 0.798354, 0.234375);
		glVertex3f( 0.460938, 0.624923, 0.429688);
		glVertex3f( 0.640625, 0.703125, 0.054688);
	glEnd();

	glNormal3f( -0.539456, 0.734520, 0.411665 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.632812, 0.581885, 0.281250);
		glVertex3f( -0.460938, 0.624923, 0.429688);
		glVertex3f( -0.640625, 0.703125, 0.054688);
	glEnd();

	glNormal3f( 0.530100, 0.819240, 0.218721 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.484375, 0.604931, 0.554688);
		glVertex3f( 0.679688, 0.495237, 0.492188);
		glVertex3f( 0.632812, 0.581885, 0.281250);
	glEnd();

	glNormal3f( -0.530100, 0.819240, 0.218721 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.632812, 0.581885, 0.281250);
		glVertex3f( -0.679688, 0.495237, 0.492188);
		glVertex3f( -0.484375, 0.604931, 0.554688);
	glEnd();

	glNormal3f( 0.179781, 0.739128, 0.649129 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.613537, 0.570312);
		glVertex3f( 0.460938, 0.624923, 0.429688);
		glVertex3f( 0.453125, 0.798354, 0.234375);
	glEnd();

	glNormal3f( -0.179781, 0.739128, 0.649129 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.453125, 0.798354, 0.234375);
		glVertex3f( -0.460938, 0.624923, 0.429688);
		glVertex3f( 0.000000, 0.613537, 0.570312);
	glEnd();

	glNormal3f( -0.109850, 0.937070, -0.331410 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.109375, 0.580311, 0.609375);
		glVertex3f( 0.195312, 0.593149, 0.617188);
		glVertex3f( 0.484375, 0.604931, 0.554688);
	glEnd();

	glNormal3f( 0.208610, 0.411381, -0.887270 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.335938, 0.613909, 0.593750);
		glVertex3f( -0.195312, 0.593149, 0.617188);
		glVertex3f( -0.484375, 0.604931, 0.554688);
	glEnd();

	glNormal3f( 0.033397, 0.805516, 0.591632 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.109375, 0.580311, 0.609375);
		glVertex3f( 0.484375, 0.604931, 0.554688);
		glVertex3f( 0.000000, 0.613537, 0.570312);
	glEnd();

	glNormal3f( -0.022512, 0.987850, 0.153774 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.460938, 0.624923, 0.429688);
		glVertex3f( -0.484375, 0.604931, 0.554688);
		glVertex3f( 0.000000, 0.613537, 0.570312);
	glEnd();

	glNormal3f( -0.052755, 0.682922, 0.728584 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.580197, 0.601562);
		glVertex3f( 0.109375, 0.580311, 0.609375);
		glVertex3f( 0.000000, 0.613537, 0.570312);
	glEnd();

	glNormal3f( 0.052755, 0.682922, 0.728584 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.613537, 0.570312);
		glVertex3f( -0.109375, 0.580311, 0.609375);
		glVertex3f( 0.000000, 0.580197, 0.601562);
	glEnd();

	glNormal3f( 0.989267, -0.009771, 0.145795 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.767461, 0.304954, 0.424994);
		glVertex3f( 0.773438, 0.164062, 0.375000);
		glVertex3f( 0.821338, 0.234375, 0.054688);
	glEnd();

	glNormal3f( -0.999146, 0.041192, 0.003355 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.766203, 0.353018, 0.209565);
		glVertex3f( -0.767461, 0.304954, 0.424994);
		glVertex3f( -0.763164, 0.406250, 0.460938);
	glEnd();

	glNormal3f( 0.958418, 0.093380, 0.269659 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.766203, 0.353018, 0.209565);
		glVertex3f( 0.799681, 0.461204, 0.053112);
		glVertex3f( 0.726562, 0.438318, 0.320916);
	glEnd();

	glNormal3f( -0.962207, 0.079081, 0.260582 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.799681, 0.461204, 0.053112);
		glVertex3f( -0.838339, 0.320312, -0.046875);
		glVertex3f( -0.766203, 0.353018, 0.209565);
	glEnd();

	glNormal3f( 0.973560, 0.217439, 0.070012 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.799681, 0.461204, 0.053112);
		glVertex3f( 0.806678, 0.496286, -0.153131);
		glVertex3f( 0.771888, 0.562500, 0.125000);
	glEnd();

	glNormal3f( -0.986677, 0.151522, 0.059245 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.806678, 0.496286, -0.153131);
		glVertex3f( -0.832661, 0.352117, -0.217146);
		glVertex3f( -0.799681, 0.461204, 0.053112);
	glEnd();

	glNormal3f( 0.999999, -0.000999, 0.000323 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.796768, 0.460102, -0.273889);
		glVertex3f( 0.796875, 0.577701, -0.239597);
		glVertex3f( 0.796875, 0.617188, -0.117188);
	glEnd();

	glNormal3f( -0.995807, -0.067814, -0.061396 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.796768, 0.460102, -0.273889);
		glVertex3f( -0.787072, 0.424696, -0.392051);
		glVertex3f( -0.773438, 0.265625, -0.437500);
	glEnd();

	glNormal3f( 0.620292, -0.706441, -0.340850 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.372316, -0.390625, 0.033586);
		glVertex3f( 0.296875, -0.312500, -0.265625);
		glVertex3f( 0.506644, -0.267260, 0.022357);
	glEnd();

	glNormal3f( -0.457226, -0.867302, -0.196801 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.463364, -0.237139, -0.210938);
		glVertex3f( -0.296875, -0.312500, -0.265625);
		glVertex3f( -0.506644, -0.267260, 0.022357);
	glEnd();

	glNormal3f( 0.702025, -0.678037, -0.217779 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.734375, -0.046875, 0.070312);
		glVertex3f( 0.506644, -0.267260, 0.022357);
		glVertex3f( 0.463364, -0.237139, -0.210938);
	glEnd();

	glNormal3f( -0.702025, -0.678036, -0.217779 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.463364, -0.237139, -0.210938);
		glVertex3f( -0.506644, -0.267260, 0.022357);
		glVertex3f( -0.734375, -0.046875, 0.070312);
	glEnd();

	glNormal3f( 0.927105, -0.364586, -0.086913 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.648466, 0.000000, 0.414062);
		glVertex3f( 0.616725, -0.093750, 0.468750);
		glVertex3f( 0.506644, -0.267260, 0.022357);
	glEnd();

	glNormal3f( -0.927105, -0.364586, -0.086913 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.506644, -0.267260, 0.022357);
		glVertex3f( -0.616725, -0.093750, 0.468750);
		glVertex3f( -0.648466, 0.000000, 0.414062);
	glEnd();

	glNormal3f( 0.881602, -0.470735, -0.034432 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.616725, -0.093750, 0.468750);
		glVertex3f( 0.545809, -0.226562, 0.468750);
		glVertex3f( 0.506644, -0.267260, 0.022357);
	glEnd();

	glNormal3f( -0.971188, -0.229480, -0.064288 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.530301, -0.281250, 0.429688);
		glVertex3f( -0.545809, -0.226562, 0.468750);
		glVertex3f( -0.506644, -0.267260, 0.022357);
	glEnd();

	glNormal3f( 0.672085, -0.737671, -0.064370 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.530301, -0.281250, 0.429688);
		glVertex3f( 0.372316, -0.390625, 0.033586);
		glVertex3f( 0.506644, -0.267260, 0.022357);
	glEnd();

	glNormal3f( -0.672084, -0.737671, -0.064370 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.506644, -0.267260, 0.022357);
		glVertex3f( -0.372316, -0.390625, 0.033586);
		glVertex3f( -0.530301, -0.281250, 0.429688);
	glEnd();

	glNormal3f( 0.810780, -0.432920, 0.393975 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.616725, -0.093750, 0.468750);
		glVertex3f( 0.533663, -0.192480, 0.531198);
		glVertex3f( 0.545809, -0.226562, 0.468750);
	glEnd();

	glNormal3f( -0.810780, -0.432920, 0.393976 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.545809, -0.226562, 0.468750);
		glVertex3f( -0.533663, -0.192480, 0.531198);
		glVertex3f( -0.616725, -0.093750, 0.468750);
	glEnd();

	glNormal3f( 0.538262, -0.284111, -0.793445 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.773438, 0.265625, -0.437500);
		glVertex3f( 0.640625, -0.007812, -0.429688);
		glVertex3f( 0.484375, 0.023438, -0.546875);
	glEnd();

	glNormal3f( -0.538262, -0.284111, -0.793445 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.484375, 0.023438, -0.546875);
		glVertex3f( -0.640625, -0.007812, -0.429688);
		glVertex3f( -0.773438, 0.265625, -0.437500);
	glEnd();

	glNormal3f( 0.431030, -0.297118, -0.852017 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.460938, 0.437500, -0.703125);
		glVertex3f( 0.617188, 0.328125, -0.585938);
		glVertex3f( 0.484375, 0.023438, -0.546875);
	glEnd();

	glNormal3f( -0.431030, -0.297118, -0.852017 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.484375, 0.023438, -0.546875);
		glVertex3f( -0.617188, 0.328125, -0.585938);
		glVertex3f( -0.460938, 0.437500, -0.703125);
	glEnd();

	glNormal3f( 0.374219, -0.707467, -0.599541 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.617442, -0.065770, -0.358552);
		glVertex3f( 0.477700, -0.120892, -0.380731);
		glVertex3f( 0.484375, 0.023438, -0.546875);
	glEnd();

	glNormal3f( -0.660257, -0.644536, -0.385531 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.477700, -0.120892, -0.380731);
		glVertex3f( -0.463364, -0.237139, -0.210938);
		glVertex3f( -0.669328, -0.094631, -0.096453);
	glEnd();

	glNormal3f( 0.744954, -0.620629, -0.244671 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.320567, -0.229578, -0.403829);
		glVertex3f( 0.343750, -0.148438, -0.539062);
		glVertex3f( 0.484375, 0.023438, -0.546875);
	glEnd();

	glNormal3f( -0.567127, -0.745522, -0.350091 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.477700, -0.120892, -0.380731);
		glVertex3f( -0.320567, -0.229578, -0.403829);
		glVertex3f( -0.296875, -0.312500, -0.265625);
	glEnd();

	glNormal3f( 0.497205, -0.440774, -0.747333 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.335938, 0.054688, -0.664062);
		glVertex3f( 0.484375, 0.023438, -0.546875);
		glVertex3f( 0.343750, -0.148438, -0.539062);
	glEnd();

	glNormal3f( -0.497205, -0.440774, -0.747333 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.343750, -0.148438, -0.539062);
		glVertex3f( -0.484375, 0.023438, -0.546875);
		glVertex3f( -0.335938, 0.054688, -0.664062);
	glEnd();

	glNormal3f( 0.493988, 0.036435, 0.868705 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.963939, 0.477951, 0.067966);
		glVertex3f( 0.866421, 0.400438, 0.126671);
		glVertex3f( 0.894511, 0.360700, 0.112364);
	glEnd();

	glNormal3f( 0.587769, -0.048885, 0.807550 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.963939, 0.477951, 0.067966);
		glVertex3f( 0.961053, 0.421007, 0.066620);
		glVertex3f( 1.087183, 0.462421, -0.022676);
	glEnd();

	glNormal3f( 0.582082, -0.079230, 0.809261 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.130067, 0.472328, -0.052551);
		glVertex3f( 1.087183, 0.462421, -0.022676);
		glVertex3f( 1.174512, 0.371115, -0.094430);
	glEnd();

	glNormal3f( 0.611296, -0.236617, 0.755202 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.174512, 0.371115, -0.094430);
		glVertex3f( 1.149134, 0.340076, -0.083612);
		glVertex3f( 1.104114, 0.151904, -0.106128);
	glEnd();

	glNormal3f( 0.633948, -0.276627, 0.722210 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.120881, 0.135158, -0.127260);
		glVertex3f( 1.104114, 0.151904, -0.106128);
		glVertex3f( 0.974438, -0.012987, -0.055458);
	glEnd();

	glNormal3f( 0.632108, -0.344314, 0.694181 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.974438, -0.012987, -0.055458);
		glVertex3f( 0.971552, 0.028111, -0.032446);
		glVertex3f( 0.786493, -0.094072, 0.075462);
	glEnd();

	glNormal3f( 0.523247, 0.367609, 0.768815 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.971552, 0.028111, -0.032446);
		glVertex3f( 0.968530, 0.067653, -0.049296);
		glVertex3f( 0.830332, -0.027971, 0.090483);
	glEnd();

	glNormal3f( 0.138036, 0.393235, 0.909017 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.104114, 0.151904, -0.106128);
		glVertex3f( 1.078910, 0.166800, -0.108744);
		glVertex3f( 0.971552, 0.028111, -0.032446);
	glEnd();

	glNormal3f( 0.214759, -0.224886, 0.950423 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.149134, 0.340076, -0.083612);
		glVertex3f( 1.070269, 0.302313, -0.074727);
		glVertex3f( 1.078910, 0.166800, -0.108744);
	glEnd();

	glNormal3f( -0.774134, -0.548980, 0.315179 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.087183, 0.462421, -0.022676);
		glVertex3f( 1.112499, 0.400908, -0.067637);
		glVertex3f( 1.149134, 0.340076, -0.083612);
	glEnd();

	glNormal3f( 0.520534, -0.533081, 0.666985 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.961053, 0.421007, 0.066620);
		glVertex3f( 0.956849, 0.365741, 0.025730);
		glVertex3f( 1.112499, 0.400908, -0.067637);
	glEnd();

	glNormal3f( 0.739234, -0.410977, 0.533508 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.961053, 0.421007, 0.066620);
		glVertex3f( 0.894511, 0.360700, 0.112364);
		glVertex3f( 0.903169, 0.320251, 0.069207);
	glEnd();

	glNormal3f( -0.711239, 0.489281, -0.504720 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.734375, -0.046875, 0.070312);
		glVertex3f( 0.632661, -0.123356, 0.139504);
		glVertex3f( 0.734383, 0.007661, 0.123170);
	glEnd();

	glNormal3f( -0.837003, -0.536279, 0.108766 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.762283, 0.037860, -0.158528);
		glVertex3f( -0.669328, -0.094631, -0.096453);
		glVertex3f( -0.726562, 0.000000, -0.070312);
	glEnd();

	glNormal3f( 0.414716, -0.454210, 0.788482 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.632661, -0.123356, 0.139504);
		glVertex3f( 0.786493, -0.094072, 0.075462);
		glVertex3f( 0.830332, -0.027971, 0.090483);
	glEnd();

	glNormal3f( 0.949665, -0.298857, -0.093914 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.821338, 0.234375, 0.054688);
		glVertex3f( 0.734375, -0.046875, 0.070312);
		glVertex3f( 0.838339, 0.320312, -0.046875);
	glEnd();

	glNormal3f( -0.935967, -0.315126, -0.157040 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.726562, 0.000000, -0.070312);
		glVertex3f( -0.734375, -0.046875, 0.070312);
		glVertex3f( -0.838339, 0.320312, -0.046875);
	glEnd();

	glNormal3f( 0.541457, -0.166547, 0.824067 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.813265, 0.324507, 0.146251);
		glVertex3f( 0.831378, 0.292818, 0.127946);
		glVertex3f( 0.866421, 0.400438, 0.126671);
	glEnd();

	glNormal3f( 0.413597, 0.338328, 0.845265 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.830332, -0.027971, 0.090483);
		glVertex3f( 0.863535, 0.023164, 0.053769);
		glVertex3f( 0.734383, 0.007661, 0.123170);
	glEnd();

	glNormal3f( 0.647612, -0.064185, 0.759262 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.821924, 0.059146, 0.052854);
		glVertex3f( 0.732019, 0.063403, 0.129898);
		glVertex3f( 0.734383, 0.007661, 0.123170);
	glEnd();

	glNormal3f( 0.390476, 0.352852, 0.850308 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.751177, 0.120776, 0.097292);
		glVertex3f( 0.732019, 0.063403, 0.129898);
		glVertex3f( 0.802629, 0.118706, 0.074523);
	glEnd();

	glNormal3f( 0.768816, -0.299291, 0.565108 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.815492, 0.194863, 0.085959);
		glVertex3f( 0.792789, 0.214288, 0.127134);
		glVertex3f( 0.732019, 0.063403, 0.129898);
	glEnd();

	glNormal3f( 0.731475, -0.365392, 0.575702 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.831378, 0.292818, 0.127946);
		glVertex3f( 0.792789, 0.214288, 0.127134);
		glVertex3f( 0.815492, 0.194863, 0.085959);
	glEnd();

	glNormal3f( 0.594677, -0.391954, 0.701948 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.894511, 0.360700, 0.112364);
		glVertex3f( 0.831378, 0.292818, 0.127946);
		glVertex3f( 0.861694, 0.259747, 0.083796);
	glEnd();

	glNormal3f( -0.897129, 0.440492, 0.033552 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.838339, 0.320312, -0.046875);
		glVertex3f( 0.792789, 0.214288, 0.127134);
		glVertex3f( 0.831378, 0.292818, 0.127946);
	glEnd();

	glNormal3f( -0.718811, -0.693220, 0.052509 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.848778, 0.317200, -0.230871);
		glVertex3f( -0.775016, 0.240381, -0.235270);
		glVertex3f( -0.838339, 0.320312, -0.046875);
	glEnd();

	glNormal3f( -0.939297, 0.333636, -0.080056 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.838339, 0.320312, -0.046875);
		glVertex3f( 0.726562, 0.000000, -0.070312);
		glVertex3f( 0.732019, 0.063403, 0.129898);
	glEnd();

	glNormal3f( -0.944208, -0.329342, -0.002044 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.759053, 0.093728, -0.163662);
		glVertex3f( -0.726562, 0.000000, -0.070312);
		glVertex3f( -0.838339, 0.320312, -0.046875);
	glEnd();

	glNormal3f( -0.997983, -0.047410, 0.042214 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.726562, 0.000000, -0.070312);
		glVertex3f( 0.734383, 0.007661, 0.123170);
		glVertex3f( 0.732019, 0.063403, 0.129898);
	glEnd();

	glNormal3f( -0.909114, 0.089940, 0.406722 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.759053, 0.093728, -0.163662);
		glVertex3f( -0.762283, 0.037860, -0.158528);
		glVertex3f( -0.726562, 0.000000, -0.070312);
	glEnd();

	glNormal3f( 0.773481, -0.587543, -0.237741 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.903169, 0.320251, 0.069207);
		glVertex3f( 0.861694, 0.259747, 0.083796);
		glVertex3f( 0.853422, 0.257194, 0.063193);
	glEnd();

	glNormal3f( 0.802066, -0.576353, -0.156548 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.861694, 0.259747, 0.083796);
		glVertex3f( 0.815492, 0.194863, 0.085959);
		glVertex3f( 0.814833, 0.199110, 0.066948);
	glEnd();

	glNormal3f( 0.730539, -0.660622, -0.172893 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.815492, 0.194863, 0.085959);
		glVertex3f( 0.751177, 0.120776, 0.097292);
		glVertex3f( 0.814833, 0.199110, 0.066948);
	glEnd();

	glNormal3f( -0.014815, 0.992214, -0.123663 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.751177, 0.120776, 0.097292);
		glVertex3f( 0.802629, 0.118706, 0.074523);
		glVertex3f( 0.801970, 0.116137, 0.053990);
	glEnd();

	glNormal3f( 0.954287, 0.297036, 0.033272 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.802629, 0.118706, 0.074523);
		glVertex3f( 0.821924, 0.059146, 0.052854);
		glVertex3f( 0.821265, 0.063393, 0.033843);
	glEnd();

	glNormal3f( 0.730539, -0.660621, -0.172894 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.821924, 0.059146, 0.052854);
		glVertex3f( 0.796198, 0.029511, 0.057387);
		glVertex3f( 0.821265, 0.063393, 0.033843);
	glEnd();

	glNormal3f( 0.101703, 0.979359, 0.174677 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.796198, 0.029511, 0.057387);
		glVertex3f( 0.863535, 0.023164, 0.053769);
		glVertex3f( 0.789107, 0.033165, 0.041032);
	glEnd();

	glNormal3f( 0.746720, -0.592768, 0.301719 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.956849, 0.365741, 0.025730);
		glVertex3f( 0.903169, 0.320251, 0.069207);
		glVertex3f( 0.961439, 0.357558, -0.001707);
	glEnd();

	glNormal3f( 0.388443, -0.863222, 0.322427 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.112499, 0.400908, -0.067637);
		glVertex3f( 0.956849, 0.365741, 0.025730);
		glVertex3f( 0.961439, 0.357558, -0.001707);
	glEnd();

	glNormal3f( -0.587216, 0.305419, -0.749597 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.070269, 0.302313, -0.074727);
		glVertex3f( 1.112499, 0.400908, -0.067637);
		glVertex3f( 1.129703, 0.305288, -0.120075);
	glEnd();

	glNormal3f( -0.860483, 0.071745, -0.504402 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.078910, 0.166800, -0.108744);
		glVertex3f( 1.070269, 0.302313, -0.074727);
		glVertex3f( 1.092296, 0.164809, -0.131863);
	glEnd();

	glNormal3f( -0.717484, 0.522691, -0.460447 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.968530, 0.067653, -0.049296);
		glVertex3f( 1.078910, 0.166800, -0.108744);
		glVertex3f( 1.092296, 0.164809, -0.131863);
	glEnd();

	glNormal3f( -0.180562, 0.956542, 0.228963 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.863535, 0.023164, 0.053769);
		glVertex3f( 0.968530, 0.067653, -0.049296);
		glVertex3f( 0.966689, 0.072509, -0.071032);
	glEnd();

	glNormal3f( 0.448938, -0.170799, 0.877087 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.801970, 0.116137, 0.053990);
		glVertex3f( 0.821265, 0.063393, 0.033843);
		glVertex3f( 0.889647, 0.112030, 0.008313);
	glEnd();

	glNormal3f( 0.488276, -0.152929, 0.859185 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.852240, 0.148754, 0.036108);
		glVertex3f( 0.889647, 0.112030, 0.008313);
		glVertex3f( 0.906578, 0.210444, 0.016208);
	glEnd();

	glNormal3f( 0.546699, -0.177453, 0.818310 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.906578, 0.210444, 0.016208);
		glVertex3f( 0.936372, 0.173735, -0.011657);
		glVertex3f( 0.948054, 0.270948, 0.001620);
	glEnd();

	glNormal3f( 0.451705, -0.209303, 0.867269 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.948054, 0.270948, 0.001620);
		glVertex3f( 0.979029, 0.233630, -0.023520);
		glVertex3f( 1.022868, 0.258838, -0.040269);
	glEnd();

	glNormal3f( 0.539603, 0.129031, 0.831973 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.961439, 0.357558, -0.001707);
		glVertex3f( 0.901329, 0.311475, 0.044426);
		glVertex3f( 0.996442, 0.310925, -0.017177);
	glEnd();

	glNormal3f( 0.554717, -0.184641, 0.811293 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.853422, 0.257194, 0.063193);
		glVertex3f( 0.906578, 0.210444, 0.016208);
		glVertex3f( 0.948054, 0.270948, 0.001620);
	glEnd();

	glNormal3f( 0.422565, -0.223960, 0.878226 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.853422, 0.257194, 0.063193);
		glVertex3f( 0.814833, 0.199110, 0.066948);
		glVertex3f( 0.852240, 0.148754, 0.036108);
	glEnd();

	glNormal3f( 0.405207, -0.128243, 0.905185 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.801970, 0.116137, 0.053990);
		glVertex3f( 0.852240, 0.148754, 0.036108);
		glVertex3f( 0.750518, 0.125022, 0.078282);
	glEnd();

	glNormal3f( 0.069145, 0.160607, 0.984593 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.789107, 0.033165, 0.041032);
		glVertex3f( 0.855263, 0.034242, 0.036211);
		glVertex3f( 0.821265, 0.063393, 0.033843);
	glEnd();

	glNormal3f( 0.633288, -0.241590, 0.735241 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.966689, 0.072509, -0.071032);
		glVertex3f( 0.936372, 0.173735, -0.011657);
		glVertex3f( 0.889647, 0.112030, 0.008313);
	glEnd();

	glNormal3f( 0.580117, -0.260293, 0.771824 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.092296, 0.164809, -0.131863);
		glVertex3f( 0.979029, 0.233630, -0.023520);
		glVertex3f( 0.936372, 0.173735, -0.011657);
	glEnd();

	glNormal3f( 0.644957, -0.232822, 0.727890 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.129703, 0.305288, -0.120075);
		glVertex3f( 1.022868, 0.258838, -0.040269);
		glVertex3f( 1.092296, 0.164809, -0.131863);
	glEnd();

	glNormal3f( 0.610264, -0.026022, 0.791771 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.073002, 0.387941, -0.073655);
		glVertex3f( 0.996442, 0.310925, -0.017177);
		glVertex3f( 1.129703, 0.305288, -0.120075);
	glEnd();

	glNormal3f( 0.518037, 0.107328, 0.848598 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.961439, 0.357558, -0.001707);
		glVertex3f( 0.996442, 0.310925, -0.017177);
		glVertex3f( 1.073002, 0.387941, -0.073655);
	glEnd();

	glNormal3f( -0.008062, -0.900318, -0.435158 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.961895, -0.010641, -0.082851);
		glVertex3f( 0.777465, -0.078581, 0.061131);
		glVertex3f( 0.949622, 0.002425, -0.109655);
	glEnd();

	glNormal3f( 0.623104, -0.748538, -0.226788 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.118939, 0.139696, -0.147575);
		glVertex3f( 0.961895, -0.010641, -0.082851);
		glVertex3f( 1.117038, 0.144136, -0.167452);
	glEnd();

	glNormal3f( 0.974052, -0.182468, -0.133896 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.166120, 0.363635, -0.109516);
		glVertex3f( 1.118939, 0.139696, -0.147575);
		glVertex3f( 1.117038, 0.144136, -0.167452);
	glEnd();

	glNormal3f( 0.579907, 0.554055, -0.597270 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.110367, 0.464489, -0.070093);
		glVertex3f( 1.166120, 0.363635, -0.109516);
		glVertex3f( 1.157909, 0.356316, -0.124278);
	glEnd();

	glNormal3f( -0.138599, 0.960658, -0.240679 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.950799, 0.467498, 0.033809);
		glVertex3f( 1.110367, 0.464489, -0.070093);
		glVertex3f( 0.937941, 0.457269, 0.000386);
	glEnd();

	glNormal3f( -0.429729, 0.870902, 0.238460 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.842070, 0.394751, 0.103555);
		glVertex3f( 0.950799, 0.467498, 0.033809);
		glVertex3f( 0.818242, 0.389187, 0.080936);
	glEnd();

	glNormal3f( -0.626930, 0.167951, -0.760757 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.937941, 0.457269, 0.000386);
		glVertex3f( 0.949622, 0.002425, -0.109655);
		glVertex3f( 0.768631, -0.063424, 0.024960);
	glEnd();

	glNormal3f( -0.486868, 0.193564, -0.851759 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.937941, 0.457269, 0.000386);
		glVertex3f( 1.091090, 0.456817, -0.087257);
		glVertex3f( 0.949622, 0.002425, -0.109655);
	glEnd();

	glNormal3f( -0.183779, 0.229867, -0.955712 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.091090, 0.456817, -0.087257);
		glVertex3f( 1.157909, 0.356316, -0.124278);
		glVertex3f( 1.117038, 0.144136, -0.167452);
	glEnd();

	glNormal3f( -0.923067, 0.384514, 0.009850 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.796620, 0.296535, -0.321586);
		glVertex3f( 0.813265, 0.324507, 0.146251);
		glVertex3f( 0.842070, 0.394751, 0.103555);
	glEnd();

	glNormal3f( 0.734577, 0.677202, -0.042348 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.851936, 0.358465, -0.290771);
		glVertex3f( -0.796620, 0.296535, -0.321586);
		glVertex3f( -0.825066, 0.325509, -0.351686);
	glEnd();

	glNormal3f( 0.899493, -0.436148, 0.026213 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.773438, 0.265625, -0.437500);
		glVertex3f( 0.818242, 0.389187, 0.080936);
		glVertex3f( 0.640625, -0.007812, -0.429688);
	glEnd();

	glNormal3f( -0.803750, -0.328696, -0.495929 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.767384, 0.020988, -0.243338);
		glVertex3f( -0.825066, 0.325509, -0.351686);
		glVertex3f( -0.640625, -0.007812, -0.429688);
	glEnd();

	glNormal3f( 0.721534, -0.632984, -0.280573 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.617442, -0.065770, -0.358552);
		glVertex3f( 0.640625, -0.007812, -0.429688);
		glVertex3f( 0.768631, -0.063424, 0.024960);
	glEnd();

	glNormal3f( -0.722810, -0.558416, -0.407083 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.753800, -0.000003, -0.206653);
		glVertex3f( -0.617442, -0.065770, -0.358552);
		glVertex3f( -0.757841, -0.022103, -0.169162);
	glEnd();

	glNormal3f( -0.995115, -0.093955, 0.030308 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.796875, 0.577701, -0.239597);
		glVertex3f( -0.796875, 0.539062, -0.359375);
		glVertex3f( -0.787072, 0.424696, -0.392051);
	glEnd();

	glNormal3f( 0.999301, 0.009631, -0.036129 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.796620, 0.296535, -0.321586);
		glVertex3f( 0.796768, 0.460102, -0.273889);
		glVertex3f( 0.813265, 0.324507, 0.146251);
	glEnd();

	glNormal3f( -0.992490, 0.046882, 0.112984 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.796875, 0.617188, -0.117188);
		glVertex3f( -0.806678, 0.496286, -0.153131);
		glVertex3f( -0.771888, 0.562500, 0.125000);
	glEnd();

	glNormal3f( -0.962045, -0.245296, -0.119577 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.838339, 0.320312, -0.046875);
		glVertex3f( 0.813265, 0.324507, 0.146251);
		glVertex3f( 0.806678, 0.496286, -0.153131);
	glEnd();

	glNormal3f( -0.960512, 0.073005, 0.268489 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.771888, 0.562500, 0.125000);
		glVertex3f( -0.799681, 0.461204, 0.053112);
		glVertex3f( -0.726562, 0.438318, 0.320916);
	glEnd();

	glNormal3f( 0.960189, 0.112328, 0.255774 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.821338, 0.234375, 0.054688);
		glVertex3f( 0.838339, 0.320312, -0.046875);
		glVertex3f( 0.766203, 0.353018, 0.209565);
	glEnd();

	glNormal3f( -0.989267, -0.009770, 0.145795 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.821338, 0.234375, 0.054688);
		glVertex3f( -0.773438, 0.164062, 0.375000);
		glVertex3f( -0.767461, 0.304954, 0.424994);
	glEnd();

	glNormal3f( 0.999146, 0.041191, 0.003355 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.763164, 0.406250, 0.460938);
		glVertex3f( 0.767461, 0.304954, 0.424994);
		glVertex3f( 0.766203, 0.353018, 0.209565);
	glEnd();

	glNormal3f( -0.058016, 0.367429, -0.928241 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.640625, 0.679688, -0.445312);
		glVertex3f( -0.453125, 0.867188, -0.382812);
		glVertex3f( -0.630822, 0.532645, -0.504130);
	glEnd();

	glNormal3f( 0.714499, 0.426452, -0.554643 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.460938, 0.437500, -0.703125);
		glVertex3f( 0.456393, 0.687469, -0.516785);
		glVertex3f( 0.617188, 0.328125, -0.585938);
	glEnd();

	glNormal3f( -0.669067, 0.237137, -0.704355 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.640625, 0.679688, -0.445312);
		glVertex3f( -0.630822, 0.532645, -0.504130);
		glVertex3f( -0.787072, 0.424696, -0.392051);
	glEnd();

	glNormal3f( 0.716578, 0.217340, -0.662781 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.773438, 0.265625, -0.437500);
		glVertex3f( 0.617188, 0.328125, -0.585938);
		glVertex3f( 0.630822, 0.532645, -0.504130);
	glEnd();

	glNormal3f( -0.345814, 0.564825, -0.749257 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.460938, 0.437500, -0.703125);
		glVertex3f( -0.456393, 0.687469, -0.516785);
		glVertex3f( 0.000000, 0.757930, -0.674312);
	glEnd();

	glNormal3f( 0.300033, 0.640864, -0.706593 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.898438, -0.546875);
		glVertex3f( 0.453125, 0.867188, -0.382812);
		glVertex3f( 0.000000, 0.757930, -0.674312);
	glEnd();

	glNormal3f( -0.892823, -0.334584, 0.301530 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.773438, 0.164062, 0.375000);
		glVertex3f( -0.743836, 0.148438, 0.445312);
		glVertex3f( -0.775987, 0.312053, 0.531665);
	glEnd();

	glNormal3f( 0.931855, 0.349421, -0.097733 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.738388, 0.429688, 0.593750);
		glVertex3f( 0.775987, 0.312053, 0.531665);
		glVertex3f( 0.767461, 0.304954, 0.424994);
	glEnd();

	glNormal3f( 0.456760, 0.050751, 0.888141 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.554688, 0.281250, 0.671875);
		glVertex3f( -0.585938, 0.289062, 0.687500);
		glVertex3f( -0.551420, 0.251841, 0.671875);
	glEnd();

	glNormal3f( -0.369891, -0.046502, 0.927911 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.578125, 0.195312, 0.679688);
		glVertex3f( 0.582670, 0.249851, 0.684232);
		glVertex3f( 0.551420, 0.251841, 0.671875);
	glEnd();

	glNormal3f( -0.588226, -0.115715, 0.800375 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.585938, 0.289062, 0.687500);
		glVertex3f( -0.640625, 0.296875, 0.648438);
		glVertex3f( -0.582670, 0.249851, 0.684232);
	glEnd();

	glNormal3f( 0.544023, -0.077718, 0.835463 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.625000, 0.187500, 0.648438);
		glVertex3f( 0.634090, 0.251128, 0.648438);
		glVertex3f( 0.578125, 0.195312, 0.679688);
	glEnd();

	glNormal3f( -0.306947, -0.292940, 0.905522 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.729261, 0.375000, 0.656250);
		glVertex3f( -0.728132, 0.303112, 0.633377);
		glVertex3f( -0.634090, 0.251128, 0.648438);
	glEnd();

	glNormal3f( 0.437471, -0.278880, 0.854894 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.625000, 0.187500, 0.648438);
		glVertex3f( 0.726562, 0.203125, 0.601562);
		glVertex3f( 0.728132, 0.303112, 0.633377);
	glEnd();

	glNormal3f( -0.948159, 0.157321, 0.276123 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.729261, 0.375000, 0.656250);
		glVertex3f( -0.738388, 0.429688, 0.593750);
		glVertex3f( -0.775987, 0.312053, 0.531665);
	glEnd();

	glNormal3f( 0.854887, -0.363409, 0.370272 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.743836, 0.148438, 0.445312);
		glVertex3f( 0.775987, 0.312053, 0.531665);
		glVertex3f( 0.728132, 0.303112, 0.633377);
	glEnd();

	glNormal3f( -0.818257, -0.562392, 0.119043 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.385948, -0.542544, 0.376559);
		glVertex3f( -0.337997, -0.571298, 0.570312);
		glVertex3f( -0.460622, -0.429344, 0.398062);
	glEnd();

	glNormal3f( 0.617741, 0.117719, 0.777520 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.312500, -0.437500, 0.570312);
		glVertex3f( 0.325860, -0.507610, 0.570312);
		glVertex3f( 0.502621, -0.351562, 0.406250);
	glEnd();

	glNormal3f( -0.522150, -0.186352, -0.832245 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.125000, -0.604867, 0.226796);
		glVertex3f( -0.385948, -0.542544, 0.376559);
		glVertex3f( -0.460622, -0.429344, 0.398062);
	glEnd();

	glNormal3f( 0.694484, -0.306468, -0.650975 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.502621, -0.351562, 0.406250);
		glVertex3f( 0.460622, -0.429344, 0.398062);
		glVertex3f( 0.200769, -0.522227, 0.164570);
	glEnd();

	glNormal3f( -0.179901, -0.817364, -0.547314 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.284179, -0.435212, 0.096069);
		glVertex3f( 0.000000, -0.484375, 0.076081);
		glVertex3f( 0.000000, -0.529406, 0.143331);
	glEnd();

	glNormal3f( 0.088227, -0.827680, -0.554222 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.570312, 0.204420);
		glVertex3f( 0.000000, -0.529406, 0.143331);
		glVertex3f( 0.200769, -0.522227, 0.164570);
	glEnd();

	glNormal3f( -0.000120, -0.142451, 0.989802 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.400416, 0.750000);
		glVertex3f( -0.078125, -0.400351, 0.750000);
		glVertex3f( -0.098594, -0.457223, 0.741813);
	glEnd();

	glNormal3f( 0.001993, -0.141791, 0.989895 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.117188, -0.508885, 0.734375);
		glVertex3f( 0.098594, -0.457223, 0.741813);
		glVertex3f( 0.000000, -0.458609, 0.741813);
	glEnd();

	glNormal3f( -0.361281, -0.004211, 0.932447 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.117188, -0.508885, 0.734375);
		glVertex3f( -0.098594, -0.457223, 0.741813);
		glVertex3f( -0.234668, -0.540117, 0.688716);
	glEnd();

	glNormal3f( 0.225177, -0.168570, 0.959625 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.210938, -0.445312, 0.710938);
		glVertex3f( 0.078125, -0.400351, 0.750000);
		glVertex3f( 0.223372, -0.494990, 0.699293);
	glEnd();

	glNormal3f( -0.757726, 0.036953, 0.651526 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.234668, -0.540117, 0.688716);
		glVertex3f( -0.223372, -0.494990, 0.699293);
		glVertex3f( -0.337997, -0.571298, 0.570312);
	glEnd();

	glNormal3f( 0.797243, 0.151926, 0.584227 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.312500, -0.437500, 0.570312);
		glVertex3f( 0.210938, -0.445312, 0.710938);
		glVertex3f( 0.325860, -0.507610, 0.570312);
	glEnd();

	glNormal3f( 0.995807, -0.067814, -0.061396 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.773438, 0.265625, -0.437500);
		glVertex3f( 0.787072, 0.424696, -0.392051);
		glVertex3f( 0.796768, 0.460102, -0.273889);
	glEnd();

	glNormal3f( -0.999999, -0.001000, 0.000323 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.796875, 0.617188, -0.117188);
		glVertex3f( -0.796875, 0.577701, -0.239597);
		glVertex3f( -0.796768, 0.460102, -0.273889);
	glEnd();

	glNormal3f( -0.550636, -0.795944, -0.251540 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.767384, 0.020988, -0.243338);
		glVertex3f( -0.640625, -0.007812, -0.429688);
		glVertex3f( -0.753800, -0.000003, -0.206653);
	glEnd();

	glNormal3f( 0.138106, -0.983373, -0.117920 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.632661, -0.123356, 0.139504);
		glVertex3f( 0.617442, -0.065770, -0.358552);
		glVertex3f( 0.786493, -0.094072, 0.075462);
	glEnd();

	glNormal3f( 0.448064, 0.844072, -0.294585 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.879397, 0.361660, -0.260887);
		glVertex3f( -0.832661, 0.352117, -0.217146);
		glVertex3f( -0.796620, 0.296535, -0.321586);
	glEnd();

	glNormal3f( 0.236845, -0.949494, 0.205829 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.773438, 0.265625, -0.437500);
		glVertex3f( 0.796620, 0.296535, -0.321586);
		glVertex3f( 0.818242, 0.389187, 0.080936);
	glEnd();

	glNormal3f( -0.476913, 0.826499, 0.299086 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.866421, 0.400438, 0.126671);
		glVertex3f( 0.963939, 0.477951, 0.067966);
		glVertex3f( 0.842070, 0.394751, 0.103555);
	glEnd();

	glNormal3f( -0.152774, 0.954759, -0.255139 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.963939, 0.477951, 0.067966);
		glVertex3f( 1.130067, 0.472328, -0.052551);
		glVertex3f( 1.110367, 0.464489, -0.070093);
	glEnd();

	glNormal3f( 0.613465, 0.516550, -0.597358 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.130067, 0.472328, -0.052551);
		glVertex3f( 1.174512, 0.371115, -0.094430);
		glVertex3f( 1.166120, 0.363635, -0.109516);
	glEnd();

	glNormal3f( 0.969810, -0.201272, -0.137690 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.174512, 0.371115, -0.094430);
		glVertex3f( 1.120881, 0.135158, -0.127260);
		glVertex3f( 1.118939, 0.139696, -0.147575);
	glEnd();

	glNormal3f( 0.635942, -0.738007, -0.225662 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.120881, 0.135158, -0.127260);
		glVertex3f( 0.974438, -0.012987, -0.055458);
		glVertex3f( 1.118939, 0.139696, -0.147575);
	glEnd();

	glNormal3f( -0.680255, 0.026064, 0.732512 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.879397, 0.361660, -0.260887);
		glVertex3f( -0.848778, 0.317200, -0.230871);
		glVertex3f( -0.832661, 0.352117, -0.217146);
	glEnd();

	glNormal3f( 0.265681, -0.942579, -0.202383 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.974438, -0.012987, -0.055458);
		glVertex3f( 0.786493, -0.094072, 0.075462);
		glVertex3f( 0.961895, -0.010641, -0.082851);
	glEnd();

	glNormal3f( -0.744954, -0.620629, -0.244671 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.484375, 0.023438, -0.546875);
		glVertex3f( -0.343750, -0.148438, -0.539062);
		glVertex3f( -0.320567, -0.229578, -0.403829);
	glEnd();

	glNormal3f( 0.567127, -0.745522, -0.350091 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.296875, -0.312500, -0.265625);
		glVertex3f( 0.320567, -0.229578, -0.403829);
		glVertex3f( 0.477700, -0.120892, -0.380731);
	glEnd();

	glNormal3f( -0.374219, -0.707467, -0.599541 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.484375, 0.023438, -0.546875);
		glVertex3f( -0.477700, -0.120892, -0.380731);
		glVertex3f( -0.617442, -0.065770, -0.358552);
	glEnd();

	glNormal3f( 0.843206, -0.474117, -0.253409 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.632661, -0.123356, 0.139504);
		glVertex3f( 0.463364, -0.237139, -0.210938);
		glVertex3f( 0.477700, -0.120892, -0.380731);
	glEnd();

	glNormal3f( -0.995694, 0.025119, -0.089233 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.806678, 0.496286, -0.153131);
		glVertex3f( -0.796768, 0.460102, -0.273889);
		glVertex3f( -0.796620, 0.296535, -0.321586);
	glEnd();

	glNormal3f( 0.995115, -0.093954, 0.030308 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.787072, 0.424696, -0.392051);
		glVertex3f( 0.796875, 0.539062, -0.359375);
		glVertex3f( 0.796875, 0.577701, -0.239597);
	glEnd();

	glNormal3f( -0.595903, 0.773063, -0.217424 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.640625, 0.750000, -0.195312);
		glVertex3f( -0.453125, 0.929688, -0.070312);
		glVertex3f( -0.640625, 0.714462, -0.321671);
	glEnd();

	glNormal3f( 0.675140, 0.723364, -0.144673 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.453125, 0.867188, -0.382812);
		glVertex3f( 0.453125, 0.898098, -0.228260);
		glVertex3f( 0.640625, 0.679688, -0.445312);
	glEnd();

	glNormal3f( -0.715914, 0.664472, -0.214346 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.796875, 0.539062, -0.359375);
		glVertex3f( -0.796875, 0.577701, -0.239597);
		glVertex3f( -0.640625, 0.679688, -0.445312);
	glEnd();

	glNormal3f( 0.690128, 0.696658, -0.195935 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.640625, 0.750000, -0.195312);
		glVertex3f( 0.796875, 0.617188, -0.117188);
		glVertex3f( 0.640625, 0.714462, -0.321671);
	glEnd();

	glNormal3f( -0.137321, 0.971291, -0.194258 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.453125, 0.867188, -0.382812);
		glVertex3f( -0.453125, 0.898098, -0.228260);
		glVertex3f( 0.000000, 0.898438, -0.546875);
	glEnd();

	glNormal3f( 0.120926, 0.976388, -0.179005 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.984375, -0.078125);
		glVertex3f( 0.453125, 0.929688, -0.070312);
		glVertex3f( 0.000000, 0.940939, -0.315046);
	glEnd();

	glNormal3f( -0.306947, -0.838396, -0.450418 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.296875, -0.312500, -0.265625);
		glVertex3f( -0.320567, -0.229578, -0.403829);
		glVertex3f( 0.000000, -0.288044, -0.513459);
	glEnd();

	glNormal3f( 0.290628, -0.841642, -0.455163 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.195312, -0.671875);
		glVertex3f( 0.343750, -0.148438, -0.539062);
		glVertex3f( 0.320567, -0.229578, -0.403829);
	glEnd();

	glNormal3f( -0.493988, 0.036435, 0.868705 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.894511, 0.360700, 0.112364);
		glVertex3f( -0.866421, 0.400438, 0.126671);
		glVertex3f( -0.963939, 0.477951, 0.067966);
	glEnd();

	glNormal3f( -0.587769, -0.048886, 0.807551 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -1.087183, 0.462421, -0.022676);
		glVertex3f( -0.961053, 0.421007, 0.066620);
		glVertex3f( -0.963939, 0.477951, 0.067966);
	glEnd();

	glNormal3f( -0.532988, -0.145281, 0.833557 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -1.149134, 0.340076, -0.083612);
		glVertex3f( -1.087183, 0.462421, -0.022676);
		glVertex3f( -1.174512, 0.371115, -0.094430);
	glEnd();

	glNormal3f( -0.611296, -0.236617, 0.755202 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -1.104114, 0.151904, -0.106128);
		glVertex3f( -1.149134, 0.340076, -0.083612);
		glVertex3f( -1.174512, 0.371115, -0.094430);
	glEnd();

	glNormal3f( -0.672836, -0.324905, 0.664627 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.971552, 0.028111, -0.032446);
		glVertex3f( -1.104114, 0.151904, -0.106128);
		glVertex3f( -0.974438, -0.012987, -0.055458);
	glEnd();

	glNormal3f( -0.660935, -0.553489, 0.506770 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.830332, -0.027971, 0.090483);
		glVertex3f( -0.971552, 0.028111, -0.032446);
		glVertex3f( -0.786493, -0.094072, 0.075462);
	glEnd();

	glNormal3f( -0.680533, 0.080972, 0.728230 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.863535, 0.023164, 0.053769);
		glVertex3f( -0.968530, 0.067653, -0.049296);
		glVertex3f( -0.830332, -0.027971, 0.090483);
	glEnd();

	glNormal3f( -0.132419, 0.397117, 0.908165 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.968530, 0.067653, -0.049296);
		glVertex3f( -1.078910, 0.166800, -0.108744);
		glVertex3f( -0.971552, 0.028111, -0.032446);
	glEnd();

	glNormal3f( -0.214759, -0.224886, 0.950423 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -1.078910, 0.166800, -0.108744);
		glVertex3f( -1.070269, 0.302313, -0.074727);
		glVertex3f( -1.149134, 0.340076, -0.083612);
	glEnd();

	glNormal3f( -0.179979, -0.147027, 0.972620 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -1.070269, 0.302313, -0.074727);
		glVertex3f( -1.112499, 0.400908, -0.067637);
		glVertex3f( -1.149134, 0.340076, -0.083612);
	glEnd();

	glNormal3f( -0.520534, -0.533081, 0.666985 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -1.112499, 0.400908, -0.067637);
		glVertex3f( -0.956849, 0.365741, 0.025730);
		glVertex3f( -0.961053, 0.421007, 0.066620);
	glEnd();

	glNormal3f( -0.739234, -0.410977, 0.533508 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.903169, 0.320251, 0.069207);
		glVertex3f( -0.894511, 0.360700, 0.112364);
		glVertex3f( -0.961053, 0.421007, 0.066620);
	glEnd();

	glNormal3f( -0.414716, -0.454210, 0.788482 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.830332, -0.027971, 0.090483);
		glVertex3f( -0.786493, -0.094072, 0.075462);
		glVertex3f( -0.632661, -0.123356, 0.139504);
	glEnd();

	glNormal3f( -0.337202, -0.098707, 0.936243 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.894511, 0.360700, 0.112364);
		glVertex3f( -0.831378, 0.292818, 0.127946);
		glVertex3f( -0.866421, 0.400438, 0.126671);
	glEnd();

	glNormal3f( -0.107326, 0.908984, 0.402778 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.796198, 0.029511, 0.057387);
		glVertex3f( -0.863535, 0.023164, 0.053769);
		glVertex3f( -0.734383, 0.007661, 0.123170);
	glEnd();

	glNormal3f( -0.647612, -0.064185, 0.759262 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.734383, 0.007661, 0.123170);
		glVertex3f( -0.732019, 0.063403, 0.129898);
		glVertex3f( -0.821924, 0.059146, 0.052854);
	glEnd();

	glNormal3f( -0.647452, -0.066475, 0.759202 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.821924, 0.059146, 0.052854);
		glVertex3f( -0.732019, 0.063403, 0.129898);
		glVertex3f( -0.802629, 0.118706, 0.074523);
	glEnd();

	glNormal3f( -0.768816, -0.299291, 0.565108 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.732019, 0.063403, 0.129898);
		glVertex3f( -0.792789, 0.214288, 0.127134);
		glVertex3f( -0.815492, 0.194863, 0.085959);
	glEnd();

	glNormal3f( -0.731475, -0.365392, 0.575702 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.815492, 0.194863, 0.085959);
		glVertex3f( -0.792789, 0.214288, 0.127134);
		glVertex3f( -0.831378, 0.292818, 0.127946);
	glEnd();

	glNormal3f( -0.594677, -0.391954, 0.701948 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.861694, 0.259747, 0.083796);
		glVertex3f( -0.831378, 0.292818, 0.127946);
		glVertex3f( -0.894511, 0.360700, 0.112364);
	glEnd();

	glNormal3f( -0.773480, -0.587544, -0.237741 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.853422, 0.257194, 0.063193);
		glVertex3f( -0.861694, 0.259747, 0.083796);
		glVertex3f( -0.903169, 0.320251, 0.069207);
	glEnd();

	glNormal3f( -0.802066, -0.576352, -0.156548 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.814833, 0.199110, 0.066948);
		glVertex3f( -0.815492, 0.194863, 0.085959);
		glVertex3f( -0.861694, 0.259747, 0.083796);
	glEnd();

	glNormal3f( -0.730538, -0.660622, -0.172893 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.750518, 0.125022, 0.078282);
		glVertex3f( -0.751177, 0.120776, 0.097292);
		glVertex3f( -0.814833, 0.199110, 0.066948);
	glEnd();

	glNormal3f( 0.014815, 0.992214, -0.123663 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.801970, 0.116137, 0.053990);
		glVertex3f( -0.802629, 0.118706, 0.074523);
		glVertex3f( -0.751177, 0.120776, 0.097292);
	glEnd();

	glNormal3f( -0.954287, 0.297036, 0.033272 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.821265, 0.063393, 0.033843);
		glVertex3f( -0.821924, 0.059146, 0.052854);
		glVertex3f( -0.802629, 0.118706, 0.074523);
	glEnd();

	glNormal3f( -0.575317, -0.709019, -0.407803 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.789107, 0.033165, 0.041032);
		glVertex3f( -0.796198, 0.029511, 0.057387);
		glVertex3f( -0.821265, 0.063393, 0.033843);
	glEnd();

	glNormal3f( -0.024428, 0.850642, 0.525177 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.855263, 0.034242, 0.036211);
		glVertex3f( -0.863535, 0.023164, 0.053769);
		glVertex3f( -0.789107, 0.033165, 0.041032);
	glEnd();

	glNormal3f( -0.687125, -0.699422, 0.196642 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.901329, 0.311475, 0.044426);
		glVertex3f( -0.903169, 0.320251, 0.069207);
		glVertex3f( -0.961439, 0.357558, -0.001707);
	glEnd();

	glNormal3f( -0.388442, -0.863223, 0.322427 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.961439, 0.357558, -0.001707);
		glVertex3f( -0.956849, 0.365741, 0.025730);
		glVertex3f( -1.112499, 0.400908, -0.067637);
	glEnd();

	glNormal3f( 0.148159, -0.007651, 0.988934 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -1.073002, 0.387941, -0.073655);
		glVertex3f( -1.112499, 0.400908, -0.067637);
		glVertex3f( -1.070269, 0.302313, -0.074727);
	glEnd();

	glNormal3f( 0.598248, 0.223868, -0.769404 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -1.129703, 0.305288, -0.120075);
		glVertex3f( -1.070269, 0.302313, -0.074727);
		glVertex3f( -1.092296, 0.164809, -0.131863);
	glEnd();

	glNormal3f( 0.717484, 0.522690, -0.460447 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -1.092296, 0.164809, -0.131863);
		glVertex3f( -1.078910, 0.166800, -0.108744);
		glVertex3f( -0.968530, 0.067653, -0.049296);
	glEnd();

	glNormal3f( 0.180562, 0.956542, 0.228963 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.966689, 0.072509, -0.071032);
		glVertex3f( -0.968530, 0.067653, -0.049296);
		glVertex3f( -0.863535, 0.023164, 0.053769);
	glEnd();

	glNormal3f( -0.448938, -0.170799, 0.877087 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.889647, 0.112030, 0.008313);
		glVertex3f( -0.821265, 0.063393, 0.033843);
		glVertex3f( -0.801970, 0.116137, 0.053990);
	glEnd();

	glNormal3f( -0.560537, -0.161592, 0.812211 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.936372, 0.173735, -0.011657);
		glVertex3f( -0.889647, 0.112030, 0.008313);
		glVertex3f( -0.906578, 0.210444, 0.016208);
	glEnd();

	glNormal3f( -0.484444, -0.175268, 0.857085 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.979029, 0.233630, -0.023520);
		glVertex3f( -0.936372, 0.173735, -0.011657);
		glVertex3f( -0.948054, 0.270948, 0.001620);
	glEnd();

	glNormal3f( -0.451705, -0.209303, 0.867269 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -1.022868, 0.258838, -0.040269);
		glVertex3f( -0.979029, 0.233630, -0.023520);
		glVertex3f( -0.948054, 0.270948, 0.001620);
	glEnd();

	glNormal3f( -0.524872, -0.253216, 0.812644 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.948054, 0.270948, 0.001620);
		glVertex3f( -0.901329, 0.311475, 0.044426);
		glVertex3f( -0.996442, 0.310925, -0.017177);
	glEnd();

	glNormal3f( -0.554717, -0.184641, 0.811293 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.948054, 0.270948, 0.001620);
		glVertex3f( -0.906578, 0.210444, 0.016208);
		glVertex3f( -0.853422, 0.257194, 0.063193);
	glEnd();

	glNormal3f( -0.422565, -0.223960, 0.878226 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.852240, 0.148754, 0.036108);
		glVertex3f( -0.814833, 0.199110, 0.066948);
		glVertex3f( -0.853422, 0.257194, 0.063193);
	glEnd();

	glNormal3f( -0.417834, -0.228193, 0.879399 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.814833, 0.199110, 0.066948);
		glVertex3f( -0.852240, 0.148754, 0.036108);
		glVertex3f( -0.750518, 0.125022, 0.078282);
	glEnd();

	glNormal3f( -0.163764, 0.268097, 0.949371 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.889647, 0.112030, 0.008313);
		glVertex3f( -0.855263, 0.034242, 0.036211);
		glVertex3f( -0.821265, 0.063393, 0.033843);
	glEnd();

	glNormal3f( -0.633288, -0.241590, 0.735241 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.889647, 0.112030, 0.008313);
		glVertex3f( -0.936372, 0.173735, -0.011657);
		glVertex3f( -0.966689, 0.072509, -0.071032);
	glEnd();

	glNormal3f( -0.580117, -0.260293, 0.771824 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.936372, 0.173735, -0.011657);
		glVertex3f( -0.979029, 0.233630, -0.023520);
		glVertex3f( -1.092296, 0.164809, -0.131863);
	glEnd();

	glNormal3f( -0.511276, -0.375509, 0.773040 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.979029, 0.233630, -0.023520);
		glVertex3f( -1.022868, 0.258838, -0.040269);
		glVertex3f( -1.092296, 0.164809, -0.131863);
	glEnd();

	glNormal3f( -0.609522, -0.041739, 0.791670 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -1.022868, 0.258838, -0.040269);
		glVertex3f( -0.996442, 0.310925, -0.017177);
		glVertex3f( -1.129703, 0.305288, -0.120075);
	glEnd();

	glNormal3f( -0.518037, 0.107328, 0.848598 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -1.073002, 0.387941, -0.073655);
		glVertex3f( -0.996442, 0.310925, -0.017177);
		glVertex3f( -0.961439, 0.357558, -0.001707);
	glEnd();

	glNormal3f( 0.232687, -0.730062, -0.642547 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.777465, -0.078581, 0.061131);
		glVertex3f( -0.786493, -0.094072, 0.075462);
		glVertex3f( -0.961895, -0.010641, -0.082851);
	glEnd();

	glNormal3f( -0.578776, -0.746206, -0.328930 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.961895, -0.010641, -0.082851);
		glVertex3f( -0.974438, -0.012987, -0.055458);
		glVertex3f( -1.118939, 0.139696, -0.147575);
	glEnd();

	glNormal3f( -0.969810, -0.201272, -0.137690 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -1.118939, 0.139696, -0.147575);
		glVertex3f( -1.120881, 0.135158, -0.127260);
		glVertex3f( -1.174512, 0.371115, -0.094430);
	glEnd();

	glNormal3f( -0.613465, 0.516550, -0.597358 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -1.166120, 0.363635, -0.109516);
		glVertex3f( -1.174512, 0.371115, -0.094430);
		glVertex3f( -1.130067, 0.472328, -0.052551);
	glEnd();

	glNormal3f( 0.152774, 0.954759, -0.255140 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -1.110367, 0.464489, -0.070093);
		glVertex3f( -1.130067, 0.472328, -0.052551);
		glVertex3f( -0.963939, 0.477951, 0.067966);
	glEnd();

	glNormal3f( 0.569910, 0.821083, -0.032034 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.950799, 0.467498, 0.033809);
		glVertex3f( -0.963939, 0.477951, 0.067966);
		glVertex3f( -0.842070, 0.394751, 0.103555);
	glEnd();

	glNormal3f( 0.626930, 0.167951, -0.760757 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.768631, -0.063424, 0.024960);
		glVertex3f( -0.949622, 0.002425, -0.109655);
		glVertex3f( -0.937941, 0.457269, 0.000386);
	glEnd();

	glNormal3f( 0.457081, 0.185187, -0.869933 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -1.117038, 0.144136, -0.167452);
		glVertex3f( -1.091090, 0.456817, -0.087257);
		glVertex3f( -0.949622, 0.002425, -0.109655);
	glEnd();

	glNormal3f( 0.183780, 0.229867, -0.955712 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -1.117038, 0.144136, -0.167452);
		glVertex3f( -1.157909, 0.356316, -0.124278);
		glVertex3f( -1.091090, 0.456817, -0.087257);
	glEnd();

	glNormal3f( 0.523203, 0.850170, -0.058905 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.937941, 0.457269, 0.000386);
		glVertex3f( -0.950799, 0.467498, 0.033809);
		glVertex3f( -0.818242, 0.389187, 0.080936);
	glEnd();

	glNormal3f( 0.146819, 0.953979, -0.261472 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -1.091090, 0.456817, -0.087257);
		glVertex3f( -1.110367, 0.464489, -0.070093);
		glVertex3f( -0.937941, 0.457269, 0.000386);
	glEnd();

	glNormal3f( -0.579908, 0.554053, -0.597271 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -1.157909, 0.356316, -0.124278);
		glVertex3f( -1.166120, 0.363635, -0.109516);
		glVertex3f( -1.110367, 0.464489, -0.070093);
	glEnd();

	glNormal3f( -0.974052, -0.182468, -0.133896 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -1.117038, 0.144136, -0.167452);
		glVertex3f( -1.118939, 0.139696, -0.147575);
		glVertex3f( -1.166120, 0.363635, -0.109516);
	glEnd();

	glNormal3f( -0.423306, -0.722845, -0.546175 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.949622, 0.002425, -0.109655);
		glVertex3f( -0.961895, -0.010641, -0.082851);
		glVertex3f( -1.117038, 0.144136, -0.167452);
	glEnd();

	glNormal3f( -0.040507, -0.917971, -0.394573 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.768631, -0.063424, 0.024960);
		glVertex3f( -0.777465, -0.078581, 0.061131);
		glVertex3f( -0.949622, 0.002425, -0.109655);
	glEnd();

	glNormal3f( 0.666010, -0.204926, 0.717242 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.437500, 0.164062, 0.765625);
		glVertex3f( 0.500000, 0.093750, 0.687500);
		glVertex3f( 0.562500, 0.242188, 0.671875);
	glEnd();

	glNormal3f( -0.663036, -0.192883, 0.723312 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.437500, 0.164062, 0.765625);
		glVertex3f( -0.468750, 0.242188, 0.757812);
		glVertex3f( -0.562500, 0.242188, 0.671875);
	glEnd();

	glNormal3f( 0.830101, -0.307090, 0.465433 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.500000, 0.093750, 0.687500);
		glVertex3f( 0.546875, 0.054688, 0.578125);
		glVertex3f( 0.625000, 0.242188, 0.562500);
	glEnd();

	glNormal3f( -0.828520, -0.299015, 0.473440 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.500000, 0.093750, 0.687500);
		glVertex3f( -0.562500, 0.242188, 0.671875);
		glVertex3f( -0.625000, 0.242188, 0.562500);
	glEnd();

	glNormal3f( 0.408092, -0.803818, 0.432825 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.351562, 0.031250, 0.718750);
		glVertex3f( 0.351562, -0.023438, 0.617188);
		glVertex3f( 0.546875, 0.054688, 0.578125);
	glEnd();

	glNormal3f( -0.425062, -0.779280, 0.460484 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.351562, 0.031250, 0.718750);
		glVertex3f( -0.500000, 0.093750, 0.687500);
		glVertex3f( -0.546875, 0.054688, 0.578125);
	glEnd();

	glNormal3f( 0.371366, -0.486617, 0.790753 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.351562, 0.132812, 0.781250);
		glVertex3f( 0.351562, 0.031250, 0.718750);
		glVertex3f( 0.500000, 0.093750, 0.687500);
	glEnd();

	glNormal3f( -0.338487, -0.548583, 0.764515 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.351562, 0.132812, 0.781250);
		glVertex3f( -0.437500, 0.164062, 0.765625);
		glVertex3f( -0.500000, 0.093750, 0.687500);
	glEnd();

	glNormal3f( -0.099184, -0.547220, 0.831091 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.273438, 0.164062, 0.796875);
		glVertex3f( 0.203125, 0.093750, 0.742188);
		glVertex3f( 0.351562, 0.031250, 0.718750);
	glEnd();

	glNormal3f( 0.039277, -0.523693, 0.851001 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.273438, 0.164062, 0.796875);
		glVertex3f( -0.351562, 0.132812, 0.781250);
		glVertex3f( -0.351562, 0.031250, 0.718750);
	glEnd();

	glNormal3f( -0.258889, -0.838801, 0.478945 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.203125, 0.093750, 0.742188);
		glVertex3f( 0.156250, 0.054688, 0.648438);
		glVertex3f( 0.351562, -0.023438, 0.617188);
	glEnd();

	glNormal3f( 0.283710, -0.844293, 0.454619 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.203125, 0.093750, 0.742188);
		glVertex3f( -0.351562, 0.031250, 0.718750);
		glVertex3f( -0.351562, -0.023438, 0.617188);
	glEnd();

	glNormal3f( -0.774251, -0.344719, 0.530758 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.156250, 0.054688, 0.648438);
		glVertex3f( 0.203125, 0.093750, 0.742188);
		glVertex3f( 0.078125, 0.242188, 0.656250);
	glEnd();

	glNormal3f( 0.774251, -0.344719, 0.530758 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.156250, 0.054688, 0.648438);
		glVertex3f( -0.078125, 0.242188, 0.656250);
		glVertex3f( -0.203125, 0.093750, 0.742188);
	glEnd();

	glNormal3f( -0.470597, -0.198146, 0.859812 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.203125, 0.093750, 0.742188);
		glVertex3f( 0.273438, 0.164062, 0.796875);
		glVertex3f( 0.140625, 0.242188, 0.742188);
	glEnd();

	glNormal3f( 0.470597, -0.198146, 0.859812 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.203125, 0.093750, 0.742188);
		glVertex3f( -0.140625, 0.242188, 0.742188);
		glVertex3f( -0.273438, 0.164062, 0.796875);
	glEnd();

	glNormal3f( -0.482283, 0.203067, 0.852154 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.273438, 0.328125, 0.796875);
		glVertex3f( 0.203125, 0.390625, 0.742188);
		glVertex3f( 0.140625, 0.242188, 0.742188);
	glEnd();

	glNormal3f( 0.467208, 0.169894, 0.867671 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.273438, 0.328125, 0.796875);
		glVertex3f( -0.242188, 0.242188, 0.796875);
		glVertex3f( -0.140625, 0.242188, 0.742188);
	glEnd();

	glNormal3f( -0.764039, 0.327842, 0.555665 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.078125, 0.242188, 0.656250);
		glVertex3f( 0.140625, 0.242188, 0.742188);
		glVertex3f( 0.156250, 0.437500, 0.648438);
	glEnd();

	glNormal3f( 0.764039, 0.327842, 0.555665 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.078125, 0.242188, 0.656250);
		glVertex3f( -0.156250, 0.437500, 0.648438);
		glVertex3f( -0.140625, 0.242188, 0.742188);
	glEnd();

	glNormal3f( -0.241291, 0.814358, 0.527825 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.156250, 0.437500, 0.648438);
		glVertex3f( 0.203125, 0.390625, 0.742188);
		glVertex3f( 0.351562, 0.515625, 0.617188);
	glEnd();

	glNormal3f( 0.241291, 0.814358, 0.527825 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.156250, 0.437500, 0.648438);
		glVertex3f( -0.351562, 0.515625, 0.617188);
		glVertex3f( -0.203125, 0.390625, 0.742188);
	glEnd();

	glNormal3f( -0.115470, 0.577350, 0.808290 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.203125, 0.390625, 0.742188);
		glVertex3f( 0.273438, 0.328125, 0.796875);
		glVertex3f( 0.351562, 0.453125, 0.718750);
	glEnd();

	glNormal3f( 0.115470, 0.577350, 0.808290 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.203125, 0.390625, 0.742188);
		glVertex3f( -0.351562, 0.453125, 0.718750);
		glVertex3f( -0.273438, 0.328125, 0.796875);
	glEnd();

	glNormal3f( 0.378344, 0.513467, 0.770200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.351562, 0.453125, 0.718750);
		glVertex3f( 0.351562, 0.359375, 0.781250);
		glVertex3f( 0.500000, 0.390625, 0.687500);
	glEnd();

	glNormal3f( -0.378344, 0.513467, 0.770200 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.351562, 0.453125, 0.718750);
		glVertex3f( -0.500000, 0.390625, 0.687500);
		glVertex3f( -0.351562, 0.359375, 0.781250);
	glEnd();

	glNormal3f( 0.406930, 0.777955, 0.478742 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.351562, 0.515625, 0.617188);
		glVertex3f( 0.351562, 0.453125, 0.718750);
		glVertex3f( 0.546875, 0.437500, 0.578125);
	glEnd();

	glNormal3f( -0.406930, 0.777955, 0.478742 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.351562, 0.515625, 0.617188);
		glVertex3f( -0.546875, 0.437500, 0.578125);
		glVertex3f( -0.351562, 0.453125, 0.718750);
	glEnd();

	glNormal3f( 0.827166, 0.292478, 0.479847 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.546875, 0.437500, 0.578125);
		glVertex3f( 0.500000, 0.390625, 0.687500);
		glVertex3f( 0.625000, 0.242188, 0.562500);
	glEnd();

	glNormal3f( -0.827166, 0.292478, 0.479847 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.546875, 0.437500, 0.578125);
		glVertex3f( -0.625000, 0.242188, 0.562500);
		glVertex3f( -0.500000, 0.390625, 0.687500);
	glEnd();

	glNormal3f( 0.674819, 0.209652, 0.707577 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.500000, 0.390625, 0.687500);
		glVertex3f( 0.437500, 0.328125, 0.765625);
		glVertex3f( 0.562500, 0.242188, 0.671875);
	glEnd();

	glNormal3f( -0.674819, 0.209652, 0.707577 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.500000, 0.390625, 0.687500);
		glVertex3f( -0.562500, 0.242188, 0.671875);
		glVertex3f( -0.437500, 0.328125, 0.765625);
	glEnd();

	glNormal3f( 0.847998, 0.317999, -0.423999 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.476562, 0.242188, 0.773438);
		glVertex3f( 0.468750, 0.242188, 0.757812);
		glVertex3f( 0.445312, 0.335938, 0.781250);
	glEnd();

	glNormal3f( -0.847998, 0.317999, -0.423999 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.476562, 0.242188, 0.773438);
		glVertex3f( -0.445312, 0.335938, 0.781250);
		glVertex3f( -0.468750, 0.242188, 0.757812);
	glEnd();

	glNormal3f( 0.214297, 0.826574, -0.520435 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.445312, 0.335938, 0.781250);
		glVertex3f( 0.437500, 0.328125, 0.765625);
		glVertex3f( 0.351562, 0.375000, 0.804688);
	glEnd();

	glNormal3f( -0.214297, 0.826574, -0.520435 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.445312, 0.335938, 0.781250);
		glVertex3f( -0.351562, 0.375000, 0.804688);
		glVertex3f( -0.437500, 0.328125, 0.765625);
	glEnd();

	glNormal3f( -0.432041, 0.750388, -0.500258 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.351562, 0.375000, 0.804688);
		glVertex3f( 0.351562, 0.359375, 0.781250);
		glVertex3f( 0.265625, 0.335938, 0.820312);
	glEnd();

	glNormal3f( 0.432041, 0.750388, -0.500258 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.351562, 0.375000, 0.804688);
		glVertex3f( -0.265625, 0.335938, 0.820312);
		glVertex3f( -0.351562, 0.359375, 0.781250);
	glEnd();

	glNormal3f( -0.846181, 0.352575, -0.399585 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.265625, 0.335938, 0.820312);
		glVertex3f( 0.273438, 0.328125, 0.796875);
		glVertex3f( 0.226562, 0.242188, 0.820312);
	glEnd();

	glNormal3f( 0.846181, 0.352575, -0.399585 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.265625, 0.335938, 0.820312);
		glVertex3f( -0.226562, 0.242188, 0.820312);
		glVertex3f( -0.273438, 0.328125, 0.796875);
	glEnd();

	glNormal3f( -0.832845, -0.378566, -0.403804 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.273438, 0.164062, 0.796875);
		glVertex3f( 0.265625, 0.156250, 0.820312);
		glVertex3f( 0.226562, 0.242188, 0.820312);
	glEnd();

	glNormal3f( 0.789474, -0.315789, -0.526316 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.273438, 0.164062, 0.796875);
		glVertex3f( -0.242188, 0.242188, 0.796875);
		glVertex3f( -0.226562, 0.242188, 0.820312);
	glEnd();

	glNormal3f( -0.432041, -0.750388, -0.500258 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.351562, 0.132812, 0.781250);
		glVertex3f( 0.351562, 0.117188, 0.804688);
		glVertex3f( 0.265625, 0.156250, 0.820312);
	glEnd();

	glNormal3f( 0.408248, -0.816497, -0.408248 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.351562, 0.132812, 0.781250);
		glVertex3f( -0.273438, 0.164062, 0.796875);
		glVertex3f( -0.265625, 0.156250, 0.820312);
	glEnd();

	glNormal3f( 0.214297, -0.826574, -0.520435 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.437500, 0.164062, 0.765625);
		glVertex3f( 0.445312, 0.156250, 0.781250);
		glVertex3f( 0.351562, 0.117188, 0.804688);
	glEnd();

	glNormal3f( -0.197727, -0.815623, -0.543749 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.437500, 0.164062, 0.765625);
		glVertex3f( -0.351562, 0.132812, 0.781250);
		glVertex3f( -0.351562, 0.117188, 0.804688);
	glEnd();

	glNormal3f( 0.839964, -0.343622, -0.419982 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.468750, 0.242188, 0.757812);
		glVertex3f( 0.476562, 0.242188, 0.773438);
		glVertex3f( 0.445312, 0.156250, 0.781250);
	glEnd();

	glNormal3f( -0.752217, -0.356313, -0.554265 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.468750, 0.242188, 0.757812);
		glVertex3f( -0.437500, 0.164062, 0.765625);
		glVertex3f( -0.445312, 0.156250, 0.781250);
	glEnd();

	glNormal3f( 0.119729, -0.737520, 0.664627 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.145101, -0.875598, 0.625564);
		glVertex3f( 0.000000, -0.869588, 0.658372);
		glVertex3f( 0.000000, -0.941904, 0.578125);
	glEnd();

	glNormal3f( -0.020542, -0.611090, 0.791295 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.145101, -0.875598, 0.625564);
		glVertex3f( -0.148618, -0.908363, 0.600169);
		glVertex3f( 0.000000, -0.941904, 0.578125);
	glEnd();

	glNormal3f( 0.573430, -0.462525, 0.676202 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.148618, -0.908363, 0.600169);
		glVertex3f( 0.285838, -0.850421, 0.523438);
		glVertex3f( 0.145101, -0.875598, 0.625564);
	glEnd();

	glNormal3f( -0.573430, -0.462526, 0.676201 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.148618, -0.908363, 0.600169);
		glVertex3f( -0.145101, -0.875598, 0.625564);
		glVertex3f( -0.285838, -0.850421, 0.523438);
	glEnd();

	glNormal3f( 0.868387, -0.102994, 0.485073 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.235353, -0.613780, 0.664062);
		glVertex3f( 0.234375, -0.818374, 0.622373);
		glVertex3f( 0.285838, -0.850421, 0.523438);
	glEnd();

	glNormal3f( -0.596115, -0.312362, 0.739646 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.235353, -0.613780, 0.664062);
		glVertex3f( -0.340562, -0.727487, 0.531250);
		glVertex3f( -0.285838, -0.850421, 0.523438);
	glEnd();

	glNormal3f( 0.654186, -0.234564, 0.719042 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.234668, -0.540117, 0.688716);
		glVertex3f( 0.235353, -0.613780, 0.664062);
		glVertex3f( 0.340562, -0.727487, 0.531250);
	glEnd();

	glNormal3f( -0.723420, -0.156308, 0.672482 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.234668, -0.540117, 0.688716);
		glVertex3f( -0.337997, -0.571298, 0.570312);
		glVertex3f( -0.340562, -0.727487, 0.531250);
	glEnd();

	glNormal3f( 0.757726, 0.036953, 0.651526 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.223372, -0.494990, 0.699293);
		glVertex3f( 0.234668, -0.540117, 0.688716);
		glVertex3f( 0.337997, -0.571298, 0.570312);
	glEnd();

	glNormal3f( -0.797243, 0.151926, 0.584227 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.210938, -0.445312, 0.710938);
		glVertex3f( -0.312500, -0.437500, 0.570312);
		glVertex3f( -0.325860, -0.507610, 0.570312);
	glEnd();

	glNormal3f( 0.446706, -0.299423, 0.843089 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.622254, -0.108926, 0.531250);
		glVertex3f( 0.398438, -0.046875, 0.671875);
		glVertex3f( 0.146892, -0.101562, 0.785732);
	glEnd();

	glNormal3f( -0.409296, -0.476121, 0.778322 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.622254, -0.108926, 0.531250);
		glVertex3f( -0.471425, -0.187500, 0.562500);
		glVertex3f( -0.146892, -0.101562, 0.785732);
	glEnd();

	glNormal3f( 0.412953, -0.556791, 0.720732 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.682918, -0.007803, 0.539062);
		glVertex3f( 0.617188, 0.054688, 0.625000);
		glVertex3f( 0.398438, -0.046875, 0.671875);
	glEnd();

	glNormal3f( -0.436294, -0.326515, 0.838472 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.682918, -0.007803, 0.539062);
		glVertex3f( -0.622254, -0.108926, 0.531250);
		glVertex3f( -0.398438, -0.046875, 0.671875);
	glEnd();

	glNormal3f( 0.793891, -0.541206, 0.277186 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.743836, 0.148438, 0.445312);
		glVertex3f( 0.726562, 0.203125, 0.601562);
		glVertex3f( 0.617188, 0.054688, 0.625000);
	glEnd();

	glNormal3f( -0.807115, 0.038801, 0.589118 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.743836, 0.148438, 0.445312);
		glVertex3f( -0.682918, -0.007803, 0.539062);
		glVertex3f( -0.617188, 0.054688, 0.625000);
	glEnd();

	glNormal3f( 0.900155, -0.144837, 0.410784 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.728132, 0.303112, 0.633377);
		glVertex3f( 0.775987, 0.312053, 0.531665);
		glVertex3f( 0.729261, 0.375000, 0.656250);
	glEnd();

	glNormal3f( -0.989987, -0.056679, 0.129279 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.726562, 0.203125, 0.601562);
		glVertex3f( -0.728132, 0.303112, 0.633377);
		glVertex3f( -0.743836, 0.148438, 0.445312);
	glEnd();

	glNormal3f( 0.284962, 0.549817, 0.785174 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.688381, 0.484375, 0.594497);
		glVertex3f( 0.660410, 0.415876, 0.652615);
		glVertex3f( 0.729261, 0.375000, 0.656250);
	glEnd();

	glNormal3f( -0.610031, 0.550036, 0.570370 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.688381, 0.484375, 0.594497);
		glVertex3f( -0.738388, 0.429688, 0.593750);
		glVertex3f( -0.729261, 0.375000, 0.656250);
	glEnd();

	glNormal3f( 0.444776, 0.398499, 0.802106 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.492188, 0.601562, 0.653644);
		glVertex3f( 0.468661, 0.531378, 0.701558);
		glVertex3f( 0.660410, 0.415876, 0.652615);
	glEnd();

	glNormal3f( -0.489475, 0.439264, 0.753300 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.492188, 0.601562, 0.653644);
		glVertex3f( -0.688381, 0.484375, 0.594497);
		glVertex3f( -0.660410, 0.415876, 0.652615);
	glEnd();

	glNormal3f( 0.101846, 0.537386, 0.837164 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.468661, 0.531378, 0.701558);
		glVertex3f( 0.492188, 0.601562, 0.653644);
		glVertex3f( 0.330258, 0.542119, 0.711501);
	glEnd();

	glNormal3f( -0.101846, 0.537386, 0.837164 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.468661, 0.531378, 0.701558);
		glVertex3f( -0.330258, 0.542119, 0.711501);
		glVertex3f( -0.492188, 0.601562, 0.653644);
	glEnd();

	glNormal3f( 0.170994, 0.810529, 0.560181 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.176552, 0.598552, 0.676767);
		glVertex3f( 0.191359, 0.555589, 0.734410);
		glVertex3f( 0.330258, 0.542119, 0.711501);
	glEnd();

	glNormal3f( -0.045470, 0.610519, 0.790695 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.176552, 0.598552, 0.676767);
		glVertex3f( -0.320312, 0.618205, 0.653325);
		glVertex3f( -0.330258, 0.542119, 0.711501);
	glEnd();

	glNormal3f( -0.686532, 0.487352, 0.539594 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.191359, 0.555589, 0.734410);
		glVertex3f( 0.176552, 0.598552, 0.676767);
		glVertex3f( 0.101562, 0.429688, 0.733872);
	glEnd();

	glNormal3f( 0.686532, 0.487352, 0.539594 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.191359, 0.555589, 0.734410);
		glVertex3f( -0.101562, 0.429688, 0.733872);
		glVertex3f( -0.176552, 0.598552, 0.676767);
	glEnd();

	glNormal3f( 0.378189, -0.001513, 0.925727 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.101562, 0.429688, 0.733872);
		glVertex3f( 0.062500, 0.533188, 0.750000);
		glVertex3f( 0.000000, 0.351562, 0.775236);
	glEnd();

	glNormal3f( -0.378189, -0.001513, 0.925727 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.101562, 0.429688, 0.733872);
		glVertex3f( 0.000000, 0.351562, 0.775236);
		glVertex3f( -0.062500, 0.533188, 0.750000);
	glEnd();

	glNormal3f( -0.191731, 0.132594, 0.972450 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.250000, 0.468750, 0.757812);
		glVertex3f( 0.191359, 0.555589, 0.734410);
		glVertex3f( 0.101562, 0.429688, 0.733872);
	glEnd();

	glNormal3f( 0.284561, 0.648809, 0.705742 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.250000, 0.468750, 0.757812);
		glVertex3f( -0.164062, 0.414062, 0.773438);
		glVertex3f( -0.101562, 0.429688, 0.733872);
	glEnd();

	glNormal3f( 0.187027, 0.411464, 0.892030 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.328125, 0.476562, 0.742188);
		glVertex3f( 0.330258, 0.542119, 0.711501);
		glVertex3f( 0.191359, 0.555589, 0.734410);
	glEnd();

	glNormal3f( -0.149872, 0.350364, 0.924545 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.328125, 0.476562, 0.742188);
		glVertex3f( -0.250000, 0.468750, 0.757812);
		glVertex3f( -0.191359, 0.555589, 0.734410);
	glEnd();

	glNormal3f( 0.097385, 0.419328, 0.902597 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.468661, 0.531378, 0.701558);
		glVertex3f( 0.330258, 0.542119, 0.711501);
		glVertex3f( 0.328125, 0.476562, 0.742188);
	glEnd();

	glNormal3f( -0.250725, 0.072689, 0.965326 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.468661, 0.531378, 0.701558);
		glVertex3f( -0.429688, 0.437500, 0.718750);
		glVertex3f( -0.328125, 0.476562, 0.742188);
	glEnd();

	glNormal3f( 0.280182, 0.059140, 0.958123 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.660410, 0.415876, 0.652615);
		glVertex3f( 0.468661, 0.531378, 0.701558);
		glVertex3f( 0.429688, 0.437500, 0.718750);
	glEnd();

	glNormal3f( -0.264106, -0.111938, 0.957976 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.660410, 0.415876, 0.652615);
		glVertex3f( -0.601562, 0.375000, 0.664062);
		glVertex3f( -0.429688, 0.437500, 0.718750);
	glEnd();

	glNormal3f( 0.059974, 0.188198, 0.980298 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.729261, 0.375000, 0.656250);
		glVertex3f( 0.660410, 0.415876, 0.652615);
		glVertex3f( 0.601562, 0.375000, 0.664062);
	glEnd();

	glNormal3f( -0.060210, -0.166727, 0.984163 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.729261, 0.375000, 0.656250);
		glVertex3f( -0.640625, 0.296875, 0.648438);
		glVertex3f( -0.601562, 0.375000, 0.664062);
	glEnd();

	glNormal3f( -0.100321, 0.014331, 0.994852 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.640625, 0.296875, 0.648438);
		glVertex3f( 0.634090, 0.251128, 0.648438);
		glVertex3f( 0.729261, 0.375000, 0.656250);
	glEnd();

	glNormal3f( -0.171258, -0.024465, 0.984922 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.634090, 0.251128, 0.648438);
		glVertex3f( -0.728132, 0.303112, 0.633377);
		glVertex3f( -0.625000, 0.187500, 0.648438);
	glEnd();

	glNormal3f( 0.437362, -0.306154, 0.845567 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.625000, 0.187500, 0.648438);
		glVertex3f( 0.492188, 0.062500, 0.671875);
		glVertex3f( 0.726562, 0.203125, 0.601562);
	glEnd();

	glNormal3f( -0.437362, -0.306154, 0.845567 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.625000, 0.187500, 0.648438);
		glVertex3f( -0.726562, 0.203125, 0.601562);
		glVertex3f( -0.492188, 0.062500, 0.671875);
	glEnd();

	glNormal3f( 0.322277, -0.276237, 0.905445 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.398438, -0.046875, 0.671875);
		glVertex3f( 0.617188, 0.054688, 0.625000);
		glVertex3f( 0.492188, 0.062500, 0.671875);
	glEnd();

	glNormal3f( -0.357888, -0.306761, 0.881938 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.398438, -0.046875, 0.671875);
		glVertex3f( -0.375000, 0.015625, 0.703125);
		glVertex3f( -0.492188, 0.062500, 0.671875);
	glEnd();

	glNormal3f( 0.444627, -0.261597, 0.856665 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.146892, -0.101562, 0.785732);
		glVertex3f( 0.398438, -0.046875, 0.671875);
		glVertex3f( 0.375000, 0.015625, 0.703125);
	glEnd();

	glNormal3f( -0.276579, 0.132574, 0.951802 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.146892, -0.101562, 0.785732);
		glVertex3f( -0.203125, 0.093750, 0.742188);
		glVertex3f( -0.375000, 0.015625, 0.703125);
	glEnd();

	glNormal3f( -0.227498, 0.157899, 0.960891 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.164062, 0.140625, 0.750000);
		glVertex3f( 0.000000, 0.046875, 0.726562);
		glVertex3f( 0.146892, -0.101562, 0.785732);
	glEnd();

	glNormal3f( -0.326044, 0.115321, 0.938294 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.164062, 0.140625, 0.750000);
		glVertex3f( -0.203125, 0.093750, 0.742188);
		glVertex3f( -0.146892, -0.101562, 0.785732);
	glEnd();

	glNormal3f( 0.043978, -0.086796, 0.995255 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.125000, 0.304688, 0.765625);
		glVertex3f( 0.164062, 0.414062, 0.773438);
		glVertex3f( 0.000000, 0.351562, 0.775236);
	glEnd();

	glNormal3f( -0.043978, -0.086796, 0.995255 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.125000, 0.304688, 0.765625);
		glVertex3f( 0.000000, 0.351562, 0.775236);
		glVertex3f( -0.164062, 0.414062, 0.773438);
	glEnd();

	glNormal3f( 0.058586, -0.068071, 0.995959 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.351562, 0.775236);
		glVertex3f( 0.000000, 0.210938, 0.765625);
		glVertex3f( 0.132812, 0.210938, 0.757812);
	glEnd();

	glNormal3f( -0.046913, -0.079071, 0.995764 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.351562, 0.775236);
		glVertex3f( -0.125000, 0.304688, 0.765625);
		glVertex3f( -0.132812, 0.210938, 0.757812);
	glEnd();

	glNormal3f( 0.057130, -0.231242, 0.971217 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.210938, 0.765625);
		glVertex3f( 0.000000, 0.046875, 0.726562);
		glVertex3f( 0.132812, 0.210938, 0.757812);
	glEnd();

	glNormal3f( -0.057130, -0.231242, 0.971217 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.210938, 0.765625);
		glVertex3f( -0.132812, 0.210938, 0.757812);
		glVertex3f( 0.000000, 0.046875, 0.726562);
	glEnd();

	glNormal3f( 0.192159, -0.355021, 0.914896 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.794525, 0.687500);
		glVertex3f( 0.000000, -0.869588, 0.658372);
		glVertex3f( 0.145101, -0.875598, 0.625564);
	glEnd();

	glNormal3f( 0.096225, -0.707266, 0.700368 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.794525, 0.687500);
		glVertex3f( -0.062500, -0.795292, 0.695312);
		glVertex3f( -0.145101, -0.875598, 0.625564);
	glEnd();

	glNormal3f( 0.304087, -0.426901, 0.851638 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.062500, -0.795292, 0.695312);
		glVertex3f( 0.145101, -0.875598, 0.625564);
		glVertex3f( 0.234375, -0.818374, 0.622373);
	glEnd();

	glNormal3f( -0.205693, -0.683023, 0.700835 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.062500, -0.795292, 0.695312);
		glVertex3f( -0.170613, -0.792491, 0.666311);
		glVertex3f( -0.234375, -0.818374, 0.622373);
	glEnd();

	glNormal3f( 0.636468, -0.156923, 0.755171 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.235353, -0.613780, 0.664062);
		glVertex3f( 0.195077, -0.602474, 0.700357);
		glVertex3f( 0.234375, -0.818374, 0.622373);
	glEnd();

	glNormal3f( -0.636468, -0.156923, 0.755171 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.235353, -0.613780, 0.664062);
		glVertex3f( -0.234375, -0.818374, 0.622373);
		glVertex3f( -0.195077, -0.602474, 0.700357);
	glEnd();

	glNormal3f( 0.361281, -0.004211, 0.932447 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.098594, -0.457223, 0.741813);
		glVertex3f( 0.117188, -0.508885, 0.734375);
		glVertex3f( 0.234668, -0.540117, 0.688716);
	glEnd();

	glNormal3f( -0.225176, -0.168570, 0.959625 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.078125, -0.400351, 0.750000);
		glVertex3f( -0.210938, -0.445312, 0.710938);
		glVertex3f( -0.223372, -0.494990, 0.699293);
	glEnd();

	glNormal3f( 0.274203, -0.302916, 0.912718 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.235353, -0.613780, 0.664062);
		glVertex3f( 0.234668, -0.540117, 0.688716);
		glVertex3f( 0.117188, -0.508885, 0.734375);
	glEnd();

	glNormal3f( -0.681409, 0.329563, 0.653506 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.235353, -0.613780, 0.664062);
		glVertex3f( -0.195077, -0.602474, 0.700357);
		glVertex3f( -0.117188, -0.508885, 0.734375);
	glEnd();

	glNormal3f( -0.000059, 0.070032, 0.997545 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.078125, -0.400351, 0.750000);
		glVertex3f( 0.085938, -0.289062, 0.742188);
		glVertex3f( 0.000000, -0.400416, 0.750000);
	glEnd();

	glNormal3f( 0.000059, 0.070032, 0.997545 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.078125, -0.400351, 0.750000);
		glVertex3f( 0.000000, -0.400416, 0.750000);
		glVertex3f( -0.085938, -0.289062, 0.742188);
	glEnd();

	glNormal3f( 0.001959, -0.139323, 0.990245 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.458609, 0.741813);
		glVertex3f( 0.098594, -0.457223, 0.741813);
		glVertex3f( 0.000000, -0.400416, 0.750000);
	glEnd();

	glNormal3f( -0.003073, -0.139324, 0.990242 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.511471, 0.734375);
		glVertex3f( 0.000000, -0.458609, 0.741813);
		glVertex3f( -0.117188, -0.508885, 0.734375);
	glEnd();

	glNormal3f( 0.007416, -0.336146, 0.941781 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.195077, -0.602474, 0.700357);
		glVertex3f( 0.117188, -0.508885, 0.734375);
		glVertex3f( 0.000000, -0.511471, 0.734375);
	glEnd();

	glNormal3f( -0.171789, -0.000000, 0.985134 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.195077, -0.602474, 0.700357);
		glVertex3f( 0.000000, -0.572729, 0.734375);
		glVertex3f( 0.000000, -0.511471, 0.734375);
	glEnd();

	glNormal3f( 0.744073, -0.658218, 0.114473 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.132812, -0.226562, 0.796875);
		glVertex3f( 0.093750, -0.273438, 0.781250);
		glVertex3f( 0.085938, -0.289062, 0.742188);
	glEnd();

	glNormal3f( -0.847337, -0.511933, -0.141223 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.132812, -0.226562, 0.796875);
		glVertex3f( -0.125000, -0.226562, 0.750000);
		glVertex3f( -0.085938, -0.289062, 0.742188);
	glEnd();

	glNormal3f( 0.949990, 0.269164, -0.158332 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.125000, -0.226562, 0.750000);
		glVertex3f( 0.101562, -0.148438, 0.742188);
		glVertex3f( 0.132812, -0.226562, 0.796875);
	glEnd();

	glNormal3f( -0.949990, 0.269164, -0.158332 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.125000, -0.226562, 0.750000);
		glVertex3f( -0.132812, -0.226562, 0.796875);
		glVertex3f( -0.101562, -0.148438, 0.742188);
	glEnd();

	glNormal3f( 0.070860, 0.921175, -0.382642 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.101562, -0.148438, 0.742188);
		glVertex3f( 0.000000, -0.140625, 0.742188);
		glVertex3f( 0.109375, -0.132812, 0.781250);
	glEnd();

	glNormal3f( -0.070860, 0.921175, -0.382642 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.101562, -0.148438, 0.742188);
		glVertex3f( -0.109375, -0.132812, 0.781250);
		glVertex3f( 0.000000, -0.140625, 0.742188);
	glEnd();

	glNormal3f( -0.722993, 0.097702, 0.683912 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.140625, 0.742188);
		glVertex3f( 0.000000, -0.195312, 0.750000);
		glVertex3f( 0.039062, -0.125000, 0.781250);
	glEnd();

	glNormal3f( 0.722993, 0.097702, 0.683912 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.140625, 0.742188);
		glVertex3f( -0.039062, -0.125000, 0.781250);
		glVertex3f( 0.000000, -0.195312, 0.750000);
	glEnd();

	glNormal3f( 0.440225, -0.880451, 0.176090 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.320312, 0.781250);
		glVertex3f( 0.000000, -0.328125, 0.742188);
		glVertex3f( 0.093750, -0.273438, 0.781250);
	glEnd();

	glNormal3f( -0.440225, -0.880451, 0.176090 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.320312, 0.781250);
		glVertex3f( -0.093750, -0.273438, 0.781250);
		glVertex3f( 0.000000, -0.328125, 0.742188);
	glEnd();

	glNormal3f( 0.287348, -0.574696, 0.766261 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.289062, 0.804688);
		glVertex3f( 0.000000, -0.320312, 0.781250);
		glVertex3f( 0.078125, -0.250000, 0.804688);
	glEnd();

	glNormal3f( -0.287348, -0.574696, 0.766261 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.289062, 0.804688);
		glVertex3f( -0.078125, -0.250000, 0.804688);
		glVertex3f( 0.000000, -0.320312, 0.781250);
	glEnd();

	glNormal3f( -0.520719, 0.615395, 0.591726 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.203125, 0.828125);
		glVertex3f( 0.046875, -0.148438, 0.812500);
		glVertex3f( 0.039062, -0.125000, 0.781250);
	glEnd();

	glNormal3f( 0.781404, 0.558146, 0.279073 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.203125, 0.828125);
		glVertex3f( 0.000000, -0.187500, 0.796875);
		glVertex3f( -0.039062, -0.125000, 0.781250);
	glEnd();

	glNormal3f( 0.127000, 0.762001, 0.635001 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.046875, -0.148438, 0.812500);
		glVertex3f( 0.093750, -0.156250, 0.812500);
		glVertex3f( 0.109375, -0.132812, 0.781250);
	glEnd();

	glNormal3f( -0.089712, 0.807410, 0.583130 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.046875, -0.148438, 0.812500);
		glVertex3f( -0.039062, -0.125000, 0.781250);
		glVertex3f( -0.109375, -0.132812, 0.781250);
	glEnd();

	glNormal3f( 0.766261, 0.287348, 0.574696 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.132812, -0.226562, 0.796875);
		glVertex3f( 0.109375, -0.132812, 0.781250);
		glVertex3f( 0.109375, -0.226562, 0.828125);
	glEnd();

	glNormal3f( -0.766261, 0.287348, 0.574696 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.132812, -0.226562, 0.796875);
		glVertex3f( -0.109375, -0.226562, 0.828125);
		glVertex3f( -0.109375, -0.132812, 0.781250);
	glEnd();

	glNormal3f( 0.000000, -0.707107, 0.707107 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.109375, -0.226562, 0.828125);
		glVertex3f( 0.078125, -0.250000, 0.804688);
		glVertex3f( 0.093750, -0.273438, 0.781250);
	glEnd();

	glNormal3f( -0.604551, -0.654931, 0.453413 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.109375, -0.226562, 0.828125);
		glVertex3f( -0.132812, -0.226562, 0.796875);
		glVertex3f( -0.093750, -0.273438, 0.781250);
	glEnd();

	glNormal3f( 0.040390, 0.242338, 0.969351 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.046875, -0.148438, 0.812500);
		glVertex3f( 0.000000, -0.203125, 0.828125);
		glVertex3f( 0.093750, -0.156250, 0.812500);
	glEnd();

	glNormal3f( -0.040390, 0.242338, 0.969351 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.046875, -0.148438, 0.812500);
		glVertex3f( -0.093750, -0.156250, 0.812500);
		glVertex3f( 0.000000, -0.203125, 0.828125);
	glEnd();

	glNormal3f( 0.428571, -0.857143, 0.285714 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.289062, 0.804688);
		glVertex3f( 0.078125, -0.250000, 0.804688);
		glVertex3f( 0.109375, -0.226562, 0.828125);
	glEnd();

	glNormal3f( 0.056293, -0.262700, 0.963234 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.289062, 0.804688);
		glVertex3f( 0.000000, -0.203125, 0.828125);
		glVertex3f( -0.109375, -0.226562, 0.828125);
	glEnd();

	glNormal3f( -0.547679, -0.220218, 0.807188 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.101562, -0.148438, 0.742188);
		glVertex3f( 0.146892, -0.101562, 0.785732);
		glVertex3f( 0.000000, 0.046875, 0.726562);
	glEnd();

	glNormal3f( -0.006388, 0.083044, 0.996525 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.101562, -0.148438, 0.742188);
		glVertex3f( 0.000000, -0.140625, 0.742188);
		glVertex3f( 0.000000, 0.046875, 0.726562);
	glEnd();

	glNormal3f( 0.605150, -0.314990, 0.731146 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.125000, -0.226562, 0.750000);
		glVertex3f( 0.164062, -0.242188, 0.710938);
		glVertex3f( 0.146892, -0.101562, 0.785732);
	glEnd();

	glNormal3f( 0.626523, -0.110808, 0.771486 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.125000, -0.226562, 0.750000);
		glVertex3f( -0.101562, -0.148438, 0.742188);
		glVertex3f( -0.146892, -0.101562, 0.785732);
	glEnd();

	glNormal3f( 0.729421, 0.162094, 0.664583 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.164062, -0.242188, 0.710938);
		glVertex3f( 0.125000, -0.226562, 0.750000);
		glVertex3f( 0.179688, -0.312500, 0.710938);
	glEnd();

	glNormal3f( -0.729421, 0.162094, 0.664583 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.164062, -0.242188, 0.710938);
		glVertex3f( -0.179688, -0.312500, 0.710938);
		glVertex3f( -0.125000, -0.226562, 0.750000);
	glEnd();

	glNormal3f( 0.332822, 0.078311, 0.939732 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.179688, -0.312500, 0.710938);
		glVertex3f( 0.085938, -0.289062, 0.742188);
		glVertex3f( 0.210938, -0.445312, 0.710938);
	glEnd();

	glNormal3f( -0.332822, 0.078311, 0.939732 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.179688, -0.312500, 0.710938);
		glVertex3f( -0.210938, -0.445312, 0.710938);
		glVertex3f( -0.085938, -0.289062, 0.742188);
	glEnd();

	glNormal3f( 0.603233, 0.141937, 0.784834 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.382976, -0.312500, 0.554688);
		glVertex3f( 0.179688, -0.312500, 0.710938);
		glVertex3f( 0.210938, -0.445312, 0.710938);
	glEnd();

	glNormal3f( -0.764402, -0.364498, 0.531818 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.382976, -0.312500, 0.554688);
		glVertex3f( -0.312500, -0.437500, 0.570312);
		glVertex3f( -0.210938, -0.445312, 0.710938);
	glEnd();

	glNormal3f( 0.603891, 0.134198, 0.785689 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.179688, -0.312500, 0.710938);
		glVertex3f( 0.382976, -0.312500, 0.554688);
		glVertex3f( 0.164062, -0.242188, 0.710938);
	glEnd();

	glNormal3f( -0.603891, 0.134198, 0.785689 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.179688, -0.312500, 0.710938);
		glVertex3f( -0.164062, -0.242188, 0.710938);
		glVertex3f( -0.382976, -0.312500, 0.554688);
	glEnd();

	glNormal3f( 0.575408, -0.328187, 0.749132 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.146892, -0.101562, 0.785732);
		glVertex3f( 0.164062, -0.242188, 0.710938);
		glVertex3f( 0.363031, -0.250000, 0.554688);
	glEnd();

	glNormal3f( -0.315930, -0.635936, 0.704112 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.146892, -0.101562, 0.785732);
		glVertex3f( -0.471425, -0.187500, 0.562500);
		glVertex3f( -0.363031, -0.250000, 0.554688);
	glEnd();

	glNormal3f( 0.036213, -0.342160, 0.938944 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.572729, 0.734375);
		glVertex3f( 0.000000, -0.615607, 0.718750);
		glVertex3f( 0.123996, -0.625345, 0.710419);
	glEnd();

	glNormal3f( -0.161295, -0.068155, 0.984550 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.572729, 0.734375);
		glVertex3f( -0.195077, -0.602474, 0.700357);
		glVertex3f( -0.123996, -0.625345, 0.710419);
	glEnd();

	glNormal3f( 0.440978, -0.112002, 0.890502 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.093750, -0.740307, 0.710938);
		glVertex3f( 0.170613, -0.792491, 0.666311);
		glVertex3f( 0.123996, -0.625345, 0.710419);
	glEnd();

	glNormal3f( -0.440978, -0.112002, 0.890502 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.093750, -0.740307, 0.710938);
		glVertex3f( -0.123996, -0.625345, 0.710419);
		glVertex3f( -0.170613, -0.792491, 0.666311);
	glEnd();

	glNormal3f( -0.164311, -0.769634, 0.616981 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.170613, -0.792491, 0.666311);
		glVertex3f( 0.093750, -0.740307, 0.710938);
		glVertex3f( 0.046875, -0.749088, 0.687500);
	glEnd();

	glNormal3f( -0.245554, 0.241770, 0.938750 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.170613, -0.792491, 0.666311);
		glVertex3f( -0.062500, -0.795292, 0.695312);
		glVertex3f( -0.046875, -0.749088, 0.687500);
	glEnd();

	glNormal3f( -0.000943, 0.166410, 0.986056 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.062500, -0.795292, 0.695312);
		glVertex3f( 0.046875, -0.749088, 0.687500);
		glVertex3f( 0.000000, -0.749354, 0.687500);
	glEnd();

	glNormal3f( 0.124036, 0.000000, 0.992278 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.062500, -0.795292, 0.695312);
		glVertex3f( 0.000000, -0.794525, 0.687500);
		glVertex3f( 0.000000, -0.749354, 0.687500);
	glEnd();

	glNormal3f( -0.086724, 0.944664, 0.316368 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.731039, 0.632812);
		glVertex3f( 0.000000, -0.749354, 0.687500);
		glVertex3f( 0.046875, -0.726736, 0.632812);
	glEnd();

	glNormal3f( 0.086724, 0.944664, 0.316368 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.731039, 0.632812);
		glVertex3f( -0.046875, -0.726736, 0.632812);
		glVertex3f( 0.000000, -0.749354, 0.687500);
	glEnd();

	glNormal3f( 0.029354, 0.987642, 0.153950 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.093750, -0.740307, 0.710938);
		glVertex3f( 0.093750, -0.729347, 0.640625);
		glVertex3f( 0.046875, -0.726736, 0.632812);
	glEnd();

	glNormal3f( 0.340866, 0.870228, 0.355687 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.093750, -0.740307, 0.710938);
		glVertex3f( -0.046875, -0.749088, 0.687500);
		glVertex3f( -0.046875, -0.726736, 0.632812);
	glEnd();

	glNormal3f( -0.828463, -0.125365, 0.545832 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.123996, -0.625345, 0.710419);
		glVertex3f( 0.093750, -0.627301, 0.664062);
		glVertex3f( 0.093750, -0.729347, 0.640625);
	glEnd();

	glNormal3f( 0.966285, 0.254404, 0.039656 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.123996, -0.625345, 0.710419);
		glVertex3f( -0.093750, -0.740307, 0.710938);
		glVertex3f( -0.093750, -0.729347, 0.640625);
	glEnd();

	glNormal3f( -0.107943, -0.987814, 0.112121 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.093750, -0.627301, 0.664062);
		glVertex3f( 0.123996, -0.625345, 0.710419);
		glVertex3f( 0.000000, -0.617944, 0.656250);
	glEnd();

	glNormal3f( 0.107943, -0.987814, 0.112121 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.093750, -0.627301, 0.664062);
		glVertex3f( 0.000000, -0.617944, 0.656250);
		glVertex3f( -0.123996, -0.625345, 0.710419);
	glEnd();

	glNormal3f( 0.028638, -0.311959, 0.949664 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.731039, 0.632812);
		glVertex3f( 0.046875, -0.726736, 0.632812);
		glVertex3f( 0.093750, -0.627301, 0.664062);
	glEnd();

	glNormal3f( 0.101330, -0.201880, 0.974154 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.731039, 0.632812);
		glVertex3f( 0.000000, -0.617944, 0.656250);
		glVertex3f( -0.093750, -0.627301, 0.664062);
	glEnd();

	glNormal3f( -0.598986, -0.245040, 0.762346 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.164062, 0.140625, 0.750000);
		glVertex3f( 0.187500, 0.156250, 0.773438);
		glVertex3f( 0.171875, 0.218750, 0.781250);
	glEnd();

	glNormal3f( 0.448143, -0.293016, 0.844577 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.164062, 0.140625, 0.750000);
		glVertex3f( -0.132812, 0.210938, 0.757812);
		glVertex3f( -0.171875, 0.218750, 0.781250);
	glEnd();

	glNormal3f( -0.521443, 0.052144, 0.851691 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.132812, 0.210938, 0.757812);
		glVertex3f( 0.171875, 0.218750, 0.781250);
		glVertex3f( 0.179688, 0.296875, 0.781250);
	glEnd();

	glNormal3f( 0.286864, -0.103271, 0.952389 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.132812, 0.210938, 0.757812);
		glVertex3f( -0.125000, 0.304688, 0.765625);
		glVertex3f( -0.179688, 0.296875, 0.781250);
	glEnd();

	glNormal3f( -0.123882, 0.049553, 0.991059 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.210938, 0.375000, 0.781250);
		glVertex3f( 0.164062, 0.414062, 0.773438);
		glVertex3f( 0.179688, 0.296875, 0.781250);
	glEnd();

	glNormal3f( 0.123882, 0.049553, 0.991059 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.210938, 0.375000, 0.781250);
		glVertex3f( -0.179688, 0.296875, 0.781250);
		glVertex3f( -0.164062, 0.414062, 0.773438);
	glEnd();

	glNormal3f( -0.548821, -0.329293, 0.768350 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.187500, 0.156250, 0.773438);
		glVertex3f( 0.164062, 0.140625, 0.750000);
		glVertex3f( 0.226562, 0.109375, 0.781250);
	glEnd();

	glNormal3f( 0.548821, -0.329293, 0.768350 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.187500, 0.156250, 0.773438);
		glVertex3f( -0.226562, 0.109375, 0.781250);
		glVertex3f( -0.164062, 0.140625, 0.750000);
	glEnd();

	glNormal3f( 0.000000, -0.640184, 0.768221 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.375000, 0.015625, 0.703125);
		glVertex3f( 0.375000, 0.062500, 0.742188);
		glVertex3f( 0.226562, 0.109375, 0.781250);
	glEnd();

	glNormal3f( 0.265483, -0.829636, 0.491144 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.375000, 0.015625, 0.703125);
		glVertex3f( -0.203125, 0.093750, 0.742188);
		glVertex3f( -0.226562, 0.109375, 0.781250);
	glEnd();

	glNormal3f( 0.397220, -0.635553, 0.662034 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.492188, 0.062500, 0.671875);
		glVertex3f( 0.476562, 0.101562, 0.718750);
		glVertex3f( 0.375000, 0.062500, 0.742188);
	glEnd();

	glNormal3f( -0.418605, -0.581395, 0.697674 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.492188, 0.062500, 0.671875);
		glVertex3f( -0.375000, 0.015625, 0.703125);
		glVertex3f( -0.375000, 0.062500, 0.742188);
	glEnd();

	glNormal3f( 0.516784, -0.214514, 0.828805 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.625000, 0.187500, 0.648438);
		glVertex3f( 0.578125, 0.195312, 0.679688);
		glVertex3f( 0.476562, 0.101562, 0.718750);
	glEnd();

	glNormal3f( -0.591414, -0.511493, 0.623382 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.625000, 0.187500, 0.648438);
		glVertex3f( -0.492188, 0.062500, 0.671875);
		glVertex3f( -0.476562, 0.101562, 0.718750);
	glEnd();

	glNormal3f( 0.588226, -0.115716, 0.800375 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.640625, 0.296875, 0.648438);
		glVertex3f( 0.585938, 0.289062, 0.687500);
		glVertex3f( 0.582670, 0.249851, 0.684232);
	glEnd();

	glNormal3f( -0.544023, -0.077717, 0.835463 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.634090, 0.251128, 0.648438);
		glVertex3f( -0.625000, 0.187500, 0.648438);
		glVertex3f( -0.578125, 0.195312, 0.679688);
	glEnd();

	glNormal3f( 0.567152, 0.110664, 0.816145 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.585938, 0.289062, 0.687500);
		glVertex3f( 0.640625, 0.296875, 0.648438);
		glVertex3f( 0.562500, 0.351562, 0.695312);
	glEnd();

	glNormal3f( -0.567152, 0.110664, 0.816145 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.585938, 0.289062, 0.687500);
		glVertex3f( -0.562500, 0.351562, 0.695312);
		glVertex3f( -0.640625, 0.296875, 0.648438);
	glEnd();

	glNormal3f( 0.528094, 0.215149, 0.821479 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.562500, 0.351562, 0.695312);
		glVertex3f( 0.601562, 0.375000, 0.664062);
		glVertex3f( 0.421875, 0.398438, 0.773438);
	glEnd();

	glNormal3f( -0.528094, 0.215149, 0.821479 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.562500, 0.351562, 0.695312);
		glVertex3f( -0.421875, 0.398438, 0.773438);
		glVertex3f( -0.601562, 0.375000, 0.664062);
	glEnd();

	glNormal3f( -0.061285, 0.306426, 0.949920 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.328125, 0.476562, 0.742188);
		glVertex3f( 0.335938, 0.429688, 0.757812);
		glVertex3f( 0.421875, 0.398438, 0.773438);
	glEnd();

	glNormal3f( -0.406303, 0.715093, 0.568824 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.328125, 0.476562, 0.742188);
		glVertex3f( -0.429688, 0.437500, 0.718750);
		glVertex3f( -0.421875, 0.398438, 0.773438);
	glEnd();

	glNormal3f( 0.177192, 0.389823, 0.903682 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.250000, 0.468750, 0.757812);
		glVertex3f( 0.273438, 0.421875, 0.773438);
		glVertex3f( 0.335938, 0.429688, 0.757812);
	glEnd();

	glNormal3f( -0.152410, 0.335302, 0.929701 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.250000, 0.468750, 0.757812);
		glVertex3f( -0.328125, 0.476562, 0.742188);
		glVertex3f( -0.335938, 0.429688, 0.757812);
	glEnd();

	glNormal3f( -0.012939, 0.181147, 0.983371 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.164062, 0.414062, 0.773438);
		glVertex3f( 0.210938, 0.375000, 0.781250);
		glVertex3f( 0.273438, 0.421875, 0.773438);
	glEnd();

	glNormal3f( 0.021878, 0.306290, 0.951687 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.164062, 0.414062, 0.773438);
		glVertex3f( -0.250000, 0.468750, 0.757812);
		glVertex3f( -0.273438, 0.421875, 0.773438);
	glEnd();

	glNormal3f( 0.355266, -0.573890, 0.737859 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.210938, 0.375000, 0.781250);
		glVertex3f( 0.234375, 0.359375, 0.757812);
		glVertex3f( 0.281250, 0.398438, 0.765625);
	glEnd();

	glNormal3f( -0.280430, -0.218112, 0.934765 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.210938, 0.375000, 0.781250);
		glVertex3f( -0.273438, 0.421875, 0.773438);
		glVertex3f( -0.281250, 0.398438, 0.765625);
	glEnd();

	glNormal3f( 0.296334, -0.211667, 0.931334 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.273438, 0.421875, 0.773438);
		glVertex3f( 0.281250, 0.398438, 0.765625);
		glVertex3f( 0.335938, 0.406250, 0.750000);
	glEnd();

	glNormal3f( -0.266679, -0.304776, 0.914327 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.273438, 0.421875, 0.773438);
		glVertex3f( -0.335938, 0.429688, 0.757812);
		glVertex3f( -0.335938, 0.406250, 0.750000);
	glEnd();

	glNormal3f( -0.182574, -0.912871, 0.365148 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.414062, 0.390625, 0.750000);
		glVertex3f( 0.421875, 0.398438, 0.773438);
		glVertex3f( 0.335938, 0.406250, 0.750000);
	glEnd();

	glNormal3f( 0.182574, -0.912871, 0.365148 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.414062, 0.390625, 0.750000);
		glVertex3f( -0.335938, 0.406250, 0.750000);
		glVertex3f( -0.421875, 0.398438, 0.773438);
	glEnd();

	glNormal3f( 0.045478, -0.750388, 0.659432 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.531250, 0.335938, 0.679688);
		glVertex3f( 0.562500, 0.351562, 0.695312);
		glVertex3f( 0.414062, 0.390625, 0.750000);
	glEnd();

	glNormal3f( -0.045478, -0.750388, 0.659432 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.531250, 0.335938, 0.679688);
		glVertex3f( -0.414062, 0.390625, 0.750000);
		glVertex3f( -0.562500, 0.351562, 0.695312);
	glEnd();

	glNormal3f( -0.320713, -0.267261, 0.908688 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.562500, 0.351562, 0.695312);
		glVertex3f( 0.531250, 0.335938, 0.679688);
		glVertex3f( 0.554688, 0.281250, 0.671875);
	glEnd();

	glNormal3f( 0.381000, -0.254000, 0.889001 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.562500, 0.351562, 0.695312);
		glVertex3f( -0.585938, 0.289062, 0.687500);
		glVertex3f( -0.554688, 0.281250, 0.671875);
	glEnd();

	glNormal3f( -0.456760, 0.050750, 0.888141 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.585938, 0.289062, 0.687500);
		glVertex3f( 0.554688, 0.281250, 0.671875);
		glVertex3f( 0.551420, 0.251841, 0.671875);
	glEnd();

	glNormal3f( 0.230390, 0.025599, 0.972762 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.546875, 0.210938, 0.671875);
		glVertex3f( -0.551420, 0.251841, 0.671875);
		glVertex3f( -0.578125, 0.195312, 0.679688);
	glEnd();

	glNormal3f( -0.053239, 0.359362, 0.931678 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.578125, 0.195312, 0.679688);
		glVertex3f( 0.546875, 0.210938, 0.671875);
		glVertex3f( 0.460938, 0.117188, 0.703125);
	glEnd();

	glNormal3f( 0.221581, 0.569780, 0.791361 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.578125, 0.195312, 0.679688);
		glVertex3f( -0.476562, 0.101562, 0.718750);
		glVertex3f( -0.460938, 0.117188, 0.703125);
	glEnd();

	glNormal3f( 0.025206, 0.554524, 0.831786 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.375000, 0.085938, 0.726562);
		glVertex3f( 0.375000, 0.062500, 0.742188);
		glVertex3f( 0.460938, 0.117188, 0.703125);
	glEnd();

	glNormal3f( -0.025206, 0.554524, 0.831786 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.375000, 0.085938, 0.726562);
		glVertex3f( -0.460938, 0.117188, 0.703125);
		glVertex3f( -0.375000, 0.062500, 0.742188);
	glEnd();

	glNormal3f( 0.350177, 0.654679, 0.669904 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.242188, 0.125000, 0.757812);
		glVertex3f( 0.226562, 0.109375, 0.781250);
		glVertex3f( 0.375000, 0.085938, 0.726562);
	glEnd();

	glNormal3f( -0.350177, 0.654679, 0.669904 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.242188, 0.125000, 0.757812);
		glVertex3f( -0.375000, 0.085938, 0.726562);
		glVertex3f( -0.226562, 0.109375, 0.781250);
	glEnd();

	glNormal3f( 0.498784, 0.529958, 0.685828 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.226562, 0.109375, 0.781250);
		glVertex3f( 0.242188, 0.125000, 0.757812);
		glVertex3f( 0.203125, 0.171875, 0.750000);
	glEnd();

	glNormal3f( -0.498784, 0.529958, 0.685828 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.226562, 0.109375, 0.781250);
		glVertex3f( -0.187500, 0.156250, 0.773438);
		glVertex3f( -0.203125, 0.171875, 0.750000);
	glEnd();

	glNormal3f( 0.738200, -0.461375, 0.492133 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.179688, 0.296875, 0.781250);
		glVertex3f( 0.195312, 0.296875, 0.757812);
		glVertex3f( 0.234375, 0.359375, 0.757812);
	glEnd();

	glNormal3f( -0.601445, -0.240578, 0.761831 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.179688, 0.296875, 0.781250);
		glVertex3f( -0.210938, 0.375000, 0.781250);
		glVertex3f( -0.234375, 0.359375, 0.757812);
	glEnd();

	glNormal3f( 0.806064, -0.065357, 0.588209 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.171875, 0.218750, 0.781250);
		glVertex3f( 0.195312, 0.226562, 0.750000);
		glVertex3f( 0.195312, 0.296875, 0.757812);
	glEnd();

	glNormal3f( -0.829185, -0.082919, 0.552790 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.171875, 0.218750, 0.781250);
		glVertex3f( -0.179688, 0.296875, 0.781250);
		glVertex3f( -0.195312, 0.296875, 0.757812);
	glEnd();

	glNormal3f( 0.790345, 0.112906, 0.602168 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.187500, 0.156250, 0.773438);
		glVertex3f( 0.203125, 0.171875, 0.750000);
		glVertex3f( 0.195312, 0.226562, 0.750000);
	glEnd();

	glNormal3f( -0.779987, 0.118180, 0.614535 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.187500, 0.156250, 0.773438);
		glVertex3f( -0.171875, 0.218750, 0.781250);
		glVertex3f( -0.195312, 0.226562, 0.750000);
	glEnd();

	glNormal3f( -0.026365, 0.934320, 0.355459 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.580197, 0.601562);
		glVertex3f( 0.000000, 0.526697, 0.742188);
		glVertex3f( 0.109375, 0.580311, 0.609375);
	glEnd();

	glNormal3f( 0.026365, 0.934320, 0.355459 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.580197, 0.601562);
		glVertex3f( -0.109375, 0.580311, 0.609375);
		glVertex3f( 0.000000, 0.526697, 0.742188);
	glEnd();

	glNormal3f( -0.165891, 0.950379, 0.263173 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.109375, 0.580311, 0.609375);
		glVertex3f( 0.062500, 0.533188, 0.750000);
		glVertex3f( 0.195312, 0.593149, 0.617188);
	glEnd();

	glNormal3f( 0.165891, 0.950379, 0.263173 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.109375, 0.580311, 0.609375);
		glVertex3f( -0.195312, 0.593149, 0.617188);
		glVertex3f( -0.062500, 0.533188, 0.750000);
	glEnd();

	glNormal3f( -0.167580, 0.975687, -0.141249 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.195312, 0.593149, 0.617188);
		glVertex3f( 0.176552, 0.598552, 0.676767);
		glVertex3f( 0.335938, 0.613909, 0.593750);
	glEnd();

	glNormal3f( 0.167580, 0.975687, -0.141249 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.195312, 0.593149, 0.617188);
		glVertex3f( -0.335938, 0.613909, 0.593750);
		glVertex3f( -0.176552, 0.598552, 0.676767);
	glEnd();

	glNormal3f( 0.044459, 0.997192, -0.060255 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.335938, 0.613909, 0.593750);
		glVertex3f( 0.320312, 0.618205, 0.653325);
		glVertex3f( 0.484375, 0.604931, 0.554688);
	glEnd();

	glNormal3f( -0.044459, 0.997192, -0.060255 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.335938, 0.613909, 0.593750);
		glVertex3f( -0.484375, 0.604931, 0.554688);
		glVertex3f( -0.320312, 0.618205, 0.653325);
	glEnd();

	glNormal3f( 0.487529, 0.873063, -0.008775 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.484375, 0.604931, 0.554688);
		glVertex3f( 0.492188, 0.601562, 0.653644);
		glVertex3f( 0.679688, 0.495237, 0.492188);
	glEnd();

	glNormal3f( -0.487529, 0.873063, -0.008775 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.484375, 0.604931, 0.554688);
		glVertex3f( -0.679688, 0.495237, 0.492188);
		glVertex3f( -0.492188, 0.601562, 0.653644);
	glEnd();

	glNormal3f( 0.731093, 0.682200, 0.010310 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.679688, 0.495237, 0.492188);
		glVertex3f( 0.688381, 0.484375, 0.594497);
		glVertex3f( 0.763164, 0.406250, 0.460938);
	glEnd();

	glNormal3f( -0.731093, 0.682200, 0.010310 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.679688, 0.495237, 0.492188);
		glVertex3f( -0.763164, 0.406250, 0.460938);
		glVertex3f( -0.688381, 0.484375, 0.594497);
	glEnd();

	glNormal3f( 0.993839, 0.072043, -0.084227 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.767461, 0.304954, 0.424994);
		glVertex3f( 0.775987, 0.312053, 0.531665);
		glVertex3f( 0.773438, 0.164062, 0.375000);
	glEnd();

	glNormal3f( -0.981935, -0.024907, 0.187573 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.763164, 0.406250, 0.460938);
		glVertex3f( -0.767461, 0.304954, 0.424994);
		glVertex3f( -0.738388, 0.429688, 0.593750);
	glEnd();

	glNormal3f( 0.742690, -0.623741, -0.243638 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.682918, -0.007803, 0.539062);
		glVertex3f( 0.648466, 0.000000, 0.414062);
		glVertex3f( 0.773438, 0.164062, 0.375000);
	glEnd();

	glNormal3f( -0.922950, -0.146195, 0.356077 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.682918, -0.007803, 0.539062);
		glVertex3f( -0.743836, 0.148438, 0.445312);
		glVertex3f( -0.773438, 0.164062, 0.375000);
	glEnd();

	glNormal3f( 0.895807, -0.407192, -0.178115 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.622254, -0.108926, 0.531250);
		glVertex3f( 0.616725, -0.093750, 0.468750);
		glVertex3f( 0.648466, 0.000000, 0.414062);
	glEnd();

	glNormal3f( -0.836633, -0.481764, -0.260668 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.622254, -0.108926, 0.531250);
		glVertex3f( -0.682918, -0.007803, 0.539062);
		glVertex3f( -0.648466, 0.000000, 0.414062);
	glEnd();

	glNormal3f( 0.101532, -0.673626, -0.732065 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.200769, -0.522227, 0.164570);
		glVertex3f( 0.000000, -0.529406, 0.143331);
		glVertex3f( 0.284179, -0.435212, 0.096069);
	glEnd();

	glNormal3f( 0.018763, -0.590380, -0.806907 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.125000, -0.604867, 0.226796);
		glVertex3f( -0.200769, -0.522227, 0.164570);
		glVertex3f( 0.000000, -0.570312, 0.204420);
	glEnd();

	glNormal3f( -0.056351, -0.678270, -0.732649 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.570312, 0.204420);
		glVertex3f( 0.125000, -0.604867, 0.226796);
		glVertex3f( 0.140625, -0.757812, 0.367188);
	glEnd();

	glNormal3f( -0.299228, -0.487585, -0.820197 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.570312, 0.204420);
		glVertex3f( 0.000000, -0.804688, 0.343750);
		glVertex3f( -0.140625, -0.757812, 0.367188);
	glEnd();

	glNormal3f( 0.048540, -0.455986, -0.888662 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.164062, -0.920833, 0.452116);
		glVertex3f( 0.000000, -0.955489, 0.460938);
		glVertex3f( 0.140625, -0.757812, 0.367188);
	glEnd();

	glNormal3f( -0.048540, -0.455986, -0.888662 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.164062, -0.920833, 0.452116);
		glVertex3f( -0.140625, -0.757812, 0.367188);
		glVertex3f( 0.000000, -0.955489, 0.460938);
	glEnd();

	glNormal3f( 0.210900, -0.971974, 0.103866 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.164062, -0.920833, 0.452116);
		glVertex3f( 0.148618, -0.908363, 0.600169);
		glVertex3f( 0.000000, -0.955489, 0.460938);
	glEnd();

	glNormal3f( -0.210900, -0.971974, 0.103865 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.164062, -0.920833, 0.452116);
		glVertex3f( 0.000000, -0.955489, 0.460938);
		glVertex3f( -0.148618, -0.908363, 0.600169);
	glEnd();

	glNormal3f( 0.487521, -0.864311, 0.123654 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.148618, -0.908363, 0.600169);
		glVertex3f( 0.164062, -0.920833, 0.452116);
		glVertex3f( 0.257577, -0.868753, 0.447454);
	glEnd();

	glNormal3f( -0.417996, -0.906250, 0.063170 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.148618, -0.908363, 0.600169);
		glVertex3f( -0.285838, -0.850421, 0.523438);
		glVertex3f( -0.257577, -0.868753, 0.447454);
	glEnd();

	glNormal3f( 0.916937, -0.293619, -0.270212 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.285838, -0.850421, 0.523438);
		glVertex3f( 0.257577, -0.868753, 0.447454);
		glVertex3f( 0.289062, -0.710938, 0.382812);
	glEnd();

	glNormal3f( -0.866601, -0.364075, -0.341251 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.285838, -0.850421, 0.523438);
		glVertex3f( -0.340562, -0.727487, 0.531250);
		glVertex3f( -0.289062, -0.710938, 0.382812);
	glEnd();

	glNormal3f( 0.811293, -0.479214, -0.334899 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.340562, -0.727487, 0.531250);
		glVertex3f( 0.289062, -0.710938, 0.382812);
		glVertex3f( 0.385948, -0.542544, 0.376559);
	glEnd();

	glNormal3f( -0.971290, -0.042588, 0.234057 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.340562, -0.727487, 0.531250);
		glVertex3f( -0.337997, -0.571298, 0.570312);
		glVertex3f( -0.385948, -0.542544, 0.376559);
	glEnd();

	glNormal3f( 0.510188, -0.552730, -0.658937 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.140625, -0.757812, 0.367188);
		glVertex3f( 0.125000, -0.604867, 0.226796);
		glVertex3f( 0.385948, -0.542544, 0.376559);
	glEnd();

	glNormal3f( -0.140549, -0.117374, -0.983092 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.140625, -0.757812, 0.367188);
		glVertex3f( -0.289062, -0.710938, 0.382812);
		glVertex3f( -0.385948, -0.542544, 0.376559);
	glEnd();

	glNormal3f( 0.226273, -0.424261, -0.876814 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.140625, -0.757812, 0.367188);
		glVertex3f( 0.289062, -0.710938, 0.382812);
		glVertex3f( 0.164062, -0.920833, 0.452116);
	glEnd();

	glNormal3f( -0.226273, -0.424261, -0.876814 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.140625, -0.757812, 0.367188);
		glVertex3f( -0.164062, -0.920833, 0.452116);
		glVertex3f( -0.289062, -0.710938, 0.382812);
	glEnd();

	glNormal3f( 0.562994, -0.760250, -0.324126 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.200769, -0.522227, 0.164570);
		glVertex3f( 0.460622, -0.429344, 0.398062);
		glVertex3f( 0.125000, -0.604867, 0.226796);
	glEnd();

	glNormal3f( -0.609403, -0.760542, -0.224063 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.284179, -0.435212, 0.096069);
		glVertex3f( -0.200769, -0.522227, 0.164570);
		glVertex3f( -0.502621, -0.351562, 0.406250);
	glEnd();

	glNormal3f( 0.818257, -0.562392, 0.119042 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.337997, -0.571298, 0.570312);
		glVertex3f( 0.385948, -0.542544, 0.376559);
		glVertex3f( 0.460622, -0.429344, 0.398062);
	glEnd();

	glNormal3f( -0.617741, 0.117719, 0.777520 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.325860, -0.507610, 0.570312);
		glVertex3f( -0.312500, -0.437500, 0.570312);
		glVertex3f( -0.502621, -0.351562, 0.406250);
	glEnd();

	glNormal3f( 0.400992, -0.605033, 0.687852 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.530301, -0.281250, 0.429688);
		glVertex3f( 0.545809, -0.226562, 0.468750);
		glVertex3f( 0.363031, -0.250000, 0.554688);
	glEnd();

	glNormal3f( -0.610236, 0.194739, 0.767912 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.530301, -0.281250, 0.429688);
		glVertex3f( -0.382976, -0.312500, 0.554688);
		glVertex3f( -0.363031, -0.250000, 0.554688);
	glEnd();

	glNormal3f( 0.654822, -0.281519, 0.701396 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.382976, -0.312500, 0.554688);
		glVertex3f( 0.312500, -0.437500, 0.570312);
		glVertex3f( 0.530301, -0.281250, 0.429688);
	glEnd();

	glNormal3f( -0.654821, -0.281518, 0.701396 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.382976, -0.312500, 0.554688);
		glVertex3f( -0.530301, -0.281250, 0.429688);
		glVertex3f( -0.312500, -0.437500, 0.570312);
	glEnd();

	glNormal3f( 0.337619, -0.797072, 0.500690 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.363031, -0.250000, 0.554688);
		glVertex3f( 0.545809, -0.226562, 0.468750);
		glVertex3f( 0.533663, -0.192480, 0.531198);
	glEnd();

	glNormal3f( -0.309645, -0.626438, 0.715329 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.363031, -0.250000, 0.554688);
		glVertex3f( -0.471425, -0.187500, 0.562500);
		glVertex3f( -0.533663, -0.192480, 0.531198);
	glEnd();

	glNormal3f( 0.406276, -0.879060, -0.249388 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.622254, -0.108926, 0.531250);
		glVertex3f( 0.471425, -0.187500, 0.562500);
		glVertex3f( 0.616725, -0.093750, 0.468750);
	glEnd();

	glNormal3f( -0.406276, -0.879060, -0.249388 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.622254, -0.108926, 0.531250);
		glVertex3f( -0.616725, -0.093750, 0.468750);
		glVertex3f( -0.471425, -0.187500, 0.562500);
	glEnd();

	glNormal3f( 0.376801, -0.410500, -0.830368 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.195312, -0.671875);
		glVertex3f( 0.000000, 0.070312, -0.803189);
		glVertex3f( 0.343750, -0.148438, -0.539062);
	glEnd();

	glNormal3f( -0.376801, -0.410500, -0.830368 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.195312, -0.671875);
		glVertex3f( -0.343750, -0.148438, -0.539062);
		glVertex3f( 0.000000, 0.070312, -0.803189);
	glEnd();

	glNormal3f( 0.330884, -0.814402, -0.476723 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.382812, -0.351562);
		glVertex3f( 0.000000, -0.288044, -0.513459);
		glVertex3f( 0.296875, -0.312500, -0.265625);
	glEnd();

	glNormal3f( -0.313518, -0.819503, -0.479709 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.288044, -0.513459);
		glVertex3f( -0.320567, -0.229578, -0.403829);
		glVertex3f( 0.000000, -0.195312, -0.671875);
	glEnd();

	glNormal3f( 0.211938, -0.951225, -0.224172 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.460938, -0.020056);
		glVertex3f( 0.000000, -0.382812, -0.351562);
		glVertex3f( 0.372316, -0.390625, 0.033586);
	glEnd();

	glNormal3f( -0.211938, -0.951225, -0.224172 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.460938, -0.020056);
		glVertex3f( -0.372316, -0.390625, 0.033586);
		glVertex3f( 0.000000, -0.382812, -0.351562);
	glEnd();

	glNormal3f( 0.183551, -0.903986, -0.386158 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.372316, -0.390625, 0.033586);
		glVertex3f( 0.284179, -0.435212, 0.096069);
		glVertex3f( 0.000000, -0.484375, 0.076081);
	glEnd();

	glNormal3f( -0.212627, -0.949329, -0.231441 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.372316, -0.390625, 0.033586);
		glVertex3f( 0.000000, -0.460938, -0.020056);
		glVertex3f( 0.000000, -0.484375, 0.076081);
	glEnd();

	glNormal3f( 0.479263, -0.876200, 0.050789 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.284179, -0.435212, 0.096069);
		glVertex3f( 0.372316, -0.390625, 0.033586);
		glVertex3f( 0.530301, -0.281250, 0.429688);
	glEnd();

	glNormal3f( -0.826945, -0.144410, -0.543423 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.284179, -0.435212, 0.096069);
		glVertex3f( -0.502621, -0.351562, 0.406250);
		glVertex3f( -0.530301, -0.281250, 0.429688);
	glEnd();

	glNormal3f( 0.924524, -0.270977, 0.268007 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.648466, 0.000000, 0.414062);
		glVertex3f( 0.734375, -0.046875, 0.070312);
		glVertex3f( 0.821338, 0.234375, 0.054688);
	glEnd();

	glNormal3f( -0.793709, -0.608118, -0.014794 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.648466, 0.000000, 0.414062);
		glVertex3f( -0.773438, 0.164062, 0.375000);
		glVertex3f( -0.821338, 0.234375, 0.054688);
	glEnd();

	glNormal3f( 0.365518, -0.211840, -0.906377 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.460938, 0.437500, -0.703125);
		glVertex3f( 0.335938, 0.054688, -0.664062);
		glVertex3f( 0.000000, 0.070312, -0.803189);
	glEnd();

	glNormal3f( -0.175685, 0.047424, -0.983303 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.460938, 0.437500, -0.703125);
		glVertex3f( 0.000000, 0.505541, -0.782198);
		glVertex3f( 0.000000, 0.070312, -0.803189);
	glEnd();

	glNormal3f( 0.103449, 0.913394, 0.393713 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.453125, 0.798354, 0.234375);
		glVertex3f( 0.453125, 0.929688, -0.070312);
		glVertex3f( 0.000000, 0.984375, -0.078125);
	glEnd();

	glNormal3f( -0.235730, 0.946248, 0.221462 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.453125, 0.798354, 0.234375);
		glVertex3f( 0.000000, 0.898438, 0.289062);
		glVertex3f( 0.000000, 0.984375, -0.078125);
	glEnd();

	glNormal3f( 0.137321, 0.971291, -0.194258 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.453125, 0.898098, -0.228260);
		glVertex3f( 0.453125, 0.867188, -0.382812);
		glVertex3f( 0.000000, 0.898438, -0.546875);
	glEnd();

	glNormal3f( -0.120926, 0.976388, -0.179005 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.453125, 0.929688, -0.070312);
		glVertex3f( 0.000000, 0.984375, -0.078125);
		glVertex3f( 0.000000, 0.940939, -0.315046);
	glEnd();

	glNormal3f( 0.210909, 0.384215, -0.898831 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.505541, -0.782198);
		glVertex3f( 0.000000, 0.757930, -0.674312);
		glVertex3f( 0.460938, 0.437500, -0.703125);
	glEnd();

	glNormal3f( -0.300033, 0.640864, -0.706593 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.453125, 0.867188, -0.382812);
		glVertex3f( 0.000000, 0.898438, -0.546875);
		glVertex3f( 0.000000, 0.757930, -0.674312);
	glEnd();

	glNormal3f( 0.845553, 0.524258, -0.100962 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.763164, 0.406250, 0.460938);
		glVertex3f( 0.726562, 0.438318, 0.320916);
		glVertex3f( 0.632812, 0.581885, 0.281250);
	glEnd();

	glNormal3f( -0.743522, 0.660259, 0.105989 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.763164, 0.406250, 0.460938);
		glVertex3f( -0.679688, 0.495237, 0.492188);
		glVertex3f( -0.632812, 0.581885, 0.281250);
	glEnd();

	glNormal3f( 0.455936, 0.700250, 0.549337 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.726562, 0.438318, 0.320916);
		glVertex3f( 0.771888, 0.562500, 0.125000);
		glVertex3f( 0.640625, 0.703125, 0.054688);
	glEnd();

	glNormal3f( -0.743814, 0.578306, 0.335117 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.726562, 0.438318, 0.320916);
		glVertex3f( -0.632812, 0.581885, 0.281250);
		glVertex3f( -0.640625, 0.703125, 0.054688);
	glEnd();

	glNormal3f( 0.557602, 0.795509, 0.237160 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.771888, 0.562500, 0.125000);
		glVertex3f( 0.796875, 0.617188, -0.117188);
		glVertex3f( 0.640625, 0.750000, -0.195312);
	glEnd();

	glNormal3f( -0.690367, 0.711068, 0.133325 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.771888, 0.562500, 0.125000);
		glVertex3f( -0.640625, 0.703125, 0.054688);
		glVertex3f( -0.640625, 0.750000, -0.195312);
	glEnd();

	glNormal3f( 0.715914, 0.664472, -0.214346 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.796875, 0.577701, -0.239597);
		glVertex3f( 0.796875, 0.539062, -0.359375);
		glVertex3f( 0.640625, 0.679688, -0.445312);
	glEnd();

	glNormal3f( -0.690128, 0.696658, -0.195935 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.796875, 0.617188, -0.117188);
		glVertex3f( -0.640625, 0.750000, -0.195312);
		glVertex3f( -0.640625, 0.714462, -0.321671);
	glEnd();

	glNormal3f( 0.590457, 0.174525, -0.787973 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.796875, 0.539062, -0.359375);
		glVertex3f( 0.787072, 0.424696, -0.392051);
		glVertex3f( 0.640625, 0.679688, -0.445312);
	glEnd();

	glNormal3f( -0.645354, 0.158204, -0.747321 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.787072, 0.424696, -0.392051);
		glVertex3f( -0.630822, 0.532645, -0.504130);
		glVertex3f( -0.773438, 0.265625, -0.437500);
	glEnd();

	glNormal3f( 0.058015, 0.367429, -0.928240 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.453125, 0.867188, -0.382812);
		glVertex3f( 0.640625, 0.679688, -0.445312);
		glVertex3f( 0.630822, 0.532645, -0.504130);
	glEnd();

	glNormal3f( -0.714499, 0.426452, -0.554643 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.456393, 0.687469, -0.516785);
		glVertex3f( -0.460938, 0.437500, -0.703125);
		glVertex3f( -0.617188, 0.328125, -0.585938);
	glEnd();

	glNormal3f( 0.595903, 0.773063, -0.217424 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.453125, 0.929688, -0.070312);
		glVertex3f( 0.640625, 0.750000, -0.195312);
		glVertex3f( 0.640625, 0.714462, -0.321671);
	glEnd();

	glNormal3f( -0.675140, 0.723364, -0.144673 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.453125, 0.898098, -0.228260);
		glVertex3f( -0.453125, 0.867188, -0.382812);
		glVertex3f( -0.640625, 0.679688, -0.445312);
	glEnd();

	glNormal3f( 0.559927, 0.814351, 0.152691 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.453125, 0.798354, 0.234375);
		glVertex3f( 0.640625, 0.703125, 0.054688);
		glVertex3f( 0.640625, 0.750000, -0.195312);
	glEnd();

	glNormal3f( -0.752888, 0.604391, 0.260520 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.453125, 0.798354, 0.234375);
		glVertex3f( -0.453125, 0.929688, -0.070312);
		glVertex3f( -0.640625, 0.750000, -0.195312);
	glEnd();

	glNormal3f( 0.539456, 0.734520, 0.411665 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.460938, 0.624923, 0.429688);
		glVertex3f( 0.632812, 0.581885, 0.281250);
		glVertex3f( 0.640625, 0.703125, 0.054688);
	glEnd();

	glNormal3f( -0.708598, 0.541457, 0.452452 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.460938, 0.624923, 0.429688);
		glVertex3f( -0.453125, 0.798354, 0.234375);
		glVertex3f( -0.640625, 0.703125, 0.054688);
	glEnd();

	glNormal3f( 0.315785, 0.944376, 0.091832 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.460938, 0.624923, 0.429688);
		glVertex3f( 0.484375, 0.604931, 0.554688);
		glVertex3f( 0.632812, 0.581885, 0.281250);
	glEnd();

	glNormal3f( -0.315785, 0.944376, 0.091832 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.460938, 0.624923, 0.429688);
		glVertex3f( -0.632812, 0.581885, 0.281250);
		glVertex3f( -0.484375, 0.604931, 0.554688);
	glEnd();

	glNormal3f( 0.234348, 0.682969, 0.691834 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.898438, 0.289062);
		glVertex3f( 0.000000, 0.613537, 0.570312);
		glVertex3f( 0.453125, 0.798354, 0.234375);
	glEnd();

	glNormal3f( -0.234348, 0.682969, 0.691834 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.898438, 0.289062);
		glVertex3f( -0.453125, 0.798354, 0.234375);
		glVertex3f( 0.000000, 0.613537, 0.570312);
	glEnd();

	glNormal3f( -0.208609, 0.411380, -0.887270 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.195312, 0.593149, 0.617188);
		glVertex3f( 0.335938, 0.613909, 0.593750);
		glVertex3f( 0.484375, 0.604931, 0.554688);
	glEnd();

	glNormal3f( 0.109850, 0.937070, -0.331409 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.195312, 0.593149, 0.617188);
		glVertex3f( -0.109375, 0.580311, 0.609375);
		glVertex3f( -0.484375, 0.604931, 0.554688);
	glEnd();

	glNormal3f( 0.022512, 0.987850, 0.153774 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.484375, 0.604931, 0.554688);
		glVertex3f( 0.460938, 0.624923, 0.429688);
		glVertex3f( 0.000000, 0.613537, 0.570312);
	glEnd();

	glNormal3f( -0.033397, 0.805516, 0.591632 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.484375, 0.604931, 0.554688);
		glVertex3f( -0.109375, 0.580311, 0.609375);
		glVertex3f( 0.000000, 0.613537, 0.570312);
	glEnd();

	glNormal3f( 0.936770, 0.342672, 0.070982 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.766203, 0.353018, 0.209565);
		glVertex3f( 0.767461, 0.304954, 0.424994);
		glVertex3f( 0.821338, 0.234375, 0.054688);
	glEnd();

	glNormal3f( -0.845396, 0.524531, -0.100858 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.726562, 0.438318, 0.320916);
		glVertex3f( -0.766203, 0.353018, 0.209565);
		glVertex3f( -0.763164, 0.406250, 0.460938);
	glEnd();

	glNormal3f( 0.960512, 0.073004, 0.268489 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.799681, 0.461204, 0.053112);
		glVertex3f( 0.771888, 0.562500, 0.125000);
		glVertex3f( 0.726562, 0.438318, 0.320916);
	glEnd();

	glNormal3f( -0.960189, 0.112328, 0.255774 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.838339, 0.320312, -0.046875);
		glVertex3f( -0.821338, 0.234375, 0.054688);
		glVertex3f( -0.766203, 0.353018, 0.209565);
	glEnd();

	glNormal3f( 0.992490, 0.046882, 0.112984 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.806678, 0.496286, -0.153131);
		glVertex3f( 0.796875, 0.617188, -0.117188);
		glVertex3f( 0.771888, 0.562500, 0.125000);
	glEnd();

	glNormal3f( -0.966961, 0.254466, 0.015287 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.832661, 0.352117, -0.217146);
		glVertex3f( -0.838339, 0.320312, -0.046875);
		glVertex3f( -0.799681, 0.461204, 0.053112);
	glEnd();

	glNormal3f( 0.986748, 0.114257, -0.115208 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.806678, 0.496286, -0.153131);
		glVertex3f( 0.796768, 0.460102, -0.273889);
		glVertex3f( 0.796875, 0.617188, -0.117188);
	glEnd();

	glNormal3f( -0.975532, 0.060733, -0.211302 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.796620, 0.296535, -0.321586);
		glVertex3f( -0.796768, 0.460102, -0.273889);
		glVertex3f( -0.773438, 0.265625, -0.437500);
	glEnd();

	glNormal3f( 0.457226, -0.867303, -0.196801 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.296875, -0.312500, -0.265625);
		glVertex3f( 0.463364, -0.237139, -0.210938);
		glVertex3f( 0.506644, -0.267260, 0.022357);
	glEnd();

	glNormal3f( -0.620292, -0.706441, -0.340850 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.296875, -0.312500, -0.265625);
		glVertex3f( -0.372316, -0.390625, 0.033586);
		glVertex3f( -0.506644, -0.267260, 0.022357);
	glEnd();

	glNormal3f( -0.590594, 0.806629, 0.023413 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.632661, -0.123356, 0.139504);
		glVertex3f( 0.734375, -0.046875, 0.070312);
		glVertex3f( 0.463364, -0.237139, -0.210938);
	glEnd();

	glNormal3f( -0.562342, -0.826722, 0.017404 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.669328, -0.094631, -0.096453);
		glVertex3f( -0.463364, -0.237139, -0.210938);
		glVertex3f( -0.734375, -0.046875, 0.070312);
	glEnd();

	glNormal3f( 0.642982, -0.720767, 0.258979 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.734375, -0.046875, 0.070312);
		glVertex3f( 0.648466, 0.000000, 0.414062);
		glVertex3f( 0.506644, -0.267260, 0.022357);
	glEnd();

	glNormal3f( -0.642982, -0.720767, 0.258979 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.734375, -0.046875, 0.070312);
		glVertex3f( -0.506644, -0.267260, 0.022357);
		glVertex3f( -0.648466, 0.000000, 0.414062);
	glEnd();

	glNormal3f( 0.971188, -0.229480, -0.064288 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.545809, -0.226562, 0.468750);
		glVertex3f( 0.530301, -0.281250, 0.429688);
		glVertex3f( 0.506644, -0.267260, 0.022357);
	glEnd();

	glNormal3f( -0.881602, -0.470735, -0.034432 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.545809, -0.226562, 0.468750);
		glVertex3f( -0.616725, -0.093750, 0.468750);
		glVertex3f( -0.506644, -0.267260, 0.022357);
	glEnd();

	glNormal3f( 0.570582, -0.344303, -0.745582 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.617188, 0.328125, -0.585938);
		glVertex3f( 0.773438, 0.265625, -0.437500);
		glVertex3f( 0.484375, 0.023438, -0.546875);
	glEnd();

	glNormal3f( -0.570582, -0.344303, -0.745582 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.617188, 0.328125, -0.585938);
		glVertex3f( -0.484375, 0.023438, -0.546875);
		glVertex3f( -0.773438, 0.265625, -0.437500);
	glEnd();

	glNormal3f( 0.562892, -0.263733, -0.783325 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.335938, 0.054688, -0.664062);
		glVertex3f( 0.460938, 0.437500, -0.703125);
		glVertex3f( 0.484375, 0.023438, -0.546875);
	glEnd();

	glNormal3f( -0.562892, -0.263733, -0.783325 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.335938, 0.054688, -0.664062);
		glVertex3f( -0.484375, 0.023438, -0.546875);
		glVertex3f( -0.460938, 0.437500, -0.703125);
	glEnd();

	glNormal3f( 0.260402, -0.788333, -0.557425 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.640625, -0.007812, -0.429688);
		glVertex3f( 0.617442, -0.065770, -0.358552);
		glVertex3f( 0.484375, 0.023438, -0.546875);
	glEnd();

	glNormal3f( -0.385259, -0.905866, -0.176018 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.617442, -0.065770, -0.358552);
		glVertex3f( -0.477700, -0.120892, -0.380731);
		glVertex3f( -0.669328, -0.094631, -0.096453);
	glEnd();

	glNormal3f( 0.529973, -0.650618, -0.543898 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.477700, -0.120892, -0.380731);
		glVertex3f( 0.320567, -0.229578, -0.403829);
		glVertex3f( 0.484375, 0.023438, -0.546875);
	glEnd();

	glNormal3f( -0.487302, -0.739175, -0.464927 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.463364, -0.237139, -0.210938);
		glVertex3f( -0.477700, -0.120892, -0.380731);
		glVertex3f( -0.296875, -0.312500, -0.265625);
	glEnd();

	glNormal3f( 0.595685, -0.049150, 0.801713 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.961053, 0.421007, 0.066620);
		glVertex3f( 0.963939, 0.477951, 0.067966);
		glVertex3f( 0.894511, 0.360700, 0.112364);
	glEnd();

	glNormal3f( 0.582989, -0.087802, 0.807722 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.130067, 0.472328, -0.052551);
		glVertex3f( 0.963939, 0.477951, 0.067966);
		glVertex3f( 1.087183, 0.462421, -0.022676);
	glEnd();

	glNormal3f( 0.532988, -0.145281, 0.833557 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.087183, 0.462421, -0.022676);
		glVertex3f( 1.149134, 0.340076, -0.083612);
		glVertex3f( 1.174512, 0.371115, -0.094430);
	glEnd();

	glNormal3f( 0.653535, -0.248042, 0.715099 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.120881, 0.135158, -0.127260);
		glVertex3f( 1.174512, 0.371115, -0.094430);
		glVertex3f( 1.104114, 0.151904, -0.106128);
	glEnd();

	glNormal3f( 0.672836, -0.324905, 0.664627 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.104114, 0.151904, -0.106128);
		glVertex3f( 0.971552, 0.028111, -0.032446);
		glVertex3f( 0.974438, -0.012987, -0.055458);
	glEnd();

	glNormal3f( 0.660935, -0.553489, 0.506770 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.971552, 0.028111, -0.032446);
		glVertex3f( 0.830332, -0.027971, 0.090483);
		glVertex3f( 0.786493, -0.094072, 0.075462);
	glEnd();

	glNormal3f( 0.680533, 0.080973, 0.728230 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.968530, 0.067653, -0.049296);
		glVertex3f( 0.863535, 0.023164, 0.053769);
		glVertex3f( 0.830332, -0.027971, 0.090483);
	glEnd();

	glNormal3f( 0.132419, 0.397116, 0.908165 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.078910, 0.166800, -0.108744);
		glVertex3f( 0.968530, 0.067653, -0.049296);
		glVertex3f( 0.971552, 0.028111, -0.032446);
	glEnd();

	glNormal3f( -0.150653, -0.081839, 0.985193 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.104114, 0.151904, -0.106128);
		glVertex3f( 1.149134, 0.340076, -0.083612);
		glVertex3f( 1.078910, 0.166800, -0.108744);
	glEnd();

	glNormal3f( 0.179979, -0.147027, 0.972620 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.112499, 0.400908, -0.067637);
		glVertex3f( 1.070269, 0.302313, -0.074727);
		glVertex3f( 1.149134, 0.340076, -0.083612);
	glEnd();

	glNormal3f( 0.614424, -0.284898, 0.735742 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.087183, 0.462421, -0.022676);
		glVertex3f( 0.961053, 0.421007, 0.066620);
		glVertex3f( 1.112499, 0.400908, -0.067637);
	glEnd();

	glNormal3f( 0.759196, -0.423453, 0.494276 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.956849, 0.365741, 0.025730);
		glVertex3f( 0.961053, 0.421007, 0.066620);
		glVertex3f( 0.903169, 0.320251, 0.069207);
	glEnd();

	glNormal3f( -0.998297, -0.040523, 0.041954 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.726562, 0.000000, -0.070312);
		glVertex3f( 0.734375, -0.046875, 0.070312);
		glVertex3f( 0.734383, 0.007661, 0.123170);
	glEnd();

	glNormal3f( -0.861684, -0.465112, -0.202909 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.669328, -0.094631, -0.096453);
		glVertex3f( -0.734375, -0.046875, 0.070312);
		glVertex3f( -0.726562, 0.000000, -0.070312);
	glEnd();

	glNormal3f( 0.286126, -0.103384, 0.952598 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.734383, 0.007661, 0.123170);
		glVertex3f( 0.632661, -0.123356, 0.139504);
		glVertex3f( 0.830332, -0.027971, 0.090483);
	glEnd();

	glNormal3f( 0.935967, -0.315125, -0.157040 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.734375, -0.046875, 0.070312);
		glVertex3f( 0.726562, 0.000000, -0.070312);
		glVertex3f( 0.838339, 0.320312, -0.046875);
	glEnd();

	glNormal3f( -0.949665, -0.298858, -0.093914 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.734375, -0.046875, 0.070312);
		glVertex3f( -0.821338, 0.234375, 0.054688);
		glVertex3f( -0.838339, 0.320312, -0.046875);
	glEnd();

	glNormal3f( 0.337202, -0.098706, 0.936243 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.831378, 0.292818, 0.127946);
		glVertex3f( 0.894511, 0.360700, 0.112364);
		glVertex3f( 0.866421, 0.400438, 0.126671);
	glEnd();

	glNormal3f( 0.107326, 0.908984, 0.402778 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.863535, 0.023164, 0.053769);
		glVertex3f( 0.796198, 0.029511, 0.057387);
		glVertex3f( 0.734383, 0.007661, 0.123170);
	glEnd();

	glNormal3f( 0.697879, -0.532564, 0.478895 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.796198, 0.029511, 0.057387);
		glVertex3f( 0.821924, 0.059146, 0.052854);
		glVertex3f( 0.734383, 0.007661, 0.123170);
	glEnd();

	glNormal3f( 0.647452, -0.066475, 0.759202 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.732019, 0.063403, 0.129898);
		glVertex3f( 0.821924, 0.059146, 0.052854);
		glVertex3f( 0.802629, 0.118706, 0.074523);
	glEnd();

	glNormal3f( 0.513807, -0.547117, -0.660806 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.751177, 0.120776, 0.097292);
		glVertex3f( 0.815492, 0.194863, 0.085959);
		glVertex3f( 0.732019, 0.063403, 0.129898);
	glEnd();

	glNormal3f( 0.590380, -0.396971, 0.702756 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.861694, 0.259747, 0.083796);
		glVertex3f( 0.831378, 0.292818, 0.127946);
		glVertex3f( 0.815492, 0.194863, 0.085959);
	glEnd();

	glNormal3f( 0.757442, -0.393629, 0.520901 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.903169, 0.320251, 0.069207);
		glVertex3f( 0.894511, 0.360700, 0.112364);
		glVertex3f( 0.861694, 0.259747, 0.083796);
	glEnd();

	glNormal3f( -0.888393, -0.446764, -0.105639 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.813265, 0.324507, 0.146251);
		glVertex3f( 0.838339, 0.320312, -0.046875);
		glVertex3f( 0.831378, 0.292818, 0.127946);
	glEnd();

	glNormal3f( -0.913642, 0.404021, 0.045001 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.832661, 0.352117, -0.217146);
		glVertex3f( -0.848778, 0.317200, -0.230871);
		glVertex3f( -0.838339, 0.320312, -0.046875);
	glEnd();

	glNormal3f( -0.927581, 0.373306, -0.015357 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.792789, 0.214288, 0.127134);
		glVertex3f( 0.838339, 0.320312, -0.046875);
		glVertex3f( 0.732019, 0.063403, 0.129898);
	glEnd();

	glNormal3f( -0.949663, -0.214742, -0.228092 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.775016, 0.240381, -0.235270);
		glVertex3f( -0.759053, 0.093728, -0.163662);
		glVertex3f( -0.838339, 0.320312, -0.046875);
	glEnd();

	glNormal3f( 0.767005, -0.620642, 0.162811 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.901329, 0.311475, 0.044426);
		glVertex3f( 0.903169, 0.320251, 0.069207);
		glVertex3f( 0.853422, 0.257194, 0.063193);
	glEnd();

	glNormal3f( 0.798275, -0.546690, -0.252759 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.853422, 0.257194, 0.063193);
		glVertex3f( 0.861694, 0.259747, 0.083796);
		glVertex3f( 0.814833, 0.199110, 0.066948);
	glEnd();

	glNormal3f( 0.730539, -0.660622, -0.172893 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.751177, 0.120776, 0.097292);
		glVertex3f( 0.750518, 0.125022, 0.078282);
		glVertex3f( 0.814833, 0.199110, 0.066948);
	glEnd();

	glNormal3f( 0.258518, 0.944640, 0.202052 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.750518, 0.125022, 0.078282);
		glVertex3f( 0.751177, 0.120776, 0.097292);
		glVertex3f( 0.801970, 0.116137, 0.053990);
	glEnd();

	glNormal3f( 0.926747, 0.367963, -0.075779 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.801970, 0.116137, 0.053990);
		glVertex3f( 0.802629, 0.118706, 0.074523);
		glVertex3f( 0.821265, 0.063393, 0.033843);
	glEnd();

	glNormal3f( 0.575316, -0.709019, -0.407803 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.796198, 0.029511, 0.057387);
		glVertex3f( 0.789107, 0.033165, 0.041032);
		glVertex3f( 0.821265, 0.063393, 0.033843);
	glEnd();

	glNormal3f( 0.024428, 0.850642, 0.525177 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.863535, 0.023164, 0.053769);
		glVertex3f( 0.855263, 0.034242, 0.036211);
		glVertex3f( 0.789107, 0.033165, 0.041032);
	glEnd();

	glNormal3f( 0.687126, -0.699421, 0.196642 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.903169, 0.320251, 0.069207);
		glVertex3f( 0.901329, 0.311475, 0.044426);
		glVertex3f( 0.961439, 0.357558, -0.001707);
	glEnd();

	glNormal3f( 0.302030, -0.950959, 0.066747 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.073002, 0.387941, -0.073655);
		glVertex3f( 1.112499, 0.400908, -0.067637);
		glVertex3f( 0.961439, 0.357558, -0.001707);
	glEnd();

	glNormal3f( 0.022955, -0.477531, 0.878315 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.112499, 0.400908, -0.067637);
		glVertex3f( 1.073002, 0.387941, -0.073655);
		glVertex3f( 1.129703, 0.305288, -0.120075);
	glEnd();

	glNormal3f( -0.598248, 0.223868, -0.769404 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.070269, 0.302313, -0.074727);
		glVertex3f( 1.129703, 0.305288, -0.120075);
		glVertex3f( 1.092296, 0.164809, -0.131863);
	glEnd();

	glNormal3f( -0.502048, 0.834020, 0.228819 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.966689, 0.072509, -0.071032);
		glVertex3f( 0.968530, 0.067653, -0.049296);
		glVertex3f( 1.092296, 0.164809, -0.131863);
	glEnd();

	glNormal3f( 0.157357, 0.866975, 0.472856 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.855263, 0.034242, 0.036211);
		glVertex3f( 0.863535, 0.023164, 0.053769);
		glVertex3f( 0.966689, 0.072509, -0.071032);
	glEnd();

	glNormal3f( 0.444376, -0.207032, 0.871589 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.852240, 0.148754, 0.036108);
		glVertex3f( 0.801970, 0.116137, 0.053990);
		glVertex3f( 0.889647, 0.112030, 0.008313);
	glEnd();

	glNormal3f( 0.560537, -0.161592, 0.812211 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.889647, 0.112030, 0.008313);
		glVertex3f( 0.936372, 0.173735, -0.011657);
		glVertex3f( 0.906578, 0.210444, 0.016208);
	glEnd();

	glNormal3f( 0.484444, -0.175268, 0.857085 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.936372, 0.173735, -0.011657);
		glVertex3f( 0.979029, 0.233630, -0.023520);
		glVertex3f( 0.948054, 0.270948, 0.001620);
	glEnd();

	glNormal3f( 0.464127, -0.151438, 0.872727 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.996442, 0.310925, -0.017177);
		glVertex3f( 0.948054, 0.270948, 0.001620);
		glVertex3f( 1.022868, 0.258838, -0.040269);
	glEnd();

	glNormal3f( 0.524872, -0.253215, 0.812644 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.901329, 0.311475, 0.044426);
		glVertex3f( 0.948054, 0.270948, 0.001620);
		glVertex3f( 0.996442, 0.310925, -0.017177);
	glEnd();

	glNormal3f( 0.554463, -0.211033, 0.805007 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.901329, 0.311475, 0.044426);
		glVertex3f( 0.853422, 0.257194, 0.063193);
		glVertex3f( 0.948054, 0.270948, 0.001620);
	glEnd();

	glNormal3f( 0.537397, -0.209868, 0.816799 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.906578, 0.210444, 0.016208);
		glVertex3f( 0.853422, 0.257194, 0.063193);
		glVertex3f( 0.852240, 0.148754, 0.036108);
	glEnd();

	glNormal3f( 0.417834, -0.228193, 0.879399 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.852240, 0.148754, 0.036108);
		glVertex3f( 0.814833, 0.199110, 0.066948);
		glVertex3f( 0.750518, 0.125022, 0.078282);
	glEnd();

	glNormal3f( 0.163764, 0.268098, 0.949371 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.855263, 0.034242, 0.036211);
		glVertex3f( 0.889647, 0.112030, 0.008313);
		glVertex3f( 0.821265, 0.063393, 0.033843);
	glEnd();

	glNormal3f( 0.702265, -0.055887, 0.709718 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.855263, 0.034242, 0.036211);
		glVertex3f( 0.966689, 0.072509, -0.071032);
		glVertex3f( 0.889647, 0.112030, 0.008313);
	glEnd();

	glNormal3f( 0.576443, -0.278050, 0.768376 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.966689, 0.072509, -0.071032);
		glVertex3f( 1.092296, 0.164809, -0.131863);
		glVertex3f( 0.936372, 0.173735, -0.011657);
	glEnd();

	glNormal3f( 0.511275, -0.375509, 0.773040 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.022868, 0.258838, -0.040269);
		glVertex3f( 0.979029, 0.233630, -0.023520);
		glVertex3f( 1.092296, 0.164809, -0.131863);
	glEnd();

	glNormal3f( 0.609522, -0.041739, 0.791670 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.996442, 0.310925, -0.017177);
		glVertex3f( 1.022868, 0.258838, -0.040269);
		glVertex3f( 1.129703, 0.305288, -0.120075);
	glEnd();

	glNormal3f( 0.040507, -0.917971, -0.394573 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.777465, -0.078581, 0.061131);
		glVertex3f( 0.768631, -0.063424, 0.024960);
		glVertex3f( 0.949622, 0.002425, -0.109655);
	glEnd();

	glNormal3f( 0.423306, -0.722846, -0.546174 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.961895, -0.010641, -0.082851);
		glVertex3f( 0.949622, 0.002425, -0.109655);
		glVertex3f( 1.117038, 0.144136, -0.167452);
	glEnd();

	glNormal3f( 0.887217, -0.078387, -0.454645 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.157909, 0.356316, -0.124278);
		glVertex3f( 1.166120, 0.363635, -0.109516);
		glVertex3f( 1.117038, 0.144136, -0.167452);
	glEnd();

	glNormal3f( 0.424194, 0.547686, -0.721179 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.091090, 0.456817, -0.087257);
		glVertex3f( 1.110367, 0.464489, -0.070093);
		glVertex3f( 1.157909, 0.356316, -0.124278);
	glEnd();

	glNormal3f( -0.146819, 0.953979, -0.261473 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.110367, 0.464489, -0.070093);
		glVertex3f( 1.091090, 0.456817, -0.087257);
		glVertex3f( 0.937941, 0.457269, 0.000386);
	glEnd();

	glNormal3f( -0.523202, 0.850170, -0.058905 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.950799, 0.467498, 0.033809);
		glVertex3f( 0.937941, 0.457269, 0.000386);
		glVertex3f( 0.818242, 0.389187, 0.080936);
	glEnd();

	glNormal3f( -0.612915, 0.162807, -0.773194 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.818242, 0.389187, 0.080936);
		glVertex3f( 0.937941, 0.457269, 0.000386);
		glVertex3f( 0.768631, -0.063424, 0.024960);
	glEnd();

	glNormal3f( -0.457081, 0.185187, -0.869933 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.091090, 0.456817, -0.087257);
		glVertex3f( 1.117038, 0.144136, -0.167452);
		glVertex3f( 0.949622, 0.002425, -0.109655);
	glEnd();

	glNormal3f( -0.629734, 0.575430, 0.521839 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.813265, 0.324507, 0.146251);
		glVertex3f( 0.866421, 0.400438, 0.126671);
		glVertex3f( 0.842070, 0.394751, 0.103555);
	glEnd();

	glNormal3f( 0.731263, 0.681176, -0.035394 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.796620, 0.296535, -0.321586);
		glVertex3f( -0.773438, 0.265625, -0.437500);
		glVertex3f( -0.825066, 0.325509, -0.351686);
	glEnd();

	glNormal3f( 0.957890, -0.070573, -0.278327 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.818242, 0.389187, 0.080936);
		glVertex3f( 0.768631, -0.063424, 0.024960);
		glVertex3f( 0.640625, -0.007812, -0.429688);
	glEnd();

	glNormal3f( -0.873886, -0.430890, -0.225071 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.825066, 0.325509, -0.351686);
		glVertex3f( -0.773438, 0.265625, -0.437500);
		glVertex3f( -0.640625, -0.007812, -0.429688);
	glEnd();

	glNormal3f( 0.884517, -0.312039, -0.346788 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.777465, -0.078581, 0.061131);
		glVertex3f( 0.617442, -0.065770, -0.358552);
		glVertex3f( 0.768631, -0.063424, 0.024960);
	glEnd();

	glNormal3f( -0.521051, -0.831032, -0.194659 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.617442, -0.065770, -0.358552);
		glVertex3f( -0.669328, -0.094631, -0.096453);
		glVertex3f( -0.757841, -0.022103, -0.169162);
	glEnd();

	glNormal3f( -0.995694, 0.025118, -0.089233 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.796768, 0.460102, -0.273889);
		glVertex3f( -0.796875, 0.577701, -0.239597);
		glVertex3f( -0.787072, 0.424696, -0.392051);
	glEnd();

	glNormal3f( 0.995774, -0.068471, -0.061196 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.796768, 0.460102, -0.273889);
		glVertex3f( 0.806678, 0.496286, -0.153131);
		glVertex3f( 0.813265, 0.324507, 0.146251);
	glEnd();

	glNormal3f( -0.973560, 0.217439, 0.070012 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.806678, 0.496286, -0.153131);
		glVertex3f( -0.799681, 0.461204, 0.053112);
		glVertex3f( -0.771888, 0.562500, 0.125000);
	glEnd();

	glNormal3f( 0.973560, 0.217439, 0.070012 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.799681, 0.461204, 0.053112);
		glVertex3f( 0.838339, 0.320312, -0.046875);
		glVertex3f( 0.806678, 0.496286, -0.153131);
	glEnd();

	glNormal3f( -0.958418, 0.093380, 0.269659 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.799681, 0.461204, 0.053112);
		glVertex3f( -0.766203, 0.353018, 0.209565);
		glVertex3f( -0.726562, 0.438318, 0.320916);
	glEnd();

	glNormal3f( 0.962207, 0.079082, 0.260582 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.838339, 0.320312, -0.046875);
		glVertex3f( 0.799681, 0.461204, 0.053112);
		glVertex3f( 0.766203, 0.353018, 0.209565);
	glEnd();

	glNormal3f( -0.936770, 0.342672, 0.070982 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.766203, 0.353018, 0.209565);
		glVertex3f( -0.821338, 0.234375, 0.054688);
		glVertex3f( -0.767461, 0.304954, 0.424994);
	glEnd();

	glNormal3f( 0.845396, 0.524531, -0.100858 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.726562, 0.438318, 0.320916);
		glVertex3f( 0.763164, 0.406250, 0.460938);
		glVertex3f( 0.766203, 0.353018, 0.209565);
	glEnd();

	glNormal3f( -0.510967, 0.519705, -0.684703 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.453125, 0.867188, -0.382812);
		glVertex3f( -0.456393, 0.687469, -0.516785);
		glVertex3f( -0.630822, 0.532645, -0.504130);
	glEnd();

	glNormal3f( 0.353776, 0.326946, -0.876327 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.456393, 0.687469, -0.516785);
		glVertex3f( 0.630822, 0.532645, -0.504130);
		glVertex3f( 0.617188, 0.328125, -0.585938);
	glEnd();

	glNormal3f( -0.590457, 0.174525, -0.787973 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.796875, 0.539062, -0.359375);
		glVertex3f( -0.640625, 0.679688, -0.445312);
		glVertex3f( -0.787072, 0.424696, -0.392051);
	glEnd();

	glNormal3f( 0.645354, 0.158204, -0.747322 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.787072, 0.424696, -0.392051);
		glVertex3f( 0.773438, 0.265625, -0.437500);
		glVertex3f( 0.630822, 0.532645, -0.504130);
	glEnd();

	glNormal3f( -0.210909, 0.384215, -0.898831 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, 0.505541, -0.782198);
		glVertex3f( -0.460938, 0.437500, -0.703125);
		glVertex3f( 0.000000, 0.757930, -0.674312);
	glEnd();

	glNormal3f( 0.345813, 0.564824, -0.749257 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.453125, 0.867188, -0.382812);
		glVertex3f( 0.456393, 0.687469, -0.516785);
		glVertex3f( 0.000000, 0.757930, -0.674312);
	glEnd();

	glNormal3f( -0.993839, 0.072043, -0.084227 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.767461, 0.304954, 0.424994);
		glVertex3f( -0.773438, 0.164062, 0.375000);
		glVertex3f( -0.775987, 0.312053, 0.531665);
	glEnd();

	glNormal3f( 0.981935, -0.024907, 0.187573 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.763164, 0.406250, 0.460938);
		glVertex3f( 0.738388, 0.429688, 0.593750);
		glVertex3f( 0.767461, 0.304954, 0.424994);
	glEnd();

	glNormal3f( 0.369891, -0.046501, 0.927911 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.585938, 0.289062, 0.687500);
		glVertex3f( -0.582670, 0.249851, 0.684232);
		glVertex3f( -0.551420, 0.251841, 0.671875);
	glEnd();

	glNormal3f( -0.230390, 0.025599, 0.972762 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.546875, 0.210938, 0.671875);
		glVertex3f( 0.578125, 0.195312, 0.679688);
		glVertex3f( 0.551420, 0.251841, 0.671875);
	glEnd();

	glNormal3f( -0.570790, -0.081541, 0.817037 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.640625, 0.296875, 0.648438);
		glVertex3f( -0.634090, 0.251128, 0.648438);
		glVertex3f( -0.582670, 0.249851, 0.684232);
	glEnd();

	glNormal3f( 0.569447, -0.115280, 0.813904 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.634090, 0.251128, 0.648438);
		glVertex3f( 0.582670, 0.249851, 0.684232);
		glVertex3f( 0.578125, 0.195312, 0.679688);
	glEnd();

	glNormal3f( 0.100317, 0.014331, 0.994852 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.640625, 0.296875, 0.648438);
		glVertex3f( -0.729261, 0.375000, 0.656250);
		glVertex3f( -0.634090, 0.251128, 0.648438);
	glEnd();

	glNormal3f( 0.171258, -0.024465, 0.984922 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.634090, 0.251128, 0.648438);
		glVertex3f( 0.625000, 0.187500, 0.648438);
		glVertex3f( 0.728132, 0.303112, 0.633377);
	glEnd();

	glNormal3f( -0.900155, -0.144837, 0.410784 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.728132, 0.303112, 0.633377);
		glVertex3f( -0.729261, 0.375000, 0.656250);
		glVertex3f( -0.775987, 0.312053, 0.531665);
	glEnd();

	glNormal3f( 0.989987, -0.056677, 0.129279 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.726562, 0.203125, 0.601562);
		glVertex3f( 0.743836, 0.148438, 0.445312);
		glVertex3f( 0.728132, 0.303112, 0.633377);
	glEnd();

	glNormal3f( -0.747146, 0.142379, 0.649231 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.337997, -0.571298, 0.570312);
		glVertex3f( -0.325860, -0.507610, 0.570312);
		glVertex3f( -0.460622, -0.429344, 0.398062);
	glEnd();

	glNormal3f( 0.786795, -0.467283, 0.403237 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.325860, -0.507610, 0.570312);
		glVertex3f( 0.460622, -0.429344, 0.398062);
		glVertex3f( 0.502621, -0.351562, 0.406250);
	glEnd();

	glNormal3f( -0.562994, -0.760250, -0.324126 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.200769, -0.522227, 0.164570);
		glVertex3f( -0.125000, -0.604867, 0.226796);
		glVertex3f( -0.460622, -0.429344, 0.398062);
	glEnd();

	glNormal3f( 0.609403, -0.760542, -0.224062 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.284179, -0.435212, 0.096069);
		glVertex3f( 0.502621, -0.351562, 0.406250);
		glVertex3f( 0.200769, -0.522227, 0.164570);
	glEnd();

	glNormal3f( -0.101532, -0.673626, -0.732065 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.200769, -0.522227, 0.164570);
		glVertex3f( -0.284179, -0.435212, 0.096069);
		glVertex3f( 0.000000, -0.529406, 0.143331);
	glEnd();

	glNormal3f( -0.018763, -0.590380, -0.806907 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.125000, -0.604867, 0.226796);
		glVertex3f( 0.000000, -0.570312, 0.204420);
		glVertex3f( 0.200769, -0.522227, 0.164570);
	glEnd();

	glNormal3f( -0.001959, -0.139323, 0.990245 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.458609, 0.741813);
		glVertex3f( 0.000000, -0.400416, 0.750000);
		glVertex3f( -0.098594, -0.457223, 0.741813);
	glEnd();

	glNormal3f( 0.003074, -0.139324, 0.990242 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.511471, 0.734375);
		glVertex3f( 0.117188, -0.508885, 0.734375);
		glVertex3f( 0.000000, -0.458609, 0.741813);
	glEnd();

	glNormal3f( -0.276931, -0.153035, 0.948625 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.098594, -0.457223, 0.741813);
		glVertex3f( -0.223372, -0.494990, 0.699293);
		glVertex3f( -0.234668, -0.540117, 0.688716);
	glEnd();

	glNormal3f( 0.316302, -0.022693, 0.948387 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.078125, -0.400351, 0.750000);
		glVertex3f( 0.098594, -0.457223, 0.741813);
		glVertex3f( 0.223372, -0.494990, 0.699293);
	glEnd();

	glNormal3f( -0.781245, 0.148877, 0.606211 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.223372, -0.494990, 0.699293);
		glVertex3f( -0.325860, -0.507610, 0.570312);
		glVertex3f( -0.337997, -0.571298, 0.570312);
	glEnd();

	glNormal3f( 0.784335, 0.051424, 0.618202 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.210938, -0.445312, 0.710938);
		glVertex3f( 0.223372, -0.494990, 0.699293);
		glVertex3f( 0.325860, -0.507610, 0.570312);
	glEnd();

	glNormal3f( 0.975532, 0.060733, -0.211302 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.796620, 0.296535, -0.321586);
		glVertex3f( 0.773438, 0.265625, -0.437500);
		glVertex3f( 0.796768, 0.460102, -0.273889);
	glEnd();

	glNormal3f( -0.986748, 0.114257, -0.115208 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.806678, 0.496286, -0.153131);
		glVertex3f( -0.796875, 0.617188, -0.117188);
		glVertex3f( -0.796768, 0.460102, -0.273889);
	glEnd();

	glNormal3f( -0.676429, -0.663351, -0.320014 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.640625, -0.007812, -0.429688);
		glVertex3f( -0.617442, -0.065770, -0.358552);
		glVertex3f( -0.753800, -0.000003, -0.206653);
	glEnd();

	glNormal3f( 0.914405, 0.216485, -0.342049 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.617442, -0.065770, -0.358552);
		glVertex3f( 0.777465, -0.078581, 0.061131);
		glVertex3f( 0.786493, -0.094072, 0.075462);
	glEnd();

	glNormal3f( 0.712768, 0.328222, 0.619864 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.851936, 0.358465, -0.290771);
		glVertex3f( -0.879397, 0.361660, -0.260887);
		glVertex3f( -0.796620, 0.296535, -0.321586);
	glEnd();

	glNormal3f( 0.015425, -0.974582, 0.223498 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.796620, 0.296535, -0.321586);
		glVertex3f( 0.842070, 0.394751, 0.103555);
		glVertex3f( 0.818242, 0.389187, 0.080936);
	glEnd();

	glNormal3f( -0.569909, 0.821083, -0.032035 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.963939, 0.477951, 0.067966);
		glVertex3f( 0.950799, 0.467498, 0.033809);
		glVertex3f( 0.842070, 0.394751, 0.103555);
	glEnd();

	glNormal3f( -0.138598, 0.960658, -0.240678 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.950799, 0.467498, 0.033809);
		glVertex3f( 0.963939, 0.477951, 0.067966);
		glVertex3f( 1.110367, 0.464489, -0.070093);
	glEnd();

	glNormal3f( 0.438508, 0.526990, -0.728006 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.110367, 0.464489, -0.070093);
		glVertex3f( 1.130067, 0.472328, -0.052551);
		glVertex3f( 1.166120, 0.363635, -0.109516);
	glEnd();

	glNormal3f( 0.891045, -0.113021, -0.439619 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 1.166120, 0.363635, -0.109516);
		glVertex3f( 1.174512, 0.371115, -0.094430);
		glVertex3f( 1.118939, 0.139696, -0.147575);
	glEnd();

	glNormal3f( 0.578776, -0.746206, -0.328930 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.974438, -0.012987, -0.055458);
		glVertex3f( 0.961895, -0.010641, -0.082851);
		glVertex3f( 1.118939, 0.139696, -0.147575);
	glEnd();

	glNormal3f( -0.566858, -0.692076, -0.446881 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.851936, 0.358465, -0.290771);
		glVertex3f( -0.848778, 0.317200, -0.230871);
		glVertex3f( -0.879397, 0.361660, -0.260887);
	glEnd();

	glNormal3f( -0.908588, -0.364815, -0.203417 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.851936, 0.358465, -0.290771);
		glVertex3f( -0.825066, 0.325509, -0.351686);
		glVertex3f( -0.848778, 0.317200, -0.230871);
	glEnd();

	glNormal3f( -0.713963, -0.674877, -0.186542 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.848778, 0.317200, -0.230871);
		glVertex3f( -0.825066, 0.325509, -0.351686);
		glVertex3f( -0.775016, 0.240381, -0.235270);
	glEnd();

	glNormal3f( -0.929447, -0.045793, 0.366104 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.825066, 0.325509, -0.351686);
		glVertex3f( -0.767384, 0.020988, -0.243338);
		glVertex3f( -0.775016, 0.240381, -0.235270);
	glEnd();

	glNormal3f( -0.989423, -0.039549, 0.139567 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.775016, 0.240381, -0.235270);
		glVertex3f( -0.767384, 0.020988, -0.243338);
		glVertex3f( -0.759053, 0.093728, -0.163662);
	glEnd();

	glNormal3f( -0.996938, 0.062019, 0.047627 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.759053, 0.093728, -0.163662);
		glVertex3f( -0.767384, 0.020988, -0.243338);
		glVertex3f( -0.762283, 0.037860, -0.158528);
	glEnd();

	glNormal3f( -0.920021, -0.370043, 0.128953 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.767384, 0.020988, -0.243338);
		glVertex3f( -0.753800, -0.000003, -0.206653);
		glVertex3f( -0.762283, 0.037860, -0.158528);
	glEnd();

	glNormal3f( -0.989526, -0.049249, -0.135690 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.753800, -0.000003, -0.206653);
		glVertex3f( -0.757841, -0.022103, -0.169162);
		glVertex3f( -0.762283, 0.037860, -0.158528);
	glEnd();

	glNormal3f( -0.706286, -0.174025, 0.686203 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.757841, -0.022103, -0.169162);
		glVertex3f( -0.669328, -0.094631, -0.096453);
		glVertex3f( -0.762283, 0.037860, -0.158528);
	glEnd();

	glNormal3f( -0.232686, -0.730063, -0.642546 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.786493, -0.094072, 0.075462);
		glVertex3f( 0.777465, -0.078581, 0.061131);
		glVertex3f( 0.961895, -0.010641, -0.082851);
	glEnd();

	glNormal3f( -0.529973, -0.650618, -0.543899 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.477700, -0.120892, -0.380731);
		glVertex3f( -0.484375, 0.023438, -0.546875);
		glVertex3f( -0.320567, -0.229578, -0.403829);
	glEnd();

	glNormal3f( 0.487302, -0.739175, -0.464927 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.463364, -0.237139, -0.210938);
		glVertex3f( 0.296875, -0.312500, -0.265625);
		glVertex3f( 0.477700, -0.120892, -0.380731);
	glEnd();

	glNormal3f( -0.260402, -0.788333, -0.557425 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.640625, -0.007812, -0.429688);
		glVertex3f( -0.484375, 0.023438, -0.546875);
		glVertex3f( -0.617442, -0.065770, -0.358552);
	glEnd();

	glNormal3f( 0.380497, -0.917264, -0.117683 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.617442, -0.065770, -0.358552);
		glVertex3f( 0.632661, -0.123356, 0.139504);
		glVertex3f( 0.477700, -0.120892, -0.380731);
	glEnd();

	glNormal3f( -0.810009, 0.353684, -0.467753 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.832661, 0.352117, -0.217146);
		glVertex3f( -0.806678, 0.496286, -0.153131);
		glVertex3f( -0.796620, 0.296535, -0.321586);
	glEnd();

	glNormal3f( 0.995694, 0.025119, -0.089233 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.796768, 0.460102, -0.273889);
		glVertex3f( 0.787072, 0.424696, -0.392051);
		glVertex3f( 0.796875, 0.577701, -0.239597);
	glEnd();

	glNormal3f( -0.653201, 0.742480, -0.148496 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.453125, 0.929688, -0.070312);
		glVertex3f( -0.453125, 0.898098, -0.228260);
		glVertex3f( -0.640625, 0.714462, -0.321671);
	glEnd();

	glNormal3f( 0.628450, 0.748798, -0.210600 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.453125, 0.898098, -0.228260);
		glVertex3f( 0.640625, 0.714462, -0.321671);
		glVertex3f( 0.640625, 0.679688, -0.445312);
	glEnd();

	glNormal3f( -0.701670, 0.685891, -0.192907 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.796875, 0.577701, -0.239597);
		glVertex3f( -0.640625, 0.714462, -0.321671);
		glVertex3f( -0.640625, 0.679688, -0.445312);
	glEnd();

	glNormal3f( 0.705070, 0.674893, -0.217707 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.796875, 0.617188, -0.117188);
		glVertex3f( 0.796875, 0.577701, -0.239597);
		glVertex3f( 0.640625, 0.714462, -0.321671);
	glEnd();

	glNormal3f( -0.126510, 0.975704, -0.178879 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.453125, 0.898098, -0.228260);
		glVertex3f( 0.000000, 0.940939, -0.315046);
		glVertex3f( 0.000000, 0.898438, -0.546875);
	glEnd();

	glNormal3f( 0.129181, 0.972364, -0.194473 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.453125, 0.929688, -0.070312);
		glVertex3f( 0.453125, 0.898098, -0.228260);
		glVertex3f( 0.000000, 0.940939, -0.315046);
	glEnd();

	glNormal3f( -0.330884, -0.814402, -0.476723 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.382812, -0.351562);
		glVertex3f( -0.296875, -0.312500, -0.265625);
		glVertex3f( 0.000000, -0.288044, -0.513459);
	glEnd();

	glNormal3f( 0.313518, -0.819503, -0.479709 );
	glBegin(GL_TRIANGLES);
		glVertex3f( 0.000000, -0.288044, -0.513459);
		glVertex3f( 0.000000, -0.195312, -0.671875);
		glVertex3f( 0.320567, -0.229578, -0.403829);
	glEnd();

	glNormal3f( -0.595684, -0.049150, 0.801713 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.961053, 0.421007, 0.066620);
		glVertex3f( -0.894511, 0.360700, 0.112364);
		glVertex3f( -0.963939, 0.477951, 0.067966);
	glEnd();

	glNormal3f( -0.582989, -0.087802, 0.807722 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -1.130067, 0.472328, -0.052551);
		glVertex3f( -1.087183, 0.462421, -0.022676);
		glVertex3f( -0.963939, 0.477951, 0.067966);
	glEnd();

	glNormal3f( -0.582083, -0.079232, 0.809260 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -1.087183, 0.462421, -0.022676);
		glVertex3f( -1.130067, 0.472328, -0.052551);
		glVertex3f( -1.174512, 0.371115, -0.094430);
	glEnd();

	glNormal3f( -0.653535, -0.248042, 0.715099 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -1.120881, 0.135158, -0.127260);
		glVertex3f( -1.104114, 0.151904, -0.106128);
		glVertex3f( -1.174512, 0.371115, -0.094430);
	glEnd();

	glNormal3f( -0.633948, -0.276628, 0.722210 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -1.104114, 0.151904, -0.106128);
		glVertex3f( -1.120881, 0.135158, -0.127260);
		glVertex3f( -0.974438, -0.012987, -0.055458);
	glEnd();

	glNormal3f( -0.632108, -0.344314, 0.694181 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.971552, 0.028111, -0.032446);
		glVertex3f( -0.974438, -0.012987, -0.055458);
		glVertex3f( -0.786493, -0.094072, 0.075462);
	glEnd();

	glNormal3f( -0.523247, 0.367608, 0.768815 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.968530, 0.067653, -0.049296);
		glVertex3f( -0.971552, 0.028111, -0.032446);
		glVertex3f( -0.830332, -0.027971, 0.090483);
	glEnd();

	glNormal3f( -0.138036, 0.393235, 0.909017 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -1.078910, 0.166800, -0.108744);
		glVertex3f( -1.104114, 0.151904, -0.106128);
		glVertex3f( -0.971552, 0.028111, -0.032446);
	glEnd();

	glNormal3f( 0.150653, -0.081839, 0.985193 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -1.104114, 0.151904, -0.106128);
		glVertex3f( -1.078910, 0.166800, -0.108744);
		glVertex3f( -1.149134, 0.340076, -0.083612);
	glEnd();

	glNormal3f( 0.774136, -0.548977, 0.315180 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -1.112499, 0.400908, -0.067637);
		glVertex3f( -1.087183, 0.462421, -0.022676);
		glVertex3f( -1.149134, 0.340076, -0.083612);
	glEnd();

	glNormal3f( -0.614424, -0.284898, 0.735742 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -1.087183, 0.462421, -0.022676);
		glVertex3f( -1.112499, 0.400908, -0.067637);
		glVertex3f( -0.961053, 0.421007, 0.066620);
	glEnd();

	glNormal3f( -0.759197, -0.423453, 0.494275 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.956849, 0.365741, 0.025730);
		glVertex3f( -0.903169, 0.320251, 0.069207);
		glVertex3f( -0.961053, 0.421007, 0.066620);
	glEnd();

	glNormal3f( -0.286127, -0.103384, 0.952598 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.734383, 0.007661, 0.123170);
		glVertex3f( -0.830332, -0.027971, 0.090483);
		glVertex3f( -0.632661, -0.123356, 0.139504);
	glEnd();

	glNormal3f( -0.541457, -0.166547, 0.824067 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.831378, 0.292818, 0.127946);
		glVertex3f( -0.813265, 0.324507, 0.146251);
		glVertex3f( -0.866421, 0.400438, 0.126671);
	glEnd();

	glNormal3f( -0.413596, 0.338328, 0.845265 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.863535, 0.023164, 0.053769);
		glVertex3f( -0.830332, -0.027971, 0.090483);
		glVertex3f( -0.734383, 0.007661, 0.123170);
	glEnd();

	glNormal3f( -0.697878, -0.532566, 0.478894 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.796198, 0.029511, 0.057387);
		glVertex3f( -0.734383, 0.007661, 0.123170);
		glVertex3f( -0.821924, 0.059146, 0.052854);
	glEnd();

	glNormal3f( -0.390476, 0.352852, 0.850308 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.732019, 0.063403, 0.129898);
		glVertex3f( -0.751177, 0.120776, 0.097292);
		glVertex3f( -0.802629, 0.118706, 0.074523);
	glEnd();

	glNormal3f( -0.513807, -0.547118, -0.660806 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.751177, 0.120776, 0.097292);
		glVertex3f( -0.732019, 0.063403, 0.129898);
		glVertex3f( -0.815492, 0.194863, 0.085959);
	glEnd();

	glNormal3f( -0.590380, -0.396971, 0.702756 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.861694, 0.259747, 0.083796);
		glVertex3f( -0.815492, 0.194863, 0.085959);
		glVertex3f( -0.831378, 0.292818, 0.127946);
	glEnd();

	glNormal3f( -0.757442, -0.393629, 0.520901 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.903169, 0.320251, 0.069207);
		glVertex3f( -0.861694, 0.259747, 0.083796);
		glVertex3f( -0.894511, 0.360700, 0.112364);
	glEnd();

	glNormal3f( -0.767005, -0.620642, 0.162811 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.901329, 0.311475, 0.044426);
		glVertex3f( -0.853422, 0.257194, 0.063193);
		glVertex3f( -0.903169, 0.320251, 0.069207);
	glEnd();

	glNormal3f( -0.798276, -0.546689, -0.252759 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.853422, 0.257194, 0.063193);
		glVertex3f( -0.814833, 0.199110, 0.066948);
		glVertex3f( -0.861694, 0.259747, 0.083796);
	glEnd();

	glNormal3f( -0.730539, -0.660622, -0.172893 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.751177, 0.120776, 0.097292);
		glVertex3f( -0.815492, 0.194863, 0.085959);
		glVertex3f( -0.814833, 0.199110, 0.066948);
	glEnd();

	glNormal3f( -0.258518, 0.944640, 0.202052 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.750518, 0.125022, 0.078282);
		glVertex3f( -0.801970, 0.116137, 0.053990);
		glVertex3f( -0.751177, 0.120776, 0.097292);
	glEnd();

	glNormal3f( -0.926750, 0.367957, -0.075780 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.801970, 0.116137, 0.053990);
		glVertex3f( -0.821265, 0.063393, 0.033843);
		glVertex3f( -0.802629, 0.118706, 0.074523);
	glEnd();

	glNormal3f( -0.730538, -0.660622, -0.172894 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.796198, 0.029511, 0.057387);
		glVertex3f( -0.821924, 0.059146, 0.052854);
		glVertex3f( -0.821265, 0.063393, 0.033843);
	glEnd();

	glNormal3f( -0.101703, 0.979359, 0.174677 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.863535, 0.023164, 0.053769);
		glVertex3f( -0.796198, 0.029511, 0.057387);
		glVertex3f( -0.789107, 0.033165, 0.041032);
	glEnd();

	glNormal3f( -0.746719, -0.592772, 0.301717 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.903169, 0.320251, 0.069207);
		glVertex3f( -0.956849, 0.365741, 0.025730);
		glVertex3f( -0.961439, 0.357558, -0.001707);
	glEnd();

	glNormal3f( -0.302030, -0.950959, 0.066747 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -1.073002, 0.387941, -0.073655);
		glVertex3f( -0.961439, 0.357558, -0.001707);
		glVertex3f( -1.112499, 0.400908, -0.067637);
	glEnd();

	glNormal3f( 0.607254, 0.029321, -0.793967 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -1.129703, 0.305288, -0.120075);
		glVertex3f( -1.073002, 0.387941, -0.073655);
		glVertex3f( -1.070269, 0.302313, -0.074727);
	glEnd();

	glNormal3f( 0.860483, 0.071746, -0.504402 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -1.070269, 0.302313, -0.074727);
		glVertex3f( -1.078910, 0.166800, -0.108744);
		glVertex3f( -1.092296, 0.164809, -0.131863);
	glEnd();

	glNormal3f( 0.502049, 0.834020, 0.228818 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.966689, 0.072509, -0.071032);
		glVertex3f( -1.092296, 0.164809, -0.131863);
		glVertex3f( -0.968530, 0.067653, -0.049296);
	glEnd();

	glNormal3f( -0.157357, 0.866975, 0.472856 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.855263, 0.034242, 0.036211);
		glVertex3f( -0.966689, 0.072509, -0.071032);
		glVertex3f( -0.863535, 0.023164, 0.053769);
	glEnd();

	glNormal3f( -0.444376, -0.207032, 0.871589 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.852240, 0.148754, 0.036108);
		glVertex3f( -0.889647, 0.112030, 0.008313);
		glVertex3f( -0.801970, 0.116137, 0.053990);
	glEnd();

	glNormal3f( -0.488276, -0.152929, 0.859185 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.889647, 0.112030, 0.008313);
		glVertex3f( -0.852240, 0.148754, 0.036108);
		glVertex3f( -0.906578, 0.210444, 0.016208);
	glEnd();

	glNormal3f( -0.546699, -0.177453, 0.818310 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.936372, 0.173735, -0.011657);
		glVertex3f( -0.906578, 0.210444, 0.016208);
		glVertex3f( -0.948054, 0.270948, 0.001620);
	glEnd();

	glNormal3f( -0.464127, -0.151438, 0.872727 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.996442, 0.310925, -0.017177);
		glVertex3f( -1.022868, 0.258838, -0.040269);
		glVertex3f( -0.948054, 0.270948, 0.001620);
	glEnd();

	glNormal3f( -0.539603, 0.129030, 0.831974 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.901329, 0.311475, 0.044426);
		glVertex3f( -0.961439, 0.357558, -0.001707);
		glVertex3f( -0.996442, 0.310925, -0.017177);
	glEnd();

	glNormal3f( -0.554463, -0.211033, 0.805007 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.901329, 0.311475, 0.044426);
		glVertex3f( -0.948054, 0.270948, 0.001620);
		glVertex3f( -0.853422, 0.257194, 0.063193);
	glEnd();

	glNormal3f( -0.537397, -0.209868, 0.816799 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.906578, 0.210444, 0.016208);
		glVertex3f( -0.852240, 0.148754, 0.036108);
		glVertex3f( -0.853422, 0.257194, 0.063193);
	glEnd();

	glNormal3f( -0.405207, -0.128244, 0.905185 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.852240, 0.148754, 0.036108);
		glVertex3f( -0.801970, 0.116137, 0.053990);
		glVertex3f( -0.750518, 0.125022, 0.078282);
	glEnd();

	glNormal3f( -0.069146, 0.160607, 0.984593 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.855263, 0.034242, 0.036211);
		glVertex3f( -0.789107, 0.033165, 0.041032);
		glVertex3f( -0.821265, 0.063393, 0.033843);
	glEnd();

	glNormal3f( -0.702265, -0.055886, 0.709718 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.855263, 0.034242, 0.036211);
		glVertex3f( -0.889647, 0.112030, 0.008313);
		glVertex3f( -0.966689, 0.072509, -0.071032);
	glEnd();

	glNormal3f( -0.576443, -0.278051, 0.768376 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.966689, 0.072509, -0.071032);
		glVertex3f( -0.936372, 0.173735, -0.011657);
		glVertex3f( -1.092296, 0.164809, -0.131863);
	glEnd();

	glNormal3f( -0.644957, -0.232822, 0.727890 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -1.022868, 0.258838, -0.040269);
		glVertex3f( -1.129703, 0.305288, -0.120075);
		glVertex3f( -1.092296, 0.164809, -0.131863);
	glEnd();

	glNormal3f( -0.610264, -0.026022, 0.791771 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.996442, 0.310925, -0.017177);
		glVertex3f( -1.073002, 0.387941, -0.073655);
		glVertex3f( -1.129703, 0.305288, -0.120075);
	glEnd();

	glNormal3f( -0.265681, -0.942579, -0.202383 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.786493, -0.094072, 0.075462);
		glVertex3f( -0.974438, -0.012987, -0.055458);
		glVertex3f( -0.961895, -0.010641, -0.082851);
	glEnd();

	glNormal3f( -0.635942, -0.738007, -0.225662 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.974438, -0.012987, -0.055458);
		glVertex3f( -1.120881, 0.135158, -0.127260);
		glVertex3f( -1.118939, 0.139696, -0.147575);
	glEnd();

	glNormal3f( -0.891045, -0.113021, -0.439619 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -1.166120, 0.363635, -0.109516);
		glVertex3f( -1.118939, 0.139696, -0.147575);
		glVertex3f( -1.174512, 0.371115, -0.094430);
	glEnd();

	glNormal3f( -0.438508, 0.526990, -0.728006 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -1.110367, 0.464489, -0.070093);
		glVertex3f( -1.166120, 0.363635, -0.109516);
		glVertex3f( -1.130067, 0.472328, -0.052551);
	glEnd();

	glNormal3f( 0.138598, 0.960658, -0.240678 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.950799, 0.467498, 0.033809);
		glVertex3f( -1.110367, 0.464489, -0.070093);
		glVertex3f( -0.963939, 0.477951, 0.067966);
	glEnd();

	glNormal3f( 0.476913, 0.826499, 0.299086 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.963939, 0.477951, 0.067966);
		glVertex3f( -0.866421, 0.400438, 0.126671);
		glVertex3f( -0.842070, 0.394751, 0.103555);
	glEnd();

	glNormal3f( 0.612915, 0.162807, -0.773194 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.818242, 0.389187, 0.080936);
		glVertex3f( -0.768631, -0.063424, 0.024960);
		glVertex3f( -0.937941, 0.457269, 0.000386);
	glEnd();

	glNormal3f( 0.486867, 0.193564, -0.851759 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -1.091090, 0.456817, -0.087257);
		glVertex3f( -0.937941, 0.457269, 0.000386);
		glVertex3f( -0.949622, 0.002425, -0.109655);
	glEnd();

	glNormal3f( 0.429729, 0.870902, 0.238460 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.950799, 0.467498, 0.033809);
		glVertex3f( -0.842070, 0.394751, 0.103555);
		glVertex3f( -0.818242, 0.389187, 0.080936);
	glEnd();

	glNormal3f( 0.138599, 0.960658, -0.240680 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -1.110367, 0.464489, -0.070093);
		glVertex3f( -0.950799, 0.467498, 0.033809);
		glVertex3f( -0.937941, 0.457269, 0.000386);
	glEnd();

	glNormal3f( -0.424194, 0.547686, -0.721179 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -1.091090, 0.456817, -0.087257);
		glVertex3f( -1.157909, 0.356316, -0.124278);
		glVertex3f( -1.110367, 0.464489, -0.070093);
	glEnd();

	glNormal3f( -0.887217, -0.078387, -0.454645 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -1.157909, 0.356316, -0.124278);
		glVertex3f( -1.117038, 0.144136, -0.167452);
		glVertex3f( -1.166120, 0.363635, -0.109516);
	glEnd();

	glNormal3f( -0.623104, -0.748538, -0.226788 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.961895, -0.010641, -0.082851);
		glVertex3f( -1.118939, 0.139696, -0.147575);
		glVertex3f( -1.117038, 0.144136, -0.167452);
	glEnd();

	glNormal3f( 0.008062, -0.900318, -0.435159 );
	glBegin(GL_TRIANGLES);
		glVertex3f( -0.777465, -0.078581, 0.061131);
		glVertex3f( -0.961895, -0.010641, -0.082851);
		glVertex3f( -0.949622, 0.002425, -0.109655);
	glEnd();
}