#include "rectangle.h"
#include <sstream>
using namespace std;

Rectangle::Rectangle() : _upperLeft(Point(0, 0)), _width(0), _height(0) {}

Rectangle::Rectangle(Point upperLeft, double width, double height)
    : _upperLeft(upperLeft), _width(width), _height(height) {}

double Rectangle::Area() const {
    return _width * _height;
}

double Rectangle::Perimeter() const {
    return 2 * (_width + _height);
}

std::string Rectangle::ToString() const {
    ostringstream out;
    out << "UpperLeft: (" << _upperLeft.GetX() << ", " << _upperLeft.GetY() << ") ";
    out << "Width: " << _width << " Height: " << _height;
    return out.str();
}
