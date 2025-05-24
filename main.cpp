#include <iostream>
#include "square.h"

int main() {
    Square s(5.0);
    std::cout << s.ToString() << std::endl;
    std::cout << "Area: " << s.Area() << std::endl;
    std::cout << "Perimeter: " << s.Perimeter() << std::endl;
    return 0;
}
