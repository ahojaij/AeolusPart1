#include <stdio.h>
#include <opencv2/opencv.hpp>
#include <iostream>
#include <cmath>

using namespace cv;

void flood_fill_mat(int** changedPixels, cv::Mat &mat, int xPixel, int yPixel, uchar *targetColor, uchar *replacementColor, int colorThreshold) {
    // perform flood_fill on the image
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
		return;
	    if (std::abs(node[yPixel][0] - targetColor[0]) > colorThreshold || std::abs(node[yPixel][1] - targetColor[1]) > colorThreshold || std::abs(node[yPixel][2] - targetColor[2]) > colorThreshold)
		return;
	    node[yPixel][0] = replacementColor[0];
	    node[yPixel][1] = replacementColor[1];
	    node[yPixel][2] = replacementColor[2];
	    changedPixels[xPixel][yPixel] = 1;
	    if (yPixel > 0)
	    	flood_fill_mat(changedPixels, mat, xPixel, yPixel - 1, targetColor, replacementColor, colorThreshold);	    
	    if (yPixel < nCols - 1)
	    	flood_fill_mat(changedPixels, mat, xPixel, yPixel + 1, targetColor, replacementColor, colorThreshold);
	    if (xPixel > 0)
	    	flood_fill_mat(changedPixels, mat, xPixel - 1, yPixel, targetColor, replacementColor, colorThreshold);
	    if (xPixel < nRows - 1)
	    	flood_fill_mat(changedPixels, mat, xPixel + 1, yPixel, targetColor, replacementColor, colorThreshold);
        }
    }
    return;
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
			    // threshold parameter helps remove outliers
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

void show_mat(const cv::Mat &image, std::string const &win_name) {
    namedWindow(win_name, WINDOW_AUTOSIZE);
    imshow(win_name, image);
    waitKey(0);
}
