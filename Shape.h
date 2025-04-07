
/*
Name: Jordan Sowell, Diego Masella 
My Section: CPSC 1021
Date: 4/7/2025
Time: 5 minutes
Description: Header file for the Abstract base class Shape
*/

#ifndef SHAPE_H
#define SHAPE_H
#include <string>
using namespace std;
template <typename TShape>
class Shape{
public:
    virtual TShape getArea() = 0; // implement getArea() as an abstract function

};
#endif