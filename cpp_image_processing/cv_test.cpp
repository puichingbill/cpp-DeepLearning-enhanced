#include <time.h>
#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main()
{
    clock_t start_time, end_time;
    start_time = clock();
    cv::Mat image_a, imag