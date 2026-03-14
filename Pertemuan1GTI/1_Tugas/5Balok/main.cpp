// Nama : Silvani Salsabilla
// NIM  : 24060124130066
// Lab  : A1/GTI
#include <gl/glut.h>

void Snake(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    // ===== LANGIT =====
    glBegin(GL_QUADS);
        glColor3f(0.5f, 0.8f, 1.0f); 
        glVertex2f(-1.0, 1.0); glVertex2f(1.0, 1.0);
        glColor3f(0.8f, 0.95f, 1.0f); 
        glVertex2f(1.0, -1.0); glVertex2f(-1.0, -1.0);
    glEnd();

    // ===== AWAN =====
    glColor3f(1.0f, 1.0f, 1.0f);
    glRectf(-0.8, 0.6, -0.5, 0.8); 
    glRectf(0.4, 0.7, 0.7, 0.9);   


    // ===== BADAN ULAR =====
    glColor3f(0.0f, 0.5f, 0.0f); glRectf(-0.6, -0.5, -0.4, -0.3);
    glColor3f(0.0f, 0.6f, 0.0f); glRectf(-0.4, -0.5, -0.2, -0.3);
    glColor3f(0.0f, 0.7f, 0.0f); glRectf(-0.2, -0.5, 0.0, -0.3);
    
    glColor3f(0.0f, 0.75f, 0.0f); glRectf(-0.2, -0.3, 0.0, -0.1);
    glColor3f(0.0f, 0.8f, 0.0f);  glRectf(-0.2, -0.1, 0.0, 0.1);
    
    glColor3f(0.0f, 0.85f, 0.0f); glRectf(-0.2, 0.1, 0.0, 0.3);
    glColor3f(0.0f, 0.9f, 0.0f);  glRectf(0.0, 0.1, 0.2, 0.3);
    glColor3f(0.0f, 0.95f, 0.0f); glRectf(0.2, 0.1, 0.4, 0.3);

    // ===== KEPALA =====
    glColor3f(0.5f, 1.0f, 0.3f); 
    glRectf(0.4, 0.1, 0.6, 0.3);

    // ===== MATA =====
    glColor3f(0.0f, 0.0f, 0.0f);
    glRectf(0.42, 0.22, 0.46, 0.28);
    glRectf(0.54, 0.22, 0.58, 0.28);

    // ===== APEL =====
    glColor3f(1.0f, 0.0f, 0.0f);
    glRectf(0.7, 0.1, 0.9, 0.3);
    glColor3f(0.4f, 0.2f, 0.0f);
    glRectf(0.79, 0.3, 0.81, 0.4);

    glFlush();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640, 640);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Snake World - Silvani");
    glutDisplayFunc(Snake);
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); 
    glutMainLoop();
}
