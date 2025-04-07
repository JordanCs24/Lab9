#ifndef TRAPEZOID_H_
#define TRAPEZOID_H_

#include "Shape.h"

template <typename TTrapezoid>
class Trapezoid  : public Shape<TTrapezoid>{
private:
    TTrapezoid base1;
    TTrapezoid base2;
    TTrapezoid height;
public:
    Trapezoid() : base1(0), base2(0), height(0){};
    Trapezoid(TTrapezoid base1, TTrapezoid base2, TTrapezoid height){
        this-> base1 = base1;
        this->base2 = base2;
        this->height = height;
        }
    virtual TTrapezoid getArea(){
        double area = 0.5 * ((base1 + base2)* height);
    return area;
    }
};

#endif