#include <opencv2/opencv.hpp>

using namespace cv;

int main()
{
    Mat image;
    image = imread("flower.jpg", CV_LOAD_IMAGE_COLOR);
    imshow("Photo of a Flower", image);
    cvWaitKey(0);
    return 0;
}
