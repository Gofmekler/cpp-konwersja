#include <cstdlib.h>
#include <iostream.h>
#include <string.h>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;
int main() {
	Mat img = imread("./LENA_512.jpg", 1);
	Mat yuv_img;
	cvtColor(img, yuv_img, CV_BGR2YUV);
	namedWindow("YUV", WINDOW_AUTOSIZE);
	imshow("YUV", yuv_img);
	waitKey();
	return 0;
}