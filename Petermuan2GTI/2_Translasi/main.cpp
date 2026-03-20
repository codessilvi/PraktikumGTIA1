/* Nama : Silvani Salsabilla 
   NIM  : 24060124130066 
   Lab  : A1/GTI 
*/

#include <gl/glut.h>

void SegiEmpat(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    
    // Translasi: Menggeser sumbu utama
    glTranslatef(-0.50f, 0.75f, 0.0f); 
    
    glColor3f(1.0f, 0.0f, 0.0f); // Warna Merah
    glRectf(-0.18f, 0.18f, 0.18f, -0.18f);
    
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Segi Empat - Translasi");
    
    glutDisplayFunc(SegiEmpat);
    glClearColor(0.0f, 0.0f, 1.0f, 1.0f); // Background Biru
    
    glutMainLoop();
    return 0;
}
