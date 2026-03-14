// Nama: Silvani Salsabilla
// NIM : 24060124130066
// Lab : A1/GTI

#include <gl/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_TRIANGLE_FAN);
        glColor3f(1.0f, 1.0f, 1.0f); // Pusat Putih
        glVertex2f(0.0, 0.0); 
        glColor3f(1.0f, 0.0f, 0.0f); glVertex2f(0.5, 0.0);
        glColor3f(0.0f, 1.0f, 0.0f); glVertex2f(0.4, 0.3);
        glColor3f(0.0f, 0.0f, 1.0f); glVertex2f(0.0, 0.5);
        glColor3f(1.0f, 0.0f, 1.0f); glVertex2f(-0.4, 0.3);
        glColor3f(0.0f, 1.0f, 1.0f); glVertex2f(-0.5, 0.0);
    glEnd();
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutCreateWindow("Tugas 3 - GL_TRIANGLE_FAN");
    glutDisplayFunc(display);
    glClearColor(0.0f, 0.1f, 0.3f, 1.0f);
    glutMainLoop();
    return 0;
}
