// Nama: Silvani Salsabilla
// NIM : 24060124130066
// Lab : GTI/A1

#include <gl/glut.h>

void display(void)
{
    // Membersihkan layar dan men-set format warna
    glClear(GL_COLOR_BUFFER_BIT); 

    // --- 1. Membuat TITIK (image_a01e7e.png) ---
    glPointSize(5.0f);            // Mengatur ukuran titik
    glBegin(GL_POINTS);           // Prosedur membuat titik
        glColor3f(1.0f, 0.0f, 0.0f);   // Warna Merah
        glVertex3f(0.25, 0.25, 0.0);    // Koordinat titik
    glEnd();

    // --- 2. Membuat GARIS (image_9fb8a4.png) ---
    glLineWidth(2.0f);            // Mengatur ketebalan garis
    glBegin(GL_LINES);            // Prosedur membuat garis
        glColor3f(1.0f, 1.0f, 1.0f);   // Warna Putih
        glVertex3f(0.00, 0.20, 0.0);    // Titik awal
        glVertex3f(0.00, -0.20, 0.0);   // Titik akhir
    glEnd();

    // --- 3. Membuat SEGITIGA (image_9f3904.png) ---
    glBegin(GL_TRIANGLES);        // Prosedur membuat segitiga
        glColor3f(1.0f, 0.0f, 0.0f);   // Warna Merah
        glVertex3f(-0.10, -0.10, 0.00); 
        glColor3f(0.0f, 1.0f, 0.0f);   // Warna Hijau
        glVertex3f(0.10, -0.10, 0.00);
        glColor3f(0.0f, 0.0f, 1.0f);   // Warna Biru
        glVertex3f(0.00, 0.10, 0.00);
    glEnd();

    // Memastikan seluruh perintah tereksekusi
    glFlush();
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Gabungan Titik, Garis, dan Segitiga");
    
    glutDisplayFunc(display); 
    
    // Set warna latar belakang menjadi Biru
    glClearColor(0.0f, 0.0f, 1.0f, 1.0f); 
    
    glutMainLoop();
    return 0;
}
