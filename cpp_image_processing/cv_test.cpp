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
    cv::Mat image_a, image_b, image_c;

    image_a = cv::imread("IMG_1446.JPG", 1);
    if ( !image_a.data )
    {
        cout << "No image data \n";
        return -1;
    }

    resize(image_a, image_b, cv::Size(), 0.5, 0.5);
    cvtColor(image_b, image_c, cv::COLOR_BGR2GRAY);

    imwrite("result.jpg", image_c);
    // cv::namedWindow("Display Image", WINDOW_AUTOSIZE );
    //