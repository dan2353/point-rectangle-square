#include <iostream>
#include "square.h"
using namespace std;

int main() {
    Square s(5.0);
    cout << s.ToString() <<endl;
    cout << "Area: " << s.Area() <<endl;
    cout << "Perimeter: " << s.Perimeter() <<endl;
    return 0;
}
