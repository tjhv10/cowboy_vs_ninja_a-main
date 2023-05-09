#include "Ninja.hpp"

using namespace ariel;
using namespace std;

Ninja::Ninja(string name, Point& location,int speed ,int hit_points): Character(name, location, hit_points) , speed(speed){
    
}
void Ninja::slash(const Character* enemy){

}
void Ninja::move(const Character* enemy){

}
bool Ninja::isAlive() const {
    return Character::isAlive();
}     
double Ninja::distance(const Character& other) const {
    return 0;
}       
void Ninja::hit(int hit_points) {
    
}
Point Ninja::getLocation() const {
    return Point();
}
string Ninja::getName() const {
    return "";
}
string Ninja::print() {
    return "";
}
