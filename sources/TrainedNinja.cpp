#include "TrainedNinja.hpp"

using namespace ariel;
using namespace std;

TrainedNinja::TrainedNinja(string name, Point location): Ninja(name,location,120,12){

}

void TrainedNinja::move(const Character* enemy){
}
void TrainedNinja::slash(const Character* enemy) {
}
bool TrainedNinja::isAlive() const {
    return false;
}
double TrainedNinja::distance(const Character& other) const {
    return 0;
}
void TrainedNinja::hit(int num) {
}
string TrainedNinja::getName() const {
    return "";
}
Point TrainedNinja::getLocation() const {
    return Point();
}
string TrainedNinja::print() {
    return "";
}