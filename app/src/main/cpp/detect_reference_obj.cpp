//
// Created by Darragh Downey on 17/7/17.
//

#include "detect_reference_obj.h"

int detect_reference_obj::detect(int width, int height, int FrameData[], int pixels[]) {
    cv::Mat img; //= cv::imread(filename, 0);
    if(img.empty())
    {
        //std::cout << "can not open " << filename << std::endl;
        return -1;
    }
    cv::Mat cimg;
    cv::medianBlur(img, img, 5);
    cvtColor(img, cimg, cv::COLOR_GRAY2BGR);
    std::vector<cv::Vec3f> circles;
    HoughCircles(img, circles, cv::HOUGH_GRADIENT, 1, 10,
                 100, 30, 1, 30 // change the last two parameters
            // (min_radius & max_radius) to detect larger circles
    );
    for( size_t i = 0; i < circles.size(); i++ )
    {
        cv::Vec3i c = circles[i];
        circle( cimg, cv::Point(c[0], c[1]), c[2], cv::Scalar(0,0,255), 3, cv::LINE_AA);
        circle( cimg, cv::Point(c[0], c[1]), 2, cv::Scalar(0,255,0), 3, cv::LINE_AA);
    }
    imshow("detected circles", cimg);
}