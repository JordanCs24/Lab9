#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "Shape.h"
#include <math.h>
#include <string>
using namespace std;
template<typename TCircle>
class Circle : public Shape<TCircle> {
private:
    TCircle radius;
    double const PI = 3.14;
public:
    Circle() : radius(1.0) {};
    Circle(TCircle theRadius) : radius(theRadius){}
    virtual TCircle getArea(){
        TCircle area = 0;
        area = PI * pow(radius,2.0);
        return area;
    }
};
#endif
