#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "point.h"
#include <string>

class Rectangle { 
protected:
    Point _upperLeft;
    double _width;
    double _height;

public:
    Rectangle();
    Rectangle(Point upperLeft, double width, double height);
    double Area() const;
    double Perimeter() const;
    virtual std::string ToString() const;
};

#endif
