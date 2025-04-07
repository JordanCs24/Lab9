/*
Name: Jordan Sowell, Diego Masella 
My Section: CPSC 1021
Date: 4/7/2025
Time: 20 minutes
Description: 
*/
#include <iostream>
#include <iomanip>
#include "Shape.h"
#include "Square.h"
#include "Circle.h"
#include "Trapezoid.h"
#include "Rectangle.h"

using namespace std;

int main(){
    Circle<double> DCircle(2.0);
    Square<double>  DSquare(2.0);
    Rectangle<double> DRectangle(2.5,3.0);
    Trapezoid<double> DTrapezoid(2.5,.5,4.0);
    Circle<int> ICircle(2);
    Square<int> ISquare(2);
    Rectangle<int> IRectangle(2,3);
    Trapezoid<int> ITrapezoid(2,6,5);

//Displays the Shapes but with doubles
    cout << "Area of Circle is: " << DCircle.getArea() << endl;
    cout << "Area of Square is: " << DSquare.getArea() << endl;
    cout << "Area of Rectangle is: " << DRectangle.getArea() << endl;
    cout << "Area of Trapezoid is: " << DTrapezoid.getArea() << endl;
//Displays the Shapes but with integers
    cout << "Area of Circle is: " << ICircle.getArea() << endl;
    cout << "Area of Square is: " << ISquare.getArea() << endl;
    cout << "Area of Rectangle is: " << IRectangle.getArea() << endl;
    cout << "Area of Trapezoid is: " << ITrapezoid.getArea() << endl;

    return 0;
}