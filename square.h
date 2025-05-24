#ifndef SQUARE_H
#define SQUARE_H

#include "rectangle.h"
#include <string>

class Square : public Rectangle {
public:
    Square(double side);
    std::string ToString() const;

    // 1. What happened when you removed the Rectangle::ToString()?
    // Answer: The program still runs, but it doesn't show the rectangle's info anymore.

    // 2. Could you print _width only in Square? Why or why not?
    // Answer: Yes, because _width is protected in Rectangle, so Square can access it.

    // 3. What happened when you removed the Rectangle constructor call?
    // Answer: It gave an error. Rectangle needs a constructor with values, but Square didn’t call it.
};

#endif
