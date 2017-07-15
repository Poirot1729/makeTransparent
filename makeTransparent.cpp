#include<bits/stdc++.h>
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace std;
using namespace cv;

int main(int argc, const char** argv)
{
	Mat img;
	img = imread(argv[1],1);
	
	Mat res;
	cvtColor(img,res,CV_BGR2BGRA);
	if(!strcmp(argv[2],"black"))
	{
		for (int i = 0; i < res.rows; i++)
   	for (int j = 0; j < res.cols; j++)
   	{
   		Vec4b& pixel = res.at<Vec4b>(i, j);
      	if (pixel[0] <= 20 && pixel[1] <= 20 && pixel[2] <= 20)
      	{
      		pixel[3] = 0;
      	}
   	}
	}
	else
	{
		for (int i = 0; i < res.rows; i++)
   	for (int j = 0; j < res.cols; j++)
   	{
   		Vec4b& pixel = res.at<Vec4b>(i, j);
      	if (pixel[0] >= 240 && pixel[1] >= 240 && pixel[2] >= 240)
      	{
      		pixel[3] = 0;
      	}
   	}
	}
   imwrite("../res.png",res);
	return 0;
}
