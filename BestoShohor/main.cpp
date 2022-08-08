#include <Windows.h>
#include <GL/glut.h>
#include<math.h>
#include<stdio.h>
using namespace std;

void DrawCircle(float cx, float cy, float r, int num_segments)
		{
		 glBegin(GL_TRIANGLE_FAN);
		 for (int i = 0; i < num_segments; i++)
            {
            float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);//get the current angle

            float x = r * cosf(theta);//calculate the x component
            float y = r * sinf(theta);//calculate the y component

            glVertex2f(x + cx, y + cy);//output vertex

            }
		 glEnd();
	}

void Road() // MARZIA MEHZABEEN's Part
{

glBegin(GL_QUADS); //Road
glColor3ub(157,159,157);
glVertex2f(0,150 ); // x, y
glVertex2f(700,150);
glVertex2f(700,0); // x, y
glVertex2f(0,0);
glEnd();

glLineWidth(7.5);
glBegin(GL_LINES);
glColor3f(1.0, 1.0, 1.0);
glVertex2f(30,80 );
glVertex2f(70,80 );

glVertex2f(110,80 );
glVertex2f(150,80 );

glVertex2f(190,80 );
glVertex2f(230,80 );

glVertex2f(270,80 );
glVertex2f(310, 80 );

glVertex2f(350,80 );
glVertex2f(390,80 );

glVertex2f(430,80 );
glVertex2f(470,80 );

glVertex2f(510,80 );
glVertex2f(550,80 );

glVertex2f(590,80 );
glVertex2f(630,80 );
glEnd();

 glBegin(GL_QUADS);    //1ST BOX
glColor3f(1.0, 1.0, 1.0);
glVertex2f(0,140 ); // x, y
glVertex2f(0,150);
glVertex2f(40,150); // x, y
glVertex2f(40,140);
glEnd();

 glBegin(GL_QUADS);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(40,140 ); // x, y
glVertex2f(40,150);
glVertex2f(80,150); // x, y
glVertex2f(80,140);
glEnd();

glBegin(GL_QUADS);    //3RD BOX
glColor3f(1.0, 1.0, 1.0);
glVertex2f(80,140 ); // x, y
glVertex2f(80,150);
glVertex2f(120,150); // x, y
glVertex2f(120,140);
glEnd();

glBegin(GL_QUADS);    //4 BOX
glColor3f(0.0, 0.0, 0.0);
glVertex2f(120,140 ); // x, y
glVertex2f(120,150);
glVertex2f(160,150); // x, y
glVertex2f(160,140);
glEnd();

glBegin(GL_QUADS);    //5 BOX
glColor3f(1.0, 1.0, 1.0);
glVertex2f(160,140 ); // x, y
glVertex2f(160,150);
glVertex2f(200,150); // x, y
glVertex2f(200,140);
glEnd();

glBegin(GL_QUADS);    //6 BOX
glColor3f(0.0, 0.0, 0.0);
glVertex2f(200,140 ); // x, y
glVertex2f(200,150);
glVertex2f(240,150); // x, y
glVertex2f(240,140);
glEnd();

glBegin(GL_QUADS);    //7 BOX
glColor3f(1.0, 1.0, 1.0);
glVertex2f(240,140 ); // x, y
glVertex2f(240,150);
glVertex2f(280,150); // x, y
glVertex2f(280,140);
glEnd();

glBegin(GL_QUADS);    //8 BOX
glColor3f(0.0, 0.0, 0.0);
glVertex2f(280,140 ); // x, y
glVertex2f(280,150);
glVertex2f(320,150); // x, y
glVertex2f(320,140);
glEnd();

glBegin(GL_QUADS);    //9 BOX
glColor3f(1.0, 1.0, 1.0);
glVertex2f(320,140 ); // x, y
glVertex2f(320,150);
glVertex2f(360,150); // x, y
glVertex2f(360,140);
glEnd();

glBegin(GL_QUADS);    //10 BOX
glColor3f(0.0, 0.0, 0.0);
glVertex2f(360,140 ); // x, y
glVertex2f(360,150);
glVertex2f(400,150); // x, y
glVertex2f(400,140);
glEnd();

glBegin(GL_QUADS);    //11 BOX
glColor3f(1.0, 1.0, 1.0);
glVertex2f(400,140 ); // x, y
glVertex2f(400,150);
glVertex2f(440,150); // x, y
glVertex2f(440,140);
glEnd();

glBegin(GL_QUADS);    //12 BOX
glColor3f(0.0, 0.0, 0.0);
glVertex2f(440,140 ); // x, y
glVertex2f(440,150);
glVertex2f(480,150); // x, y
glVertex2f(480,140);
glEnd();

glBegin(GL_QUADS);    //13 BOX
glColor3f(1.0, 1.0, 1.0);
glVertex2f(480,140 ); // x, y
glVertex2f(480,150);
glVertex2f(520,150); // x, y
glVertex2f(520,140);
glEnd();

glBegin(GL_QUADS);    //14 BOX
glColor3f(0.0, 0.0, 0.0);
glVertex2f(520,140 ); // x, y
glVertex2f(520,150);
glVertex2f(560,150); // x, y
glVertex2f(560,140);
glEnd();

glBegin(GL_QUADS);    //15 BOX
glColor3f(1.0, 1.0, 1.0);
glVertex2f(560,140 ); // x, y
glVertex2f(560,150);
glVertex2f(600,150); // x, y
glVertex2f(600,140);
glEnd();

glBegin(GL_QUADS);    //16 BOX
glColor3f(0.0, 0.0, 0.0);
glVertex2f(600,140 ); // x, y
glVertex2f(600,150);
glVertex2f(640,150); // x, y
glVertex2f(640,140);
glEnd();

glBegin(GL_QUADS);    //17 BOX
glColor3f(1.0, 1.0, 1.0);
glVertex2f(640,140 ); // x, y
glVertex2f(640,150);
glVertex2f(680,150); // x, y
glVertex2f(680,140);
glEnd();

glBegin(GL_QUADS);    //18 BOX
glColor3f(0.0, 0.0, 0.0);
glVertex2f(680,140 ); // x, y
glVertex2f(680,150);
glVertex2f(700,150); // x, y
glVertex2f(700,140);
glEnd();

}

void Lamp() //// MARZIA MEHZABEEN's Part
{

glBegin(GL_QUADS);    //1st lamp
glColor3f(0.0, 0.0, 0.0);
glVertex2f(90,150 ); // x, y
glVertex2f(90,200);
glVertex2f(95,200); // x, y
glVertex2f(95,150);
glEnd();

glColor3ub(235, 230, 218);
DrawCircle(92, 202, 9, 10000);

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(75,180 );
glVertex2f(110,180 );
glEnd();

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(76,180 );
glVertex2f(76,190 );
glEnd();

glColor3ub(235, 230, 218);
DrawCircle(76, 194, 7, 10000);

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(109,180 );
glVertex2f(109,190 );
glEnd();

glColor3ub(235, 230, 218);
DrawCircle(109, 194, 7, 10000);

glBegin(GL_QUADS);    //2nd lamp
glColor3f(0.0, 0.0, 0.0);
glVertex2f(250,150 ); // x, y
glVertex2f(250,200);
glVertex2f(255,200); // x, y
glVertex2f(255,150);
glEnd();

glColor3ub(235, 230, 218);
DrawCircle(253, 202, 9, 10000);
glEnd();

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(235,180 );
glVertex2f(270,180 );
glEnd();

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(236,180 );
glVertex2f(236,190 );
glEnd();

glColor3ub(235, 230, 218);
DrawCircle(236, 194, 7, 10000);


glLineWidth(4.5);
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(269,180 );
glVertex2f(269,190 );
glEnd();

glColor3ub(235, 230, 218);
DrawCircle(269, 194, 7, 10000);

glBegin(GL_QUADS);    //3rd lamp
glColor3f(0.0, 0.0, 0.0);
glVertex2f(410,150 ); // x, y
glVertex2f(410,200);
glVertex2f(415,200); // x, y
glVertex2f(415,150);
glEnd();

glColor3ub(235, 230, 218);
DrawCircle(413, 202, 9, 10000);

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(395,180 );
glVertex2f(430,180 );
glEnd();

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(396,180 );
glVertex2f(396,190 );
glEnd();

glColor3ub(235, 230, 218);
DrawCircle(396, 194, 7, 10000);

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(429,180 );
glVertex2f(429,190 );
glEnd();

glColor3ub(235, 230, 218);
DrawCircle(429, 194, 7, 10000);

glBegin(GL_QUADS);    //4th lamp
glColor3f(0.0, 0.0, 0.0);
glVertex2f(570,150 ); // x, y
glVertex2f(570,200);
glVertex2f(575,200); // x, y
glVertex2f(575,150);
glEnd();

glColor3ub(235, 230, 218);
DrawCircle(573, 202, 9, 10000);

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(555,180 );
glVertex2f(590,180 );
glEnd();

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(556,180 );
glVertex2f(556,190 );
glEnd();

glColor3ub(235, 230, 218);
DrawCircle(556, 194, 7, 10000);

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(589,180 );
glVertex2f(589,190 );
glEnd();
glColor3ub(235, 230, 218);
DrawCircle(589, 194, 7, 10000);
}

void river()// MARZIA MEHZABEEN's Part
{


glBegin(GL_QUADS);

glColor3ub(30,144,255);
glVertex2f(0,150);
glColor3ub(135,206,250);
glVertex2f(0,298 ); // x, y
glColor3ub(135,206,250);
glVertex2f(700,298);
glColor3ub(30,144,255);
glVertex2f(700,150);// x, y
glEnd();


 glBegin(GL_QUADS);
    glColor3ub(105,105,105);
    glVertex2f(0,285 );
    glVertex2f(700,285);
    glVertex2f(700,298);
    glVertex2f(0,298);
    glEnd();
}

void grass() // MARZIA MEHZABEEN's Part
{
    glBegin(GL_QUADS);
    glColor3ub(0,128,0);
    glVertex2f(0,350 );
    glColor3ub(0,128,0);
    glVertex2f(700,350);
      glColor3ub(0,255,0);
    glVertex2f(700,295);
    glColor3ub(0,255,0);
    glVertex2f(0,295);
    glEnd();
}

void sky() // MARZIA MEHZABEEN's Part
{

 glBegin(GL_QUADS);
 glColor3ub(176,224,230);
glVertex2f(0,500 );
glVertex2f(700,500);
glVertex2f(700,350);
glVertex2f(0,350);
glEnd();
}

void display() {
glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer with current clearing color

 glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

grass();
sky();
Road();
river();
Lamp();

glFlush(); // Render now
glutPostRedisplay();
glutSwapBuffers();

}

void position(void)
{
glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0,700,0,500);
}

int main(int argc, char** argv) {

glutInit(&argc, argv);
glutInitDisplayMode( GLUT_SINGLE | GLUT_RGB );
glutInitWindowSize(1000,700);
glutCreateWindow("BESTO SHOHOR");
glutDisplayFunc(display);
position();



glutMainLoop();
}
