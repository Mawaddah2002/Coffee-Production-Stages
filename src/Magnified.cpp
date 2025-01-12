#include <GL\glew.h> // A cross-platform open-source C/C++ extension loading library
#include <GL\freeglut.h> // handle the window-managing operations
#include <math.h>
#define PI 3.14

float sBig = 1.0f;
float sMall = 1.0f;
int count = 20;

void init() {
	glClearColor(1.0f, 1.0f, 0.9f, 0.0f); // Set background color and opaque
	glMatrixMode(GL_PROJECTION); // set the projection parameters
	glLoadIdentity();
	glOrtho(-800, 800, -800, 800, -100, 100);
}

void scaleSmall(int value) {
	sMall -= 0.1;
	if (sMall <= 0.4) {
		sMall = 1.0;
	}
	glutPostRedisplay();
	glutTimerFunc(count, scaleSmall, 0);
}

void scaleBig(int value) {
	sBig += 0.1;
	if (sBig >= 1.6) {
		sBig = 1.0;
	}
	glutPostRedisplay();
	glutTimerFunc(count, scaleBig, 0);
}

void grayCircle(GLfloat fcx, GLfloat fcy, GLfloat fcr) {
	// Draw a circle
	int fci;
	int fcta = 40;
	GLfloat fctp = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor4f(0.6f, 0.6f, 0.6f, 1.0f); // Gray, f = float
	glVertex2f(fcx, fcy); // x, y

	for (fci = 0; fci <= fcta; fci++) {
		glVertex2f(fcx + (fcr * cos(fci * fctp / fcta)), fcy + (fcr * sin(fci * fctp / fcta)));
	}

	glEnd();
}

void cyanCircle(GLfloat fcx, GLfloat fcy, GLfloat fcr) {
	// Draw a circle
	int fci;
	int fcta = 40;
	GLfloat fctp = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor4f(0.3f, 1.0f, 1.0f, 0.7f); // Cyan, f = float
	glVertex2f(fcx, fcy); // x, y

	for (fci = 0; fci <= fcta; fci++) {
		glVertex2f(fcx + (fcr * cos(fci * fctp / fcta)), fcy + (fcr * sin(fci * fctp / fcta)));
	}

	glEnd();
}

void whiteCircle(GLfloat fcx, GLfloat fcy, GLfloat fcr) {
	// Draw a circle
	int fci;
	int fcta = 40;
	GLfloat fctp = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor4f(0.9f, 1.0f, 1.0f, 0.5f); // White, f = float
	glVertex2f(fcx, fcy); // x, y

	for (fci = 0; fci <= fcta; fci++) {
		glVertex2f(fcx + (fcr * cos(fci * fctp / fcta)), fcy + (fcr * sin(fci * fctp / fcta)));
	}

	glEnd();
}

void grayRectangle() {
	// Draw a rectangle
	glBegin(GL_QUADS); // Each set of 4 vertices form a quads
	glColor4f(0.6f, 0.6f, 0.6f, 1.0f); // Gray, f = float

	glVertex2f(0.65f, -0.65f); // x, y
	glVertex2f(0.7f, -0.6f);
	glVertex2f(0.9f, -0.8f);
	glVertex2f(0.85f, -0.85f);

	glEnd();
}

void brownRectangle() {
	// Draw a rectangle
	glBegin(GL_QUADS); // Each set of 4 vertices form a quads
	glColor4f(0.5f, 0.3f, 0.2f, 1.0f); // Brown, f = float

	glVertex2f(0.75f, -0.85f); // x, y
	glVertex2f(0.9f, -0.7f);
	glVertex2f(1.7f, -1.5f);
	glVertex2f(1.55f, -1.65f);

	glEnd();
}

void ellipse(float ex, float ey, float strangle, float endangle, float erx, float ery) {
	// Draw a ellipse
	glBegin(GL_POLYGON);
	glColor4f(0.8f, 0.0f, 0.1f, 1.0f); // Red, f = float

	while (strangle <= endangle) {
		glVertex2f(erx * cos(strangle) + ex, ery * sin(strangle) + ey);
		strangle += 0.001;
	}

	glEnd();
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glEnable(GL_BLEND);
	glPushMatrix();
	glScalef(600, 600, 0);

	// Draw a right coffee
	ellipse(0.4, 0.4, 0, 360, 0.08, 0.05);
	ellipse(0.35, 0.55, 0, 360, 0.08, 0.05);
	ellipse(0.2, 0.6, 0, 360, 0.05, 0.08);
	ellipse(0.3, 0.7, 0, 360, 0.05, 0.08);
	ellipse(0.45, 0.65, 0, 360, 0.05, 0.08);
	ellipse(0.5, 0.5, 0, 360, 0.08, 0.05);

	// Draw a lift coffee
	ellipse(-0.4, -0.4, 0, 360, 0.08, 0.05);
	ellipse(-0.35, -0.55, 0, 360, 0.08, 0.05);
	ellipse(-0.2, -0.6, 0, 360, 0.05, 0.08);
	ellipse(-0.3, -0.7, 0, 360, 0.05, 0.08);
	ellipse(-0.45, -0.65, 0, 360, 0.05, 0.08);
	ellipse(-0.5, -0.5, 0, 360, 0.08, 0.05);

	// Draw a magnified
	glPushMatrix();
	glScalef(sMall, sMall, sMall);
	grayCircle(0.0, 0.0, 1.0);
	grayRectangle();
	brownRectangle();

	// Draw a lens
	cyanCircle(0.0, 0.0, 0.9);
	whiteCircle(0.3, 0.3, 0.4);
	glPopMatrix();

	// Draw a center coffee
	glPushMatrix();
	glScalef(sBig, sBig, sBig);
	ellipse(-0.1, -0.1, 0, 360, 0.05, 0.08);
	ellipse(0.1, 0.1, 0, 360, 0.08, 0.05);
	glPopMatrix();

	glPopMatrix();
	glFlush();
	glDisable(GL_BLEND);
	glutSwapBuffers();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv); // Initialize GLUT
	// Index, single or double Buffer
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA); // Specify the display Mode – RGB, RGBA or color

	glutInitWindowSize(800, 800); // Set the window's initial width & height
	glutInitWindowPosition(400, 400); // Position the window's initial top-left corner
	glutCreateWindow("Magnified"); // Create a window with the given title
	init();

	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutTimerFunc(count, scaleSmall, 0);
	glutTimerFunc(count, scaleBig, 0);
	glutMainLoop(); // Enter the infinitely event-processing loop
	return 0;
}