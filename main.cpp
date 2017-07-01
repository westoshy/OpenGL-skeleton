#include <iostream>
#include <GLUT/GLUT.h>
#include <OpenGL/OpenGL.h>

void display(void)
{
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutCreateWindow(argv[0]);
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}