#include <stdio.h>
#include <opencv2/opencv.hpp>
#include <iostream>
#include <cmath>
#include "operations.h"

using namespace cv;

void find_perimeter_mat(int** perimeter, int** region, cv::Mat &mat, int threshold);

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

    imwrite(argv[5], imageCopyRegion);

    return 0;
}

void find_perimeter_mat(int** perimeter, int** region, cv::Mat &mat, int threshold) {
    int nRows = mat.rows;
    int nCols = mat.cols;
    int topBorder = 0;
    int bottomBorder = 0;
    for (int i = 0; i < nRows; i ++)
	{
	    Vec3b *node;
	    node = mat.ptr<Vec3b>(i);
	    for (int j = 0; j < nCols; j ++)
		{
		    if (region[i][j] == 1 && i > 0 && i < nRows && j > 0 && j < nCols)
		    	{
			    int countLeft = 0;
			    int countRight = 0;
			    int countTop = 0;
			    int countBottom = 0;
			    for (int t = 0; t <= threshold; t++)
				{
				    if (i > (t + 1) && region[i - (t + 1)][j] == 1)
				        countLeft ++;
				    if (i < nRows - (t + 1) && region[i + (t + 1)][j] == 1)
				        countRight ++;
				    if (j > (t + 1) && region[i][j - (t + 1)] == 1)
				        countBottom ++;
				    if (j < nCols - (t + 1) && region[i][j + (t + 1)] == 1)
				        countTop ++;
				    
				}
			    if (countLeft == 0 || countRight == 0 || countBottom == 0 || countTop == 0)
			    	{
				    perimeter[i][j] = 1;
				    node[j][0] = 255;
				    node[j][1] = 0;
				    node[j][2] = 0;
				}
		        }
		}
	}
}




