/* Nama : Silvani Salsabilla
   NIM  : 24060124130066
   Lab  : A1/GTI
*/

#include <GL/glut.h>
#include <math.h>

// ===== LINGKARAN =====
void lingkaran(float cx, float cy, float r) {
    glBegin(GL_POLYGON);
    for(int i = 0; i < 360; i++) {
        float sudut = i * 3.14159 / 180;
        float x = r * cos(sudut);
        float y = r * sin(sudut);
        glVertex2f(x + cx, y + cy);
    }
    glEnd();
}

// ===== JENDELA GEDUNG =====
void gambarJendelaGedung(float x, float y) {
    glColor3f(1.0, 1.0, 0.6);
    glBegin(GL_QUADS);
        glVertex2f(x, y);
        glVertex2f(x + 0.05, y);
        glVertex2f(x + 0.05, y + 0.05);
        glVertex2f(x, y + 0.05);
    glEnd();
}

// ===== AWAN =====
void gambarAwan(float x, float y, float s) {
    glColor3f(1.0, 1.0, 1.0);
    lingkaran(x, y, 0.08 * s);
    lingkaran(x + 0.07 * s, y + 0.03 * s, 0.09 * s);
    lingkaran(x + 0.14 * s, y, 0.08 * s);
    lingkaran(x + 0.07 * s, y - 0.03 * s, 0.07 * s);
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // ===== LANGIT =====
    glColor3f(0.6, 0.8, 1.0);
    glBegin(GL_QUADS);
        glVertex2f(-1, 0);
        glVertex2f(1, 0);
        glVertex2f(1, 1);
        glVertex2f(-1, 1);
    glEnd();

    // ===== MATAHARI =====
    glColor3f(1.0, 0.9, 0.0);
    lingkaran(0.7, 0.8, 0.12);

    // ===== AWAN =====
    gambarAwan(-0.7, 0.75, 1.0);
    gambarAwan(-0.2, 0.85, 0.8);
    gambarAwan(0.3, 0.7, 1.1);

    // ===== GEDUNG =====
    glColor3f(0.2, 0.2, 0.2);
    glBegin(GL_QUADS);
        glVertex2f(-0.9, 0); glVertex2f(-0.6, 0); glVertex2f(-0.6, 0.65); glVertex2f(-0.9, 0.65);
    glEnd();
    gambarJendelaGedung(-0.85, 0.5); gambarJendelaGedung(-0.75, 0.5);
    gambarJendelaGedung(-0.85, 0.35); gambarJendelaGedung(-0.75, 0.35);
    gambarJendelaGedung(-0.85, 0.2); gambarJendelaGedung(-0.75, 0.2);

    glColor3f(0.3, 0.3, 0.3);
    glBegin(GL_QUADS);
        glVertex2f(-0.5, 0); glVertex2f(-0.1, 0); glVertex2f(-0.1, 0.85); glVertex2f(-0.5, 0.85);
    glEnd();
    gambarJendelaGedung(-0.42, 0.7); gambarJendelaGedung(-0.25, 0.7);
    gambarJendelaGedung(-0.42, 0.5); gambarJendelaGedung(-0.25, 0.5);
    gambarJendelaGedung(-0.42, 0.3); gambarJendelaGedung(-0.25, 0.3);

    glColor3f(0.25, 0.25, 0.25);
    glBegin(GL_QUADS);
        glVertex2f(0.1, 0); glVertex2f(0.45, 0); glVertex2f(0.45, 0.55); glVertex2f(0.1, 0.55);
    glEnd();
    gambarJendelaGedung(0.18, 0.4); gambarJendelaGedung(0.32, 0.4);
    gambarJendelaGedung(0.18, 0.25); gambarJendelaGedung(0.32, 0.25);

    // ===== JALAN =====
    glColor3f(0.2, 0.2, 0.2);
    glBegin(GL_QUADS);
        glVertex2f(-1, -1); glVertex2f(1, -1); glVertex2f(1, 0); glVertex2f(-1, 0);
    glEnd();

    // Marka jalan
    glColor3f(1.0, 1.0, 1.0);
    for(float i = -1.0; i < 1.0; i += 0.4) {
        glBegin(GL_QUADS);
            glVertex2f(i + 0.1, -0.52); glVertex2f(i + 0.3, -0.52);
            glVertex2f(i + 0.3, -0.48); glVertex2f(i + 0.1, -0.48);
        glEnd();
    }

    // ===== MOBIL =====
    glPushMatrix();
        glTranslatef(0.1, -0.1, 0);

        // badan
        glColor3f(0.5, 0.0, 0.5);
        glBegin(GL_QUADS);
            glVertex2f(-0.6, -0.3); glVertex2f(0.4, -0.3);
            glVertex2f(0.4, -0.05); glVertex2f(-0.6, -0.05);
        glEnd();

        // atap
        glColor3f(0.6, 0.1, 0.6);
        glBegin(GL_POLYGON);
            glVertex2f(-0.45, -0.05); glVertex2f(0.25, -0.05);
            glVertex2f(0.15, 0.15); glVertex2f(-0.35, 0.15);
        glEnd();

        // kaca depan
        glColor3f(0.8, 0.95, 1.0);
        glBegin(GL_QUADS);
            glVertex2f(-0.05, 0.0); glVertex2f(0.18, 0.0);
            glVertex2f(0.12, 0.12); glVertex2f(-0.05, 0.12);
        glEnd();

        // highlight kaca depan
        glColor3f(1.0, 1.0, 1.0);
        glBegin(GL_QUADS);
            glVertex2f(-0.02, 0.09); glVertex2f(0.1, 0.09);
            glVertex2f(0.08, 0.12); glVertex2f(-0.02, 0.12);
        glEnd();

        // kaca belakang
        glColor3f(0.8, 0.95, 1.0);
        glBegin(GL_QUADS);
            glVertex2f(-0.38, 0.0); glVertex2f(-0.1, 0.0);
            glVertex2f(-0.1, 0.12); glVertex2f(-0.32, 0.12);
        glEnd();

        // highlight kaca belakang
        glColor3f(1.0, 1.0, 1.0);
        glBegin(GL_QUADS);
            glVertex2f(-0.33, 0.09); glVertex2f(-0.18, 0.09);
            glVertex2f(-0.18, 0.12); glVertex2f(-0.30, 0.12);
        glEnd();

        // lampu depan
        glColor3f(1.0, 1.0, 0.7);
        glBegin(GL_QUADS);
            glVertex2f(0.35, -0.18); glVertex2f(0.42, -0.18);
            glVertex2f(0.42, -0.12); glVertex2f(0.35, -0.12);
        glEnd();

        // lampu belakang
        glColor3f(0.8, 0.0, 0.0);
        glBegin(GL_QUADS);
            glVertex2f(-0.62, -0.18); glVertex2f(-0.55, -0.18);
            glVertex2f(-0.55, -0.12); glVertex2f(-0.62, -0.12);
        glEnd();

        // roda kiri
        glColor3f(0.0, 0.0, 0.0); lingkaran(-0.35, -0.32, 0.13);
        glColor3f(0.7, 0.7, 0.7); lingkaran(-0.35, -0.32, 0.05);

        // roda kanan
        glColor3f(0.0, 0.0, 0.0); lingkaran(0.15, -0.32, 0.13);
        glColor3f(0.7, 0.7, 0.7); lingkaran(0.15, -0.32, 0.05);

    glPopMatrix();

    // ===== LAMPU LALU LINTAS =====
    glColor3f(0.1, 0.1, 0.1);
    glBegin(GL_QUADS);
        glVertex2f(0.7, -0.3); glVertex2f(0.73, -0.3);
        glVertex2f(0.73, 0.5); glVertex2f(0.7, 0.5);

        glVertex2f(0.65, 0.15); glVertex2f(0.78, 0.15);
        glVertex2f(0.78, 0.55); glVertex2f(0.65, 0.55);
    glEnd();

    glColor3f(1.0, 0.0, 0.0); lingkaran(0.715, 0.48, 0.04);
    glColor3f(1.0, 0.8, 0.0); lingkaran(0.715, 0.38, 0.04);
    glColor3f(0.0, 1.0, 0.0); lingkaran(0.715, 0.28, 0.04);

    glFlush();
}

void init() {
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(700, 700);
    glutCreateWindow("Kota 2D Detail - Silvani");

    init();
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
