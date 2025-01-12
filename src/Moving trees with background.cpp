#include <GL\glew.h>
#include <GL\freeglut.h>
#include <iostream>

float  counter = 600;

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
	glTranslatef(330, 220, 0);
	glScalef(1.5, 1.5, 0);
	sun();
	glPopMatrix();

	//1st tree
	glPushMatrix();
	counter = counter - 0.01;
	glTranslatef(counter, 0, 0);
	glTranslatef(-0.25, -0.25, 0);
	glScalef(3, 3, 0);
	branch();
	glPopMatrix();

	glPushMatrix();
	counter = counter - 0.01;
	glTranslatef(counter, 0, 0);
	triangle();
	glPopMatrix();

	//2nd tree
	glPushMatrix();
	counter = counter - 0.01;
	glTranslatef(counter, 0, 0);
	glTranslatef(-400, -0.25, 0);
	glScalef(3, 3, 0);
	branch();
	glPopMatrix();

	glPushMatrix();
	counter = counter - 0.01;
	glTranslatef(counter, 0, 0);
	glTranslatef(-400, -0.25, 0);
	triangle();
	glPopMatrix();

	//3rd tree
	glPushMatrix();
	counter = counter - 0.01;
	glTranslatef(counter, 0, 0);
	glTranslatef(-800, -0.25, 0);
	glScalef(3, 3, 0);
	branch();
	glPopMatrix();

	glPushMatrix();
	counter = counter - 0.01;
	glTranslatef(counter, 0, 0);
	glTranslatef(-800, -0.25, 0);
	triangle();
	glPopMatrix();

	//4th tree
	glPushMatrix();
	counter = counter - 0.01;
	glTranslatef(counter, 0, 0);
	glTranslatef(-1200, -0.25, 0);
	glScalef(3, 3, 0);
	branch();
	glPopMatrix();

	glPushMatrix();
	counter = counter - 0.01;
	glTranslatef(counter, 0, 0);
	glTranslatef(-1200, -0.25, 0);
	triangle();
	glPopMatrix();

	//5th tree
	glPushMatrix();
	counter = counter - 0.01;
	glTranslatef(counter, 0, 0);
	glTranslatef(400, -0.25, 0);
	glScalef(3, 3, 0);
	branch();
	glPopMatrix();

	glPushMatrix();
	counter = counter - 0.01;
	glTranslatef(counter, 0, 0);
	glTranslatef(400, -0.25, 0);
	triangle();
	glPopMatrix();

	//6th tree
	glPushMatrix();
	counter = counter - 0.01;
	glTranslatef(counter, 0, 0);
	glTranslatef(800, -0.25, 0);
	glScalef(3, 3, 0);
	branch();
	glPopMatrix();

	glPushMatrix();
	counter = counter - 0.01;
	glTranslatef(counter, 0, 0);
	glTranslatef(800, -0.25, 0);
	triangle();
	glPopMatrix();

	//7th tree
	glPushMatrix();
	counter = counter - 0.01;
	glTranslatef(counter, 0, 0);
	glTranslatef(1200, -0.25, 0);
	glScalef(3, 3, 0);
	branch();
	glPopMatrix();

	glPushMatrix();
	counter = counter - 0.01;
	glTranslatef(counter, 0, 0);
	glTranslatef(1200, -0.25, 0);
	triangle();
	glPopMatrix();

	//8th tree
	glPushMatrix();
	counter = counter - 0.01;
	glTranslatef(counter, 0, 0);
	glTranslatef(1600, -0.25, 0);
	glScalef(3, 3, 0);
	branch();
	glPopMatrix();

	glPushMatrix();
	counter = counter - 0.01;
	glTranslatef(counter, 0, 0);
	glTranslatef(1600, -0.25, 0);
	triangle();
	glPopMatrix();

	glFlush();
	glutSwapBuffers();

	//9th tree
	glPushMatrix();
	counter = counter - 0.01;
	glTranslatef(counter, 0, 0);
	glTranslatef(2000, -0.25, 0);
	glScalef(3, 3, 0);
	branch();
	glPopMatrix();

	glPushMatrix();
	counter = counter - 0.01;
	glTranslatef(counter, 0, 0);
	glTranslatef(2000, -0.25, 0);
	triangle();
	glPopMatrix();

	glFlush();
	glutSwapBuffers();

	//10th tree
	glPushMatrix();
	counter = counter - 0.01;
	glTranslatef(counter, 0, 0);
	glTranslatef(2400, -0.25, 0);
	glScalef(3, 3, 0);
	branch();
	glPopMatrix();

	glPushMatrix();
	counter = counter - 0.01;
	glTranslatef(counter, 0, 0);
	glTranslatef(2400, -0.25, 0);
	triangle();
	glPopMatrix();

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
	glutReshapeFunc(reshape);
	glutDisplayFunc(DrawAll);
	glutIdleFunc(play);
	glutMainLoop();

}
