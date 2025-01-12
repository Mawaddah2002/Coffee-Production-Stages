#include <GL/glew.h> 
#include <GL/GLUT.h> 
#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;
float transValue;
float v;
float vv;
float PI = 0;
void reshape(int width, int hight) {

	glViewport(-800, 800, -800, 800);


}

static void play(void)
{
	glutPostRedisplay();
}
void coffeMotion() {
	glBegin(GL_QUADS);
	glColor3f(0.2, 0.0, 0.1);
	glVertex2f(-0.01f, -0.1f); // x, y 
	glColor3f(0.2, 0.0, 0.1);
	glVertex2f(0.01f, -0.1f);
	glColor3f(1, 1, 0.9);
	glVertex2f(0.01f, 0.1f);
	glColor3f(0.2, 0.0, 0.1);
	glVertex2f(-0.01f, 0.1f);
	glEnd();

}

void circle() {
	//buttons for the machine
	float x, y;
	int i;
	GLfloat radius;


	int triangleamount = 7;
	GLfloat twisePI = 2.0 * PI;

	glColor3f(0.3, 0.1, 0.0);
	glBegin(GL_TRIANGLE_FAN);
	x = -0.5, y = 0.5, radius = 0.03;
	//x = 0, y = 0.3
	twisePI = 2.0 * PI;
	glVertex2f(x, y);

	for (i = 0; i <= triangleamount; i++)
	{
		glVertex2f(
			x + (radius * cos(i * twisePI / triangleamount))
			, y + (radius * sin(i * twisePI / triangleamount))

		);
	}


	glEnd();

}
void circle2() {
	//buttons for the machine
	float x, y;
	int i;
	GLfloat radius;


	int triangleamount = 7;
	GLfloat twisePI = 2.0 * PI;

	glColor3f(0.7, 0.7, 0.7);
	glBegin(GL_TRIANGLE_FAN);
	x = -0.5, y = 0.5, radius = 0.03;
	//x = 0, y = 0.3
	twisePI = 2.0 * PI;
	glVertex2f(x, y);

	for (i = 0; i <= triangleamount; i++)
	{
		glVertex2f(
			x + (radius * cos(i * twisePI / triangleamount))
			, y + (radius * sin(i * twisePI / triangleamount))

		);
	}


	glEnd();

}
void panMovement() {

	glBegin(GL_LINE_STRIP);
	glColor3f(1.0f, 0.1f, 0.1f);
	glVertex2f(0.35, 0.55);
	glVertex2f(0.34, 0.50);
	glVertex2f(0.33, 0.45);
	glVertex2f(0.32, 0.4);
	glEnd();

}
void oven() {
	glBegin(GL_QUADS);
	glColor3f(0.2, 0.4, 0.5);
	glVertex2f(-0.55f, -0.9f); // x, y  
	glVertex2f(0.55f, -0.9f);
	glVertex2f(0.55f, -0.15f);
	glVertex2f(-0.55f, -0.15f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.1, 0.7, 0.7);
	glVertex2f(-0.47f, -0.45f); // x, y  
	glVertex2f(0.47f, -0.45f);
	glVertex2f(0.47f, -0.86f);
	glVertex2f(-0.47f, -0.86f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(1, 1, 1);
	glVertex2f(-0.4f, -0.5f); // x, y 
	glColor3f(1, 1, 1);
	glVertex2f(0.4f, -0.5f);
	glColor3f(1, 1, 1);
	glVertex2f(0.4f, -0.8f);
	glColor3f(0.2, 0.4, 0.5);
	glVertex2f(-0.4f, -0.8f);
	glColor3f(1, 1, 1);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.1, 0.7, 0.7);
	glVertex2f(-0.6f, -0.15f); // x, y  
	glVertex2f(0.6f, -0.15f);
	glVertex2f(0.6f, -0.2f);
	glVertex2f(-0.6f, -0.2f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(1, 1, 1);
	glVertex2f(-0.5f, -0.3f); // x, y
	glColor3f(0.1, 0.7, 0.7);
	glVertex2f(0.5f, -0.3f);
	glColor3f(0.1, 0.7, 0.7);
	glVertex2f(0.5f, -0.4f);
	glColor3f(0.1, 0.7, 0.7);
	glVertex2f(-0.5f, -0.4f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.7, 0, 0);
	glVertex2f(-0.2f, -0.15f); // x, y  
	glColor3f(0, 0, 0);
	glVertex2f(0.2f, -0.15f);
	glColor3f(0, 0, 0);
	glVertex2f(0.3f, 0.1f);
	glColor3f(0, 0, 0);
	glVertex2f(-0.3f, 0.1f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
	glVertex2f(-0.44f, -0.55f); // x, y  
	glVertex2f(0.44f, -0.55f);
	glVertex2f(0.44f, -0.59f);
	glVertex2f(-0.44f, -0.59f);
	glEnd();
	glPushMatrix();
	glTranslatef(-0.4, -1.5, 0);
	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
	glVertex2f(-0.05f, 0.60f); // x, y  
	glVertex2f(0.01f, 0.60f);
	glVertex2f(0.01f, 0.58f);
	glVertex2f(-0.05f, 0.58f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.4, -1.5, 0);
	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
	glVertex2f(-0.05f, 0.60f); // x, y  
	glVertex2f(0.01f, 0.60f);
	glVertex2f(0.01f, 0.58f);
	glVertex2f(-0.05f, 0.58f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.1, -0.86, 0);
	circle2();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.25, -0.86, 0);
	circle2();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.45, -0.86, 0);
	circle2();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.85, -0.86, 0);
	circle2();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.65, -0.86, 0);
	circle2();
	glPopMatrix();

}
void buttons() {
	circle();
	glPushMatrix();
	glTranslatef(-0.009, 0.1, 0.0);
	circle();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-0.01, 0.2, 0.0);
	circle();
	glPopMatrix();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-0.009, 0.1, 0.0);
	circle();
	glPopMatrix();

}
void cube2() {

	glPushMatrix();
	glTranslatef(-630, -910, 0);

	glScalef(1.2, 1.2, 1.2);


	//glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);

	glEnable(GL_BLEND);

	glBegin(GL_POLYGON);
	glColor3f(1, 0.6, 0.5);


	glColor4f(1, 0.6, 0.5, 0.5);
	glVertex2i(430, 730);//
	glVertex2i(630, 730);
	glVertex2i(635, 725);
	glColor4f(1, 1, 1, 0.5);
	glVertex2i(640, 720);
	glVertex2i(645, 710);
	glVertex2i(648, 705);
	glVertex2i(645, 690);
	glVertex2i(640, 680);
	glColor4f(1, 1, 1, 0.5);

	glVertex2i(648, 670);
	glVertex2i(653, 660);
	glVertex2i(657, 650);
	glVertex2i(664, 640);
	glColor4f(1, 1, 1, 0.5);

	glVertex2i(666, 630);
	//glColor4f(1, 0.6, 0.5, 0.5);
	glVertex2i(665, 620);
	glVertex2i(664, 610);
	glColor4f(1, 1, 1, 0.5);

	glVertex2i(662, 600);
	glVertex2i(658, 590);
	glVertex2i(656, 570);
	glVertex2i(654, 560);//
	glVertex2i(650, 540);
	glVertex2i(648, 530);
	glColor4f(1, 1, 1, 0.5);

	glVertex2i(646, 520);
	glVertex2i(630, 510);//
	glVertex2i(410, 510);//
	glVertex2i(410, 520);
	glVertex2i(408, 530);
	glVertex2i(406, 540);
	glColor4f(1, 1, 1, 0.5);
	glVertex2i(402, 560);
	glVertex2i(400, 570);//
	glVertex2i(398, 580);
	glVertex2i(395, 600);
	glColor4f(1, 1, 1, 0.5);

	glVertex2i(393, 620);
	glVertex2i(392, 630);
	glColor4f(1, 1, 1, 0.5);
	glVertex2i(393, 640);
	glVertex2i(395, 645);//
	glVertex2i(402, 650);
	glVertex2i(407, 670);
	glVertex2i(412, 680);
	glVertex2i(420, 670);
	glVertex2i(415, 690);
	glColor4f(1, 1, 1, 0.5);
	glVertex2i(412, 705);
	glVertex2i(415, 710);
	//glColor4f(1, 0.6, 0.5, 0.5);

	glVertex2i(420, 720);
	glVertex2i(425, 725);
	glVertex2i(427, 730);
	glColor4f(1, 1, 1, 0.5);

	glVertex2i(430, 730);

	glEnd();



	//ãÓßÉ ÇáßæÈ

	glLineWidth(5);
	glBegin(GL_LINES);

	glColor4f(1, 1, 1, 0.5);


	glVertex2i(635, 680);
	glVertex2i(700, 680);

	glColor4f(1, 0.6, 0.5, 0.9);

	glVertex2i(700, 680);//2
	glColor4f(1, 1, 1, 0.5);

	glVertex2i(700, 570);

	glColor4f(1, 1, 1, 0.5);
	glVertex2i(700, 570);
	glVertex2i(656, 570);
	glEnd();

	glPopMatrix();

	glDisable(GL_BLEND);

}

void coffeMachine() {

	glPushMatrix();
	glScalef(600, 600, 0);
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.2, 0.0);
	glVertex2f(-0.55f, -0.66f); // x, y 
	glColor3f(1, 1, 1);
	glVertex2f(0.55f, -0.66f);
	glColor3f(0.5, 0.2, 0.0);
	glVertex2f(0.55f, 0.66f);
	glColor3f(1, 1, 1);
	glVertex2f(-0.55f, 0.66f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.4, 0.1, 0);
	glVertex2f(-0.50f, -0.66f); // x, y  
	glColor3f(0.4, 0.1, 0);
	glVertex2f(0.50f, -0.66f);
	glColor3f(0, 0, 0);
	glVertex2f(0.50f, 0.66f);
	glColor3f(0.4, 0.1, 0);
	glVertex2f(-0.50f, 0.66f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.7, 0.3, 0.3);
	glVertex2f(-0.60f, -0.80f); // x, y  
	glVertex2f(0.60f, -0.80f);
	glVertex2f(0.60f, -0.50f);
	glVertex2f(-0.60f, -0.50f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.7, 0.3, 0.3);
	glVertex2f(-0.60f, 0.90f); // x, y  
	glVertex2f(0.60f, 0.90f);
	glVertex2f(0.60f, 0.40f);
	glVertex2f(-0.60f, 0.40f);
	glEnd();
	glBegin(GL_QUADS);
	//glColor3f(0.3, 0.1, 0.0);
	glColor3f(0.4, 0.1, 0);
	glVertex2f(-0.40f, 0.64f); // x, y 
	glColor3f(1, 1, 1);
	glVertex2f(0.40f, 0.64f);
	glColor3f(0.4, 0.1, 0);
	glVertex2f(0.40f, 0.50f);
	glColor3f(0.4, 0.1, 0);
	glVertex2f(-0.40f, 0.50f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.2, 0.57, 0.6);
	glVertex2f(-0.20f, 0.25f); // x, y  
	glColor3f(0.2, 0.57, 0.6);
	glVertex2f(0.20f, 0.25f);
	glColor3f(0.2, 0.57, 0.6);
	glVertex2f(0.20f, 0.40f);
	glColor3f(0, 0, 0);
	glVertex2f(-0.20f, 0.40f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
	glVertex2f(-0.14f, 0.25f); // x, y  
	glColor3f(0.2, 0.6, 0.6);
	glVertex2f(0.14f, 0.25f);
	glColor3f(0.2, 0.6, 0.6);
	glVertex2f(0.14f, 0.20f);
	glColor3f(0.2, 0.6, 0.6);
	glVertex2f(-0.14f, 0.20f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(1, 1, 0.8);
	glVertex2f(-0.04f, 0.15f); // x, y 
	glColor3f(1, 1, 0.8);
	glVertex2f(0.04f, 0.15f);
	glColor3f(1, 1, 1);
	glVertex2f(0.04, 0.2f);
	glColor3f(1, 1, 1);
	glVertex2f(-0.04f, 0.2f);
	glEnd();

	glPushMatrix();
	//glTranslatef(0, 0.001, 0);
	glTranslatef(0, v, 0);
	coffeMotion();
	glPopMatrix();

	//buttons of the machine
	buttons();
	glPopMatrix();
	glPushMatrix();

	cube2();
	glPopMatrix();


	glFlush();
}
void coffeBeans() {
	//5
	glColor3f(0.6f, 0.2f, 0.0f);
	glPushMatrix();
	glTranslatef(0.1, 0.3, 0);
	glBegin(GL_POLYGON);
	// This should generate a circle
	for (GLfloat i = 0; i < 360; i++)
	{
		float x = cos(i * PI / 180.f) * 0.05; // keep the axes radius same
		float y = sin(i * PI / 180.f) * 0.06;
		glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-0.09, -0.1, 0);
	glBegin(GL_LINES);
	glColor3f(0.4f, 0.1f, 0.1f);
	glVertex2f(0.180, 0.430);
	glVertex2f(0.175, 0.400);
	glVertex2f(0.175, 0.400);
	glVertex2f(0.185, 0.400);
	glVertex2f(0.185, 0.400);
	glVertex2f(0.180, 0.370);
	glEnd();
	glPopMatrix();
}
void pan() {

	glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer
	glClearColor(1, 1, 0.9, 0);
	glPushMatrix();
	glScalef(600, 600, 0);
	glTranslatef(-0.1, 0.4, 0);
	oven();
	glPushMatrix();
	glTranslatef(0.62, -0.03, 0);
	glBegin(GL_QUADS);
	glColor3f(0, 0, 0.0);
	glVertex2f(-0.3f, -0.01f); // x, y  
	glVertex2f(0.3f, -0.01f);
	glVertex2f(0.3f, 0.03f);
	glVertex2f(-0.3f, 0.03f);
	glEnd();
	glPopMatrix();
	glBegin(GL_QUADS);
	glColor3f(0.8, 0.8, 0.6);
	glVertex2f(-0.4f, -0.1f); // x, y  
	glVertex2f(0.4f, -0.1f);
	glVertex2f(0.55f, 0.1f);
	glVertex2f(-0.55f, 0.1f);
	glEnd();

	glPushMatrix();
	glTranslatef(vv, 0, 0);
	glTranslatef(0.2, -0.13, 0);
	coffeBeans();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(vv, 0, 0);
	glTranslatef(0.3, -0.13, 0);
	coffeBeans();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(vv, 0, 0);
	glTranslatef(0.1, -0.13, 0);
	coffeBeans();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(vv, 0, 0);
	glTranslatef(-0.1, -0.13, 0);
	coffeBeans();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(vv, 0, 0);
	glTranslatef(-0.2, -0.13, 0);
	coffeBeans();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(vv, 0, 0);
	glTranslatef(-0.3, -0.13, 0);
	coffeBeans();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(vv, 0, 0);
	glTranslatef(-0.4, -0.13, 0);
	coffeBeans();
	glPopMatrix();
	glPopMatrix();
	glFlush();


}
void spin() {
	vv = vv - 0.00001;
	v = v - 0.001;
	if (v <= 0.0)
		v = 0.05;
	if (vv <= 0.0)
		vv = 0.05;
	glutPostRedisplay();
}

void intit() {
	//glMatrixMode(GL_PROJECTION);
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);

	//gluOrtho2D(-150, 400, -150, 400);
	glOrtho(-800, 800, -800, 800, -800, 800);
}


int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitWindowSize(500, 500);//(width,length)
	glutInitWindowPosition(40, 40);
	glutCreateWindow("project");
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	intit();

	PI = 3.14;
	v = 0.05;
	vv = 0.01;
	transValue = 0.5;
	glutIdleFunc(play);
	glutReshapeFunc(reshape);
	glutDisplayFunc(pan);
	glutIdleFunc(spin);





	glutMainLoop();
	return 0;
}