#include "YoungNinja.hpp"

using namespace ariel;
using namespace std;
YoungNinja::YoungNinja(string name, Point location): Ninja(name,location,100,14){

}
string YoungNinja::getName() const {
    return "";
}
Point YoungNinja::getLocation() const {
    return Point();
}
string YoungNinja::print() {
    return "";
}
void YoungNinja::slash(const Character* character) {
}
void YoungNinja::move(const Character* character){
}
double YoungNinja::distance(const Character& other) const {
    return 0;
}
bool YoungNinja::isAlive() const {
    return false;
}
void YoungNinja::hit(int hit_points){
}
