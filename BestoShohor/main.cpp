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

int moonStatus = 1;
float moonX = 0;
float moonY = 0;
float moonSpeed = 0.02;

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
    glVertex2f(100,30);
    glVertex2f(200,30);
    glVertex2f(200,50);
    glVertex2f(190,70);
    glVertex2f(150,70);
    glVertex2f(120,50);
    glVertex2f(110,50);
    glVertex2f(100,40);
    glEnd();

    glBegin(GL_POLYGON);            // front glass
    glColor3f(0,0,0);
    glVertex2f(150,67);
    glVertex2f(145,60);
    glVertex2f(130,50);
    glVertex2f(160,50);
    glVertex2f(160,67);
    glEnd();

    glBegin(GL_POLYGON);            // back glass
    glColor3f(0,0,0);
    glVertex2f(165,67);
    glVertex2f(165,50);
    glVertex2f(187,50);
    glVertex2f(187,67);
    glEnd();

    glColor3ub(0,0,0);
    DrawCircle(130, 33, 11, 10000);

    glColor3ub(224,224,224);
    DrawCircle(130, 33, 7, 10000);

    glColor3ub(0,0,0);
    DrawCircle(180, 33, 11, 10000);

    glColor3ub(224,224,224);
    DrawCircle(180, 33, 7, 10000);
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

void Tree(int x_axis) // istiaquehossainleons's Part
{
glLineWidth(7.0);
glBegin(GL_LINES);
glColor3ub(255,155,0);
glVertex2i(240+x_axis,300);
glVertex2i(240+x_axis,320);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,244,0);
glVertex2i(145+80+x_axis,320);
glVertex2i(175+80+x_axis,320);
glVertex2i(160+80+x_axis,340);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(51,152,102);
glVertex2i(66+80+80+x_axis,325);
glVertex2i(94+80+80+x_axis,325);
glVertex2i(80+80+80+x_axis,350);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,244,0);
glVertex2i(67+80+80+x_axis,330);
glVertex2i(93+80+80+x_axis,330);
glVertex2i(80+80+80+x_axis,355);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(51,152,102);
glVertex2i(69+80+80+x_axis,336);
glVertex2i(91+80+80+x_axis,336);
glVertex2i(80+80+80+x_axis,360);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,244,0);
glVertex2i(70+80+80+x_axis,342);
glVertex2i(90+80+80+x_axis,342);
glVertex2i(80+80+80+x_axis,365);
glEnd();
}

void house()
{
glBegin(GL_POLYGON);//1st & 2nd middle building
glColor3f(0.686 ,0.766, 0.246); // Red
glVertex2i(45,325);
glVertex2i(115,325);
glVertex2i(115,410);
glVertex2i(80,425);//middle
glVertex2i(45,410);
glVertex2i(45,360);
glEnd();

glLineWidth(8.0);
glBegin(GL_LINES);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2i(40,410);
glVertex2i(80,425);
glVertex2i(80,425);
glVertex2i(120,410);
glEnd();

 glBegin(GL_QUADS); //1st window
glColor3f(0.290, 0.662, 0.850);
glVertex2i(55,380);
glVertex2i(70,380);
glVertex2i(70,400);
glVertex2i(55,400);
glEnd();

glLineWidth(1);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(55,380);
glVertex2i(70,380);
glVertex2i(70,400);
glVertex2i(55,400);
glEnd();

glBegin(GL_QUADS); //2nd window
glColor3f(0.290, 0.662, 0.850);
glVertex2i(90,380);
glVertex2i(105,380);
glVertex2i(105,400);
glVertex2i(90,400);
glEnd();

glLineWidth(1);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(90,380);
glVertex2i(105,380);
glVertex2i(105,400);
glVertex2i(90,400);
glEnd();

glBegin(GL_POLYGON);//1st building
glColor3f(0.937, 0.243, 0.517); // Red
glVertex2i(5,310);
glVertex2i(75,310);
glVertex2i(75,370);
glVertex2i(40,385);//middle
glVertex2i(5,370);
glVertex2i(5,360);
glEnd();

glLineWidth(8.0);
glBegin(GL_LINES);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2i(0,370);
glVertex2i(40,385);
glVertex2i(40,385);
glVertex2i(80,370);
glEnd();

 glBegin(GL_QUADS); //1st window
glColor3f(0.290, 0.662, 0.850);
glVertex2i(15,320);
glVertex2i(30,320);
glVertex2i(30,340);
glVertex2i(15,340);
glEnd();

glLineWidth(1);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(15,320);
glVertex2i(30,320);
glVertex2i(30,340);
glVertex2i(15,340);
glEnd();

 glBegin(GL_QUADS); //2nd window
glColor3f(0.290, 0.662, 0.850);
glVertex2i(45,320);
glVertex2i(60,320);
glVertex2i(60,340);
glVertex2i(45,340);
glEnd();

glLineWidth(1);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(45,320);
glVertex2i(60,320);
glVertex2i(60,340);
glVertex2i(45,340);
glEnd();

 glBegin(GL_QUADS); //3rd window
glColor3f(0.290, 0.662, 0.850);
glVertex2i(45,345);
glVertex2i(60,345);
glVertex2i(60,365);
glVertex2i(45,365);
glEnd();

glLineWidth(1);
 glBegin(GL_LINE_LOOP); //3rd window
glColor3ub(255,255,255);
glVertex2i(45,345);
glVertex2i(60,345);
glVertex2i(60,365);
glVertex2i(45,365);
glEnd();

 glBegin(GL_QUADS); //4th window
glColor3f(0.290, 0.662, 0.850);
glVertex2i(15,345);
glVertex2i(30,345);
glVertex2i(30,365);
glVertex2i(15,365);
glEnd();

glLineWidth(1);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(15,345);
glVertex2i(30,345);
glVertex2i(30,365);
glVertex2i(15,365);
glEnd();
////////////////////////2222222222222222////////////////////////////////
glBegin(GL_POLYGON);//2nd building
glColor3f(.937, 0.243, 1.517); // Red
glVertex2i(85,308);
glVertex2i(155,308);
glVertex2i(155,385);
glVertex2i(120,400);//middle
glVertex2i(85,385);
glVertex2i(85,360);
glEnd();

glLineWidth(8.0);
glBegin(GL_LINES);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2i(80,385);
glVertex2i(120,400);
glVertex2i(120,400);
glVertex2i(160,385);
glEnd();

 glBegin(GL_QUADS); //1st window
glColor3f(0.290, 0.662, 0.850);
glVertex2i(100,320);
glVertex2i(115,320);
glVertex2i(115,340);
glVertex2i(100,340);
glEnd();

glLineWidth(1);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(100,320);
glVertex2i(115,320);
glVertex2i(115,340);
glVertex2i(100,340);
glEnd();

 glBegin(GL_QUADS); //2nd window
glColor3f(0.290, 0.662, 0.850);
glVertex2i(130,320);
glVertex2i(145,320);
glVertex2i(145,340);
glVertex2i(130,340);
glEnd();

glLineWidth(1);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(130,320);
glVertex2i(145,320);
glVertex2i(145,340);
glVertex2i(130,340);
glEnd();

 glBegin(GL_QUADS); //3rd window
glColor3f(0.290, 0.662, 0.850);
glVertex2i(130,345);
glVertex2i(145,345);
glVertex2i(145,365);
glVertex2i(130,365);
glEnd();

glLineWidth(1);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(130,345);
glVertex2i(145,345);
glVertex2i(145,365);
glVertex2i(130,365);
glEnd();

 glBegin(GL_QUADS); //4th window
glColor3f(0.290, 0.662, 0.850);
glVertex2i(100,345);
glVertex2i(115,345);
glVertex2i(115,365);
glVertex2i(100,365);
glEnd();

glLineWidth(1);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(100,345);
glVertex2i(115,345);
glVertex2i(115,365);
glVertex2i(100,365);
glEnd();

glBegin(GL_POLYGON);//3rd building
glColor3f(.937, 1.243, .517); // Red
glVertex2i(165,310);
glVertex2i(235,310);
glVertex2i(235,400);
glVertex2i(200,415);//middle
glVertex2i(165,400);
glVertex2i(165,390);
glEnd();

glLineWidth(8.0);
glBegin(GL_LINES);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2i(160,400);
glVertex2i(200,415);
glVertex2i(200,415);
glVertex2i(240,400);
glEnd();

 glBegin(GL_QUADS); //1st window
glColor3f(0.290, 0.662, 0.850);
glVertex2i(175,320);
glVertex2i(190,320);
glVertex2i(190,340);
glVertex2i(175,340);
glEnd();

glLineWidth(1);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(175,320);
glVertex2i(190,320);
glVertex2i(190,340);
glVertex2i(175,340);
glEnd();

 glBegin(GL_QUADS); //2nd window
glColor3f(0.290, 0.662, 0.850);
glVertex2i(205,320);
glVertex2i(220,320);
glVertex2i(220,340);
glVertex2i(205,340);
glEnd();

glLineWidth(1);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(205,320);
glVertex2i(220,320);
glVertex2i(220,340);
glVertex2i(205,340);
glEnd();

 glBegin(GL_QUADS); //3rd window
glColor3f(0.290, 0.662, 0.850);
glVertex2i(205,345);
glVertex2i(220,345);
glVertex2i(220,365);
glVertex2i(205,365);
glEnd();

glLineWidth(1);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(205,345);
glVertex2i(220,345);
glVertex2i(220,365);
glVertex2i(205,365);
glEnd();

 glBegin(GL_QUADS); //4th window
glColor3f(0.290, 0.662, 0.850);
glVertex2i(175,345);
glVertex2i(190,345);
glVertex2i(190,365);
glVertex2i(175,365);
glEnd();

glLineWidth(1);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(175,345);
glVertex2i(190,345);
glVertex2i(190,365);
glVertex2i(175,365);
glEnd();

 glBegin(GL_QUADS); //5th window (top left)
glColor3f(0.290, 0.662, 0.850);
glVertex2i(175,370);
glVertex2i(190,370);
glVertex2i(190,390);
glVertex2i(175,390);
glEnd();

glLineWidth(1);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(175,370);
glVertex2i(190,370);
glVertex2i(190,390);
glVertex2i(175,390);
glEnd();

 glBegin(GL_QUADS); //6th window (top right)
glColor3f(0.290, 0.662, 0.850);
glVertex2i(205,370);
glVertex2i(220,370);
glVertex2i(220,390);
glVertex2i(205,390);
glEnd();

glLineWidth(1);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(205,370);
glVertex2i(220,370);
glVertex2i(220,390);
glVertex2i(205,390);
glEnd();

glBegin(GL_POLYGON);//4th building
glColor3f(.737, 1.843, 1.817); // Red
glVertex2i(240,320);
glVertex2i(310,320);
glVertex2i(310,410);
glVertex2i(275,425);//middle
glVertex2i(240,410);
glVertex2i(240,390);
glEnd();

glLineWidth(8.0);
glBegin(GL_LINES);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2i(235,410);
glVertex2i(275,425);
glVertex2i(275,425);
glVertex2i(315,410);
glEnd();

 glBegin(GL_QUADS); //1s window
glColor3f(.290, 0.662, 0.850);
glVertex2i(255,330);
glVertex2i(270,330);
glVertex2i(270,350);
glVertex2i(255,350);
glEnd();


glLineWidth(1);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(255,330);
glVertex2i(270,330);
glVertex2i(270,350);
glVertex2i(255,350);
glEnd();

 glBegin(GL_QUADS); //2nd window
glColor3f(0.290, 0.662, 0.850);
glVertex2i(280,330);
glVertex2i(295,330);
glVertex2i(295,350);
glVertex2i(280,350);
glEnd();


glLineWidth(1);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(280,330);
glVertex2i(295,330);
glVertex2i(295,350);
glVertex2i(280,350);
glEnd();

 glBegin(GL_QUADS); //3rd window
glColor3f(0.290, 0.662, 0.850);
glVertex2i(280,355);
glVertex2i(295,355);
glVertex2i(295,375);
glVertex2i(280,375);
glEnd();

glLineWidth(1);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(280,355);
glVertex2i(295,355);
glVertex2i(295,375);
glVertex2i(280,375);
glEnd();

 glBegin(GL_QUADS); //4th window
glColor3f(0.290, 0.662, 0.850);
glVertex2i(255,355);
glVertex2i(270,355);
glVertex2i(270,375);
glVertex2i(255,375);
glEnd();

glLineWidth(1);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(255,355);
glVertex2i(270,355);
glVertex2i(270,375);
glVertex2i(255,375);
glEnd();

 glBegin(GL_QUADS); //5th window (top left)
glColor3f(0.290, 0.662, 0.850);
glVertex2i(255,380);
glVertex2i(270,380);
glVertex2i(270,400);
glVertex2i(255,400);
glEnd();

glLineWidth(1);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(255,380);
glVertex2i(270,380);
glVertex2i(270,400);
glVertex2i(255,400);
glEnd();


 glBegin(GL_QUADS); //6th window (top right)
glColor3f(0.290, 0.662, 0.850);
glVertex2i(280,380);
glVertex2i(295,380);
glVertex2i(295,400);
glVertex2i(280,400);
glEnd();

glLineWidth(1);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(280,380);
glVertex2i(295,380);
glVertex2i(295,400);
glVertex2i(280,400);
glEnd();

glBegin(GL_QUADS); //middle house
glColor3ub(138,43,226);
glVertex2i(300,315);
glVertex2i(300,380);
glVertex2i(380,380);
glVertex2i(380,315);
glEnd();

glLineWidth(5);
glBegin(GL_LINE_LOOP); //middle house
glColor3ub(255,255,255);
glVertex2i(300,315);
glVertex2i(300,380);
glVertex2i(380,380);
glVertex2i(380,315);
glEnd();
glBegin(GL_QUADS); //2 tola
glColor3ub(138,43,226);
glVertex2i(305,380);
glVertex2i(305,430);
glVertex2i(375,430);
glVertex2i(375,380);
glEnd();

glLineWidth(5);
glBegin(GL_LINE_LOOP); //2 tola
glColor3ub(255,255,255);
glVertex2i(305,380);
glVertex2i(305,430);
glVertex2i(375,430);
glVertex2i(375,380);
glEnd();

glBegin(GL_QUADS); //3 tola
glColor3ub(138,43,226);
glVertex2i(310,430);
glVertex2i(310,480);
glVertex2i(370,480);
glVertex2i(370,430);
glEnd();

glBegin(GL_LINE_LOOP); //3 tola
glColor3ub(255,255,255);
glVertex2i(310,430);
glVertex2i(310,480);
glVertex2i(370,480);
glVertex2i(370,430);
glEnd();

glBegin(GL_QUADS); //front door type
glColor3ub(138,43,226);
glVertex2i(320,315);
glVertex2i(320,410);
glVertex2i(360,410);
glVertex2i(360,315);
glEnd();

glBegin(GL_LINE_LOOP); //front door type
glColor3ub(255,255,255);
glVertex2i(320,315);
glVertex2i(320,410);
glVertex2i(360,410);
glVertex2i(360,315);
glEnd();

glLineWidth(3);
glBegin(GL_LINE_LOOP); //front door type
glColor3ub(255,255,255);
glVertex2i(320,315);
glVertex2i(320,340);
glVertex2i(360,340);
glVertex2i(360,315);
glEnd();

glLineWidth(1.5);
glBegin(GL_LINES);
glColor3ub(255,255,255);
glVertex2f(330,315 );
glVertex2f(330,340 );
glEnd();

glLineWidth(1.5);
glBegin(GL_LINES);
glColor3ub(255,255,255);
glVertex2f(340,315 );
glVertex2f(340,340 );
glEnd();

glLineWidth(1.5);
glBegin(GL_LINES);
glColor3ub(255,255,255);
glVertex2f(350,315 );
glVertex2f(350,340 );
glEnd();

glBegin(GL_POLYGON);//6th building
glColor3ub(255, 165, 0);
int x1=155;
int x2=148;
glVertex2i(390,320);
glVertex2i(460,320);
glVertex2i(460,410);
glVertex2i(390,410);
glEnd();

glLineWidth(6.0);
glBegin(GL_LINES);
glColor3ub(255,255,255);
glVertex2i(388,410);
glVertex2i(463,410);
glEnd();

glLineWidth(20.0);
glBegin(GL_LINES);
glColor3ub(222,222,222);
glVertex2i(430,423);
glVertex2i(460,423);
glEnd();
glLineWidth(22.0);
glBegin(GL_LINES);
glColor3ub(222,222,222);
glVertex2i(444,438);
glVertex2i(460,438);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES);
int l=427;
glColor3ub(255,255,255);
glVertex2i(l,380);
glVertex2i(l,400);

glVertex2i(l,330);
glVertex2i(l,350);

glVertex2i(l,355);
glVertex2i(l,375);
glEnd();

 glBegin(GL_QUADS); //1s window
glColor3f(.290, 0.662, 0.850);
glVertex2i(255+x2,330);
glVertex2i(270+x2,330);
glVertex2i(270+x2,350);
glVertex2i(255+x2,350);
glEnd();

 glBegin(GL_QUADS); //2nd window
glColor3f(0.290, 0.662, 0.850);
glVertex2i(280+x1,330);
glVertex2i(295+x1,330);
glVertex2i(295+x1,350);
glVertex2i(280+x1,350);
glEnd();

 glBegin(GL_QUADS); //3rd window
glColor3f(0.290, 0.662, 0.850);
glVertex2i(280+x1,355);
glVertex2i(295+x1,355);
glVertex2i(295+x1,375);
glVertex2i(280+x1,375);
glEnd();

 glBegin(GL_QUADS); //4th window
glColor3f(0.290, 0.662, 0.850);
glVertex2i(255+x2,355);
glVertex2i(270+x2,355);
glVertex2i(270+x2,375);
glVertex2i(255+x2,375);
glEnd();

 glBegin(GL_QUADS); //5th window (top left)
glColor3f(0.290, 0.662, 0.850);
glVertex2i(255+x2,380);
glVertex2i(270+x2,380);
glVertex2i(270+x2,400);
glVertex2i(255+x2,400);
glEnd();

 glBegin(GL_QUADS); //6th window (top right)
glColor3f(0.290, 0.662, 0.850);
glVertex2i(280+x1,380);
glVertex2i(295+x1,380);
glVertex2i(295+x1,400);
glVertex2i(280+x1,400);
glEnd();

glBegin(GL_POLYGON);//8th building
glColor3ub(0, 0 ,139);
glVertex2i(565,460);
glVertex2i(635,460);
glVertex2i(635,310);
glVertex2i(565,310);
glEnd();

glLineWidth(6.0);
glBegin(GL_LINES);
glColor3ub(0 ,191 ,255);
glVertex2i(571,448);
glVertex2i(629,448);

glVertex2i(571,370);
glVertex2i(629,370);
glEnd();

glBegin(GL_QUADS);
glColor3ub(238, 238, 0);
glVertex2i(571,435);
glVertex2i(629,435);
glVertex2i(629,390);
glVertex2i(571,390);
glVertex2i(571,358);
glVertex2i(629,358);
glVertex2i(629,315);
glVertex2i(571,315);
glEnd();

glBegin(GL_QUADS); //1st floor house
glColor3ub(255, 110, 180);
glVertex2i(470,320);
glVertex2i(470,380);
glVertex2i(550,380);
glVertex2i(550,320);
glEnd();

glLineWidth(5);
glBegin(GL_LINE_LOOP); //middle house
glColor3ub(152 ,245, 255);
glVertex2i(470,320);
glVertex2i(470,380);
glVertex2i(550,380);
glVertex2i(550,320);
glEnd();

glBegin(GL_QUADS); //2 tola
glColor3ub(255, 110, 180);
glVertex2i(475,380);
glVertex2i(475,430);
glVertex2i(545,430);
glVertex2i(545,380);
glEnd();

glLineWidth(5);
glBegin(GL_LINE_LOOP); //2 tola
glColor3ub(152 ,245, 255);
glVertex2i(475,380);
glVertex2i(475,430);
glVertex2i(545,430);
glVertex2i(545,380);
glEnd();

glBegin(GL_QUADS); //3 tola
glColor3ub(255, 110, 180);
glVertex2i(480,430);
glVertex2i(480,470);
glVertex2i(540,470);
glVertex2i(540,430);
glEnd();

glBegin(GL_LINE_LOOP); //3 tola
glColor3ub(152 ,245, 255);
glVertex2i(480,430);
glVertex2i(480,470);
glVertex2i(540,470);
glVertex2i(540,430);
glEnd();

glBegin(GL_QUADS); //front door type
glColor3ub(255, 110, 180);
glVertex2i(490,320);
glVertex2i(490,410);
glVertex2i(530,410);
glVertex2i(530,320);
glEnd();

glBegin(GL_LINE_LOOP); //front door type
glColor3ub(152 ,245, 255);
glVertex2i(490,320);
glVertex2i(490,410);
glVertex2i(530,410);
glVertex2i(530,320);
glEnd();

glLineWidth(3);
glBegin(GL_LINE_LOOP); //front door type
glColor3ub(152 ,245, 255);
glVertex2i(490,320);
glVertex2i(490,340);
glVertex2i(530,340);
glVertex2i(530,320);
glEnd();

glLineWidth(1.5);
glBegin(GL_LINES);
glColor3ub(152 ,245, 255);
glVertex2f(500,320 );
glVertex2f(500,340 );
glEnd();

glLineWidth(1.5);
glBegin(GL_LINES);
glColor3ub(152 ,245, 255);
glVertex2f(510,320 );
glVertex2f(510,340 );
glEnd();

glLineWidth(1.5);
glBegin(GL_LINES);
glColor3ub(152 ,245, 255);
glVertex2f(520,320 );
glVertex2f(520,340 );
glEnd();

glBegin(GL_QUADS); //middle house
glColor3ub(0, 255, 255);
glVertex2i(650,315);
glVertex2i(650,380);
glVertex2i(730,380);
glVertex2i(730,315);
glEnd();

glLineWidth(5);
glBegin(GL_LINE_LOOP); //middle house
glColor3ub(255,255,240);
glVertex2i(650,315);
glVertex2i(650,380);
glVertex2i(730,380);
glVertex2i(730,315);
glEnd();

glBegin(GL_QUADS); //2 tola
glColor3ub(0, 255, 255);
glVertex2i(655,380);
glVertex2i(655,430);
glVertex2i(725,430);
glVertex2i(725,380);
glEnd();

glLineWidth(5);
glBegin(GL_LINE_LOOP); //2 tola
glColor3ub(255,255,240);
glVertex2i(655,380);
glVertex2i(655,430);
glVertex2i(725,430);
glVertex2i(725,380);
glEnd();

glBegin(GL_QUADS); //3 tola
glColor3ub(0, 255, 255);
glVertex2i(660,430);
glVertex2i(660,480);
glVertex2i(720,480);
glVertex2i(720,430);
glEnd();

glBegin(GL_LINE_LOOP); //3 tola
glColor3ub(255,255,240);
glVertex2i(660,430);
glVertex2i(660,480);
glVertex2i(720,480);
glVertex2i(720,430);
glEnd();

glBegin(GL_QUADS); //front door type
glColor3ub(138,255,255);
glVertex2i(670,315);
glVertex2i(670,410);
glVertex2i(710,410);
glVertex2i(710,315);
glEnd();

glBegin(GL_LINE_LOOP); //front door line
glColor3ub(255,255,240);
glVertex2i(670,315);
glVertex2i(670,410);
glVertex2i(710,410);
glVertex2i(710,315);
glEnd();
glLineWidth(3);
glBegin(GL_LINE_LOOP); //front door line
glColor3ub(255,255,240);
glVertex2i(670,315);
glVertex2i(670,340);
glVertex2i(710,340);
glVertex2i(710,315);
glEnd();

glLineWidth(1.5);
glBegin(GL_LINES);
glColor3ub(255,255,240);
glVertex2f(680,315 );
glVertex2f(680,340 );
glEnd();

glLineWidth(1.5);
glBegin(GL_LINES);
glColor3ub(255,255,240);
glVertex2f(690,315 );
glVertex2f(690,340 );
glEnd();

glLineWidth(1.5);
glBegin(GL_LINES);
glColor3ub(255,255,240);
glVertex2f(700,315 );
glVertex2f(700,340 );
glEnd();

Tree(150);
Tree(230);
Tree(315);
Tree(400);
}

void Left_tree()
{
glLineWidth(8.0);
glBegin(GL_LINES);
glColor3ub(2550,155,0);
glVertex2i(80,300);
glVertex2i(80,320);
glEnd();

//void tree(){
glBegin(GL_TRIANGLES);
glColor3ub(0,244,0);
glVertex2i(65,320);
glVertex2i(95,320);
glVertex2i(80,340);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(51,152,102);
glVertex2i(66,325);
glVertex2i(94,325);
glVertex2i(80,350);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(0,244,0);
glVertex2i(68,332);
glVertex2i(92,332);
glVertex2i(80,355);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(51,152,102);
glVertex2i(70,337);
glVertex2i(90,337);
glVertex2i(80,360);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,244,0);
glVertex2i(70,343);
glVertex2i(90,343);
glVertex2i(80,365);
glEnd();
//////////////////////////-------TREE(2)---------////////////////----------->>>>>>>>
glLineWidth(8.0);
glBegin(GL_LINES);
glColor3ub(255,155,0);
glVertex2i(160,300);
glVertex2i(160,320);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,244,0);
glVertex2i(145,320);
glVertex2i(175,320);
glVertex2i(160,340);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(51,152,102);
glVertex2i(66+80,325);
glVertex2i(94+80,325);
glVertex2i(80+80,350);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,244,0);
glVertex2i(67+80,330);
glVertex2i(93+80,330);
glVertex2i(80+80,355);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(51,152,102);
glVertex2i(69+80,336);
glVertex2i(91+80,336);
glVertex2i(80+80,360);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,244,0);
glVertex2i(70+80,342);
glVertex2i(90+80,342);
glVertex2i(80+80,365);
glEnd();
//////////////////////////-------TREE(3)---------////////////////----------->>>>>>>>
glLineWidth(8.0);
glBegin(GL_LINES);
glColor3ub(255,155,0);
glVertex2i(240,300);
glVertex2i(240,320);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,244,0);
glVertex2i(145+80,320);
glVertex2i(175+80,320);
glVertex2i(160+80,340);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(51,152,102);
glVertex2i(66+80+80,325);
glVertex2i(94+80+80,325);
glVertex2i(80+80+80,350);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,244,0);
glVertex2i(67+80+80,330);
glVertex2i(93+80+80,330);
glVertex2i(80+80+80,355);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(51,152,102);
glVertex2i(69+80+80,336);
glVertex2i(91+80+80,336);
glVertex2i(80+80+80,360);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,244,0);
glVertex2i(70+80+80,342);
glVertex2i(90+80+80,342);
glVertex2i(80+80+80,365);
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
house();
Left_tree();
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

//MIDNIGHT tomal's part
void midnightship1()
{
glBegin(GL_QUADS);
glColor3ub(252, 50, 8);
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
glColor3ub(238, 238, 0);
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

glColor3ub(238, 238, 0);
DrawCircle(435, 170, 0, 10000);

glColor3ub(238, 238, 0);
DrawCircle(435+25, 170, 0, 10000);

glColor3ub(238, 238, 0);
DrawCircle(435+25+25, 170, 0, 10000);

glColor3ub(238, 238, 0);
DrawCircle(435+25+25+25, 170, 0, 10000);

glColor3ub(238, 238, 0);
DrawCircle(435+25+25+25+25, 170, 0, 10000);

glColor3ub(238, 238, 0);
DrawCircle(447, 192, 5, 1000);

glColor3ub(238, 238, 0);
DrawCircle(447+25, 192, 5, 1000);

glColor3ub(238, 238, 0);
DrawCircle(447+25+25, 192, 5, 1000);

glColor3ub(238, 238, 0);
DrawCircle(447+25+25+25, 192, 5, 1000);
}

    void updatemidnightship1()
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
        midnightship1();
        glPopMatrix();
    }

void midnightship2()
{
glBegin(GL_QUADS); //
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

void updatemidnightship2()
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
        midnightship2();
        glPopMatrix();
    }

void midnightRoad()
{
 glBegin(GL_QUADS); //Road
glColor3ub(64,64,64);
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

void midnightLamp()
{
glBegin(GL_QUADS);    //1st lamp
glColor3f(0.0, 0.0, 0.0);
glVertex2f(90,150 ); // x, y
glVertex2f(90,200);
glVertex2f(95,200); // x, y
glVertex2f(95,150);
glEnd();

glColor3ub(238, 238, 0);
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

glColor3ub(238, 238, 0);
DrawCircle(76, 194, 7, 10000);

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(109,180 );
glVertex2f(109,190 );
glEnd();

glColor3ub(238, 238, 0);
DrawCircle(109, 194, 7, 10000);

glBegin(GL_QUADS);    //2nd lamp
glColor3f(0.0, 0.0, 0.0);
glVertex2f(250,150 ); // x, y
glVertex2f(250,200);
glVertex2f(255,200); // x, y
glVertex2f(255,150);
glEnd();

glColor3ub(238, 238, 0);
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

glColor3ub(238, 238, 0);
DrawCircle(236, 194, 7, 10000);

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(269,180 );
glVertex2f(269,190 );
glEnd();

glColor3ub(238, 238, 0);
DrawCircle(269, 194, 7, 10000);

glBegin(GL_QUADS);    //3rd lamp
glColor3f(0.0, 0.0, 0.0);
glVertex2f(410,150 ); // x, y
glVertex2f(410,200);
glVertex2f(415,200); // x, y
glVertex2f(415,150);
glEnd();

glColor3ub(238, 238, 0);
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

glColor3ub(238, 238, 0);
DrawCircle(396, 194, 7, 10000);

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(429,180 );
glVertex2f(429,190 );
glEnd();

glColor3ub(238, 238, 0);
DrawCircle(429, 194, 7, 10000);

glBegin(GL_QUADS);    //4th lamp
glColor3f(0.0, 0.0, 0.0);
glVertex2f(570,150 ); // x, y
glVertex2f(570,200);
glVertex2f(575,200); // x, y
glVertex2f(575,150);
glEnd();

glColor3ub(238, 238, 0);
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

glColor3ub(238, 238, 0);
DrawCircle(556, 194, 7, 10000);

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(589,180 );
glVertex2f(589,190 );
glEnd();

glColor3ub(238, 238, 0);
DrawCircle(589, 194, 7, 10000);
}

void midnightcar1()
{
glBegin(GL_POLYGON);
glColor3ub(102,0,0);
glVertex2f(40,118);
glVertex2f(40,150 ); // x, y
glVertex2f(160,150);
glVertex2f(160,118);// x, y
glEnd();

glBegin(GL_QUADS); //car
glColor3ub(102,0,0);
glVertex2f(57,150);
glVertex2f(80,175 ); // x, y
glVertex2f(120,175);
glVertex2f(142,150);// x, y
glEnd();

glBegin(GL_QUADS); //glass
glColor3ub(255,255,51);
glVertex2f(65,152);
glVertex2f(80,170 ); // x, y
glVertex2f(98,170);
glVertex2f(98,152);// x, y
glEnd();

glBegin(GL_QUADS); //glass
glColor3ub(255,255,51);
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

  	void updatemidnightcar1()
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
		midnightcar1();
		glPopMatrix();
	}

	void midnightcar2()
    {
    glBegin(GL_POLYGON);            // body
    glColor3f(0,0,51);
    glVertex2f(100,30);
    glVertex2f(200,30);
    glVertex2f(200,50);
    glVertex2f(190,70);
    glVertex2f(150,70);
    glVertex2f(120,50);
    glVertex2f(110,50);
    glVertex2f(100,40);
    glEnd();

    glBegin(GL_POLYGON);            // front glass
    glColor3f(255,255,153);
    glVertex2f(150,67);
    glVertex2f(145,60);
    glVertex2f(130,50);
    glVertex2f(160,50);
    glVertex2f(160,67);
    glEnd();

    glBegin(GL_POLYGON);            // back glass
   glColor3f(255,255,153);
    glVertex2f(165,67);
    glVertex2f(165,50);
    glVertex2f(187,50);
    glVertex2f(187,67);
    glEnd();

    glColor3ub(0,0,0);
    DrawCircle(130, 33, 11, 10000);

    glColor3ub(224,224,224);
    DrawCircle(130, 33, 7, 10000);

    glColor3ub(0,0,0);
    DrawCircle(180, 33, 11, 10000);

    glColor3ub(224,224,224);
    DrawCircle(180, 33, 7, 10000);
   glEnd();
}

		void updatemidnightcar2()
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
		midnightcar2();
		glPopMatrix();
	}

	void midnightbus()
	{
	   glBegin(GL_QUADS); //glass
       glColor3ub(51,0,0);
       glVertex2f(620,20);
       glVertex2f(450,20 ); // x, y
       glVertex2f(450,60);
       glVertex2f(620,60);// x, y
       glEnd();

       	glBegin(GL_POLYGON);
       glColor3ub(51,0,0);
        glVertex2f(620,60);
        glVertex2f(620,100 );
        glVertex2f(470,100);
        glVertex2f(450,60);
	   glEnd();

	   glBegin(GL_POLYGON);            // samner glass
        glColor3ub(255,255,51);
        glVertex2f(470,100);
        glVertex2f(450,60);// x, y
        glVertex2f(470,60);
	   glEnd();

	    glBegin(GL_POLYGON);            // big glass
        glColor3ub(255,255,51);
        glVertex2f(475,90);
        glVertex2f(495,90);// x, y
        glVertex2f(495,45);
        glVertex2f(475,45);
	    glEnd();

        glLineWidth(1);
	    glBegin(GL_LINE_LOOP);            // big glass
        glColor3ub(0,0,0);
        glVertex2f(475,90);
        glVertex2f(495,90);// x, y
        glVertex2f(495,45);
        glVertex2f(475,45);
	    glEnd();

	    glBegin(GL_POLYGON);            // door
        glColor3ub(255,255,255);
        glVertex2f(495,90);// x, y
        glVertex2f(495,40);
        glVertex2f(510,40);
        glVertex2f(510,90);// x, y
	    glEnd();

	     glBegin(GL_POLYGON);            // glass
        glColor3ub(255,255,51);
        glVertex2f(510,90);
        glVertex2f(542,90);// x, y
        glVertex2f(542,60);
        glVertex2f(510,60);// x, y
	    glEnd();

	    glLineWidth(1);
	    glBegin(GL_LINE_LOOP);            // glass
        glColor3ub(0,0,0);
        glVertex2f(510,90);
        glVertex2f(542,90);// x, y
        glVertex2f(542,60);
        glVertex2f(510,60);// x, y
	    glEnd();

	     glBegin(GL_POLYGON);            // glass
       glColor3ub(255,255,51);
        glVertex2f(572,90);
        glVertex2f(542,90);// x, y
        glVertex2f(542,60);
        glVertex2f(572,60);// x, y
	    glEnd();

	    glLineWidth(1);
	    glBegin(GL_LINE_LOOP);            // glass
        glColor3ub(0,0,0);
        glVertex2f(580,90);
        glVertex2f(542,90);// x, y
        glVertex2f(542,60);
        glVertex2f(580,60);// x, y
	    glEnd();

	    glBegin(GL_POLYGON);            // glass
        glColor3ub(255,255,51);
        glVertex2f(572,90);
        glVertex2f(610,90);// x, y
        glVertex2f(610,60);
        glVertex2f(572,60);// x, y
	    glEnd();

	    glLineWidth(1);
	    glBegin(GL_LINE_LOOP);            // glass
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


		void updatemidnightbus()
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
		midnightbus();
		glPopMatrix();
	}
void midnighttrack()
{
        glBegin(GL_POLYGON);            // back part
        glColor3ub(139,69,19);
        glVertex2f(300,95);
        glVertex2f(300,160);// x, y
        glVertex2f(400,160);
        glVertex2f(400,95);// x, y
	    glEnd();

	    glBegin(GL_POLYGON);            // front part
        glColor3ub(186,85,211);
        glVertex2f(400,95);
        glVertex2f(400,150);// x, y
        glVertex2f(430,150);
        glVertex2f(450,120);// x, y
        glVertex2f(450,95);// x, y
	    glEnd();

	     glBegin(GL_POLYGON);            // front part
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

void updatemidnighttrack()
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
		midnighttrack();
		glPopMatrix();
	}

void midnightriver()//River
{
glBegin(GL_QUADS); //River
glColor3ub(0,0,0);
glVertex2f(0,150);
glColor3ub(30,144,255);
glVertex2f(0,298 ); // x, y
glColor3ub(0,0,0);
glVertex2f(700,298);
glColor3ub(30,144,255);
glVertex2f(700,150);// x, y
glEnd();

 glBegin(GL_QUADS);
    glColor3ub(105,105,105);
    glVertex2f(0,285 ); // x, y
    glVertex2f(700,285);
    glVertex2f(700,298); // x, y
    glVertex2f(0,298);
    glEnd();
}

void midnightgrass()
{
    glBegin(GL_QUADS);
    glColor3ub(0,102,0);
    glVertex2f(0,350 ); // x, y
    glColor3ub(0,102,0);
    glVertex2f(700,350);
      glColor3ub(0,102,51);
    glVertex2f(700,295); // x, y
    glColor3ub(0,102,51);
    glVertex2f(0,295);
    glEnd();
}

void midnightsky()
{
 glBegin(GL_QUADS); //sky
 glColor3ub(0,0,0); // Red
glVertex2f(0,500 );
glColor3ub(0,0,0); // Red // x, y
glVertex2f(700,500);
glColor3ub(160,160,160); // Red
glVertex2f(700,350); // x, y
glColor3ub(160,160,160); // Red
glVertex2f(0,350);
glEnd();
}

void star()
{
glPointSize(4.0);
glBegin(GL_POINTS);
glColor3f(190,194,203);
glVertex2f(5,490);
glVertex2f(30,450);
glVertex2f(50,490);
glVertex2f(95,480);
glVertex2f(100,400);
glVertex2f(145,430);
glVertex2f(175,420);
glVertex2f(160,480);
glVertex2f(200,470);
glVertex2f(260,470);
glVertex2f(310,480);
glVertex2f(340,490);
glVertex2f(380,460);
glVertex2f(405,450);
glVertex2f(405,485);
glVertex2f(430,490);
glVertex2f(455,465);
glVertex2f(475,480);
glVertex2f(490,485);
glVertex2f(510,450);
glVertex2f(530,480);
glVertex2f(560,490);
glVertex2f(565,450);
glVertex2f(590,475);
glVertex2f(620,480);
glVertex2f(645,445);
glVertex2f(665,488);
glVertex2f(670,465);
glVertex2f(695,490);
 glEnd();
}

void midnighthouse()
{
glBegin(GL_POLYGON);//1st & 2nd middle building
glColor3ub(25,51,0); // Red
glVertex2i(45,325);
glVertex2i(115,325);
glVertex2i(115,410);
glVertex2i(80,425);//middle
glVertex2i(45,410);
glVertex2i(45,360);
glEnd();

glLineWidth(5.0);
glBegin(GL_LINES);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2i(40,410);
glVertex2i(80,425);
glVertex2i(80,425);
glVertex2i(120,410);
glEnd();

 glBegin(GL_QUADS); //1s window
glColor3ub(160,160,160);
glVertex2i(55,380);
glColor3ub(160,160,160);
glVertex2i(70,380);
glColor3ub(255,255,0);
glVertex2i(70,400);
glColor3ub(255,255,0);
glVertex2i(55,400);
glEnd();

glLineWidth(1);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(55,380);
glVertex2i(70,380);
glVertex2i(70,400);
glVertex2i(55,400);
glEnd();

 glBegin(GL_QUADS); //2nd window
glColor3ub(255,255,0);
glVertex2i(90,380);
glVertex2i(105,380);
glVertex2i(105,400);
glVertex2i(90,400);
glEnd();

glLineWidth(1);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(90,380);
glVertex2i(105,380);
glVertex2i(105,400);
glVertex2i(90,400);
glEnd();

glBegin(GL_POLYGON);//1st building
glColor3ub(51,0,0); // Red
glVertex2i(5,310);
glVertex2i(75,310);
glVertex2i(75,370);
glVertex2i(40,385);//middle
glVertex2i(5,370);
glVertex2i(5,360);
glEnd();

glLineWidth(8.0);
glBegin(GL_LINES);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2i(0,370);
glVertex2i(40,385);
glVertex2i(40,385);
glVertex2i(80,370);
glEnd();

 glBegin(GL_QUADS); //1s window
glColor3ub(255,255,0);
glVertex2i(15,320);
glVertex2i(30,320);
glVertex2i(30,340);
glVertex2i(15,340);
glEnd();

glLineWidth(1);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(160,160,160);
glVertex2i(15,320);
glVertex2i(30,320);
glVertex2i(30,340);
glVertex2i(15,340);
glEnd();

 glBegin(GL_QUADS); //2nd window
glColor3ub(255,255,0);
glVertex2i(45,320);
glVertex2i(60,320);
glVertex2i(60,340);
glVertex2i(45,340);
glEnd();

glLineWidth(1);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(45,320);
glVertex2i(60,320);
glVertex2i(60,340);
glVertex2i(45,340);
glEnd();

 glBegin(GL_QUADS); //3rd window
glColor3ub(255,255,0);
glVertex2i(45,345);
glVertex2i(60,345);
glVertex2i(60,365);
glVertex2i(45,365);
glEnd();

 glBegin(GL_QUADS); //4th window
glColor3ub(255,255,0);
glVertex2i(15,345);
glVertex2i(30,345);
glVertex2i(30,365);
glVertex2i(15,365);
glEnd();

glLineWidth(1);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(15,345);
glVertex2i(30,345);
glVertex2i(30,365);
glVertex2i(15,365);
glEnd();

glBegin(GL_POLYGON);//2nd building
glColor3ub(51,0,51); // Red
glVertex2i(85,308);
glVertex2i(155,308);
glVertex2i(155,385);
glVertex2i(120,400);//middle
glVertex2i(85,385);
glVertex2i(85,360);
glEnd();

glLineWidth(5.0);
glBegin(GL_LINES);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2i(80,385);
glVertex2i(120,400);
glVertex2i(120,400);
glVertex2i(160,385);
glEnd();

 glBegin(GL_QUADS); //1s window
glColor3ub(255,255,0);
glVertex2i(100,320);
glVertex2i(115,320);
glVertex2i(115,340);
glVertex2i(100,340);
glEnd();

glLineWidth(1);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(100,320);
glVertex2i(115,320);
glVertex2i(115,340);
glVertex2i(100,340);
glEnd();

 glBegin(GL_QUADS); //2nd window
glColor3ub(255,255,0);
glVertex2i(130,320);
glVertex2i(145,320);
glVertex2i(145,340);
glVertex2i(130,340);
glEnd();

glLineWidth(1);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(130,320);
glVertex2i(145,320);
glVertex2i(145,340);
glVertex2i(130,340);
glEnd();

 glBegin(GL_QUADS); //3rd window
glColor3ub(255,255,0);
glVertex2i(130,345);
glVertex2i(145,345);
glVertex2i(145,365);
glVertex2i(130,365);
glEnd();

glLineWidth(1);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(130,345);
glVertex2i(145,345);
glVertex2i(145,365);
glVertex2i(130,365);
glEnd();

 glBegin(GL_QUADS); //4th window
glColor3ub(255,255,0);
glVertex2i(100,345);
glVertex2i(115,345);
glVertex2i(115,365);
glVertex2i(100,365);
glEnd();

glLineWidth(1);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(100,345);
glVertex2i(115,345);
glVertex2i(115,365);
glVertex2i(100,365);
glEnd();

glBegin(GL_POLYGON);//3rd building
glColor3ub(51,51,0); // Red
glVertex2i(165,310);
glVertex2i(235,310);
glVertex2i(235,400);
glVertex2i(200,415);//middle
glVertex2i(165,400);
glVertex2i(165,390);
glEnd();

glLineWidth(5.0);
glBegin(GL_LINES);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2i(160,400);
glVertex2i(200,415);
glVertex2i(200,415);
glVertex2i(240,400);
glEnd();

 glBegin(GL_QUADS); //1s window
glColor3ub(255,255,0);
glVertex2i(175,320);
glVertex2i(190,320);
glVertex2i(190,340);
glVertex2i(175,340);
glEnd();

glLineWidth(1);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(175,320);
glVertex2i(190,320);
glVertex2i(190,340);
glVertex2i(175,340);
glEnd();

 glBegin(GL_QUADS); //2nd window
glColor3ub(255,255,0);
glVertex2i(205,320);
glVertex2i(220,320);
glVertex2i(220,340);
glVertex2i(205,340);
glEnd();

glLineWidth(1);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(205,320);
glVertex2i(220,320);
glVertex2i(220,340);
glVertex2i(205,340);
glEnd();

 glBegin(GL_QUADS); //3rd window
glColor3ub(255,255,0);
glVertex2i(205,345);
glVertex2i(220,345);
glVertex2i(220,365);
glVertex2i(205,365);
glEnd();

glLineWidth(1);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(205,345);
glVertex2i(220,345);
glVertex2i(220,365);
glVertex2i(205,365);
glEnd();

 glBegin(GL_QUADS); //4th window
glColor3ub(255,255,0);
glVertex2i(175,345);
glVertex2i(190,345);
glVertex2i(190,365);
glVertex2i(175,365);
glEnd();

glLineWidth(1);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(175,345);
glVertex2i(190,345);
glVertex2i(190,365);
glVertex2i(175,365);
glEnd();

 glBegin(GL_QUADS); //5th window (top left)
glColor3ub(255,255,0);
glVertex2i(175,370);
glVertex2i(190,370);
glVertex2i(190,390);
glVertex2i(175,390);
glEnd();

glLineWidth(1);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(175,370);
glVertex2i(190,370);
glVertex2i(190,390);
glVertex2i(175,390);
glEnd();

 glBegin(GL_QUADS); //6th window (top right)
glColor3ub(255,255,0);
glVertex2i(205,370);
glVertex2i(220,370);
glVertex2i(220,390);
glVertex2i(205,390);
glEnd();

glLineWidth(1);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(205,370);
glVertex2i(220,370);
glVertex2i(220,390);
glVertex2i(205,390);
glEnd();

glBegin(GL_POLYGON);//4th building
glColor3ub(0,25,51); // Red
glVertex2i(240,320);
glVertex2i(310,320);
glVertex2i(310,410);
glVertex2i(275,425);//middle
glVertex2i(240,410);
glVertex2i(240,390);
glEnd();

glLineWidth(5.0);
glBegin(GL_LINES);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2i(235,410);
glVertex2i(275,425);
glVertex2i(275,425);
glVertex2i(315,410);
glEnd();

 glBegin(GL_QUADS); //1s window
glColor3ub(255,255,0);
glVertex2i(255,330);
glVertex2i(270,330);
glVertex2i(270,350);
glVertex2i(255,350);
glEnd();

glLineWidth(1);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(255,330);
glVertex2i(270,330);
glVertex2i(270,350);
glVertex2i(255,350);
glEnd();

 glBegin(GL_QUADS); //2nd window
glColor3ub(255,255,0);
glVertex2i(280,330);
glVertex2i(295,330);
glVertex2i(295,350);
glVertex2i(280,350);
glEnd();

glLineWidth(1);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(280,330);
glVertex2i(295,330);
glVertex2i(295,350);
glVertex2i(280,350);
glEnd();

 glBegin(GL_QUADS); //3rd window
glColor3ub(255,255,0);
glVertex2i(280,355);
glVertex2i(295,355);
glVertex2i(295,375);
glVertex2i(280,375);
glEnd();

glLineWidth(1);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(280,355);
glVertex2i(295,355);
glVertex2i(295,375);
glVertex2i(280,375);
glEnd();

 glBegin(GL_QUADS); //4th window
glColor3ub(255,255,0);
glVertex2i(255,355);
glVertex2i(270,355);
glVertex2i(270,375);
glVertex2i(255,375);
glEnd();

glLineWidth(1);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(255,355);
glVertex2i(270,355);
glVertex2i(270,375);
glVertex2i(255,375);
glEnd();

 glBegin(GL_QUADS); //5th window (top left)
glColor3ub(255,255,0);
glVertex2i(255,380);
glVertex2i(270,380);
glVertex2i(270,400);
glVertex2i(255,400);
glEnd();

glLineWidth(1);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(255,380);
glVertex2i(270,380);
glVertex2i(270,400);
glVertex2i(255,400);
glEnd();

 glBegin(GL_QUADS); //6th window (top right)
glColor3ub(255,255,0);
glVertex2i(280,380);
glVertex2i(295,380);
glVertex2i(295,400);
glVertex2i(280,400);
glEnd();

glLineWidth(1);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(280,380);
glVertex2i(295,380);
glVertex2i(295,400);
glVertex2i(280,400);
glEnd();

glBegin(GL_QUADS); //middle house
glColor3ub(128,128,128);
glVertex2i(300,315);
glColor3ub(255,255,0);
glVertex2i(300,380);
glColor3ub(255,255,0);
glVertex2i(380,380);
glColor3ub(128,128,128);
glVertex2i(380,315);
glEnd();

glLineWidth(5);
glBegin(GL_LINE_LOOP); //middle house
glColor3ub(128,128,128);
glVertex2i(300,315);
glVertex2i(300,380);
glVertex2i(380,380);
glVertex2i(380,315);
glEnd();

glBegin(GL_QUADS); //2 tola
glColor3ub(128,128,128);
glVertex2i(305,380);
glColor3ub(255,255,0);
glVertex2i(305,430);
glColor3ub(255,255,0);
glVertex2i(375,430);
glColor3ub(128,128,128);
glVertex2i(375,380);
glEnd();

glLineWidth(5);
glBegin(GL_LINE_LOOP); //2 tola
glColor3ub(128,128,128);
glVertex2i(305,380);
glVertex2i(305,430);
glVertex2i(375,430);
glVertex2i(375,380);
glEnd();

glBegin(GL_QUADS); //3 tola
glColor3ub(128,128,128);
glVertex2i(310,430);
glColor3ub(255,255,0);
glVertex2i(310,480);
glColor3ub(255,255,0);
glVertex2i(370,480);
glColor3ub(128,128,128);
glVertex2i(370,430);
glEnd();

glBegin(GL_LINE_LOOP); //3 tola
glColor3ub(128,128,128);
glVertex2i(310,430);
glVertex2i(310,480);
glVertex2i(370,480);
glVertex2i(370,430);
glEnd();

glBegin(GL_QUADS); //front door type
glColor3ub(255,255,0);
glVertex2i(320,315);
glVertex2i(320,410);
glVertex2i(360,410);
glVertex2i(360,315);
glEnd();

glBegin(GL_LINE_LOOP); //front door type
glColor3ub(128,128,128);
glVertex2i(320,315);
glVertex2i(320,410);
glVertex2i(360,410);
glVertex2i(360,315);
glEnd();

glLineWidth(3);
glBegin(GL_LINE_LOOP); //front door type
glColor3ub(128,128,128);
glVertex2i(320,315);
glVertex2i(320,340);
glVertex2i(360,340);
glVertex2i(360,315);
glEnd();

glLineWidth(1.5);
glBegin(GL_LINES);
glColor3ub(128,128,128);
glVertex2f(330,315 );
glVertex2f(330,340 );
glEnd();

glLineWidth(1.5);
glBegin(GL_LINES);
glColor3ub(128,128,128);
glVertex2f(340,315 );
glVertex2f(340,340 );
glEnd();

glLineWidth(1.5);
glBegin(GL_LINES);
glColor3ub(128,128,128);
glVertex2f(350,315 );
glVertex2f(350,340 );
glEnd();
//right side 1st bulding
glBegin(GL_POLYGON);//6th building
glColor3ub(102,51, 0);
int x1=155;
int x2=148;
glVertex2i(390,320);
glVertex2i(460,320);
glVertex2i(460,410);
glVertex2i(390,410);
glEnd();
//chaad
glLineWidth(6.0);
glBegin(GL_LINES);
glColor3ub(255,255,255);
glVertex2i(388,410);
glVertex2i(463,410);
glEnd();
//------panir tanki
glLineWidth(10.0);
glBegin(GL_LINES);
glColor3ub(222,222,222);
glVertex2i(430,423);
glVertex2i(460,423);
glEnd();
glLineWidth(10.0);
glBegin(GL_LINES);
glColor3ub(222,222,222);
glVertex2i(444,438);
glVertex2i(460,438);
glEnd();
// mid line in house 6th building
glLineWidth(2.0);
glBegin(GL_LINES);
int l=427;
glColor3ub(255,255,0);
glVertex2i(l,380);
glVertex2i(l,400);

glVertex2i(l,330);
glVertex2i(l,350);

glVertex2i(l,355);
glVertex2i(l,375);
glEnd();

 glBegin(GL_QUADS); //1s window
glColor3ub(255,255,0);
glVertex2i(255+x2,330);
glVertex2i(270+x2,330);
glVertex2i(270+x2,350);
glVertex2i(255+x2,350);
glEnd();

 glBegin(GL_QUADS); //2nd window
glColor3ub(255,255,0);
glVertex2i(280+x1,330);
glVertex2i(295+x1,330);
glVertex2i(295+x1,350);
glVertex2i(280+x1,350);
glEnd();

 glBegin(GL_QUADS); //3rd window
glColor3ub(255,255,0);
glVertex2i(280+x1,355);
glVertex2i(295+x1,355);
glVertex2i(295+x1,375);
glVertex2i(280+x1,375);
glEnd();

 glBegin(GL_QUADS); //4th window
glColor3ub(255,255,0);
glVertex2i(255+x2,355);
glVertex2i(270+x2,355);
glVertex2i(270+x2,375);
glVertex2i(255+x2,375);
glEnd();

 glBegin(GL_QUADS); //5th window (top left)
glColor3ub(255,255,0);
glVertex2i(255+x2,380);
glVertex2i(270+x2,380);
glVertex2i(270+x2,400);
glVertex2i(255+x2,400);
glEnd();

 glBegin(GL_QUADS); //6th window (top right)
glColor3ub(255,255,0);
glVertex2i(280+x1,380);
glVertex2i(295+x1,380);
glVertex2i(295+x1,400);
glVertex2i(280+x1,400);
glEnd();
//8 bulding .....2 tala .. blue one
glBegin(GL_POLYGON);//8th building
glColor3ub(0, 0 ,51);
glVertex2i(565,460);
glVertex2i(635,460);
glVertex2i(635,310);
glVertex2i(565,310);
glEnd();
// top to bottom 1st 1ine sky blue
glLineWidth(6.0);
glBegin(GL_LINES);
glColor3ub(0 ,191 ,255);
glVertex2i(571,448);
glVertex2i(629,448);
glVertex2i(571,370);
glVertex2i(629,370);
glEnd();
// top to bottom 2nd box yallow
glBegin(GL_QUADS);
glColor3ub(238, 238, 0);
glVertex2i(571,435);
glColor3ub(238, 238, 0);
glVertex2i(629,435);
glColor3ub(160, 160, 160);
glVertex2i(629,390);
glColor3ub(160, 160, 160);
glVertex2i(571,390);
glEnd();
// top to bottom 4th box yallow
glBegin(GL_QUADS);
glColor3ub(238, 238, 0);
glVertex2i(571,358);
glColor3ub(238, 238, 0);
glVertex2i(629,358);
glColor3ub(160, 160, 160);
glVertex2i(629,315);
glColor3ub(160, 160, 160);
glVertex2i(571,315);
glEnd();
//7 nth right middle 3 tala house
glBegin(GL_QUADS); //1st floor house
glColor3ub(160,160, 160);
glVertex2i(470,320);
glColor3ub(255,0,0);
glVertex2i(470,380);
glColor3ub(255,0,0);
glVertex2i(550,380);
glColor3ub(160,160, 160);
glVertex2i(550,320);
glEnd();

glLineWidth(5);
glBegin(GL_LINE_LOOP); //middle house
glColor3ub(160,160, 160);
glVertex2i(470,320);
glVertex2i(470,380);
glVertex2i(550,380);
glVertex2i(550,320);
glEnd();

glBegin(GL_QUADS); //2 tola
glColor3ub(160,160, 160);
glVertex2i(475,380);
glColor3ub(255,0,0);
glVertex2i(475,430);
glColor3ub(255,0,0);
glVertex2i(545,430);
glColor3ub(160,160, 160);
glVertex2i(545,380);
glEnd();

glLineWidth(5);
glBegin(GL_LINE_LOOP); //2 tola
glColor3ub(160,160, 160);
glVertex2i(475,380);
glVertex2i(475,430);
glVertex2i(545,430);
glVertex2i(545,380);
glEnd();

glBegin(GL_QUADS); //3 tola
glColor3ub(160,160, 160);
glVertex2i(480,430);
glColor3ub(255,0,0);
glVertex2i(480,470);
glColor3ub(255,0,0);
glVertex2i(540,470);
glColor3ub(160,160, 160);
glVertex2i(540,430);
glEnd();

glBegin(GL_LINE_LOOP); //3 tola
glColor3ub(160,160, 160);
glVertex2i(480,430);
glVertex2i(480,470);
glVertex2i(540,470);
glVertex2i(540,430);
glEnd();

glBegin(GL_QUADS); //front door type
glColor3ub(255, 0, 0);
glVertex2i(490,320);
glVertex2i(490,410);
glVertex2i(530,410);
glVertex2i(530,320);
glEnd();

glBegin(GL_LINE_LOOP); //front door type
glColor3ub(160,160, 160);
glVertex2i(490,320);
glVertex2i(490,410);
glVertex2i(530,410);
glVertex2i(530,320);
glEnd();

glLineWidth(3);
glBegin(GL_LINE_LOOP); //front door type
glColor3ub(160,160, 160);
glVertex2i(490,320);
glVertex2i(490,340);
glVertex2i(530,340);
glVertex2i(530,320);
glEnd();

glLineWidth(1.5);
glBegin(GL_LINES);
glColor3ub(160,160, 160);
glVertex2f(500,320 );
glVertex2f(500,340 );
glEnd();

glLineWidth(1.5);
glBegin(GL_LINES);
glColor3ub(160,160, 160);
glVertex2f(510,320 );
glVertex2f(510,340 );
glEnd();

glLineWidth(1.5);
glBegin(GL_LINES);
glColor3ub(160,160, 160);
glVertex2f(520,320 );
glVertex2f(520,340 );
glEnd();
//right last 3 tala house
glBegin(GL_QUADS); //middle house
glColor3ub(0, 255, 255);
glVertex2i(650,315);
glVertex2i(650,380);
glVertex2i(730,380);
glVertex2i(730,315);
glEnd();

glLineWidth(5);
glBegin(GL_LINE_LOOP); //middle house
glColor3ub(160,160, 160);
glVertex2i(650,315);
glVertex2i(650,380);
glVertex2i(730,380);
glVertex2i(730,315);
glEnd();

glBegin(GL_QUADS); //2 tola
glColor3ub(0, 255, 255);
glVertex2i(655,380);
glVertex2i(655,430);
glVertex2i(725,430);
glVertex2i(725,380);
glEnd();

glLineWidth(5);
glBegin(GL_LINE_LOOP); //2 tola
glColor3ub(160,160, 160);
glVertex2i(655,380);
glVertex2i(655,430);
glVertex2i(725,430);
glVertex2i(725,380);
glEnd();

glBegin(GL_QUADS); //3 tola
glColor3ub(0, 255, 255);
glVertex2i(660,430);
glVertex2i(660,480);
glVertex2i(720,480);
glVertex2i(720,430);
glEnd();

glBegin(GL_LINE_LOOP); //3 tola
glColor3ub(160,160, 160);
glVertex2i(660,430);
glVertex2i(660,480);
glVertex2i(720,480);
glVertex2i(720,430);
glEnd();

glBegin(GL_QUADS); //front door type
glColor3ub(138,255,255);
glVertex2i(670,315);
glVertex2i(670,410);
glVertex2i(710,410);
glVertex2i(710,315);
glEnd();

glBegin(GL_LINE_LOOP); //front door line
glColor3ub(160,160, 160);
glVertex2i(670,315);
glVertex2i(670,410);
glVertex2i(710,410);
glVertex2i(710,315);
glEnd();

glLineWidth(3);
glBegin(GL_LINE_LOOP); //front door line
glColor3ub(160,160, 160);
glVertex2i(670,315);
glVertex2i(670,340);
glVertex2i(710,340);
glVertex2i(710,315);
glEnd();

glLineWidth(1.5);
glBegin(GL_LINES);
glColor3ub(160,160, 160);
glVertex2f(680,315 );
glVertex2f(680,340 );
glEnd();

glLineWidth(1.5);
glBegin(GL_LINES);
glColor3ub(160,160, 160);
glVertex2f(690,315 );
glVertex2f(690,340 );
glEnd();

glLineWidth(1.5);
glBegin(GL_LINES);
glColor3ub(160,160, 160);
glVertex2f(700,315 );
glVertex2f(700,340 );
glEnd();
//tree control ....by same x -axis
Tree(150);
Tree(230);
Tree(315);
Tree(400);
}

void moon()
{
    glColor3ub(254, 252, 215);
    DrawCircle(100,380, 20, 10000);
}

void updatemoon()
{
        if (moonStatus == 1)
        {
            if (moonY>=80)
        {
            moonY=80;
        }
        else moonY+=0.5;
        }
        glPushMatrix();
        glTranslatef(moonX, moonY, 0);
        moon();
        glPopMatrix();
    }

void midnightdisplay() {
glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer with current clearing color
glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

midnightgrass();
midnightsky();
star();
updatemoon();
midnighthouse();
Left_tree();
midnightRoad();
midnightriver();
updatemidnightship1();
updatemidnightship2();
midnightLamp();
updatemidnightcar1();
updatemidnightcar2();
updatemidnighttrack();
updatemidnightbus();

glFlush(); // Render now
glutPostRedisplay();
glutSwapBuffers();
}

void handleKeypress(unsigned char key, int x, int y)
{
switch (key) {
case 'a':
    carStatus1=0;
    glutPostRedisplay();

    break;
case 'b':
    carStatus1=1;

    glutPostRedisplay();
    break;

case 'c':
    busStatus1=0;
    glutPostRedisplay();

    break;
case 'd':
    busStatus1=1;

    glutPostRedisplay();
    break;

case 'e':
    ship1Status=0;
    glutPostRedisplay();
    break;

case 'f':
    ship1Status=1;
    glutPostRedisplay();
    break;

case 'g':
    ship2Status=0;
    glutPostRedisplay();
    break;

case 'h':
    ship2Status=1;
    glutPostRedisplay();
    break;

case 'i':
    car2Status=0;
    glutPostRedisplay();
    break;

case 'j':
    car2Status=1;
    glutPostRedisplay();
    break;
case 'k':
    cloud1Status=0;
    glutPostRedisplay();
    break;

case 'l':
    cloud1Status=1;
    glutPostRedisplay();
    break;

case 'm':
    cloud2Status=0;
    glutPostRedisplay();
    break;

case 'n':
    cloud2Status=1;
    glutPostRedisplay();
    break;

case 'o':
    cloud3Status=0;
    glutPostRedisplay();
    break;

case 'p':
    cloud3Status=1;
    glutPostRedisplay();
    break;

case 'q':
    planStatus=0;
    glutPostRedisplay();
    break;

case 'r':
    planStatus=1;
    glutPostRedisplay();
    break;

case 's':
    trackStatus=0;
    glutPostRedisplay();
    break;

case 't':
    trackStatus=1;
    glutPostRedisplay();
    break;

case '1':
    glutDisplayFunc(midnightdisplay);
    glutPostRedisplay();
    break;
case '3':
    glutDisplayFunc(display);
    glutPostRedisplay();
    break;
    }
    glutPostRedisplay();
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
glutInitWindowSize(1200,680);
glutCreateWindow("BESTO SHOHOR");
glutDisplayFunc(display);
position();
glutKeyboardFunc(handleKeypress);

glutMainLoop();
}
