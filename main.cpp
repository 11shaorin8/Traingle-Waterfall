#include<windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1416

int i;
static float	bm	=  5;
static float	sbm	=  5;
static float	pm	=  0;
static float	cm	=  0;


void init(void)
{
	glClearColor (1, 1, 1, 0);
	glOrtho(0, 1000.0, 0, 1000.0,0.0,100.0);
}

void delay(){
    for(int i=0;i<1000000;i++);
}

void circle(GLdouble rad, GLdouble x, GLdouble y)

{
    GLint points = 360;
    GLdouble delTheta = (2.0 * PI) / (GLdouble)points;
    GLdouble theta = 0.0;

    glBegin(GL_TRIANGLE_FAN);
    {
        for( i = 0; i <=360; i++, theta += delTheta )
        {
            glVertex2f(x+rad * cos(theta),y+rad * sin(theta));
        }
    }
    glEnd();
}

void fishMove(){
bm=bm+.2;
    if(bm>+80)
        bm = -100;
        glutPostRedisplay();
}
void fish()
{
     glColor4f(1.0f, 0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
  glVertex2f(400,240);
  glVertex2f(380,260);
  glVertex2f(340,260);
  glVertex2f(320,240);
  glVertex2f(340,220);
  glVertex2f(380,220);
  glEnd();             //fish1

  glBegin(GL_TRIANGLES);
  glVertex2f(325,240);
  glVertex2f(300,220);
  glVertex2f(300,260);
  glEnd();

    glColor4f(1.0f, 1.0f, 0.2f, 0.0f);
glBegin(GL_POLYGON);
  glVertex2f(600,280);
  glVertex2f(580,300);
  glVertex2f(540,300);
  glVertex2f(520,280);
  glVertex2f(540,260);
  glVertex2f(580,260);
  glEnd();             //fish2
  glBegin(GL_TRIANGLES);
  glVertex2f(525,280);
  glVertex2f(500,300);
  glVertex2f(500,260);
  glEnd();

  glColor4f(0.0f, 0.0f, 0.0f, 0.0f);
   circle(3,390,240);
                                     //fish 1
   glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
   circle(8,410,260);
   circle(5,410,280);
   circle(3,410,300);

   glColor4f(0.0f, 0.0f, 0.0f, 0.0f);
   circle(3,590,280);

   glColor4f(1.0f, 1.0f, 1.0f, 0.0f);//fish2
   circle(8,610,300);
   circle(5,610,320);
   circle(3,610,340);

}

void triangle()
{
    glColor4f(0.0f,0.5f,1.0f,0.0f);
  glBegin(GL_TRIANGLES);
  glVertex2f(0,400);
  glVertex2f(800,400);//lower triangle;
    glVertex2f(400,0);
  glEnd();


  glColor4f(0.1f,0.9f,1.0f,0.0f);
  glBegin(GL_TRIANGLES);
  glVertex2f(100,540);
  glVertex2f(1000,540);//upper triangle;
  glVertex2f(550,1000);
  glEnd();

  glColor4f(0.0f,0.5f,1.0f,0.0f);
  glBegin(GL_TRIANGLES);
  glVertex2f(640,400);
  glVertex2f(620,430);
  glVertex2f(620,400);
  glEnd();
glColor4f(0.0f,0.5f,1.0f,0.0f);
  glBegin(GL_TRIANGLES);
  glVertex2f(620,400);
  glVertex2f(600,410);
  glVertex2f(600,400);
  glEnd();

 glColor4f(0.0f,0.5f,1.0f,0.0f);
  glBegin(GL_TRIANGLES);
  glVertex2f(720,400);
  glVertex2f(740,420);
  glVertex2f(740,400);
  glEnd();


}

void sun()
{

   glColor4f(1.0f, 1.0f, 0.0f, 0.0f);
   circle(50,690,860);

}

void cloud()
{

   glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
   circle(30,460,840);
   circle(30,500,840);
   circle(30,540,840);

   glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
   circle(30,640,800);
   circle(30,675,800);
   circle(30,600,800);
}

void hill()
{

  glColor4f(0.0f, 0.4f, 0.0f, 0.0f);
  glBegin(GL_TRIANGLES);
  glVertex2f(100,540);
  glVertex2f(210,645);
    glVertex2f(320,540);
  glEnd();

 glColor4f(0.0f, 0.4f, 0.0f, 0.0f);
  glBegin(GL_TRIANGLES);
  glVertex2f(240,540);
  glVertex2f(360,700);
    glVertex2f(560,540);
  glEnd();

  glColor4f(0.0f, 0.4f, 0.0f, 0.0f);
  glBegin(GL_TRIANGLES);
  glVertex2f(480,540);
  glVertex2f(640,720);
    glVertex2f(800,540);
  glEnd();

  glColor4f(0.0f, 0.4f, 0.0f, 0.0f);
  glBegin(GL_TRIANGLES);
  glVertex2f(660,540);
  glVertex2f(800,680);
    glVertex2f(940,540);
  glEnd();

  glColor4f(0.0f, 0.4f, 0.0f, 0.0f);
  glBegin(GL_TRIANGLES);
  glVertex2f(800,540);
  glVertex2f(880,660);
    glVertex2f(1000,540);
  glEnd();

  glColor4f(0.0f, 0.4f, 0.0f, 0.0f);
  glBegin(GL_TRIANGLES);
  glVertex2f(400,540);
  glVertex2f(500,700);
    glVertex2f(680,540);
  glEnd();
}

void waterfall()
{

   glColor4f(0.0f, 0.5f, 1.0f, 0.0f);
  glBegin(GL_POLYGON);
  glVertex2f(720,630);
  glVertex2f(640,400);
  glVertex2f(720,400);
  glVertex2f(760,640);
  glVertex2f(740,620);
  glEnd();

}

void bubbleMove(){
        cm=cm-.7;
        if(cm<40)
        cm = 90;
        glutPostRedisplay();
}

void bubble()
{
    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
   circle(7,400,45);
    circle(5,400,65);
     circle(3,400,85);

     circle(7,450,65);
    circle(5,450,85);
     circle(3,450,105);

     circle(7,360,85);
    circle(5,360,110);
     circle(3,360,130);
}

void rock()
{
    glColor4f(0.3f, 0.4f, 0.5f, 0.0f);
    circle(10,400,20);
    circle(10,410,30);
    glColor4f(0.3f, 0.5f, 0.3f, 0.0f);
     circle(10,390,30);
}


void birdMove(){
    sbm=sbm+.3;
    if(sbm>+240)
        sbm =-70;
        glutPostRedisplay();

}
void bird()
{

   glColor4f(0.4f, 1.0f, 0.0f, 0.0f);
  glBegin(GL_POLYGON);
  glVertex2f(480,760);
  glVertex2f(460,780);
  glVertex2f(420,780);  //body;
  glVertex2f(400,760);
  glVertex2f(420,740);
  glVertex2f(460,740);
  glEnd();


  glBegin(GL_TRIANGLES);
  glVertex2f(410,760);
  glVertex2f(380,760);  //tail;
    glVertex2f(400,780);
  glEnd();


  glBegin(GL_TRIANGLES);
  glVertex2f(440,760);  //wing;
  glVertex2f(460,800);
  glVertex2f(420,800);
  glEnd();

  glColor4f(0.0f, 0.0f, 0.0f, 0.0f);
   circle(3,470,760);
}


void shipMove(){
pm=pm-.30;
    if(pm<-25)
        pm = 430;
        glutPostRedisplay();
    }

void ship()
{
    glColor4f(0.0f, 0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
  glVertex2f(60,400);
  glVertex2f(180,400);//base;
  glVertex2f(220,440);
  glVertex2f(20,440);
  glEnd();


   glColor4f(1.0f, 0.6f, 0.1f, 0.0f);
glBegin(GL_POLYGON);
  glVertex2f(60,440);
  glVertex2f(180,440);//box;
  glVertex2f(180,480);
  glVertex2f(60,480);
  glEnd();


   glColor4f(0.0f, 0.0f, 0.0f, 0.0f);
  glBegin(GL_POLYGON);
  glVertex2f(160,480);
  glVertex2f(180,480);//strike;
  glVertex2f(180,520);
  glVertex2f(160,520);
  glEnd();

  glColor4f(0.0f, 0.0f, 0.0f, 0.0f);
  glBegin(GL_POLYGON);
  glVertex2f(90,440);
  glVertex2f(110,440);//window1;
  glVertex2f(110,460);
  glVertex2f(90,460);
  glEnd();

  glColor4f(0.0f, 0.0f, 0.0f, 0.0f);
  glBegin(GL_POLYGON);
  glVertex2f(120,440);
  glVertex2f(140,440);//window2;
  glVertex2f(140,460);
  glVertex2f(120,460);
  glEnd();

  glColor4f(0.0f, 0.0f, 0.0f, 0.0f);
  glBegin(GL_POLYGON);
  glVertex2f(100,480);
  glVertex2f(140,480);//window;
  glVertex2f(140,500);
  glVertex2f(100,500);
  glEnd();

  glColor4f(0.0f, 0.5f, 1.0f, 0.0f);
   circle(20,60,390);
   circle(20,85,390);
   circle(20,110,390);
   circle(20,135,390);
   circle(20,170,390);
   circle(20,195,390);

}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);
    delay();
    triangle();
    hill();
    waterfall();
    sun();
    cloud();
    rock();

        fishMove();
    for(int i=0;i<1;i++)
     {
     glPushMatrix();
     glTranslatef(bm+(8*i),0-i,0);
     fish();
     glPopMatrix();
    }

    shipMove();
    for(int i=0;i<1;i++)
     {

     glPushMatrix();
     glTranslatef(pm+(64*i),0-i,0);
     ship();
     glPopMatrix();

    }

    birdMove();
    for(int i=0;i<1;i++){
     glPushMatrix();
     glTranslatef(sbm+(8*i),0-i,0);
     bird();
     glPopMatrix();
    }

    bubbleMove();
    for(int i=0;i<1;i++)
     {

     glPushMatrix();
     glTranslatef(0,cm+(8*i),0);
     bubble();
     glPopMatrix();

    }
	glFlush();
}


int main()
{
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (900, 700);
	glutInitWindowPosition (0, 0);
	glutCreateWindow ("Triangle Waterfall");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}

