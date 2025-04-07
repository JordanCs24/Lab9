
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