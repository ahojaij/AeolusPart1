#include <stdio.h>
#include <opencv2/opencv.hpp>
#include <iostream>
#include <cmath>

using namespace cv;

void show_mat(const cv::Mat &image, std::string const &win_name);

cv::Mat& flood_fill_mat(cv::Mat &mat, int xPixel, int yPixel, uchar *targetColor, uchar *replacementColor, int colorThreshold);

int main(int argc, char **argv) {
    if (argc != 6) {
        printf("usage: FIND_REGION_Test <Image_Path> <X_Pixel_location> <Y_Pixel_location> <Color_Threshold> <Output_Path>\n");
        return -1;
    }

    Mat image;
    image = imread(argv[1], 1);

    if (!image.data) {
        printf("No image data (warning: OpenCV recognize files by extensions)\n");
        return -1;
    }

    show_mat(image, "Input");

	    Vec3b *node;
	    node = image.ptr<Vec3b>(atoi(argv[2]));
    printf("node[xPixel][yPixel]: %u, %u, %u\n", node[atoi(argv[3])][0], node[atoi(argv[3])][1], node[atoi(argv[3])][2]);
    uchar targetColor [3]; //  = {255, 255, 255};
    // targetColor is the color of pixel at target location
    targetColor[0] = node[atoi(argv[3])][0];
    targetColor[1] = node[atoi(argv[3])][1];
    targetColor[2] = node[atoi(argv[3])][2];   
    uchar replacementColor [] = {0, 0, 0};
//    int colorThreshold = atoi(argv[4]);
    image = flood_fill_mat(image, atoi(argv[2]), atoi(argv[3]), targetColor, replacementColor, atoi(argv[4]));
    show_mat(image, "Output");

    imwrite(argv[5], image);

    return 0;
}

cv::Mat& flood_fill_mat(cv::Mat &mat, int xPixel, int yPixel, uchar *targetColor, uchar *replacementColor, int colorThreshold) {    
    int channels = mat.channels();

    int nRows = mat.rows;
    int nCols = mat.cols;

    int i, j;
    switch (channels) {
        case 3: {
//            RGB image // It is assumed that we only get RGB images
	    Vec3b *node;
	    node = mat.ptr<Vec3b>(xPixel);
	    if (replacementColor[0] == targetColor[0] && replacementColor[1] == targetColor[1] && replacementColor[2] == targetColor[2])
		return mat;
	    if (std::abs(node[yPixel][0] - targetColor[0]) > colorThreshold || std::abs(node[yPixel][1] - targetColor[1]) > colorThreshold || std::abs(node[yPixel][2] - targetColor[2]) > colorThreshold)
		return mat;
	    node[yPixel][0] = replacementColor[0];
	    node[yPixel][1] = replacementColor[1];
	    node[yPixel][2] = replacementColor[2];
	    if (yPixel > 0)
	    	mat = flood_fill_mat(mat, xPixel, yPixel - 1, targetColor, replacementColor, colorThreshold);	    
	    if (yPixel < nCols - 1)
	    	mat = flood_fill_mat(mat, xPixel, yPixel + 1, targetColor, replacementColor, colorThreshold);
	    if (xPixel > 0)
	    	mat = flood_fill_mat(mat, xPixel - 1, yPixel, targetColor, replacementColor, colorThreshold);
	    if (xPixel < nRows - 1)
	    	mat = flood_fill_mat(mat, xPixel + 1, yPixel, targetColor, replacementColor, colorThreshold);
        }
    }
    return mat;
}

void show_mat(const cv::Mat &image, std::string const &win_name) {
    namedWindow(win_name, WINDOW_AUTOSIZE);
    imshow(win_name, image);
    waitKey(0);
}
