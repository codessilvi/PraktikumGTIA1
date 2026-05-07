#include <GL/glut.h>

static int shoulder = 0, elbow = 0, palm = 0;
static int finger1 = 0, finger2 = 0, finger3 = 0, finger4 = 0, thumb = 0;

void init(void){
    glClearColor(0.0,0.0,0.0,0.0);
    glShadeModel(GL_FLAT);
}

void drawGrid(){
    glColor3f(0.5,0.5,0.5);

    glBegin(GL_LINES);

    // Grid horizontal
    for(float i = -10; i <= 10; i += 0.5){
        glVertex3f(-10.0,i,0.0);
        glVertex3f(10.0,i,0.0);
    }

    // Grid vertical
    for(float i = -10; i <= 10; i += 0.5){
        glVertex3f(i,-10.0,0.0);
        glVertex3f(i,10.0,0.0);
    }

    glEnd();
}

void drawAxis(){
    glLineWidth(3.0);

    glBegin(GL_LINES);

    // Sumbu X merah
    glColor3f(1.0,0.0,0.0);
    glVertex3f(-10.0,0.0,0.0);
    glVertex3f(10.0,0.0,0.0);

    // Sumbu Y hijau
    glColor3f(0.0,1.0,0.0);
    glVertex3f(0.0,-10.0,0.0);
    glVertex3f(0.0,10.0,0.0);

    // Sumbu Z biru
    glColor3f(0.0,0.0,1.0);
    glVertex3f(0.0,0.0,-10.0);
    glVertex3f(0.0,0.0,10.0);

    glEnd();

    glLineWidth(1.0);
}

void drawFinger(float tx,float ty,int angle){
    glPushMatrix();

    glTranslatef(tx,ty,0.0);
    glRotatef((GLfloat)angle,0.0,0.0,1.0);
    glTranslatef(0.25,0.0,0.0);

    glPushMatrix();
    glScalef(0.5,0.08,0.08);
    glutWireCube(1.0);
    glPopMatrix();

    glPopMatrix();
}

void display(void){
    glClear(GL_COLOR_BUFFER_BIT);

    glLoadIdentity();

    glTranslatef(0.0,0.0,-8.0);

    // Grid dan sumbu
    drawGrid();
    drawAxis();

    glColor3f(1.0,1.0,1.0);

    glPushMatrix();

    // Lengan atas
    glTranslatef(-1.0,0.0,0.0);
    glRotatef((GLfloat)shoulder,0.0,0.0,1.0);
    glTranslatef(1.0,0.0,0.0);

    glPushMatrix();
    glScalef(2.0,0.4,1.0);
    glutWireCube(1.0);
    glPopMatrix();

    // Lengan bawah
    glTranslatef(1.0,0.0,0.0);
    glRotatef((GLfloat)elbow,0.0,0.0,1.0);
    glTranslatef(1.0,0.0,0.0);

    glPushMatrix();
    glScalef(2.0,0.4,1.0);
    glutWireCube(1.0);
    glPopMatrix();

    // Telapak tangan
    glTranslatef(1.1,0.0,0.0);
    glRotatef((GLfloat)palm,0.0,0.0,1.0);

    glPushMatrix();
    glScalef(0.8,0.6,0.3);
    glutWireCube(1.0);
    glPopMatrix();

    // Jari
    drawFinger(0.45, 0.22, finger1);
    drawFinger(0.45, 0.08, finger2);
    drawFinger(0.45,-0.08, finger3);
    drawFinger(0.45,-0.22, finger4);

    // Ibu jari
    glPushMatrix();

    glTranslatef(0.1,-0.35,0.0);
    glRotatef(-40 + thumb,0.0,0.0,1.0);
    glTranslatef(0.18,0.0,0.0);

    glPushMatrix();
    glScalef(0.35,0.08,0.08);
    glutWireCube(1.0);
    glPopMatrix();

    glPopMatrix();

    glPopMatrix();

    glutSwapBuffers();
}

void reshape(int w,int h){
    glViewport(0,0,(GLsizei)w,(GLsizei)h);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    gluPerspective(65.0,(GLfloat)w/(GLfloat)h,1.0,20.0);

    glMatrixMode(GL_MODELVIEW);
}

void keyboard(unsigned char key,int x,int y){

    switch(key){

        case 's':
            shoulder += 5;
            break;

        case 'S':
            shoulder -= 5;
            break;

        case 'e':
            elbow += 5;
            break;

        case 'E':
            elbow -= 5;
            break;

        case 'p':
            palm += 5;
            break;

        case 'P':
            palm -= 5;
            break;

        case '1':
            finger1 += 5;
            break;

        case '!':
            finger1 -= 5;
            break;

        case '2':
            finger2 += 5;
            break;

        case '@':
            finger2 -= 5;
            break;

        case '3':
            finger3 += 5;
            break;

        case '#':
            finger3 -= 5;
            break;

        case '4':
            finger4 += 5;
            break;

        case '$':
            finger4 -= 5;
            break;

        case 't':
            thumb += 5;
            break;

        case 'T':
            thumb -= 5;
            break;

        case 27:
            exit(0);
            break;
    }

    glutPostRedisplay();
}

int main(int argc,char** argv){

    glutInit(&argc,argv);

    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);

    glutInitWindowSize(800,700);

    glutInitWindowPosition(100,100);

    glutCreateWindow("Simulasi Lengan dan Sumbu XYZ");

    init();

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);

    glutMainLoop();

    return 0;
}
