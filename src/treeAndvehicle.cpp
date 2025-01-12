#include <GL\glew.h>
#include <GL\freeglut.h>
#include <iostream>

float  counter = 600;
float a;

void line() {

	glLineWidth(2);

	glColor4f(0.3, 0.2, 0.1, 1.0); //Line color

	glBegin(GL_LINES);

	glVertex2f(0, 0);
	glVertex2f(0, 20);

	glEnd();

}

void branch() {

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glEnable(GL_BLEND);

	glColor4f(0.4, 0.3, 0.2, 1.0); //object color

	glBegin(GL_POLYGON);

	glVertex2f(-10, 10);
	glVertex2f(-10, -90);

	glVertex2f(10, -90);
	glVertex2f(10, 10);

	glEnd();

	glPushMatrix();
	glTranslatef(-3, -20, 0);
	line();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(3, -50, 0);
	line();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-3, -85, 0);
	line();
	glPopMatrix();

	//shadow
	glBegin(GL_POLYGON);

	glColor4f(0.0, 0.0, 0.0, 0.5);
	glVertex2f(-10, 10);
	glVertex2f(-10, -90);

	glColor4f(0.4, 0.3, 0.2, 0.9);
	glVertex2f(10, -90);
	glVertex2f(10, 10);

	glEnd();

	glDisable(GL_BLEND);

}

void ground() {

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

	glColor4f(0.0, 0.5, 0.0, 1.0); //Color

	glBegin(GL_POLYGON);

	glVertex2f(400, -400);
	glVertex2f(400, -200);

	glVertex2f(-400, -200);
	glVertex2f(-400, -400);

	glEnd();

}

void sun() {

	GLfloat PI = 3.14;
	int i;
	GLfloat x = 0.0;
	GLfloat y = 0.0;
	GLfloat r = 40.0;
	int triangleAmount = 40;
	GLfloat twicePi = 2.0 * PI;

	glBegin(GL_TRIANGLE_FAN);

	glColor4f(1.0, 1.0, 0.4, 1.0);

	glVertex2f(x, y);
	for (i = 0; i <= triangleAmount; i++) {
		glVertex2f(
			x + (r * cos(i * twicePi / triangleAmount)),
			y + (r * sin(i * twicePi / triangleAmount))
		);
	}
	glEnd();

}


void triangle() {

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glEnable(GL_BLEND);

	//Second triangle
	glBegin(GL_TRIANGLES);

	glColor4f(0.0, 0.2, 0.0, 1.0);
	glVertex2f(0, 200);
	glVertex2f(-150, -30);
	glVertex2f(150, -30);

	glEnd();

	//Second triangle shadow
	glBegin(GL_TRIANGLES);

	glColor4f(0.0, 0.0, 0.0, 0.1);
	glVertex2f(0, 200);

	glColor4f(0.0, 0.3, 0.0, 0.9);
	glVertex2f(-150, -30);
	glVertex2f(150, -30);

	glEnd();

	//First triangle
	glBegin(GL_TRIANGLES);

	glColor4f(0.0, 0.2, 0.0, 1.0);
	glVertex2f(0, 250);
	glVertex2f(-140, 70);
	glVertex2f(140, 70);

	glEnd();

	//First triangle shadow
	glBegin(GL_TRIANGLES);

	glColor4f(0.0, 0.0, 0.0, 0.1);
	glVertex2f(0, 250);

	glColor4f(0.0, 0.3, 0.0, 0.9);
	glVertex2f(-140, 70);
	glVertex2f(140, 70);

	glEnd();

	glDisable(GL_BLEND);

}

void DrawAll() {
	glClearColor(0.0, 0.6, 0.9, 1.0); //Background color: Black
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	//Grass
	ground();

	//Sun
	glPushMatrix();
	glTranslatef(330, 240, 0);
	glScalef(1.5, 1.5, 0);
	sun();
	glPopMatrix();

	//1st tree
	glPushMatrix();
	counter = counter - 0.005;
	glTranslatef(counter, 0, 0);
	glTranslatef(-0.25, -0.25, 0);
	glScalef(3, 3, 0);
	branch();
	glPopMatrix();

	glPushMatrix();
	counter = counter - 0.005;
	glTranslatef(counter, 0, 0);
	triangle();
	glPopMatrix();

	//2nd tree
	glPushMatrix();
	counter = counter - 0.005;
	glTranslatef(counter, 0, 0);
	glTranslatef(-400, -0.25, 0);
	glScalef(3, 3, 0);
	branch();
	glPopMatrix();

	glPushMatrix();
	counter = counter - 0.005;
	glTranslatef(counter, 0, 0);
	glTranslatef(-400, -0.25, 0);
	triangle();
	glPopMatrix();

	//3rd tree
	glPushMatrix();
	counter = counter - 0.005;
	glTranslatef(counter, 0, 0);
	glTranslatef(-800, -0.25, 0);
	glScalef(3, 3, 0);
	branch();
	glPopMatrix();

	glPushMatrix();
	counter = counter - 0.005;
	glTranslatef(counter, 0, 0);
	glTranslatef(-800, -0.25, 0);
	triangle();
	glPopMatrix();

	//4th tree
	glPushMatrix();
	counter = counter - 0.005;
	glTranslatef(counter, 0, 0);
	glTranslatef(-1200, -0.25, 0);
	glScalef(3, 3, 0);
	branch();
	glPopMatrix();

	glPushMatrix();
	counter = counter - 0.005;
	glTranslatef(counter, 0, 0);
	glTranslatef(-1200, -0.25, 0);
	triangle();
	glPopMatrix();

	//5th tree
	glPushMatrix();
	counter = counter - 0.005;
	glTranslatef(counter, 0, 0);
	glTranslatef(400, -0.25, 0);
	glScalef(3, 3, 0);
	branch();
	glPopMatrix();

	glPushMatrix();
	counter = counter - 0.005;
	glTranslatef(counter, 0, 0);
	glTranslatef(400, -0.25, 0);
	triangle();
	glPopMatrix();

	//6th tree
	glPushMatrix();
	counter = counter - 0.005;
	glTranslatef(counter, 0, 0);
	glTranslatef(800, -0.25, 0);
	glScalef(3, 3, 0);
	branch();
	glPopMatrix();

	glPushMatrix();
	counter = counter - 0.005;
	glTranslatef(counter, 0, 0);
	glTranslatef(800, -0.25, 0);
	triangle();
	glPopMatrix();

	//7th tree
	glPushMatrix();
	counter = counter - 0.005;
	glTranslatef(counter, 0, 0);
	glTranslatef(1200, -0.25, 0);
	glScalef(3, 3, 0);
	branch();
	glPopMatrix();

	glPushMatrix();
	counter = counter - 0.005;
	glTranslatef(counter, 0, 0);
	glTranslatef(1200, -0.25, 0);
	triangle();
	glPopMatrix();

	//8th tree
	glPushMatrix();
	counter = counter - 0.005;
	glTranslatef(counter, 0, 0);
	glTranslatef(1600, -0.25, 0);
	glScalef(3, 3, 0);
	branch();
	glPopMatrix();

	glPushMatrix();
	counter = counter - 0.005;
	glTranslatef(counter, 0, 0);
	glTranslatef(1600, -0.25, 0);
	triangle();
	glPopMatrix();



	//9th tree
	glPushMatrix();
	counter = counter - 0.005;
	glTranslatef(counter, 0, 0);
	glTranslatef(2000, -0.25, 0);
	glScalef(3, 3, 0);
	branch();
	glPopMatrix();

	glPushMatrix();
	counter = counter - 0.005;
	glTranslatef(counter, 0, 0);
	glTranslatef(2000, -0.25, 0);
	triangle();
	glPopMatrix();



	//10th tree
	glPushMatrix();
	counter = counter - 0.005;
	glTranslatef(counter, 0, 0);
	glTranslatef(2400, -0.25, 0);
	glScalef(3, 3, 0);
	branch();
	glPopMatrix();

	glPushMatrix();
	counter = counter - 0.001;
	glTranslatef(counter, 0, 0);
	glTranslatef(2400, -0.25, 0);
	triangle();
	glPopMatrix();
	glColor3f(0.155f, 0.197f, 0.489f);
	glPushMatrix();
	glTranslatef(100, -450, 0);
	glScalef(0.4, 0.4, 0);
	glTranslatef(a, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2i(300, 300);
	glVertex2i(260, 500);
	glVertex2i(700, 500);
	glVertex2i(700, 400);
	glEnd();
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glEnable(GL_BLEND);
	glColor3f(0.155f, 0.197f, 0.489f);
	glBegin(GL_POLYGON);
	glVertex2i(300, 300);

	glVertex2i(260, 500);
	glColor4f(0.455f, 0.497f, 0.789f, 0.4);

	glVertex2i(700, 500);

	glColor3f(0.155f, 0.197f, 0.489f);


	glVertex2i(700, 400);
	glEnd();
	glDisable(GL_BLEND);

	glBegin(GL_POLYGON);
	glColor3f(0.155f, 0.197f, 0.289f);
	glVertex2i(260, 500);
	glVertex2i(320, 550);
	glVertex2i(700, 550);
	glVertex2i(700, 500);
	glEnd();
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glEnable(GL_BLEND);
	glBegin(GL_POLYGON);
	glColor4f(0.100f, 0.142f, 0.244f, 0.5);
	glVertex2i(260, 500);
	glColor4f(0.255f, 0.297f, 0.389f, 0.5);
	glVertex2i(320, 550);
	glColor4f(0.255f, 0.297f, 0.389f, 0.5);
	glVertex2i(700, 550);
	glColor4f(0.100f, 0.142f, 0.244f, 0.5);
	glVertex2i(700, 500);
	glEnd();
	glDisable(GL_BLEND);
	glLineWidth(6);
	glBegin(GL_LINES);
	glColor3f(0.3f, 0.2f, 0.0f);
	glVertex2i(700, 600);
	glVertex2i(780, 600);
	glVertex2i(700, 600);
	glVertex2i(700, 280);
	glVertex2i(700, 280);
	glVertex2i(540, 360);
	glEnd();
	float pi;
	float cos1;
	float sin1;
	glColor3f(0.211f, 0.270f, 0.309f);
	glPushMatrix();
	glTranslatef(380, 280, 0);
	for (int i = 1; i < 70; i++)
	{
		pi = 3.14159265;
		cos1 = (70 * cos(i * 2 * pi / 70));
		sin1 = (70 * sin(i * 2 * pi / 70));
		glBegin(GL_POLYGON);
		glVertex2f(cos1, sin1);
		glVertex2f((70 * cos((i + 1) * 2 * pi / 70)), (70 * sin((i + 1) * 2 *
			pi / 70)));
	}
	glEnd();
	glPopMatrix();
	glColor3f(0.0f, 0.0f, 0.0f);
	glPushMatrix();
	glTranslatef(380, 280, 0);
	for (int i = 1; i < 70; i++)
	{
		pi = 3.14159265;
		cos1 = (20 * cos(i * 2 * pi / 70));
		sin1 = (20 * sin(i * 2 * pi / 70));
		glBegin(GL_POLYGON);
		glVertex2f(cos1, sin1);
		glVertex2f((20 * cos((i + 1) * 2 * pi / 70)), (20 * sin((i + 1) * 2 *
			pi / 70)));
	}
	glEnd();
	glPopMatrix();

	glLineWidth(2);
	glBegin(GL_LINES);
	glColor3f(0.1f, 0.2f, 0.3f);
	glVertex2i(310, 275);
	glVertex2i(360, 275);
	glVertex2i(400, 275);
	glVertex2i(450, 275);
	glEnd();
	//5
	glColor3f(0.8f, 0.0f, 0.1f);
	glPushMatrix();
	glTranslatef(600, 760, 0);
	glBegin(GL_POLYGON);
	// This should generate a circle
	for (GLfloat i = 0; i < 360; i++)
	{
		float x = cos(i * pi / 180.f) * 20.5; // keep the axes radius same
		float y = sin(i * pi / 180.f) * 30.5;
		glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(120, -40, 0);
	glBegin(GL_LINES);
	glColor3f(0.5, 0.0f, 0.1f);
	glVertex2i(480, 830);
	glVertex2i(475, 800);
	glVertex2i(475, 800);
	glVertex2i(485, 800);
	glVertex2i(485, 800);
	glVertex2i(480, 770);
	glEnd();
	glPopMatrix();
	//4
	glColor3f(0.8f, 0.0f, 0.1f);
	glPushMatrix();
	glTranslatef(540, 760, 0);
	glBegin(GL_POLYGON);
	// This should generate a circle
	for (GLfloat i = 0; i < 360; i++)
	{
		float x = cos(i * pi / 180.f) * 20.5; // keep the axes radius same
		float y = sin(i * pi / 180.f) * 30.5;
		glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(60, -40, 0);
	glBegin(GL_LINES);
	glColor3f(0.5, 0.0f, 0.1f);
	glVertex2i(480, 830);
	glVertex2i(475, 800);
	glVertex2i(475, 800);
	glVertex2i(485, 800);
	glVertex2i(485, 800);
	glVertex2i(480, 770);
	glEnd();
	glPopMatrix();
	//3
	glColor3f(0.8f, 0.0f, 0.f);
	glPushMatrix();
	glTranslatef(480, 760, 0);
	glBegin(GL_POLYGON);
	// This should generate a circle
	for (GLfloat i = 0; i < 360; i++)
	{
		float x = cos(i * pi / 180.f) * 20.5; // keep the axes radius same
		float y = sin(i * pi / 180.f) * 30.5;
		glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0, -40, 0);
	glBegin(GL_LINES);
	glColor3f(0.5, 0.0f, 0.1f);
	glVertex2i(480, 830);
	glVertex2i(475, 800);
	glVertex2i(475, 800);
	glVertex2i(485, 800);
	glVertex2i(485, 800);
	glVertex2i(480, 770);
	glEnd();
	glPopMatrix();
	//1
	glColor3f(0.8, 0.0f, 0.1f);
	glPushMatrix();
	glTranslatef(505, 830, 0);
	glBegin(GL_POLYGON);
	// This should generate a circle
	for (GLfloat i = 0; i < 360; i++)
	{
		float x = cos(i * pi / 180.f) * 20.5; // keep the axes radius same
		float y = sin(i * pi / 180.f) * 30.5;
		glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(25, 30, 0);
	glBegin(GL_LINES);
	glColor3f(0.5, 0.0f, 0.1f);
	glVertex2i(480, 830);
	glVertex2i(475, 800);
	glVertex2i(475, 800);
	glVertex2i(485, 800);
	glVertex2i(485, 800);
	glVertex2i(480, 770);
	glEnd();
	glPopMatrix();
	//2
	glColor3f(0.8, 0.0f, 0.1f);
	glPushMatrix();
	glTranslatef(580, 830, 0);
	glBegin(GL_POLYGON);
	// This should generate a circle
	for (GLfloat i = 0; i < 360; i++)
	{
		float x = cos(i * pi / 180.f) * 20.5; // keep the axes radius same
		float y = sin(i * pi / 180.f) * 30.5;
		glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(100, 30, 0);
	glBegin(GL_LINES);
	glColor3f(0.5, 0.0f, 0.1f);
	glVertex2i(480, 830);
	glVertex2i(475, 800);
	glVertex2i(475, 800);
	glVertex2i(485, 800);
	glVertex2i(485, 800);
	glVertex2i(480, 770);
	glEnd();
	glPopMatrix();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.6f, 0.4f);
	glVertex2i(430, 730);//
	glVertex2i(630, 730);
	glVertex2i(635, 725);
	glVertex2i(640, 720);
	glVertex2i(645, 710);
	glVertex2i(648, 705);
	glVertex2i(645, 690);
	glVertex2i(640, 680);
	glVertex2i(648, 670);
	glVertex2i(653, 660);
	glVertex2i(657, 650);
	glVertex2i(664, 640);
	glVertex2i(666, 630);//
	glVertex2i(665, 620);
	glVertex2i(664, 610);
	glVertex2i(662, 600);
	glVertex2i(658, 590);
	glVertex2i(656, 570);
	glVertex2i(654, 560);//
	glVertex2i(650, 550);
	glVertex2i(648, 530);
	glVertex2i(646, 520);
	glVertex2i(630, 510);//
	glVertex2i(410, 510);//
	glVertex2i(410, 520);
	glVertex2i(408, 530);
	glVertex2i(406, 540);
	glVertex2i(402, 560);
	glVertex2i(400, 570);//
	glVertex2i(398, 580);
	glVertex2i(395, 600);
	glVertex2i(393, 620);
	glVertex2i(392, 630);
	glVertex2i(393, 640);
	glVertex2i(395, 645);//
	glVertex2i(402, 650);
	glVertex2i(407, 670);
	glVertex2i(412, 680);
	glVertex2i(420, 670);
	glVertex2i(415, 690);
	glVertex2i(412, 705);
	glVertex2i(415, 710);
	glVertex2i(420, 720);
	glVertex2i(425, 725);
	glVertex2i(427, 730);
	glVertex2i(430, 730);
	glEnd();
	//glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glEnable(GL_BLEND);
	glBegin(GL_POLYGON);
	glColor4f(0.5f, 0.5f, 0.3f, 0.3);
	glVertex2i(396, 635);//
	glVertex2i(400, 670);//
	glVertex2i(468, 685);
	glVertex2i(476, 660);
	glVertex2i(458, 570);
	glVertex2i(455, 510);//
	glVertex2i(410, 510);//

	glEnd();
	glPushMatrix();
	glDisable(GL_BLEND);
	glTranslatef(210, 0, 0);
	glEnable(GL_BLEND);
	glBegin(GL_POLYGON);
	glVertex2i(383, 665);//
	glVertex2i(390, 685);//
	glVertex2i(410, 685);//
	glVertex2i(454, 645);
	glVertex2i(435, 510);//
	glVertex2i(395, 510);//
	glEnd();
	glDisable(GL_BLEND);
	glPopMatrix();
	glBegin(GL_LINES);
	glColor3f(0.2f, 0.1f, 0.0f);
	glVertex2i(620, 600);
	glVertex2i(580, 550);
	glVertex2i(610, 620);
	glVertex2i(570, 580);
	glVertex2i(580, 610);
	glVertex2i(600, 550);
	glVertex2i(600, 623);
	glVertex2i(620, 560);
	glEnd();
	glPushMatrix();
	glTranslatef(-140, 60, 0);
	glBegin(GL_LINES);
	glColor3f(0.2f, 0.1f, 0.0f);
	glVertex2i(620, 600);
	glVertex2i(580, 550);
	glVertex2i(610, 620);
	glVertex2i(570, 580);
	glVertex2i(580, 610);
	glVertex2i(600, 550);
	glVertex2i(600, 623);
	glVertex2i(620, 560);
	glEnd();
	glPopMatrix();
	glPopMatrix();


	glFlush();
}

void reshape(int width, int hight) {
	glViewport(0, 0, 800, 800);
}

void play() {
	glutPostRedisplay();
}

void init() {
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-400, 400, -400, 400, -400, 400);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}
void spin() {
	a = a - 0.4;
	if (a <= -2000)
		a = 800;

	glutPostRedisplay();
}

int main(int argc, char* argv[]) {

	glutInit(&argc, argv);
	glutInitWindowSize(800, 800);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Test");
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
	init();
	a = 800;
	glutDisplayFunc(DrawAll);
	glutReshapeFunc(reshape);

	glutIdleFunc(play);
	glutIdleFunc(spin);// R
	glutMainLoop();

}
