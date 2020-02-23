# include "table.h"

void Table :: drawTable() {

glBegin(GL_QUADS);
//Right
glNormal3f(1.0f, 0.0f, 0.0f);
glVertex3f(3.0f, -0.2f, -4.0f);
glVertex3f(3.0f, 0.2f, -4.0f);
glVertex3f(3.0f, 0.2f, 4.0f);
glVertex3f(3.0f, -0.2f, 4.0f);
//Front
glNormal3f(0.0f, 0.0f, 1.0f);
glVertex3f(-2.0f, -0.2f, 4.0f);
glVertex3f(3.0f, -0.2f, 4.0f);
glVertex3f(3.0f, 0.2f, 4.0f);
glVertex3f(-2.0f, 0.2f, 4.0f);
//Left
glNormal3f(-1.0f, 0.0f, 0.0f);
glVertex3f(-2.0f, -0.2f, -4.0f);
glVertex3f(-2.0f, -0.2f, 4.0f);
glVertex3f(-2.0f, 0.2f, 4.0f);
glVertex3f(-2.0f, 0.2f, -4.0f);
//Back
glNormal3f(0.0f, 0.0f, -1.0f);
glVertex3f(-2.0f, -0.2f, -4.0f);
glVertex3f(-2.0f, 0.2f, -4.0f);
glVertex3f(3.0f, 0.2f, -4.0f);
glVertex3f(3.0f, -0.2f, -4.0f);
//top
glNormal3f(0.0f,1.0f,0.0f);
glVertex3f(3.0f, 0.2f, 4.0f);
glVertex3f(-2.0f, 0.2f, 4.0f);
glVertex3f(-2.0f, 0.2f, -4.0f);
glVertex3f(3.0f, 0.2f, -4.0f);
//bottom
glNormal3f(0.0f,-1.0f,0.0f);
glVertex3f(3.0f, -0.2f, 4.0f);
glVertex3f(-2.0f, -0.2f, 4.0f);
glVertex3f(-2.0f, -0.2f, -4.0f);
glVertex3f(3.0f, -0.2f, -4.0f);
//table front leg
//front
glNormal3f(0.0f, 0.0f, 1.0f);
glVertex3f(3.0f,-0.2f,4.0f);
glVertex3f(2.6f, -0.2f, 4.0f);
glVertex3f(2.6f, -3.0f, 4.0f);
glVertex3f(3.0f, -3.0f, 4.0f);
//back
glNormal3f(0.0f, 0.0f, -1.0f);
glVertex3f(3.0f,-0.2f,3.6f);
glVertex3f(2.6f, -0.2f, 3.6f);
glVertex3f(2.6f, -3.0f, 3.6f);
glVertex3f(3.0f, -3.0f, 3.6f);
//right
glNormal3f(1.0f, 0.0f, 0.0f);
glVertex3f(3.0f,-0.2f,4.0f);
glVertex3f(3.0f, -0.2f, 3.6f);
glVertex3f(3.0f, -3.0f, 3.6f);
glVertex3f(3.0f, -3.0f, 4.0f);
//left
glNormal3f(-1.0f, 0.0f, 0.0f);
glVertex3f(2.6f,-0.2f,4.0f);
glVertex3f(2.6f, -0.2f, 3.6f);
glVertex3f(2.6f, -3.0f, 3.6f);
glVertex3f(2.6f, -3.0f, 4.0f);
//table leg back
//front
glNormal3f(0.0f, 0.0f, -1.0f);
glVertex3f(3.0f,-0.2f,-4.0f);
glVertex3f(2.6f, -0.2f, -4.0f);
glVertex3f(2.6f, -3.0f, -4.0f);
glVertex3f(3.0f, -3.0f, -4.0f);
//back
glNormal3f(0.0f, 0.0f, -1.0f);
glVertex3f(3.0f,-0.2f,-3.6f);
glVertex3f(2.6f, -0.2f, -3.6f);
glVertex3f(2.6f, -3.0f, -3.6f);
glVertex3f(3.0f, -3.0f, -3.6f);
//right
glNormal3f(1.0f, 0.0f, 0.0f);
glVertex3f(3.0f,-0.2f,-4.0f);
glVertex3f(3.0f, -0.2f, -3.6f);
glVertex3f(3.0f, -3.0f, -3.6f);
glVertex3f(3.0f, -3.0f, -4.0f);
//left
glNormal3f(1.0f, 0.0f, 0.0f);
glVertex3f(2.6f,-0.2f,-4.0f);
glVertex3f(2.6f, -0.2f, -3.6f);
glVertex3f(2.6f, -3.0f, -3.6f);
glVertex3f(2.6f, -3.0f, -4.0f);
//leg left front
glNormal3f(0.0f, 0.0f, 1.0f);
glVertex3f(-2.0f,-0.2f,4.0f);
glVertex3f(-1.6f, -0.2f, 4.0f);
glVertex3f(-1.6f, -3.0f, 4.0f);
glVertex3f(-2.0f, -3.0f, 4.0f);
//back
glNormal3f(0.0f, 0.0f, -1.0f);
glVertex3f(-2.0f,-0.2f,3.6f);
glVertex3f(-1.6f, -0.2f, 3.6f);
glVertex3f(-1.6f, -3.0f, 3.6f);
glVertex3f(-2.0f, -3.0f, 3.6f);
//right
glNormal3f(1.0f, 0.0f, 0.0f);
glVertex3f(-2.0f,-0.2f,4.0f);
glVertex3f(-2.0f, -0.2f, 3.6f);
glVertex3f(-2.0f, -3.0f, 3.6f);
glVertex3f(-2.0f, -3.0f, 4.0f);
//left
glNormal3f(-1.0f, 0.0f, 0.0f);
glVertex3f(-1.6f,-0.2f,4.0f);
glVertex3f(-1.6f, -0.2f, 3.6f);
glVertex3f(-1.6f, -3.0f, 3.6f);
glVertex3f(-1.6f, -3.0f, 4.0f);
//table left leg
//front
glNormal3f(0.0f, 0.0f, -1.0f);
glVertex3f(-2.0f,-0.2f,-3.6f);
glVertex3f(-1.6f, -0.2f, -3.6f);
glVertex3f(-1.6f, -3.0f, -3.6f);
glVertex3f(-2.0f, -3.0f, -3.6f);
//back
glNormal3f(0.0f, 0.0f, -1.0f);
glVertex3f(-2.0f,-0.2f,-4.0f);
glVertex3f(-1.6f, -0.2f, -4.0f);
glVertex3f(-1.6f, -3.0f, -4.0f);
glVertex3f(-2.0f, -3.0f, -4.0f);
//right
glNormal3f(1.0f, 0.0f, 0.0f);
glVertex3f(-2.0f,-0.2f,-4.0f);
glVertex3f(-2.0f, -0.2f, -3.6f);
glVertex3f(-2.0f, -3.0f, -3.6f);
glVertex3f(-2.0f, -3.0f, -4.0f);
//left
glNormal3f(-1.0f, 0.0f, 0.0f);
glVertex3f(-1.6f,-0.2f,-4.0f);
glVertex3f(-1.6f, -0.2f, -3.6f);
glVertex3f(-1.6f, -3.0f, -3.6f);
glVertex3f(-1.6f, -3.0f, -4.0f);
glEnd();



	glEnd();
}
