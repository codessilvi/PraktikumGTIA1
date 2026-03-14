#include <gl/glut.h>

void displayStrip(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(3.0f);
    glBegin(GL_LINE_STRIP);
        glColor3f(1.0f, 1.0f, 1.0f); // Putih
        glVertex2f(-0.5, 0.5);
        glVertex2f(0.0, -0.5);
        glVertex2f(0.5, 0.5);
    glEnd();
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutCreateWindow("GL_LINE_STRIP");
    glutDisplayFunc(displayStrip);
    glClearColor(0.0f, 0.0f, 1.0f, 1.0f); // Background Biru [cite: 197]
    glutMainLoop();
    return 0;
}
