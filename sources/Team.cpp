#include "Team.hpp"
using namespace ariel;
using namespace std;
Team::Team(Character* leader): character_leader(leader), team(){
}
void Team::add(Character* fighter){

}
void Team::attack(Team* enemyTeam){

}
bool Team::stillAlive() const{
    return false;
}
string Team::print() const{
    return "";
}