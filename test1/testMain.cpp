#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace cv;

int main()
{
	// 读入一张图片
	Mat img = imread("pic.jpg");
	// 创建一个窗口  
	namedWindow("testPic");
	// 在窗口中显示
	imshow("testPic", img);
	// 等待6000 ms后窗口自动关闭  
	waitKey(0);
	return 0;
}