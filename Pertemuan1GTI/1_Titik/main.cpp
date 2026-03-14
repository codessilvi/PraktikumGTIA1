// Nama: Silvani Salsabilla
// NIM : 24060124130066
// Lab : GTI/A1

#include <gl/glut.h>

void point(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    // Mengatur besar titik
    glPointSize(5.0f);
    glBegin(GL_POINTS);
        // Warna merah
        glColor3f(1.0f, 0.0f, 0.0f);
        // Posisi titik
        glVertex3f(0.25, 0.25, 0.0);
    glEnd();
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Titik");
    glutDisplayFunc(point);
    glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
    glutMainLoop();
    return 0;
}
