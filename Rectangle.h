
/*
Name: Jordan Sowell, Diego Masella 
My Section: CPSC 1021
Date: 4/7/2025
Time: 2 minutes
Description: Header file for the rectangle class and the definition of getArea function
*/
#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "Shape.h"

template <typename TRectangle>
class Rectangle : public Shape<TRectangle>{
private:
    TRectangle length;
    TRectangle width;
public:
    Rectangle() : length(0), width(0){};
    Rectangle(TRectangle length, TRectangle width){
        this->length = length;
        this->width = width;
    }
    virtual TRectangle getArea(){
        TRectangle area;
        area = length*width;
        return area; 
    }
};

#endif
