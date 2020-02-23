#include "chair.h"

void Chair :: drawChair() {

	glColor3f(0.4f, 0.302f, 0.0f);
	glBegin(GL_QUADS);

//Right
glNormal3f(1.0f, 0.0f, 0.0f); 
glTexCoord2f(0.0, 0.0); 
glVertex3f(2.0f, -0.2f, -2.0f);
glTexCoord2f(1, 0.0);
glVertex3f(2.0f, 0.2f, -2.0f);
glTexCoord2f(1.0, 1.0);
glVertex3f(2.0f, 0.2f, 2.0f);
glTexCoord2f(0.0, 1.0); 
glVertex3f(2.0f, -0.2f, 2.0f);

//Front
glNormal3f(0.0f, 0.0f, 1.0f);
glTexCoord2f(0.0, 0.0); 
glVertex3f(-2.0f, -0.2f, 2.0f);
glTexCoord2f(1, 0.0);
glVertex3f(2.0f, -0.2f, 2.0f);
glTexCoord2f(1.0, 1.0);
glVertex3f(2.0f, 0.2f, 2.0f);
glTexCoord2f(0.0, 1.0); 
glVertex3f(-2.0f, 0.2f, 2.0f);
//Left
glNormal3f(-1.0f, 0.0f, 0.0f);
glTexCoord2f(0.0, 0.0); 
glVertex3f(-2.0f, -0.2f, -2.0f);
glTexCoord2f(1, 0.0);
glVertex3f(-2.0f, -0.2f, 2.0f);
glTexCoord2f(1.0, 1.0);
glVertex3f(-2.0f, 0.2f, 2.0f);
glTexCoord2f(0.0, 1.0); 
glVertex3f(-2.0f, 0.2f, -2.0f);
//Back
glNormal3f(0.0f, 0.0f, -1.0f);
glTexCoord2f(0.0, 0.0); 
glVertex3f(-2.0f, -0.2f, -2.0f);
glTexCoord2f(1, 0.0);
glVertex3f(-2.0f, 0.2f, -2.0f);
glTexCoord2f(1.0, 1.0);
glVertex3f(2.0f, 0.2f, -2.0f);
glTexCoord2f(0.0, 1.0); 
glVertex3f(2.0f, -0.2f, -2.0f);
//top
glNormal3f(0.0f,1.0f,0.0f);
glTexCoord2f(0.0, 0.0); 
glVertex3f(2.0f, 0.2f, 2.0f);
glTexCoord2f(1, 0.0);
glVertex3f(-2.0f, 0.2f, 2.0f);
glTexCoord2f(1.0, 1.0);
glVertex3f(-2.0f, 0.2f, -2.0f);
glTexCoord2f(0.0, 1.0); 
glVertex3f(2.0f, 0.2f, -2.0f);
//bottom
glNormal3f(0.0f,-1.0f,0.0f);
glTexCoord2f(0.0, 0.0); 
glVertex3f(2.0f, -0.2f, 2.0f);
glTexCoord2f(1, 0.0);
glVertex3f(-2.0f, -0.2f, 2.0f);
glTexCoord2f(1.0, 1.0);
glVertex3f(-2.0f, -0.2f, -2.0f);
glTexCoord2f(0.0, 1.0); 
glVertex3f(2.0f, -0.2f, -2.0f);
//chair front leg
//front
glNormal3f(0.0f, 0.0f, 1.0f);
glTexCoord2f(0.0, 0.0); 
glVertex3f(2.0f,-0.2f,2.0f);
glTexCoord2f(1, 0.0);
glVertex3f(1.6f, -0.2f, 2.0f);
glTexCoord2f(1.0, 1.0);
glVertex3f(1.6f, -3.0f, 2.0f);
glTexCoord2f(0.0, 1.0); 
glVertex3f(2.0f, -3.0f, 2.0f);
//back
glNormal3f(0.0f, 0.0f, -1.0f);
glTexCoord2f(0.0, 0.0); 
glVertex3f(2.0f,-0.2f,1.6f);
glTexCoord2f(1, 0.0);
glVertex3f(1.6f, -0.2f, 1.6f);
glTexCoord2f(1.0, 1.0);
glVertex3f(1.6f, -3.0f, 1.6f);
glTexCoord2f(0.0, 1.0); 
glVertex3f(2.0f, -3.0f, 1.6f);
//right
glNormal3f(1.0f, 0.0f, 0.0f);
glTexCoord2f(0.0, 0.0); 
glVertex3f(2.0f,-0.2f,2.0f);
glTexCoord2f(1, 0.0);
glVertex3f(2.0f, -0.2f, 1.6f);
glTexCoord2f(1.0, 1.0);
glVertex3f(2.0f, -3.0f, 1.6f);
glTexCoord2f(0.0, 1.0); 
glVertex3f(2.0f, -3.0f, 2.0f);
//left
glNormal3f(-1.0f, 0.0f, 0.0f);
glTexCoord2f(0.0, 0.0); 
glVertex3f(1.6f,-0.2f,2.0f);
glTexCoord2f(1, 0.0);
glVertex3f(1.6f, -0.2f, 1.6f);
glTexCoord2f(1.0, 1.0);
glVertex3f(1.6f, -3.0f, 1.6f);
glTexCoord2f(0.0, 1.0); 
glVertex3f(1.6f, -3.0f, 2.0f);
//chair leg back
//front
glNormal3f(0.0f, 0.0f, -1.0f);
glTexCoord2f(0.0, 0.0); 
glVertex3f(2.0f,-0.2f,-1.6f);
glTexCoord2f(1, 0.0);
glVertex3f(1.6f, -0.2f, -1.6f);
glTexCoord2f(1.0, 1.0);
glVertex3f(1.6f, -3.0f, -1.6f);
glTexCoord2f(0.0, 1.0); 
glVertex3f(2.0f, -3.0f, -1.6f);
//back
glNormal3f(0.0f, 0.0f, -1.0f);
glTexCoord2f(0.0, 0.0); 
glVertex3f(2.0f,-0.2f,-2.0f);
glTexCoord2f(1, 0.0);
glVertex3f(1.6f, -0.2f, -2.0f);
glTexCoord2f(1.0, 1.0);
glVertex3f(1.6f, -3.0f, -2.0f);
glTexCoord2f(0.0, 1.0); 
glVertex3f(2.0f, -3.0f, -2.0f);
//right
glNormal3f(1.0f, 0.0f, 0.0f);
glTexCoord2f(0.0, 0.0); 
glVertex3f(2.0f,-0.2f,-2.0f);
glTexCoord2f(1, 0.0);
glVertex3f(2.0f, -0.2f, -1.6f);
glTexCoord2f(1.0, 1.0);
glVertex3f(2.0f, -3.0f, -1.6f);
glTexCoord2f(0.0, 1.0); 
glVertex3f(2.0f, -3.0f, -2.0f);
//left
glNormal3f(1.0f, 0.0f, 0.0f);
glTexCoord2f(0.0, 0.0); 
glVertex3f(1.6f,-0.2f,-2.0f);
glTexCoord2f(1, 0.0);
glVertex3f(1.6f, -0.2f, -1.6f);
glTexCoord2f(1.0, 1.0);
glVertex3f(1.6f, -3.0f, -1.6f);
glTexCoord2f(0.0, 1.0); 
glVertex3f(1.6f, -3.0f, -2.0f);
//leg left front
glNormal3f(0.0f, 0.0f, 1.0f);
glTexCoord2f(0.0, 0.0); 
glVertex3f(-2.0f,-0.2f,2.0f);
glTexCoord2f(1, 0.0);
glVertex3f(-1.6f, -0.2f, 2.0f);
glTexCoord2f(1.0, 1.0);
glVertex3f(-1.6f, -3.0f, 2.0f);
glTexCoord2f(0.0, 1.0); 
glVertex3f(-2.0f, -3.0f, 2.0f);
//back
glNormal3f(0.0f, 0.0f, -1.0f);
glTexCoord2f(0.0, 0.0); 
glVertex3f(-2.0f,-0.2f,1.6f);
glTexCoord2f(1, 0.0);
glVertex3f(-1.6f, -0.2f, 1.6f);
glTexCoord2f(1.0, 1.0);
glVertex3f(-1.6f, -3.0f, 1.6f);
glTexCoord2f(0.0, 1.0); 
glVertex3f(-2.0f, -3.0f, 1.6f);
//right
glNormal3f(1.0f, 0.0f, 0.0f);
glTexCoord2f(0.0, 0.0); 
glVertex3f(-2.0f,-0.2f,2.0f);
glTexCoord2f(1, 0.0);
glVertex3f(-2.0f, -0.2f, 1.6f);
glTexCoord2f(1.0, 1.0);
glVertex3f(-2.0f, -3.0f, 1.6f);
glTexCoord2f(0.0, 1.0); 
glVertex3f(-2.0f, -3.0f, 2.0f);
//left
glNormal3f(-1.0f, 0.0f, 0.0f);
glTexCoord2f(0.0, 0.0); 
glVertex3f(-1.6f,-0.2f,2.0f);
glTexCoord2f(1, 0.0);
glVertex3f(-1.6f, -0.2f, 1.6f);
glTexCoord2f(1.0, 1.0);
glVertex3f(-1.6f, -3.0f, 1.6f);
glTexCoord2f(0.0, 1.0); 
glVertex3f(-1.6f, -3.0f, 2.0f);
//chair left leg back front
//front
glNormal3f(0.0f, 0.0f, -1.0f);
glTexCoord2f(0.0, 0.0); 
glVertex3f(-2.0f,-0.2f,-1.6f);
glTexCoord2f(1, 0.0);
glVertex3f(-1.6f, -0.2f, -1.6f);
glTexCoord2f(1.0, 1.0);
glVertex3f(-1.6f, -3.0f, -1.6f);
glTexCoord2f(0.0, 1.0); 
glVertex3f(-2.0f, -3.0f, -1.6f);
//back
glNormal3f(0.0f, 0.0f, -1.0f);
glTexCoord2f(0.0, 0.0); 
glVertex3f(-2.0f,-0.2f,-2.0f);
glTexCoord2f(1, 0.0);
glVertex3f(-1.6f, -0.2f, -2.0f);
glTexCoord2f(1.0, 1.0);
glVertex3f(-1.6f, -3.0f, -2.0f);
glTexCoord2f(0.0, 1.0); 
glVertex3f(-2.0f, -3.0f, -2.0f);
//right
glNormal3f(1.0f, 0.0f, 0.0f);
glTexCoord2f(0.0, 0.0); 
glVertex3f(-2.0f,-0.2f,-2.0f);
glTexCoord2f(1, 0.0);
glVertex3f(-2.0f, -0.2f, -1.6f);
glTexCoord2f(1.0, 1.0);
glVertex3f(-2.0f, -3.0f, -1.6f);
glTexCoord2f(0.0, 1.0); 
glVertex3f(-2.0f, -3.0f, -2.0f);
//left
glNormal3f(-1.0f, 0.0f, 0.0f);
glTexCoord2f(0.0, 0.0); 
glVertex3f(-1.6f,-0.2f,-2.0f);
glTexCoord2f(1, 0.0);
glVertex3f(-1.6f, -0.2f, -1.6f);
glTexCoord2f(1.0, 1.0);
glVertex3f(-1.6f, -3.0f, -1.6f);
glTexCoord2f(0.0, 1.0); 
glVertex3f(-1.6f, -3.0f, -2.0f);
//chair back
//front

glNormal3f(0.0f, 0.0f, -1.0f);
glTexCoord2f(0.0, 0.0); 
glVertex3f(-2.0f,-0.2f,-1.6f);
glTexCoord2f(1, 0.0);
glVertex3f(-1.6f, -0.2f, -1.6f);
glTexCoord2f(1.0, 1.0);
glVertex3f(-1.6f, 4.5f, -1.6f);
glTexCoord2f(0.0, 1.0); 
glVertex3f(-2.0f, 4.5f, -1.6f);
//back
glNormal3f(0.0f, 0.0f, -1.0f);
glTexCoord2f(0.0, 0.0); 
glVertex3f(-2.0f,-0.2f,-2.0f);
glTexCoord2f(1, 0.0);
glVertex3f(-1.6f, -0.2f, -2.0f);
glTexCoord2f(1.0, 1.0);
glVertex3f(-1.6f, 4.5f, -2.0f);
glTexCoord2f(0.0, 1.0); 
glVertex3f(-2.0f, 4.5f, -2.0f);
//right
glNormal3f(1.0f, 0.0f, 0.0f);
glTexCoord2f(0.0, 0.0); 
glVertex3f(-2.0f,-0.2f,-2.0f);
glTexCoord2f(1, 0.0);
glVertex3f(-2.0f, -0.2f, -1.6f);
glTexCoord2f(1.0, 1.0);
glVertex3f(-2.0f, 4.5f, -1.6f);
glTexCoord2f(0.0, 1.0); 
glVertex3f(-2.0f, 4.5f, -2.0f);
//left
glNormal3f(-1.0f, 0.0f, 0.0f);
glTexCoord2f(0.0, 0.0); 
glVertex3f(-1.6f,-0.2f,-2.0f);
glTexCoord2f(1, 0.0);
glVertex3f(-1.6f, -0.2f, -1.6f);
glTexCoord2f(1.0, 1.0);
glVertex3f(-1.6f, 4.5f, -1.6f);
glTexCoord2f(0.0, 1.0); 
glVertex3f(-1.6f, 4.5f, -2.0f);

//back chair
//front
glNormal3f(0.0f, 0.0f, -1.0f);
glTexCoord2f(0.0, 0.0); 
glVertex3f(2.0f,-0.2f,-1.6f);
glTexCoord2f(1, 0.0);
glVertex3f(1.6f, -0.2f, -1.6f);
glTexCoord2f(1.0, 1.0);
glVertex3f(1.6f, 4.5f, -1.6f);
glTexCoord2f(0.0, 1.0); 
glVertex3f(2.0f, 4.5f, -1.6f);
//back
glNormal3f(0.0f, 0.0f, -1.0f);
glTexCoord2f(0.0, 0.0); 
glVertex3f(2.0f,-0.2f,-2.0f);
glTexCoord2f(1, 0.0);
glVertex3f(1.6f, -0.2f, -2.0f);
glTexCoord2f(1.0, 1.0);
glVertex3f(1.6f, 4.5f, -2.0f);
glTexCoord2f(0.0, 1.0); 
glVertex3f(2.0f, 4.5f, -2.0f);
//right

glNormal3f(1.0f, 0.0f, 0.0f);
glTexCoord2f(0.0, 0.0); 
glVertex3f(2.0f,-0.2f,-2.0f);
glTexCoord2f(1, 0.0);
glVertex3f(2.0f, -0.2f, -1.6f);
glTexCoord2f(1.0, 1.0);
glVertex3f(2.0f, 4.5f, -1.6f);
glTexCoord2f(0.0, 1.0); 
glVertex3f(2.0f, 4.5f, -2.0f);
//left

glNormal3f(1.0f, 0.0f, 0.0f);
glTexCoord2f(0.0, 0.0); 
glVertex3f(1.6f,-0.2f,-2.0f);
glTexCoord2f(1, 0.0);
glVertex3f(1.6f, -0.2f, -1.6f);
glTexCoord2f(1.0, 1.0);
glVertex3f(1.6f, 4.5f, -1.6f);
glTexCoord2f(0.0, 1.0); 
glVertex3f(1.6f, 4.5f, -2.0f);

//back chair up

//front

glTexCoord2f(0.0, 0.0); 
glVertex3f(-2.0f, 4.0f, -2.0f);
glTexCoord2f(1, 0.0);
glVertex3f(2.0f, 4.0f, -2.0f);
glTexCoord2f(1.0, 1.0);
glVertex3f(2.0f, 4.5f, -2.0f);
glTexCoord2f(0.0, 1.0); 
glVertex3f(-2.0f, 4.5f, -2.0f);
//back

glTexCoord2f(0.0, 0.0); 
glVertex3f(-2.0f, 4.0f, -2.0f);
glTexCoord2f(1, 0.0);
glVertex3f(2.0f, 4.0f, -2.0f);
glTexCoord2f(1.0, 1.0);
glVertex3f(2.0f, 4.f, -2.0f);
glTexCoord2f(0.0, 1.0); 
glVertex3f(-2.0f, 4.5f, -2.0f);

glTexCoord2f(0.0, 0.0); 
glVertex3f(-2.0f, 4.0f, -2.0f);
glTexCoord2f(1, 0.0);
glVertex3f(-2.0f, 4.5f, -2.0f);
glTexCoord2f(1.0, 1.0);
glVertex3f(-2.0f, 4.5f, -1.8f);
glTexCoord2f(0.0, 1.0); 
glVertex3f(-2.0f, 4.0f, -1.8f);

glTexCoord2f(0.0, 0.0); 
glVertex3f(2.0f, 4.0f, -2.0f);
glTexCoord2f(1, 0.0);
glVertex3f(2.0f, 4.5f, -2.0f);
glTexCoord2f(1.0, 1.0);
glVertex3f(2.0f, 4.5f, -1.8f);
glTexCoord2f(0.0, 1.0); 
glVertex3f(2.0f, 4.0f, -2.0f);

glTexCoord2f(0.0, 0.0); 
glVertex3f(-2.0f, 4.5f, -2.0f);
glTexCoord2f(1, 0.0);
glVertex3f(-2.0f, 4.5f, -2.0f);
glTexCoord2f(1.0, 1.0);
glVertex3f(2.0f, 4.5f, -2.0f);
glTexCoord2f(0.0, 1.0); 
glVertex3f(2.0f, 4.5f, -2.0f);
//back chair down
//front

glTexCoord2f(0.0, 0.0); 
glVertex3f(-2.0f, 3.0f, -2.0f);
glTexCoord2f(1, 0.0);
glVertex3f(2.0f, 3.0f, -2.0f);
glTexCoord2f(1.0, 1.0);
glVertex3f(2.0f, 3.5f, -2.0f);
glTexCoord2f(0.0, 1.0); 
glVertex3f(-2.0f, 3.5f, -2.0f);
//back

glTexCoord2f(0.0, 0.0); 
glVertex3f(-1.8f, 3.0f, -2.0f);
glTexCoord2f(1, 0.0);
glVertex3f(1.8f, 3.0f, -2.0f);
glTexCoord2f(1.0, 1.0);
glVertex3f(1.8f, 3.0f, -2.0f);
glTexCoord2f(0.0, 1.0); 
glVertex3f(-1.8f, 3.5f, -2.0f);

glTexCoord2f(0.0, 0.0); 
glVertex3f(-1.8f, 3.0f, -2.0f);
glTexCoord2f(1, 0.0);
glVertex3f(-1.8f, 3.5f, -2.0f);
glTexCoord2f(1.0, 1.0);
glVertex3f(-1.8f, 3.5f, -1.8f);
glTexCoord2f(0.0, 1.0); 
glVertex3f(-1.8f, 3.0f, -1.8f);

glTexCoord2f(0.0, 0.0); 
glVertex3f(1.8f, 3.0f, -2.0f);
glTexCoord2f(1, 0.0);
glVertex3f(1.8f, 3.5f, -2.0f);
glTexCoord2f(1.0, 1.0);
glVertex3f(1.8f, 3.5f, -1.8f);
glTexCoord2f(0.0, 1.0); 
glVertex3f(1.8f, 3.0f, -1.8f);

glTexCoord2f(0.0, 0.0); 
glVertex3f(-1.8f, 3.5f, -2.0f);
glTexCoord2f(1, 0.0);
glVertex3f(-1.8f, 3.5f, -1.8f);
glTexCoord2f(1.0, 1.0);
glVertex3f(1.8f, 3.5f, -1.8f);
glTexCoord2f(0.0, 1.0); 
glVertex3f(1.8f, 3.5f, -2.0f);
 
glEnd();

}

