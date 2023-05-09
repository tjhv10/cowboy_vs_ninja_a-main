#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>

namespace ariel { 
    class Point {
    private:
        double x; 
        double y; 
    public:
        Point();
        Point(double x_coor, double y_coor);
        ~Point() = default; 
        std::string print() const;
        Point moveTowards(Point& source, Point& destination, double distance) const;
        double distance(const Point& other) const;
    };
}

#endif
