# Sample code 
Example of using openCV to load and view images

## Requirements
- OpenCV 2.X
- CMake > 2.8

## Usage
    cmake .
    make
    region test1.png 50 50 10
    perimeter test1.png 50 50 10
    displayimage test1.png 50 50 10
    displaypixels test1.png 50 50 10
    savepixels test1.png 50 10 region.png perimeter.png

## Call format

<Command>    <Image_Path> <X_Pixel_location> <Y_Pixel_location> <Color_Threshold> <Output_Path_Region> <Output_Path_Perimeter>

## Notes
Don't put the <Color_Threshold> too high. Try maximum 10. I didn't restrict this in code just to be able to test more freely.



