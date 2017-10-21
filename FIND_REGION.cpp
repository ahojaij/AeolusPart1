#include <stdio.h>
#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;

void show_mat(const cv::Mat &image, std::string const &win_name);

cv::Mat& flood_fill_mat(cv::Mat &mat, int xPixel, int yPixel, uchar *targetColor, uchar *replacementColor);

cv::Mat &invert_mat(cv::Mat &mat);

cv::Mat& invert_mat_pointer(cv::Mat &mat);

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

    uchar targetColor [] = {255, 255, 255};    
    uchar replacementColor [] = {0, 0, 0};
    image = flood_fill_mat(image, atoi(argv[2]), atoi(argv[3]), targetColor, replacementColor);
    show_mat(image, "Output");

    imwrite(argv[5], image);

    return 0;
}

cv::Mat& flood_fill_mat(cv::Mat &mat, int xPixel, int yPixel, uchar *targetColor, uchar *replacementColor) {    
    int channels = mat.channels();

    int nRows = mat.rows;
    int nCols = mat.cols;

    int i, j;
    switch (channels) {
        case 3: {
//            RGB image
	    //printf("step 1: xPixel= %i, yPixel= %i\n", xPixel, yPixel);
	    //std::cin>> channels;
	    Vec3b *node;
	    node = mat.ptr<Vec3b>(xPixel);
	    //Vec3b *node;
	    //node = &mat.at<Vec3b>(xPixel, yPixel);
	    //printf("step 2\n");
	    if (replacementColor[0] == targetColor[0] && replacementColor[1] == targetColor[1] && replacementColor[2] == targetColor[2])
		return mat;
	    if (node[yPixel][0] != targetColor[0] || node[yPixel][1] != targetColor[1] || node[yPixel][2] != targetColor[2])
		return mat;
	    //printf("step 3: node[0]: %u, targetColor[0]: %u \n", node[yPixel][0], targetColor[0]);
	    if (node[yPixel][0] != 255)
		printf("step 3: node[0]: %u, targetColor[0]: %u \n", node[yPixel][0], targetColor[0]);
	    node[yPixel][0] = replacementColor[0];
	    node[yPixel][1] = replacementColor[1];
	    node[yPixel][2] = replacementColor[2];
	    //printf("step 4\n");
	    if (yPixel > 0)
	    	mat = flood_fill_mat(mat, xPixel, yPixel - 1, targetColor, replacementColor);	    
	    if (yPixel < nCols - 1)
	    	mat = flood_fill_mat(mat, xPixel, yPixel + 1, targetColor, replacementColor);
	    if (xPixel > 0)
	    	mat = flood_fill_mat(mat, xPixel - 1, yPixel, targetColor, replacementColor);
	    if (xPixel < nRows - 1)
	    	mat = flood_fill_mat(mat, xPixel + 1, yPixel, targetColor, replacementColor);

	    //printf("step 5\n");
//            Vec3b *p;
//           for (i = 0; i < nRows; ++i) {
//                p = mat.ptr<Vec3b>(i);
//                for (j = 0; j < nCols; ++j) {
//                    p[j][0] = ~p[j][0];
//                    p[j][1] = ~p[j][1];
//                    p[j][2] = ~p[j][2];
//                }
//            }
        }
    }
    return mat;
}


cv::Mat& invert_mat_pointer(cv::Mat &mat) {
    int channels = mat.channels();

    int nRows = mat.rows;
    int nCols = mat.cols;

    int i, j;
    switch (channels) {
        case 1: {
//            gray scale image
            uchar *p;
            for (i = 0; i < nRows; ++i) {
                p = mat.ptr<uchar>(i);
                for (j = 0; j < nCols; ++j) {
                    p[j] = ~p[j];
                }
            }
        }
        case 3: {
//            RGB image
            Vec3b *p;
            for (i = 0; i < nRows; ++i) {
                p = mat.ptr<Vec3b>(i);
                for (j = 0; j < nCols; ++j) {
                    p[j][0] = ~p[j][0];
                    p[j][1] = ~p[j][1];
                    p[j][2] = ~p[j][2];
                }
            }
        }
    }

    return mat;
}

void show_mat(const cv::Mat &image, std::string const &win_name) {
    namedWindow(win_name, WINDOW_AUTOSIZE);
    imshow(win_name, image);
    waitKey(0);
}
