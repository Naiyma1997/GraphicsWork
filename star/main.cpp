#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT); // clear the display
glBegin(GL_POLYGON);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2i(225,195);
glVertex2i(125,20);
glVertex2i(295,140);
glVertex2i(470,20);
glVertex2i(370,195);
glVertex2i(545,295);
glVertex2i(345,295);
glVertex2i(295,470);
glVertex2i(245,295);
glVertex2i(45,295);
glEnd();
glFlush ();
}
void myInit (void)
{
glClearColor(1.0, 1.0, 1.0, 0.0); // Background color
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB); // setting the display mode
glutInitWindowSize (640, 480);
glutInitWindowPosition (100, 150);
glutCreateWindow ("Star");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
