#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace cv;

int main()
{
	// ����һ��ͼƬ
	Mat img = imread("pic.jpg");
	// ����һ������  
	namedWindow("testPic");
	// �ڴ�������ʾ
	imshow("testPic", img);
	// �ȴ�6000 ms�󴰿��Զ��ر�  
	waitKey(0);
	return 0;
}