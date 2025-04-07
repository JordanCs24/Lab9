/*
Name: Jordan Sowell, Diego Masella 
My Section: CPSC 1021
Date: 4/7/2025
Time: 2 minutes
Description: Header file for the Square class and the definition of getArea function
*/

#ifndef SQUARE_H_
#define SQUARE_H_

#include "Shape.h"
#include "math.h"
template<typename TSquare>
class Square : public Shape<TSquare>{
private:
    double side;
public:
    Square() : side(0){};
    Square(double side){
        this->side = side;
    }
    virtual TSquare getArea(){
        TSquare area = pow(side, 2.0);
        return area;
    }
};
#endif