#include <Windows.h>
#include <GL/glut.h>
#include<math.h>
#include<stdio.h>
using namespace std;

int sunStatus = 1;
float sunX = 0;
float sunY = 0;
float sunSpeed = 0.02;

int cloud1Status = 1;
float cloud1X = 0;
float cloud1Y = 0;
float cloud1Speed = 0.21;

int cloud2Status = 1;
float cloud2X = 0;
float cloud2Y = 0;
float cloud2Speed = 0.25;

int cloud3Status = 1;
float cloud3X = 0;
float cloud3Y = 0;
float cloud3Speed = 0.23;

int planStatus = 1;
float planX = 0;
float planY = 0;
float planSpeed = 4;

int ship1Status = 1;
float ship1X = 0;
float ship1Y = 0;
float ship1Speed1 = 0.8;

int ship2Status = 1;
float ship2X = 0;
float ship2Y = 0;
float ship2Speed = 0.6;

int carStatus1 = 1;
float car1X = 0;
float car1Y = 0;
float carSpeed1 = 3;

int car2Status = 1;
float car2X = 0;
float car2Y = 0;
float car2Speed = 4;

int busStatus1 = 1;
float busX = 0;
float busY = 0;
float busSpeed1 = 3;

int trackStatus = 1;
float trackX = 0;
float trackY = 0;
float trackSpeed = 3;

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

void car1() // Sifat's Part
{
glBegin(GL_POLYGON);
glColor3ub(255,0,0);
glVertex2f(40,118);
glVertex2f(40,150 ); // x, y
glVertex2f(160,150);
glVertex2f(160,118);// x, y
glEnd();

glBegin(GL_QUADS); //car
glColor3ub(255,0,0);
glVertex2f(57,150);
glVertex2f(80,175 ); // x, y
glVertex2f(120,175);
glVertex2f(142,150);// x, y
glEnd();

glBegin(GL_QUADS); //glass
glColor3ub(0,0,102);
glVertex2f(65,152);
glVertex2f(80,170 ); // x, y
glVertex2f(98,170);
glVertex2f(98,152);// x, y
glEnd();

glBegin(GL_QUADS); //glass
glColor3ub(0,0,102);
glVertex2f(102,170);
glVertex2f(120,170 ); // x, y
glVertex2f(134,152);
glVertex2f(102,152);// x, y
glEnd();

glColor3ub(0,0,0);
DrawCircle(80, 125, 15, 10000);

glColor3ub(255,255,255);
DrawCircle(80, 125, 11, 10000);

glColor3ub(0,0,0);
DrawCircle(120, 125, 15, 10000);

glColor3ub(255,255,255);
DrawCircle(120, 125, 11, 10000);
glEnd();
}

  	void updatecar1()
	{
		if (carStatus1 == 1)
		{
			car1X +=carSpeed1;
		}
        if (car1X>700)
		{
			car1X =-150 ;
		}
		glPushMatrix();
		glTranslatef(car1X, car1Y, 0);
		car1();
		glPopMatrix();
	}

	void car2()
    {
    glBegin(GL_POLYGON);            // body
    glColor3f(0,0,100);
    glVertex2f(100,20);
    glVertex2f(200,20);
    glVertex2f(200,40);
    glVertex2f(190,60);
    glVertex2f(150,60);
    glVertex2f(120,40);
    glVertex2f(110,40);
    glVertex2f(100,30);
    glEnd();

    glBegin(GL_POLYGON);            // front glass
    glColor3f(0,0,0);
    glVertex2f(150,57);
    glVertex2f(145,50);
    glVertex2f(130,40);
    glVertex2f(160,40);
    glVertex2f(160,57);
    glEnd();

    glBegin(GL_POLYGON);            // back glass
    glColor3f(0,0,0);
    glVertex2f(165,57);
    glVertex2f(165,40);
    glVertex2f(187,40);
    glVertex2f(187,57);
    glEnd();

    glColor3ub(0,0,0);
    DrawCircle(130, 23, 11, 10000);

    glColor3ub(224,224,224);
    DrawCircle(130, 23, 7, 10000);

    glColor3ub(0,0,0);
    DrawCircle(180, 23, 11, 10000);

    glColor3ub(224,224,224);
    DrawCircle(180, 23, 7, 10000);
   glEnd();
}

    void updatecar2()
	{
		if (car2Status == 1)
		{
			car2X -=car2Speed;
		}
        if (car2X<-200)
		{
			car2X =600 ;
		}
		glPushMatrix();
		glTranslatef(car2X, car2Y, 0);
		car2();
		glPopMatrix();
	}

	void bus()
	{
	   glBegin(GL_QUADS); //glass
       glColor3ub(153,0,0);;
       glVertex2f(620,20);
       glVertex2f(450,20 ); // x, y
       glVertex2f(450,60);
       glVertex2f(620,60);// x, y
       glEnd();

       	glBegin(GL_POLYGON);
        glColor3ub(153,0,0);
        glVertex2f(620,60);
        glVertex2f(620,100 );
        glVertex2f(470,100);
        glVertex2f(450,60);
	   glEnd();

	   glBegin(GL_POLYGON);   // font glass
        glColor3ub(192,192,192);
        glVertex2f(470,100);
        glVertex2f(450,60);// x, y
        glVertex2f(470,60);
	   glEnd();

	    glBegin(GL_POLYGON);    // big glass
        glColor3ub(192,192,192);
        glVertex2f(475,90);
        glVertex2f(495,90);// x, y
        glVertex2f(495,45);
        glVertex2f(475,45);
	    glEnd();

        glLineWidth(1);
	    glBegin(GL_LINE_LOOP);    // big glass
        glColor3ub(0,0,0);
        glVertex2f(475,90);
        glVertex2f(495,90);// x, y
        glVertex2f(495,45);
        glVertex2f(475,45);
	    glEnd();

	    glBegin(GL_POLYGON);       // door
        glColor3ub(255,255,255);
        glVertex2f(495,90);// x, y
        glVertex2f(495,40);
        glVertex2f(510,40);
        glVertex2f(510,90);// x, y
	    glEnd();

	     glBegin(GL_POLYGON);   // glass
        glColor3ub(192,192,192);
        glVertex2f(510,90);
        glVertex2f(542,90);// x, y
        glVertex2f(542,60);
        glVertex2f(510,60);// x, y
	    glEnd();

	    glLineWidth(1);
	    glBegin(GL_LINE_LOOP);  // glass
        glColor3ub(0,0,0);
        glVertex2f(510,90);
        glVertex2f(542,90);// x, y
        glVertex2f(542,60);
        glVertex2f(510,60);// x, y
	    glEnd();

	     glBegin(GL_POLYGON);   // glass
        glColor3ub(192,192,192);
        glVertex2f(572,90);
        glVertex2f(542,90);// x, y
        glVertex2f(542,60);
        glVertex2f(572,60);// x, y
	    glEnd();

	    glLineWidth(1);
	    glBegin(GL_LINE_LOOP);  // glass
        glColor3ub(0,0,0);
        glVertex2f(580,90);
        glVertex2f(542,90);// x, y
        glVertex2f(542,60);
        glVertex2f(580,60);// x, y
	    glEnd();

	    glBegin(GL_POLYGON);    // glass
        glColor3ub(192,192,192);
        glVertex2f(572,90);
        glVertex2f(610,90);// x, y
        glVertex2f(610,60);
        glVertex2f(572,60);// x, y
	    glEnd();

	    glLineWidth(1);
	    glBegin(GL_LINE_LOOP);  // glass
        glColor3ub(0,0,0);
        glVertex2f(572,90);
        glVertex2f(610,90);// x, y
        glVertex2f(610,60);
        glVertex2f(572,60);// x, y
	    glEnd();

        glColor3ub(0,0,0);
        DrawCircle(485, 23, 15, 10000);

        glColor3ub(224,224,224);
        DrawCircle(485, 23, 11, 10000);

         glColor3ub(0,0,0);
        DrawCircle(595, 23, 15, 10000);

        glColor3ub(224,224,224);
        DrawCircle(595, 23, 11, 10000);

	}

    void updatebus()
	{
		if (busStatus1 == 1)
		{
			busX -=busSpeed1;
		}
        if (busX<-620)
		{
			busX =320 ;
		}
		glPushMatrix();
		glTranslatef(busX, busY, 0);
		bus();
		glPopMatrix();
	}

void track()
{
        glBegin(GL_POLYGON); // back part
        glColor3ub(139,69,19);
        glVertex2f(300,95);
        glVertex2f(300,160);// x, y
        glVertex2f(400,160);
        glVertex2f(400,95);// x, y
	    glEnd();

	    glBegin(GL_POLYGON);  // front part
        glColor3ub(186,85,211);
        glVertex2f(400,95);
        glVertex2f(400,150);// x, y
        glVertex2f(430,150);
        glVertex2f(450,120);// x, y
        glVertex2f(450,95);// x, y
	    glEnd();

	     glBegin(GL_POLYGON);   // front part
        glColor3ub(192,192,192);
        glVertex2f(405,120);
        glVertex2f(405,145);// x, y
        glVertex2f(428,145);
        glVertex2f(445,120);// x, y
        glVertex2f(440,120);// x, y
	    glEnd();

	     glColor3ub(0,0,0);
        DrawCircle(420, 97, 15, 10000);//front chaka

        glColor3ub(224,224,224);
        DrawCircle(420, 97, 11, 10000);

         glColor3ub(0,0,0);
        DrawCircle(420, 97, 9, 10000);//end

         glColor3ub(0,0,0);
        DrawCircle(330, 97, 15, 10000);//back chaka

        glColor3ub(224,224,224);
        DrawCircle(330, 97, 11, 10000);

         glColor3ub(0,0,0);
        DrawCircle(330, 97, 9, 10000);
}

void updatetrack()
	{
		if (trackStatus == 1)
		{
			trackX +=trackSpeed;
		}
        if (trackX>400)
		{
			trackX =-500 ;
		}
		glPushMatrix();
		glTranslatef(trackX, trackY, 0);
		track();
		glPopMatrix();
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

void ship1() // Sifat's part
{
glBegin(GL_QUADS); //
glColor3ub(252, 44, 3);
glVertex2f(430,160);
glVertex2f(540,160);
glVertex2f(570,185);
glVertex2f(400,185);
glEnd();

glBegin(GL_QUADS);
glColor3ub(96,96,96);
glVertex2f(420,185);
glVertex2f(550,185);
glVertex2f(550,200);
glVertex2f(420,200);
glEnd();

glBegin(GL_QUADS);
glColor3ub(75,75,75);
glVertex2f(430,200);
glVertex2f(550,200);
glVertex2f(540,215);
glVertex2f(430,215);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(520,205-2);
glVertex2f(550-2,205-2);
glVertex2f(542,210+2);
glVertex2f(520,210+2);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(450,215);
glVertex2f(470,215);
glVertex2f(470,232);
glVertex2f(450,232);
glEnd();

glBegin(GL_QUADS);
glColor3ub(252, 44, 3);
glVertex2f(450,232);
glVertex2f(470,232);
glVertex2f(470,234);
glVertex2f(450,234);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(450+30,215);
glVertex2f(470+30,215);
glVertex2f(470+30,232);
glVertex2f(450+30,232);
glEnd();

glBegin(GL_QUADS);
glColor3ub(252, 44, 3);
glVertex2f(450+30,232);
glVertex2f(470+30,232);
glVertex2f(470+30,234);
glVertex2f(450+30,234);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(450+30+30,215);
glVertex2f(470+30+30,215);
glVertex2f(470+30+30,232);
glVertex2f(450+30+30,232);
glEnd();

glBegin(GL_QUADS);
glColor3ub(252, 44, 3);
glVertex2f(450+30+30,232);
glVertex2f(470+30+30,232);
glVertex2f(470+30+30,234);
glVertex2f(450+30+30,234);
glEnd();

glColor3ub(255,255,255);
DrawCircle(435, 170, 0, 10000);

glColor3ub(255,255,255);
DrawCircle(435+25, 170, 0, 10000);

glColor3ub(255,255,255);
DrawCircle(435+25+25, 170, 0, 10000);

glColor3ub(255,255,255);
DrawCircle(435+25+25+25, 170, 0, 10000);

glColor3ub(255,255,255);
DrawCircle(435+25+25+25+25, 170, 0, 10000);

glColor3ub(255,255,255);
DrawCircle(447, 192, 5, 1000);

glColor3ub(255,255,255);
DrawCircle(447+25, 192, 5, 1000);

glColor3ub(255,255,255);
DrawCircle(447+25+25, 192, 5, 1000);

glColor3ub(255,255,255);
DrawCircle(447+25+25+25, 192, 5, 1000);
}

	void updateship1()
	{
		if (ship1Status == 1)
		{
			ship1X +=ship1Speed1;
		}
        if (ship1X>350)
		{
			ship1X =-550 ;
		}
		glPushMatrix();
		glTranslatef(ship1X, ship1Y, 0);
		ship1();
		glPopMatrix();
	}

void ship2()
{
glBegin(GL_QUADS);
glColor3ub(25,25,112);
glVertex2f(320,240);
glVertex2f(380,240);
glVertex2f(380,260);
glVertex2f(300,260);
glEnd();

glBegin(GL_QUADS);
glColor3ub(128,129,236);
glVertex2f(320,260);
glVertex2f(375,260);
glVertex2f(375,275);
glVertex2f(330,275);
glEnd();

glBegin(GL_QUADS);
glColor3ub(220,20,60);
glVertex2f(335,275);
glVertex2f(370,275);
glVertex2f(340,280);
glVertex2f(345,280);
glEnd();
}

void updateship2()
	{
		if (ship2Status == 1)
		{
			ship2X -=ship2Speed;
		}
        if (ship2X<-400)
		{
			ship2X =400 ;
		}
		glPushMatrix();
		glTranslatef(ship2X, ship2Y, 0);
		ship2();
		glPopMatrix();
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

void sun() // Sifat's part
{
    glColor3ub(249,215,28);
    DrawCircle(100,380, 25, 10000);
}

void updatesun()
{
		if (sunStatus == 1)
		{
			if (sunY>=80)
		{
			sunY=80;
		}
		else sunY+=0.5;
		}
		glPushMatrix();
		glTranslatef(sunX, sunY, 0);
		sun();
		glPopMatrix();
	}

void cloud1()
{
    glColor3ub(255,255,255);
    DrawCircle(100,440, 15, 10000);

    glColor3ub(255,255,255);
    DrawCircle(115,450, 15, 10000);

    glColor3ub(255,255,255);
    DrawCircle(120,440, 15, 10000);

    glColor3ub(255,255,255);
    DrawCircle(133,465, 18, 10000);

    glColor3ub(255,255,255);
    DrawCircle(140,447, 15, 10000);

    glColor3ub(255,255,255);
    DrawCircle(153,455, 15, 10000);
}

void updatecloud1()
	{
		if (cloud1Status == 1)
		{
			cloud1X +=cloud1Speed;
		}
        if (cloud1X>600)
		{
			cloud1X =-150 ;
		}
		glPushMatrix();
		glTranslatef(cloud1X, cloud1Y, 0);
		cloud1();
		glPopMatrix();
	}

void cloud2()
{
    glColor3ub(255,255,255);
    DrawCircle(100+200,440+20, 15, 10000);

    glColor3ub(255,255,255);
    DrawCircle(115+200,450+20, 15, 10000);

    glColor3ub(255,255,255);
    DrawCircle(120+200,440+20, 15, 10000);

    glColor3ub(255,255,255);
    DrawCircle(133+200,465+20, 18, 10000);

    glColor3ub(255,255,255);
    DrawCircle(140+200,447+20, 15, 10000);

    glColor3ub(255,255,255);
    DrawCircle(153+200,455+20, 15, 10000);
}

void updatecloud2()
	{
		if (cloud2Status == 1)
		{
			cloud2X +=cloud2Speed;
		}
        if (cloud2X>400)
		{
			cloud2X =-340 ;
		}
		glPushMatrix();
		glTranslatef(cloud2X, cloud2Y, 0);
		cloud2();
		glPopMatrix();
	}

void cloud3()
{
    glColor3ub(255,255,255);
    DrawCircle(100+400,440, 15, 10000);

    glColor3ub(255,255,255);
    DrawCircle(115+400,450, 15, 10000);

    glColor3ub(255,255,255);
    DrawCircle(120+400,440, 15, 10000);

    glColor3ub(255,255,255);
    DrawCircle(133+400,465, 18, 10000);

    glColor3ub(255,255,255);
    DrawCircle(140+400,447, 15, 10000);

    glColor3ub(255,255,255);
    DrawCircle(153+400,455, 15, 10000);
}

void updatecloud3()
	{
		if (cloud3Status == 1)
		{
			cloud3X +=cloud3Speed;
		}
        if (cloud3X>200)
		{
			cloud3X =-550 ;
		}
		glPushMatrix();
		glTranslatef(cloud3X, cloud3Y, 0);
		cloud3();
		glPopMatrix();
	}

void plan() // Sifat's part
{
glBegin(GL_POLYGON);//rectangular body
glColor3ub(192,192,192);
glVertex2f(0,440);
glVertex2f(0,465);
glVertex2f(130,465.0);
glVertex2f(130,440.0);
glEnd();

glBegin(GL_POLYGON);//outline of upper triangle plane
glColor3ub(192,192,192);
glVertex2f(130.0,465.0);
glVertex2f(145.0,460.0);
glVertex2f(150.0,460.0);
glVertex2f(155.0,450.0);
glVertex2f(130.0,450.0);
glEnd();

glBegin(GL_POLYGON);//lower triangle
glColor3ub(169,169,169);
glVertex2f(130.0,450.0);
glVertex2f(155.0,450.0);
glVertex2f(155.0,447.0);
glVertex2f(140.0,440.0);
glVertex2f(130.0,440.0);
glEnd();

glBegin(GL_POLYGON);//back wing
glColor3ub(105,105,105);
glVertex2f(0.0,465.0);
glVertex2f(0.0,490.0);
glVertex2f(5.0,490.0);
glVertex2f(35.0,465.0);
glEnd();

glBegin(GL_POLYGON);//left side wing
glColor3ub(105,105,105);
glVertex2f(60.0,465.0);
glVertex2f(45.0,480.0);
glVertex2f(70.0,480.0);
glVertex2f(85.0,465.0);
glEnd();

glBegin(GL_POLYGON);//rightside wing
glColor3ub(105,105,105);
glVertex2f(65.0,450.0);
glVertex2f(95.0,450.0);
glVertex2f(75.0,425.0);
glVertex2f(45.0,425.0);
glEnd();
}

void updateplan()
	{
		if (planStatus == 1)
		{
			planX +=planSpeed;
		}
        if (planX>600)
		{
			planX =-150 ;
		}
		glPushMatrix();
		glTranslatef(planX, planY, 0);
		plan();
		glPopMatrix();
	}

void display() {
glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer with current clearing color
 glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

grass();
sky();
updatesun();
updatecloud1();
updatecloud2();
updatecloud3();
updateplan();
Road();
river();
updateship1();
updateship2();
Lamp();
updatecar1();
updatecar2();
updatetrack();
updatebus();

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
