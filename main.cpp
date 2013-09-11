#include <iostream>
#include <stdio.h>
#include "Robot.h"
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

/**
 * Fonction de démonstration
 */
void demo()
{
    Robot robot;
    while (true) {
        cout << "Ne bouge pas" << endl;
        robot.sendOrder(0, 0);
        getchar();
        cout << "Roues gauche" << endl;
        robot.sendOrder(0.1, 0);
        getchar();
        cout << "Roues droites" << endl;
        robot.sendOrder(0, 0.1);
        getchar();
        cout << "Roues gauche à contre-sens des droites" << endl;
        robot.sendOrder(-0.1, 0.1);
        getchar();
        cout << "Roues gauche et droite à même allure" << endl;
        robot.sendOrder(0.1, 0.1);
        getchar();
    }
}

void demoCV()
{
    CvCapture *pCapturedImage = cvCreateCameraCapture(0);
    IplImage *pSaveImg = cvQueryFrame(pCapturedImage);
    cvSaveImage("test.jpg", pSaveImg); 
}

int main(int argc, char *argv[])
{
    // demoRobot();
    demoCV();
}
