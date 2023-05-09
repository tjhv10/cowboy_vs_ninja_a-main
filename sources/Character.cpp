#include "Character.hpp"
#include <iostream>

using namespace ariel;
using namespace std;

Character::Character(string name, Point& location, int hit_points):name(name) , location(location), hit_points(hit_points){ }

Point Character::getLocation() const{
    return Point();
}
double Character::distance(const Character& other) const{
    return 0;
}
string Character::print(){
    return "";
}         
void Character::hit(int num){

}
bool Character::isAlive() const{
    return true;
}
string Character::getName() const{
    return this->name;
}

