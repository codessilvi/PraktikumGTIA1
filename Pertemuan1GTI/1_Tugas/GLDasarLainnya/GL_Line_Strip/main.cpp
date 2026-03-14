// Nama: Silvani Salsabilla
// NIM : 24060124130066
// Lab : A1/GTI
#include <gl/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(3.0f);
    glBegin(GL_LINE_STRIP);
        glColor3f(1.0f, 1.0f, 1.0f); // Putih
        glVertex2f(-0.8, -0.8);
        glVertex2f(-0.8, -0.4);
        glVertex2f(-0.4, -0.4);
        glVertex2f(-0.4, 0.0);
        glVertex2f(0.0, 0.0);
        glVertex2f(0.0, 0.4);
        glVertex2f(0.4, 0.4);
        glVertex2f(0.4, 0.8);
    glEnd();
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutCreateWindow("Tugas 1 - GL_LINE_STRIP");
    glutDisplayFunc(display);
    glClearColor(0.0f, 0.1f, 0.3f, 1.0f); // Background Biru Tua
    glutMainLoop();
    return 0;
}
