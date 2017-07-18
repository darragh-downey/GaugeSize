//
// Created by Darragh Downey on 17/7/17.
//

#ifndef GAUGESIZE_DETECT_REFERENCE_OBJ_H
#define GAUGESIZE_DETECT_REFERENCE_OBJ_H

#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

class detect_reference_obj {
private:
    int detect(int width, int height, int FrameData[], int pixels[]);

};


#endif //GAUGESIZE_DETECT_REFERENCE_OBJ_H
