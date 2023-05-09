#include "Point.hpp"

using namespace ariel;
using namespace std;
Point::Point() : x(0), y(0) {

}
Point::Point(double x, double y): x(x), y(y){

}
double Point::distance(const Point& other) const{
    return 0;
}
string Point::print() const{
    return "";
}
Point Point::moveTowards(Point& start, Point& end, double dis) const{
    return Point();
}