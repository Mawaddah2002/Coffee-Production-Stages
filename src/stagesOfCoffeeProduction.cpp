#include <GL\glew.h>
#include <GL\freeglut.h>
#include <iostream>

#define PI 3.14

float  counter = 600;
float a;
float f;

float count = 20;
float sBig = 1.0f;
float sMall = 1.0f;

float transValue;
float v;
float vv;
float P = 0;
float angleMill;


/// ////////////////////////////
void fruit() {


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

void branch1() {

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

void DrawAll1() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glPushMatrix();
	glTranslatef(-0.25, -0.25, 0);
	glScalef(3, 3, 0);
	branch1();
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





}

//////////////////////////////
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
	GLfloat twisePI = 2.0 * P;

	glColor3f(0.3, 0.1, 0.0);
	glBegin(GL_TRIANGLE_FAN);
	x = -0.5, y = 0.5, radius = 0.03;
	//x = 0, y = 0.3
	twisePI = 2.0 * P;
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
	GLfloat twisePI = 2.0 * P;

	glColor3f(0.7, 0.7, 0.7);
	glBegin(GL_TRIANGLE_FAN);
	x = -0.5, y = 0.5, radius = 0.03;
	//x = 0, y = 0.3
	twisePI = 2.0 * P;
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

	//glEnable(GL_BLEND);

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
	glEnable(GL_BLEND);

	glLineWidth(5);
	glBegin(GL_LINES);

	glColor4f(1, 1, 1, 0.3);


	glVertex2i(635, 680);
	glVertex2i(700, 680);

	glColor4f(1, 0.6, 0.5, 0.9);

	glVertex2i(700, 680);//2
	glColor4f(1, 1, 1, 0.3);

	glVertex2i(700, 570);

	glColor4f(1, 1, 1, 0.3);
	glVertex2i(700, 570);
	glVertex2i(656, 570);
	glEnd();

	glPopMatrix();

	glDisable(GL_BLEND);

}

void coffeMachine() {


	glPushMatrix();
	glScalef(300, 300, 300);
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
	glPopMatrix();

	glPushMatrix();
	glScalef(0.5, 0.5, 0.5);
	cube2();
	glPopMatrix();


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

	glPushMatrix();
	glScalef(300, 300, 0);
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
	glTranslatef(0.2, -0.13, 0);
	glTranslatef(vv, 0, 0);

	coffeBeans();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.3, -0.13, 0);
	glTranslatef(vv, 0, 0);

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


}
void spin1() {
	vv = vv - 0.00001;
	v = v - 0.001;
	if (v <= 0.0)
		v = 0.05;
	if (vv <= 0.0)
		vv = 0.05;
	glutPostRedisplay();
}
/////////////////////////////////
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


}
void display() {
	glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glEnable(GL_BLEND);
	glPushMatrix();
	glScalef(100, 100, 0);

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
	glDisable(GL_BLEND);



}


void circule(void) {
	float x, y;
	int i;
	GLfloat radius;

	//ائرة يسار
	int triangleamount = 7;
	GLfloat twisePI = 2.0 * PI;
	//glColor3ub(0.5, 0.3, 0);
	glColor3f(0.3, 0.1, 0);//عودي
	glBegin(GL_TRIANGLE_FAN);
	x = -0.150, y = 0.5, radius = 0.02;
	//x = 0, y = 0.3
	twisePI = 2.0 * PI;
	glVertex2f(x, y);

	for (i = 0; i <= triangleamount; i++)
	{
		glVertex2f(
			x + (radius * cos(i * twisePI / triangleamount))
			, y + (radius * sin(i * twisePI / triangleamount))

		);
	}//end loop


	glEnd();


	//دائرة يمين


	triangleamount = 7;
	twisePI = 2.0 * PI;
	//glColor3ub(0.5, 0.3, 0);
	glColor3f(0.3, 0.1, 0);//عودي
	glBegin(GL_TRIANGLE_FAN);
	x = 0.150, y = 0.5, radius = 0.02;
	//x = 0, y = 0.3
	twisePI = 2.0 * PI;
	glVertex2f(x, y);

	for (i = 0; i <= triangleamount; i++)
	{
		glVertex2f(
			x + (radius * cos(i * twisePI / triangleamount))
			, y + (radius * sin(i * twisePI / triangleamount))

		);
	}//end loop


	glEnd();

}




//المربع الكبير 
void square() {
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);//هاذي الدالة حتسوي لي دمج للون الشكل ولازم بعدها اسوي انابل وديس ابل
	glEnable(GL_BLEND);

	glBegin(GL_QUADS);

	glColor3f(0.5, 0.3, 0);
	//glColor3f(0.3,0.1,0);//عودي
	//glColor4f(0.7 , 0.3 , 0.3,0.8);//


	glVertex2f(-0.3, 0.1);
	//glColor4f(1, 0.6, 0.6, 1);
	glVertex2f(0.3, 0.1);
	//glColor4f(1, 0, 0, 0.7);
	glVertex2f(0.3, -0.5);
	//glColor4f(1, 0.8, 0.8, 0.7);
	glVertex2f(-0.3, -0.5);

	glDisable(GL_BLEND);//disableفي النهاية لازم اسوي

	glEnd();


}

/////////////////////////////////////////////////////////////////////////
void InnerSquare() {
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);//هاذي الدالة حتسوي لي دمج للون الشكل ولازم بعدها اسوي انابل وديس ابل
	glEnable(GL_BLEND);

	glBegin(GL_LINE_STRIP);

	//glColor3f(1, 1, 1);

	//glColor4f(1, 1, 1, 0.9);
	glColor4f(1, 1, 1, 0.9);

	glVertex2f(-0.2, -0.5);

	glColor3f(0.5, 0.3, 0);
	glVertex2f(-0.2, 0);

	glColor4f(1, 1, 1, 0.9);
	glVertex2f(0.2, 0);

	glColor3f(0.5, 0.3, 0);
	glVertex2f(0.2, -0.5);


	glDisable(GL_BLEND);//disableفي النهاية لازم اسوي

	glEnd();


}


void engine() {

	glPushMatrix();
	glTranslatef(0, 0.6, 0);

	glRotatef(angleMill, 0, 1, 0);
	glTranslatef(0, -0.6, 0);


	glLineWidth(6); //حددت حجم الخط
	glBegin(GL_LINE_STRIP);

	glColor3f(0.3, 0.1, 0);//عودي

	glVertex2f(0, 0.6);
	glVertex2f(0, 0.7);

	glVertex2f(0, 0.7);
	glVertex2f(-0.4, 0.7);

	glEnd();


	//العجلة
	float x, y;
	int i;
	GLfloat radius;
	int triangleamount;
	GLfloat twisePI;

	triangleamount = 15;
	twisePI = 2.0 * PI;

	//glPushMatrix();
	//glRotatef(angle, 0, 0, 1);

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);

	glColor3f(0.3, 0.1, 0);//عودي

	glBegin(GL_TRIANGLE_FAN);
	x = -0.4, y = 0.7, radius = 0.06;
	//glVertex2f(0.7, 0.8);
	twisePI = 2.0 * PI;
	glVertex2f(x, y);

	for (i = 0; i <= triangleamount; i++)
	{
		glVertex2f(
			x + (radius * cos(i * twisePI / triangleamount))
			, y + (radius * sin(i * twisePI / triangleamount))

		);
	}//end loop


	glEnd();

	glPopMatrix();
}

void Lines()
{

	glColor3f(0.3, 0.1, 0);//عودي
	glLineWidth(8); //حددت حجم الخط



	glBegin(GL_LINES);

	glVertex2f(-0.4, -0.50);    //line under square
	glVertex2f(0.4, -0.50);

	glVertex2f(-0.4, 0.115);  //line on top of square
	glVertex2f(0.4, 0.115);


	// راسي عامود
	glLineWidth(10); //حددت حجم الخط
	glVertex2f(0, 0.6);
	glVertex2f(0, 0.150);

	// عامود افقي
	glLineWidth(8); //حددت حجم الخط
	glVertex2f(-0.150, 0.5);
	glVertex2f(0.150, 0.5);




	glEnd();

}



//حوض الطحن
void pharalizm() {


	glColor3f(0.5, 0.3, 0);
	//glColor3f(0.7, 0.3, 0.3);
	//glColor4f(0.7, 0.3, 0.3, 0.8);



	glBegin(GL_QUADS);

	glVertex2f(-0.3, 0.45);

	//glColor4f(0.5, 0.3, 0, 1);
	glVertex2f(0.3, 0.45);

	//glColor4f(0.5, 0.3, 0,0.5 );
	glVertex2f(0.2, 0.150);

	//glColor3f(0.5, 0.3, 0);
	glVertex2f(-0.2, 0.150);

	glEnd();

	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);//هاذي الدالة حتسوي لي دمج للون الشكل ولازم بعدها اسوي انابل وديس ابل
	glEnable(GL_BLEND);


	//glColor4f(0.5, 0.3, 0, 1);

	glBegin(GL_QUADS);

	glColor3f(0.5, 0.3, 0);
	glVertex2f(-0.3, 0.45);

	glColor4f(1, 1, 1, 0.9);
	glVertex2f(0.3, 0.45);

	glColor4f(0.5, 0.3, 0, 0.8);
	glVertex2f(0.2, 0.125);

	//glColor4f(0.5, 0.3, 0, 1);
	glVertex2f(-0.2, 0.125);

	glDisable(GL_BLEND);//disableفي النهاية لازم اسوي
	glEnd();


}

void mill()
{


	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);


	glPushMatrix();
	glScalef(300, 300, 0);

	square();
	InnerSquare();
	Lines();
	pharalizm();
	circule();
	engine();



	glPopMatrix();
	//glFlush();



}

void spainMill()
{

	angleMill += 0.09;
	if (angleMill >= 360) {
		angleMill = 0;
		//spain2();
	}
	glutPostRedisplay();

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

	spin1();
	spainMill();//المطحنة
	spin1();//المكينة

}
void f1() {
	f = f + 1;
	if (f < 1700) {
		glClearColor(1.0, 1.0, 0.9, 0); //Background color: Black

		DrawAll1();
		glFlush();
		glClearColor(1.0, 1.0, 0.9, 0); //Background color: Black


	}
	else {
		if (f < 7500 && f>1700) {
			glClearColor(1.0, 1.0, 0.9, 0); //Background color: Black

			DrawAll();
			glFlush();
			glClearColor(1.0, 1.0, 0.9, 0); //Background color: Black
		}
		if (f < 7520 && f>7500) {


			display();
			glFlush();
			glClearColor(1.0, 1.0, 0.9, 0); //Background color: Black

		}
		if (f < 9500 && f>7520) {
			glClearColor(1.0, 1.0, 0.9, 0); //Background color: Black

			pan();
			glFlush();
			glClearColor(1.0, 1.0, 0.9, 0); //Background color: Black

		}
		if (f < 20000 && f>9500) {
			glClearColor(1.0, 1.0, 0.9, 0); //Background color: Black

			mill();
			glFlush();


			glClearColor(1.0, 1.0, 0.9, 0); //Background color: Black

		}

		if (f < 25000 && f>20000) {
			glClearColor(1.0, 1.0, 0.9, 0); //Background color: Black

			glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
			coffeMachine();
			glFlush();
			glClearColor(1.0, 1.0, 0.9, 0); //Background color: Black

		}


	}
	glutPostRedisplay();
}

int main(int argc, char* argv[]) {

	glutInit(&argc, argv);
	glutInitWindowSize(800, 800);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Stages of coffee generation");
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
	init();
	a = 800;
	f = 0;
	v = 0.05;
	vv = 0.01;
	angleMill = 0;

	glutDisplayFunc(f1);
	glutReshapeFunc(reshape);
	glutTimerFunc(count, scaleSmall, 0);
	glutTimerFunc(count, scaleBig, 0);

	//glutIdleFunc(spin1);//الصاج

	//glutIdleFunc(spainMill);//المطحنة
	glutIdleFunc(spin);// العربة


	glutMainLoop();

}
