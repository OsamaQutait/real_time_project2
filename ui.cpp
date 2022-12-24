#include "local.h"


void renderBitMap(char *string, void *font, float x, float y) {
    char *c;
    glRasterPos2i(x, y);
    for (c = string; *c != '\0'; c++) {
        glutBitmapCharacter(font, *c);

    }
}

void display() {


    glClear(GL_COLOR_BUFFER_BIT);


    ///BORDER


    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    double w = glutGet(GLUT_WINDOW_WIDTH);
    double h = glutGet(GLUT_WINDOW_HEIGHT);
    glOrtho(0, w, 0, h, -1, 1);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    // important
    glTranslatef(0.5, 0.5, 0);

    float offset = 40;
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0 + offset, 0 + offset);
    glVertex2f(0 + offset, h - offset);

    glVertex2f(w - offset, h - offset);
    glVertex2f(w - offset, 0 + offset);
    glEnd();

    glutSwapBuffers();

    ////EXIT////

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2f(1360, 100);
    glVertex2f(1360, 200);
    glEnd();
    glFlush();

    glBegin(GL_LINES);
    glColor3f(1, 1, 1);
    glVertex2f(1360, 100);
    glVertex2f(1380, 100);
    glEnd();
    glFlush();

    glBegin(GL_LINES);
    glColor3f(1, 1, 1);
    glVertex2f(1360, 200);
    glVertex2f(1380, 200);
    glEnd();
    glFlush();


    ///WALL BETWEEN THE HALL AND ENTRANCE
    //white
    glBegin(GL_LINES);
    glColor3f(1, 1, 1);
    glVertex2f(600, 660);
    glVertex2f(600, 480);
    glEnd();
    glFlush();

////////UPPER METAL DETECTOR///////
    //red
    glBegin(GL_LINES);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(650, 410);
    glVertex2f(650, 430);
    glEnd();
    glFlush();

    //red
    glBegin(GL_LINES);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(650, 480);
    glVertex2f(650, 460);
    glEnd();
    glFlush();
/////////////////////////////

///WALL BETWEEN THE 2 METAL DETECTORS
    //white
    glBegin(GL_LINES);
    glColor3f(1, 1, 1);
    glVertex2f(600, 410);
    glVertex2f(600, 290);
    glEnd();
    glFlush();
////////////////////

/////// LOWER METAL DETECTOR/////
    //red
    glBegin(GL_LINES);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(650, 240);
    glVertex2f(650, 220);
    glEnd();
    glFlush();

    //red
    glBegin(GL_LINES);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(650, 290);
    glVertex2f(650, 270);
    glEnd();
    glFlush();
///////////////////

    //white
    glBegin(GL_LINES);
    glColor3f(1, 1, 1);
    glVertex2f(600, 220);
    glVertex2f(600, 40);
    glEnd();
    glFlush();

    ///MAMARRAT FOR MALES AND FEMALES
    glBegin(GL_LINES);
    glColor3f(1, 1, 1);
    glVertex2f(300, 480);
    glVertex2f(650, 480);
    glEnd();
    glFlush();

    glBegin(GL_LINES);
    glColor3f(1, 1, 1);
    glVertex2f(300, 410);
    glVertex2f(650, 410);
    glEnd();
    glFlush();

    glBegin(GL_LINES);
    glColor3f(1, 1, 1);
    glVertex2f(300, 290);
    glVertex2f(650, 290);
    glEnd();
    glFlush();

    glBegin(GL_LINES);
    glColor3f(1, 1, 1);
    glVertex2f(300, 220);
    glVertex2f(650, 220);
    glEnd();
    glFlush();

    ///WALLS BETWEEN THE TWO ROLLING GATES/////
    glBegin(GL_LINES);
    glColor3f(1, 1, 1);
    glVertex2f(300, 410);
    glVertex2f(300, 290);
    glEnd();
    glFlush();

    glBegin(GL_LINES);
    glColor3f(1, 1, 1);
    glVertex2f(300, 40);
    glVertex2f(300, 220);
    glEnd();
    glFlush();

    glBegin(GL_LINES);
    glColor3f(1, 1, 1);
    glVertex2f(300, 660);
    glVertex2f(300, 480);
    glEnd();
    glFlush();


    /////ROLLING GATES
    //green
    glBegin(GL_LINES);
    glColor3f(0, 1, 0);
    glVertex2f(300, 480);
    glVertex2f(300, 410);
    glEnd();
    glFlush();

    //green
    glBegin(GL_LINES);
    glColor3f(0, 1, 0);
    glVertex2f(300, 290);
    glVertex2f(300, 220);
    glEnd();
    glFlush();
////////////////


    ///texts
    glColor3f(1, 1, 1);
    char title[100];

    char FemaleStringNum[256];
    char MaleStringNum[256];

    char PeopleStringNum[256];

    char TxPeopleStringNum[256];
    char BxPeopleStringNum[256];
    char IxPeopleStringNum[256];
    char RxPeopleStringNum[256];

    char SatisfiedStringNum[256];
    char UnsatisfiedStringNum[256];
    char UnPatientStringNum[256];

    char PeopleInHallStringNum[256];

    int FemaleNumber = 5;
    int MaleNumber = 10;

    int PeopleNum = 100;

    int TxPeopleNum = 10;

    int BxPeopleNum = 10;
    int IxPeopleNum = 10;
    int RxPeopleNum = 10;

    int SatisfiedNum = 10;
    int UnsatisfiedNum = 10;
    int UnPatientNum = 10;

    int PeopleInHallNum = 50;


    sprintf(title, "WELCOME TO OUR PROGRAM");
    renderBitMap(title, GLUT_BITMAP_HELVETICA_18, 530, 672);
    sprintf(FemaleStringNum, "Female Number: %d", FemaleNumber);
    renderBitMap(FemaleStringNum, GLUT_BITMAP_HELVETICA_18, 320, 440);
    sprintf(MaleStringNum, "Male Number: %d", MaleNumber);
    renderBitMap(MaleStringNum, GLUT_BITMAP_HELVETICA_18, 320, 250);

    sprintf(PeopleStringNum, "People waiting to enter: %d", PeopleNum);
    renderBitMap(PeopleStringNum, GLUT_BITMAP_HELVETICA_18, 60, 345);
////////////////////
    sprintf(TxPeopleStringNum, "Tx People: %d", TxPeopleNum);
    renderBitMap(TxPeopleStringNum, GLUT_BITMAP_HELVETICA_18, 630, 610);

    sprintf(BxPeopleStringNum, "Bx People: %d", BxPeopleNum);
    renderBitMap(BxPeopleStringNum, GLUT_BITMAP_HELVETICA_18, 820, 610);

    sprintf(IxPeopleStringNum, "Ix People: %d", IxPeopleNum);
    renderBitMap(IxPeopleStringNum, GLUT_BITMAP_HELVETICA_18, 1010, 610);

    sprintf(RxPeopleStringNum, "Rx People: %d", RxPeopleNum);
    renderBitMap(RxPeopleStringNum, GLUT_BITMAP_HELVETICA_18, 1200, 610);
///////////////////

    sprintf(SatisfiedStringNum, "Satisfied People: %d", SatisfiedNum);
    renderBitMap(SatisfiedStringNum, GLUT_BITMAP_HELVETICA_18, 1150, 410);

    sprintf(UnsatisfiedStringNum, "UnSatisfied People: %d", UnsatisfiedNum);
    renderBitMap(UnsatisfiedStringNum, GLUT_BITMAP_HELVETICA_18, 1150, 380);

    sprintf(UnPatientStringNum, "UnPatient People: %d", UnPatientNum);
    renderBitMap(UnPatientStringNum, GLUT_BITMAP_HELVETICA_18, 1150, 350);

    sprintf(PeopleInHallStringNum, "Total Number of People in the Hall: %d", PeopleInHallNum);
    renderBitMap(PeopleInHallStringNum, GLUT_BITMAP_HELVETICA_18, 610, 50);

    ///////////////////
    glEnd();
    glFlush();



    /////////shababeek///////
    glBegin(GL_LINES);
    glColor3f(1, 1, 1);
    glVertex2f(600, 600);
    glVertex2f(1360, 600);
    glEnd();
    glFlush();

    glBegin(GL_LINES);
    glColor3f(1, 1, 1);
    glVertex2f(600, 500);
    glVertex2f(1360, 500);
    glEnd();
    glFlush();

    /////LINES BETWEEN SHABABEEK/////
    for (int i = 600; i <= 1360; i += 190) {
        glBegin(GL_LINES);
        glColor3f(1, 1, 1);
        glVertex2f(i, 600);
        glVertex2f(i, 500);
        glEnd();
        glFlush();
    }

    ////////////////
    for (int i = 700; i <= 1250; i += 50) {
        glColor3f(1, 1, 1);

        glBegin(GL_POLYGON);
        glVertex2f(i, 220);
        glVertex2f(i + 20, 220);
        glVertex2f(i + 20, 200);
        glVertex2f(i, 200);
        glEnd();
        glFlush();

    }

    for (int i = 700; i <= 1250; i += 50) {
        glColor3f(1, 1, 1);

        glBegin(GL_POLYGON);
        glVertex2f(i, 180);
        glVertex2f(i + 20, 180);
        glVertex2f(i + 20, 160);
        glVertex2f(i, 160);
        glEnd();
        glFlush();

    }


}

int main(int argc, char **argv) {


    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);


    glutInitWindowPosition(150, 250);
    glutInitWindowSize(1400, 700);
    glutCreateWindow("A Simple Triangle");
    glutDisplayFunc(display);
    glutMainLoop();
}

