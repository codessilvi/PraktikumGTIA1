// Nama: Silvani Salsabilla
// NIM : 24060124130066
// Lab : A1/GTI

#include <gl/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(2.0f);
    glBegin(GL_LINE_LOOP);
        glColor3f(1.0f, 1.0f, 0.0f); // Kuning
        glVertex2f(0.0, 0.5);
        glVertex2f(0.2, -0.4);
        glVertex2f(-0.5, 0.1);
        glVertex2f(0.5, 0.1);
        glVertex2f(-0.2, -0.4);
    glEnd();
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutCreateWindow("Tugas 2 - GL_LINE_LOOP");
    glutDisplayFunc(display);
    glClearColor(0.0f, 0.1f, 0.3f, 1.0f);
    glutMainLoop();
    return 0;
}
