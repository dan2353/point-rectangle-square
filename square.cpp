#include "square.h"
#include <sstream>
#include <string>
using namespace std;

Square::Square(double side) : Rectangle(Point(0, 0), side, side) {}

string Square::ToString() const {
    ostringstream out;
    out << "This is a square. " << Rectangle::ToString();
    return out.str();
}
