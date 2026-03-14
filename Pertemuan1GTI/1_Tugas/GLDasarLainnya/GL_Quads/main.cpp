// Nama: Silvani Salsabilla
// NIM : 24060124130066
// Lab : A1/GTI

#include <gl/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);
        glColor3f(0.0f, 1.0f, 0.8f); // Tosca
        glVertex2f(0.0, 0.6);  // Atas
        glVertex2f(0.4, 0.0);  // Kanan
        glVertex2f(0.0, -0.6); // Bawah
        glVertex2f(-0.4, 0.0); // Kiri
    glEnd();
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutCreateWindow("Tugas 5 - GL_QUADS");
    glutDisplayFunc(display);
    glClearColor(0.0f, 0.1f, 0.3f, 1.0f);
    glutMainLoop();
    return 0;
}
