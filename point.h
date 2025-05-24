#ifndef POINT_H
#define POINT_H

class Point {
private:
    double _x;
    double _y;

public: 
    Point();
    Point(double x, double y);
    double GetX() const;
    double GetY() const;
};

#endif
