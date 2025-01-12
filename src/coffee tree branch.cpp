#include <GL\glew.h>
#include <GL\freeglut.h>
#include <iostream>

void fruit() {

	GLfloat PI = 3.14;
	int i;
	GLfloat x = 0.0;
	GLfloat y = 0.0;
	GLfloat r = 40.0;
	int triangleAmount = 40;
	GLfloat twicePi = 2.0 * PI;

	glBegin(GL_TRIANGLE_FAN);

	glColor4f(0.8, 0.0, 0.1, 1);

	glVertex2f(x, y);
	for (i = 0; i <= triangleAmount; i++) {
		glVertex2f(
			x + (r * cos(i * twicePi / triangleAmount)),
			y + (r * sin(i * twicePi / triangleAmount))
		);
	}
	glEnd();

}


void fruitShadow() {

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glEnable(GL_BLEND);

	GLfloat PI = 3.14;
	int i;
	GLfloat x = 0.0;
	GLfloat y = 0.0;
	GLfloat r = 40.0;
	int triangleAmount = 40;
	GLfloat twicePi = 2.0 * PI;

	glBegin(GL_TRIANGLE_FAN);

	glColor4f(0.8, 0.0, 0.1, 1);
	glColor4f(0.0, 0.0, 0.0, 0.2);

	glVertex2f(x, y);
	for (i = 0; i <= triangleAmount; i++) {
		glVertex2f(
			x + (r * cos(i * twicePi / triangleAmount)),
			y + (r * sin(i * twicePi / triangleAmount))
		);
	}
	glEnd();

	glDisable(GL_BLEND);

}

void fruitLight1() {

	glPointSize(6.0);

	glBegin(GL_POINTS);
	glColor4f(1.0, 1.0, 1.0, 1);
	glVertex2f(0, 0);
	glEnd();

}

void fruitLight2() {

	glPointSize(5.0);

	glBegin(GL_POINTS);
	glColor4f(1.0, 1.0, 1.0, 1);
	glVertex2f(0, 0);
	glEnd();

}

void fruitLight3() {

	glPointSize(3.0);

	glBegin(GL_POINTS);
	glColor4f(1.0, 1.0, 1.0, 1);
	glVertex2f(0, 0);
	glEnd();

}

void finalFruit() {

	glPushMatrix();
	glTranslatef(50, 95, 0);
	fruit();
	fruitShadow();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(120, 95, 0);
	fruit();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-50, 5, 0);
	fruit();
	fruitShadow();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(20, 5, 0);
	fruit();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-140, -90, 0);
	fruit();
	fruitShadow();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-40, -90, 0);
	fruit();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-100, -130, 0);
	fruit();
	glPopMatrix();

	//Light1
	//middle
	glPushMatrix();
	glTranslatef(148, 100, 0);
	fruitLight1();
	glPopMatrix();

	//up
	glPushMatrix();
	glTranslatef(147, 105, 0);
	fruitLight2();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(146, 109, 0);
	fruitLight3();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(144, 111, 0);
	fruitLight3();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(142, 113, 0);
	fruitLight3();
	glPopMatrix();

	//down
	glPushMatrix();
	glTranslatef(148, 94, 0);
	fruitLight2();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(149, 90, 0);
	fruitLight3();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(148, 87, 0);
	fruitLight3();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(146, 84, 0);
	fruitLight3();
	glPopMatrix();

	//Light2
	//middle
	glPushMatrix();
	glTranslatef(48, 10, 0);
	fruitLight1();
	glPopMatrix();

	//up
	glPushMatrix();
	glTranslatef(47, 15, 0);
	fruitLight2();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(46, 19, 0);
	fruitLight3();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(44, 21, 0);
	fruitLight3();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(42, 23, 0);
	fruitLight3();
	glPopMatrix();

	//down
	glPushMatrix();
	glTranslatef(48, 4, 0);
	fruitLight2();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(49, 0, 0);
	fruitLight3();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(48, -3, 0);
	fruitLight3();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(46, -6, 0);
	fruitLight3();
	glPopMatrix();

	//Light3
	//middle
	glPushMatrix();
	glTranslatef(-10, -88, 0);
	fruitLight1();
	glPopMatrix();

	//up
	glPushMatrix();
	glTranslatef(-11, -83, 0);
	fruitLight2();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-12, -79, 0);
	fruitLight3();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-14, -77, 0);
	fruitLight3();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-16, -75, 0);
	fruitLight3();
	glPopMatrix();

	//down
	glPushMatrix();
	glTranslatef(-10, -94, 0);
	fruitLight2();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-9, -98, 0);
	fruitLight3();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-10, -101, 0);
	fruitLight3();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-12, -104, 0);
	fruitLight3();
	glPopMatrix();

	//Light4
	//middle
	glPushMatrix();
	glTranslatef(-72, -130, 0);
	fruitLight1();
	glPopMatrix();

	//up
	glPushMatrix();
	glTranslatef(-73, -125, 0);
	fruitLight2();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-74, -121, 0);
	fruitLight3();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-76, -119, 0);
	fruitLight3();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-78, -117, 0);
	fruitLight3();
	glPopMatrix();

	//down
	glPushMatrix();
	glTranslatef(-72, -136, 0);
	fruitLight2();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-71, -140, 0);
	fruitLight3();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-72, -143, 0);
	fruitLight3();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-74, -146, 0);
	fruitLight3();
	glPopMatrix();

}

void branch() {

	glColor3f(0.3, 0.2, 0.1);  //Line colour

	glLineWidth(15);

	glBegin(GL_LINES);

	glVertex2f(50, 50);
	glVertex2f(-65, -65);

	glEnd();

}

void leaf() {

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glEnable(GL_BLEND);

	glBegin(GL_POLYGON);

	glColor4f(0.0, 0.4, 0.1, 1.0); //Object color

	glVertex2f(50, 50);
	glVertex2f(-20, 20);

	glVertex2f(-40, 10);
	glVertex2f(-50, 0);

	glVertex2f(-60, -10);
	glVertex2f(-70, -20);

	glVertex2f(-80, -30);
	glVertex2f(-80, -40);

	glVertex2f(-80, -50);
	glVertex2f(-70, -60);

	glVertex2f(-60, -70);
	glVertex2f(-50, -70);

	glVertex2f(-40, -70);
	glVertex2f(-30, -60);

	glVertex2f(-20, -50);
	glVertex2f(-10, -40);

	glEnd();

	//Shadow
	glBegin(GL_POLYGON);

	glColor4f(0.0, 0.4, 0.1, 1.0); //Object color

	glVertex2f(50, 50);


	glVertex2f(-20, 20);

	glVertex2f(-40, 10);
	glVertex2f(-50, 0);

	glVertex2f(-60, -10);
	glVertex2f(-70, -20);

	glVertex2f(-80, -30);
	glVertex2f(-80, -40);

	glColor4f(0.0, 0.0, 0.0, 0.1);//from this point
	glVertex2f(-80, -50);
	glVertex2f(-70, -60);

	glVertex2f(-60, -70);
	glVertex2f(-50, -70);

	glVertex2f(-40, -70);
	glVertex2f(-30, -60);

	glVertex2f(-20, -50);
	glVertex2f(-10, -40);

	glEnd();

	glDisable(GL_BLEND);

}

void DrawAll() {
	glClearColor(1.0, 1.0, 0.9, 0.0); //Background color
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glPushMatrix();
	glTranslatef(-0.25, -0.25, 0);
	glScalef(3, 3, 0);
	branch();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-130, 0.25, 0);
	glRotatef(-90, 0, 0, -1);
	leaf();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-30, 100, 0);
	glRotatef(-90, 0, 0, -1);
	leaf();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(100, 180, 0);
	glRotatef(-60, 0, 0, -1);
	glScalef(0.75, 0.75, 0);
	leaf();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(130, 0.25, 0);
	glRotatef(90, 0, 0, -1);
	leaf();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(30, -100, 0);
	glRotatef(90, 0, 0, -1);
	leaf();
	glPopMatrix();

	finalFruit();

	glFlush();
	glutSwapBuffers();


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

int main(int argc, char* argv[]) {

	glutInit(&argc, argv);
	glutInitWindowSize(800, 800);
	glutInitWindowPosition(50, 50);
	glutCreateWindow("Test");
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
	init();
	glutDisplayFunc(DrawAll);
	glutReshapeFunc(reshape);
	glutIdleFunc(play);
	glutMainLoop();

}
