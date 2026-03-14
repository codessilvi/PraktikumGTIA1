// Nama: Silvani Salsabilla
// NIM : 24060124130066
// Lab : A1/GTI

#include <gl/glut.h>

void Jendela(void) {
    // Membersihkan layar dan men-set dalam format warna
    glClear(GL_COLOR_BUFFER_BIT);
    // Memastikan seluruh perintah tereksekusi
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("biru");
    glutDisplayFunc(Jendela);
    // Warna biru (R=0, G=0, B=1)
    glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
    glutMainLoop();
    return 0;
}
