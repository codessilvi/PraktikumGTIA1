// Nama : Silvani Salsabilla
// NIM  : 24060124130066
// Lab  : A1/GTI
#include <gl/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUAD_STRIP);
        glColor3f(0.7f, 0.7f, 0.7f); // Abu-abu Terang
        glVertex2f(-0.8, 0.2); glVertex2f(-0.8, -0.2);
        glVertex2f(-0.4, 0.2); glVertex2f(-0.4, -0.2);
        
        glColor3f(0.5f, 0.5f, 0.5f); // Abu-abu Sedang
        glVertex2f(-0.4, 0.4); glVertex2f(-0.4, 0.0);
        glVertex2f(0.0, 0.4);  glVertex2f(0.0, 0.0);
        
        glColor3f(0.3f, 0.3f, 0.3f); // Abu-abu Gelap
        glVertex2f(0.0, 0.6);  glVertex2f(0.0, 0.2);
        glVertex2f(0.4, 0.6);  glVertex2f(0.4, 0.2);
    glEnd();
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutCreateWindow("Tugas 6 - GL_QUAD_STRIP");
    glutDisplayFunc(display);
    glClearColor(0.0f, 0.1f, 0.3f, 1.0f);
    glutMainLoop();
    return 0;
}
