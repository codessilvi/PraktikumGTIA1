// Nama: Silvani Salsabilla
// NIM : 24060124130066
// Lab : GTI/A1

#include <gl/glut.h>

void display(void)
{
    // Membersihkan layar (set ke warna yang ditentukan di glClearColor)
    glClear(GL_COLOR_BUFFER_BIT);

    // --- 1. Membuat TITIK (image_a01e7e.png) ---
    glPointSize(5.0f);
    glBegin(GL_POINTS);
        glColor3f(1.0f, 0.0f, 0.0f); // Merah
        glVertex3f(0.25, 0.25, 0.0);
    glEnd();

    // --- 2. Membuat GARIS (image_9fb8a4.png) ---
    glLineWidth(2.0f);
    glBegin(GL_LINES);
        glColor3f(1.0f, 1.0f, 1.0f); // Putih
        glVertex3f(0.00, 0.20, 0.0);
        glVertex3f(0.00, -0.20, 0.0);
    glEnd();

    // --- 3. Membuat SEGITIGA (image_9f3904.png) ---
    glBegin(GL_TRIANGLES);
        glColor3f(1.0f, 0.0f, 0.0f); // Sudut 1: Merah
        glVertex3f(-0.10, -0.10, 0.00);
        glColor3f(0.0f, 1.0f, 0.0f); // Sudut 2: Hijau
        glVertex3f(0.10, -0.10, 0.00);
        glColor3f(0.0f, 0.0f, 1.0f); // Sudut 3: Biru
        glVertex3f(0.00, 0.10, 0.00);
    glEnd();

    // --- 4. Membuat SEGI EMPAT (image_9f2d84.png) ---
    // Menggunakan glRectf untuk membuat persegi solid
    glColor3f(1.0f, 0.0f, 0.0f); // Merah
    glRectf(-0.18, 0.18, 0.18, -0.18);

    glFlush();
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Praktikum Grafika Komputer");
    
    // Memanggil satu fungsi display untuk semua objek
    glutDisplayFunc(display);
    
    // Warna latar belakang biru (image_9f2d84.png & others)
    glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
    
    glutMainLoop();
    
    return 0;
}
