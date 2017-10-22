#include <stdio.h>
#include <opencv2/opencv.hpp>
#include <iostream>
#include <cmath>
#include "operations.h"

using namespace cv;


int main(int argc, char **argv) {
    if (argc != 5) {
        printf("usage: FIND_REGION_Test <Image_Path> <X_Pixel_location> <Y_Pixel_location> <Color_Threshold>\n");
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
    uchar targetColor [3]; //  = {255, 255, 255};
    // targetColor is the color of pixel at target location
    targetColor[0] = node[atoi(argv[3])][0];
    targetColor[1] = node[atoi(argv[3])][1];
    targetColor[2] = node[atoi(argv[3])][2];   
    uchar replacementColor [] = {0, 0, 0};
//    int colorThreshold = atoi(argv[4]);


    // Create and initialize a matrix to represent contiguous pixels found to be similar
    int nRows = image.rows;
    int nCols = image.cols;
    int **region = new int *[nRows];
    for (int ii = 0; ii < nRows; ii ++)
	{
	    region[ii] = new int [nCols];
	    for (int jj = 0; jj < nCols; jj ++)
		{
		    region[ii][jj] = 0;
		}
	}


    cv::Mat imageCopyRegion = image.clone();
    flood_fill_mat(region, imageCopyRegion, atoi(argv[2]), atoi(argv[3]), targetColor, replacementColor, atoi(argv[4]));
    show_mat(imageCopyRegion, "Output");

    int **perimeter = new int *[nRows];
    for (int ii = 0; ii < nRows; ii ++)
	{
	    perimeter[ii] = new int [nCols];
	    for (int jj = 0; jj < nCols; jj ++)
		{
		    perimeter[ii][jj] = 0;
		}
	}
    cv::Mat imageCopyPerimeter = image.clone();
    find_perimeter_mat(perimeter, region, imageCopyRegion, 2);
    show_mat(imageCopyRegion, "OutputPerimeter");

    return 0;
}






