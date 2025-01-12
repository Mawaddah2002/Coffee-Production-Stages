

//author : Esra hussain saif
//id: 442003697



#include <GL\glew.h> //ãßÊÈÉ ÎÇÕÉ ÈÇáÑÓã æÇÏæÇÊ ÇáÑÓã
#include <GL\freeglut.h>//ãßÊÈÉ ÎÇÕÉ ÈÇáÕİÍÉ Çááí ÍÑÓã ÚáíåÇ æãæÇÕİÇÊåÇ
#include <ioStream>  //for input and output
#include <math.h>
#include <stdio.h>
using namespace std;

float x, y, i;
float PI = 3.1416;
float pi = 3.14;
float test;


float angleMill;
float transMill;

float transAll;

void circule(void) {
	float x, y;
	int i; 
	GLfloat radius;

	//ÇÆÑÉ íÓÇÑ
	int triangleamount = 7;
	GLfloat twisePI = 2.0 * PI;
	//glColor3ub(0.5, 0.3, 0);
	glColor3f(0.3, 0.1, 0);//ÚæÏí
	glBegin(GL_TRIANGLE_FAN);
	x = -0.150, y = 0.5, radius = 0.02;
	//x = 0, y = 0.3
	twisePI = 2.0 * PI;
	glVertex2f(x, y);

	for (i = 0; i <= triangleamount; i++)
	{
		glVertex2f(
			       x+(radius * cos(i* twisePI/ triangleamount)   )
			      ,y+(radius * sin(i * twisePI / triangleamount) )
		         
		           ) ;
	}//end loop

	
	glEnd();
	

	//ÏÇÆÑÉ íãíä

	
	triangleamount = 7;
	twisePI = 2.0 * PI;
	//glColor3ub(0.5, 0.3, 0);
	glColor3f(0.3, 0.1, 0);//ÚæÏí
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




//ÇáãÑÈÚ ÇáßÈíÑ 
void square() {
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);//åÇĞí ÇáÏÇáÉ ÍÊÓæí áí ÏãÌ ááæä ÇáÔßá æáÇÒã ÈÚÏåÇ ÇÓæí ÇäÇÈá æÏíÓ ÇÈá
	glEnable(GL_BLEND);

	glBegin(GL_QUADS);

	glColor3f(0.5, 0.3, 0);
	//glColor3f(0.3,0.1,0);//ÚæÏí
	//glColor4f(0.7 , 0.3 , 0.3,0.8);//


	glVertex2f(-0.3, 0.1);
	//glColor4f(1, 0.6, 0.6, 1);
	glVertex2f(0.3, 0.1);
	//glColor4f(1, 0, 0, 0.7);
	glVertex2f(0.3, -0.5);
	//glColor4f(1, 0.8, 0.8, 0.7);
	glVertex2f(-0.3, -0.5);

	glDisable(GL_BLEND);//disableİí ÇáäåÇíÉ áÇÒã ÇÓæí

	glEnd();

	
}

/////////////////////////////////////////////////////////////////////////
void InnerSquare() {
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);//åÇĞí ÇáÏÇáÉ ÍÊÓæí áí ÏãÌ ááæä ÇáÔßá æáÇÒã ÈÚÏåÇ ÇÓæí ÇäÇÈá æÏíÓ ÇÈá
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
	glVertex2f(0.2,-0.5);
	
	
	glDisable(GL_BLEND);//disableİí ÇáäåÇíÉ áÇÒã ÇÓæí

	glEnd();

	
}


void engine() {
	
	glPushMatrix();
	glTranslatef(0, 0.6, 0);

	glRotatef(angleMill, 0, 1, 0);
	glTranslatef(0, -0.6, 0);


	glLineWidth(6); //ÍÏÏÊ ÍÌã ÇáÎØ
	glBegin(GL_LINE_STRIP);

	glColor3f(0.3, 0.1, 0);//ÚæÏí

	glVertex2f(0, 0.6);
	glVertex2f(0, 0.7);

	glVertex2f(0, 0.7);
	glVertex2f(-0.4, 0.7);

	glEnd();

	
	//ÇáÚÌáÉ
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

	glColor3f(0.3, 0.1, 0);//ÚæÏí

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
	
	glColor3f(0.3, 0.1, 0);//ÚæÏí
	glLineWidth(8); //ÍÏÏÊ ÍÌã ÇáÎØ


	
	glBegin(GL_LINES);

	glVertex2f(-0.4, -0.50);    //line under square
	glVertex2f(0.4, -0.50);

	glVertex2f(-0.4, 0.115);  //line on top of square
	glVertex2f(0.4, 0.115);


	// ÑÇÓí ÚÇãæÏ
	glLineWidth(10); //ÍÏÏÊ ÍÌã ÇáÎØ
	glVertex2f(0, 0.6);   
	glVertex2f(0, 0.150);

	// ÚÇãæÏ ÇİŞí
	glLineWidth(8); //ÍÏÏÊ ÍÌã ÇáÎØ
	glVertex2f(-0.150, 0.5);
	glVertex2f(0.150, 0.5);
	
	

	
	glEnd();
	
}



//ÍæÖ ÇáØÍä
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

	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);//åÇĞí ÇáÏÇáÉ ÍÊÓæí áí ÏãÌ ááæä ÇáÔßá æáÇÒã ÈÚÏåÇ ÇÓæí ÇäÇÈá æÏíÓ ÇÈá
	glEnable(GL_BLEND);


	//glColor4f(0.5, 0.3, 0, 1);

	glBegin(GL_QUADS);

	glColor3f(0.5, 0.3, 0);
	glVertex2f(-0.3, 0.45);

	glColor4f(1, 1, 1, 0.9);
	glVertex2f(0.3, 0.45);

	glColor4f(0.5, 0.3, 0,0.8);
	glVertex2f(0.2, 0.125);

	//glColor4f(0.5, 0.3, 0, 1);
	glVertex2f(-0.2, 0.125);

	glDisable(GL_BLEND);//disableİí ÇáäåÇíÉ áÇÒã ÇÓæí
	glEnd();


}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

void cube2() {

	glPushMatrix();
	glTranslatef(-600, -600, 0);

	glScalef(0.5,0.5, 0);

	//glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glEnable(GL_BLEND);

	glBegin(GL_POLYGON);
	glColor3f(1 , 0.6 , 0.5);
	
	
	glColor4f(1, 0.6, 0.5,0.5);
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


void mill()
{  


	glClearColor(1, 1, 0.9, 0);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	

	glPushMatrix();
	glScalef(600, 600, 0);

	square();
	InnerSquare();
	Lines();
	pharalizm();
	circule();
	engine();

	
	
	glPopMatrix();
	glFlush();
	


}


void display() {


	glClearColor(1, 1, 0.9, 0);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);

	glPushMatrix();
	glTranslatef(transAll, 0, 0);
	mill();


	glPopMatrix();
	glFlush();



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

void init() {

	glMatrixMode(GL_PROJECTION);//åäÇ ÍÏÏÊ ÇÓŞØ ÇáßÇãíÑÇ Çí ãä ÇíÊ ÒÇæíÉ ÍäÔæİ ÇáÑÓãÉ æåäÇ ÎáíäÇå ÇáÏíİæáÊ Çí ÇáÔßá ÇáÇãÇãí
	glLoadIdentity();
	//glOrtho(-2, 2, -2, 2, 100, -100);
	glOrtho(-800, 800, -800, 800, 100, -100);


	/*
	glMatrixMode(GL_MODELVIEW);//åäÇ åĞå ÇáãÕİæİ ÉÎÇÕÉ ÈÇáÊÍæíáÇÊ ÇáÎÇÕÉ ÈÇáßÇãíÑÇ ÚäÏí
	glLoadIdentity();
	gluLookAt(1.5, 1.5, -1.5, 0.5, 1, -0.5, 0, 1, 0); //ÊÍÏÏ ãßÇä æÇÍÏÇËíÇÊ ÇáßÇãíÑÇ æÒÇæíÊåÇ
	*/
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);//åäÇ ÇÍÏÏ ÇäÇ Úáì ÇíÊ äÙáã ÈÑÓã ÈõÚÏíä æáÇ ËáÇË ÇÈÚÇÏ æÇíÖğÇ ÇÍÏÏ äÙÇã ÇáÇáæÇä Çááí ÍãÔí Úáíå 

	
	glutInitWindowSize(800, 800); //ÍÌã ÇáÇØÇÑ Çááí ÍÊßæä İíå ÇáæÑŞÉ
	glutInitWindowPosition(400, 400); // ãßÇä ÙåæÑ ÇáæÑŞÉ Úáì ÇáÔÇÔÉ
	glutCreateWindow("mill");  
	
	angleMill = 0;
	transMill = 0;
	transAll = 0;
	
	init();

	glutIdleFunc(spainMill);
	//glutIdleFunc(spainALL);


	glutDisplayFunc(mill);//ãÇäŞÏÑ äÓÊÎÏãåÇ İí ÇáãÇíä ÇáÇ ãÑå æÍÏå İŞØ æÇÍäÇ äÈÛÇ ÇßËÑ ãä ÑÓãÉ İí äİÓ ÇáæŞÊ ÊäÑÓã Úáì ÕİÍÉ æÍÏå áĞáßääÇÏíåã İí ÏÇáÉ ÊÌãÚ ßá ÇáÇÔßÇá æÈÚÏíä İí ÇáãÇíä ääÇÏí åÇĞí ÇáÏÇáÉ Çááí ÌãÚÊ ßá ÇáÇÔßÇá

	//glutSpecialFunc(special);


	glutMainLoop();//ÊÎáíáí ÇáÕæÑÉ ÙÇåÑÉ Úáì ÇáÔÇÔÉ áãä ÇİÊÍåÇ
	return 0;
}