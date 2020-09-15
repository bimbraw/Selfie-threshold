// Selfie_threshold.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

Mat img_gray;

int main()
{
    //std::cout << "Hello World!\n";
    //just testing

    // Read older selfie
    Mat src = imread("C:/Users/Keshav Bimbraw/source/repos/Selfie_threshold/selfie.jpg", IMREAD_GRAYSCALE);
    Mat dst;

    //cout << src.size();

    // Set threshold and maxValue
    double thresh = 128;
    double maxValue = 255;

    // Binary Threshold
    threshold(src, dst, thresh, maxValue, THRESH_BINARY);

    namedWindow("image", WINDOW_AUTOSIZE);
    imshow("image", dst);
    waitKey(0);//esc

    //since this selfie is very dark, I took a new selfie named selfie_new.jpg
    // Read new selfie
    Mat src_1 = imread("C:/Users/Keshav Bimbraw/source/repos/Selfie_threshold/selfie_new.jpg", IMREAD_GRAYSCALE);
    Mat dst_1;

    // Set threshold and maxValue
    double thresh_1 = 128;
    double maxValue_1 = 255;

    // Binary Threshold
    threshold(src_1, dst_1, thresh_1, maxValue_1, THRESH_BINARY);

    namedWindow("image", WINDOW_AUTOSIZE);
    imshow("image", dst_1);
    waitKey(0);//esc

    return 0;
}