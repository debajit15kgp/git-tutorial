#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/core/core.hpp"
#include <iostream>


using namespace std;
using namespace cv;

int main()
{
    int rows=800,cols=600;
    Mat img(rows, cols, CV_8UC1, Scalar(0)); //grayscale
    namedWindow("win", WINDOW_NORMAL);
    imshow("win", img);
    waitKey(500); //waitKey(0) --> infinite
    return 0;
}

