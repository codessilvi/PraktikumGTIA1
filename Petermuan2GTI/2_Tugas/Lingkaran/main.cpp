/* Nama : Silvani Salsabilla
   NIM  : 24060124130066
   Lab  : A1/GTI
*/

#include <GL/glut.h>
#include <math.h>

void Lingkaran()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0f, 0.0f, 0.0f); // warna merah 

    glBegin(GL_POLYGON);
        for(int i = 0; i < 360; i++)
        {
            float sudut = i * 3.1416 / 180; // konversi ke radian
            float x = 0.5 * cos(sudut); // radius = 0.5
            float y = 0.5 * sin(sudut);
            glVertex2f(x, y);
        }
    glEnd();

    glFlush();
}

void init()
{
    glClearColor(1.0, 1.0, 1.0, 1.0); // background putih
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Lingkaran OpenGL");

    init();

    glutDisplayFunc(Lingkaran);
    glutMainLoop();

    return 0;
}
