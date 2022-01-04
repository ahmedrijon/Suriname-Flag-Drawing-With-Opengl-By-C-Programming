#include<windows.h>
#include<GL/glut.h>
void Draw()
{
glClear(GL_COLOR_BUFFER_BIT);
glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
glBegin(GL_QUADS);
glVertex2d(15.0,10.0);
glVertex2d(15.0,-10.0);
glVertex2d(-15.0,-10.0);
glVertex2d(-15.0,10.0);
glEnd();
glFlush();

glColor3f(0.0f, 1.0f, 0.0f);
glBegin(GL_QUADS);
glVertex2d(15.0,10.0);
glVertex2d(15.0,6.0);
glVertex2d(-15.0,6.0);
glVertex2d(-15.0,10.0);
glEnd();
glFlush();

//red color
glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
glBegin(GL_QUADS);
glVertex2f(15.0,6.0);
glVertex2f(15.0,4.0);
glVertex2f(-15.0,4.0);
glVertex2f(-15.0,6.0);
glEnd();
glFlush();

glColor4f(1.0f, 0.0f, 0.0f, 0.0f);
glBegin(GL_QUADS);
glVertex2f(15.0,4.0);
glVertex2f(15.0,-4.0);
glVertex2f(-15.0,-4.0);
glVertex2f(-15.0,4.0);
glEnd();
glFlush();


glColor3f(0.0f, 1.0f, 0.0f);
glBegin(GL_QUADS);
glVertex2d(-15.0,-10.0);
glVertex2d(-15.0,-6.0);
glVertex2d(15.0,-6.0);
glVertex2d(15.0,-10.0);
glEnd();
glFlush();
//1st triangle
glColor4f(1.0f, 1.0f, 0.0f, 0.0f);
glBegin(GL_TRIANGLES);
glVertex3f(-3.0,-2.0, 0);
glVertex3f(-3.0,0.0, 0);
glVertex3f(-7.0,0.0, 0);
glEnd();
glFlush();
//2nd triangle
glColor4f(1.0f, 1.0f, 0.0f, 0.0f);
glBegin(GL_TRIANGLES);
glVertex3f(-3.0,-2.0, 0);
glVertex3f(-7.0,-4.0, 0);
glVertex3f(0.0,-2.0, 0);
glEnd();
glFlush();
//3rd
glColor4f(1.0f, 1.0f, 0.0f, 0.0f);
glBegin(GL_TRIANGLES);
glVertex3f(0.0,-2.0, 0);
glVertex3f(7.0,-4.0, 0);
glVertex3f(3.0,-2.0, 0);
glEnd();
glFlush();
//4th triangle
glColor4f(1.0f, 1.0f, 0.0f, 0.0f);
glBegin(GL_TRIANGLES);
glVertex3f(3.0,0.0, 0);
glVertex3f(7.0,0.0, 0);
glVertex3f(3.0,-2.0, 0);
glEnd();
glFlush();
//5th triangle
glColor4f(1.0f, 1.0f, 0.0f, 0.0f);
glBegin(GL_TRIANGLES);
glVertex3f(2.0,0.0, 0);
glVertex3f(0.0,4.0, 0);
glVertex3f(-2.0,0.0, 0);
glEnd();
glFlush();
//1 quad
glColor4f(1.0f, 1.0f, 0.0f, 0.0f);
glBegin(GL_QUADS);
glVertex2d(-3.0,0.0);
glVertex2d(3.0,0.0);
glVertex2d(3.0,-2.0);
glVertex2d(-3.0,-2.0);
glEnd();
glFlush();
}


void Initialize()
{
glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(-25.0, 25.0, -25.0, 25.0, -25.0, 25.0);
}
int main(int Argc, char** Argv)
{
glutInit(&Argc, Argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(500,500);
glutInitWindowPosition(300,300);
glutCreateWindow("Suriname");
Initialize();
glutDisplayFunc(Draw);
glutMainLoop();
return 0;
}
