#include<bits/stdc++.h>
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace std;
using namespace cv;

int main(int argc, const char** argv)
{
	Mat img;
	img = imread(argv[1],1);
	int val1 = 0;
	int val2 = 255;
	if(!strcmp(argv[2],"black"))
	{
		val1 = 255;
		val2 = 0;
	}
	Mat res;
	cvtColor(img,res,CV_BGR2BGRA);
	for (int i = 0; i < res.rows; i++)
   for (int j = 0; j < res.cols; j++)
   {
   	Vec4b& pixel = res.at<Vec4b>(i, j);
      if (pixel[0] >= 240 && pixel[1] >= 240 && pixel[2] >= 240)
      {
      	pixel[3] = val1;
      }
      else
      {
      	pixel[3] = val2;
      }
   }
   imwrite("../res.png",res);
	return 0;
}
