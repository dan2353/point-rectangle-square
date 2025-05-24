#include "point.h"

Point::Point() : _x(0), _y(0) {}

Point::Point(double x, double y) : _x(x), _y(y) {}

double Point::GetX() const {
    return _x;
}

double Point::GetY() const {
    return _y;
}
