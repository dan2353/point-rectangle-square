#include "square.h"
#include <sstream>

Square::Square(double side) : Rectangle(Point(0, 0), side, side) {}

std::string Square::ToString() const {
    std::ostringstream out;
    out << "This is a square. " << Rectangle::ToString();
    return out.str();
}
