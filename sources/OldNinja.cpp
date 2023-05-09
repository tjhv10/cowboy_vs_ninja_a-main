#include "OldNinja.hpp"

using namespace ariel;
using namespace std;
OldNinja::OldNinja(string name, Point location) : Ninja(name, location, 150, 8){

}
string OldNinja::getName() const {
    return "";
}

Point OldNinja::getLocation() const {
    return Point();
}

string OldNinja::print() {
    return "";
}
void OldNinja::move(const Character* enemy){

}
void OldNinja::slash(const Character* enemy) {

}
bool OldNinja::isAlive() const {
    return false;
}
double OldNinja::distance(const Character& other) const {
    return 0;
}
void OldNinja::hit(int hit_points){

}