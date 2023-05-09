#include "Cowboy.hpp"

using namespace ariel;
using namespace std;

Cowboy::Cowboy(string name, Point& location):Character(name , location , 110){ }

void Cowboy::shoot(Character* character){

}
void Cowboy::reload(){

}
bool Cowboy::isAlive() const {
    return false;
}
bool Cowboy::hasboolets() const {
    return false;
}
void Cowboy::hit(int hit) {
}

double Cowboy::distance(const Character& other) const {
    return 0;
}
Point Cowboy::getLocation() const {
    return Point();
}
int Cowboy::getHealth() const {
    return 0;
}
string Cowboy::getName() const {
    return "";
}
string Cowboy::print() {
    return "";
}
