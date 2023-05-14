/**
 * Demo file for the exercise on binary tree
 *
 * @author Evgeny Hershkovitch Neiterman
 * @since 2023-03
 */

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>
using namespace std;

#include "sources/Team.hpp" //no need for other includes

using namespace ariel;


int main() {
   Point d(1.5,3) ,e(4.75,3);
    Point a(2,2),b(1,90),c(1,100);
    Point().moveTowards(e,d,8);
    cout<<d.print();
    assert(a.distance(b) == b.distance(a));
    b.setY(81);
    Cowboy *tom = new Cowboy("Tom", a);
    TrainedNinja *sushi = new TrainedNinja("sushi",b);
    Character *cha = new Character("achiya",c,100);
    cout<<sushi->getName()<<endl<<sushi->isAlive()<<endl;
    sushi->hit(99);
    cout<<sushi->print()<<endl<<sushi->isAlive()<<endl<<sushi->getLocation().print()<<endl;
    sushi->move(tom);
    tom->shoot(*sushi);
    sushi->move(tom);
    sushi->slash(tom);
    Team team_A(tom); 
    team_A.add(new TrainedNinja("Yogi", Point(64,57)));

    // Team b(tom); should throw tom is already in team a

     Team team_B(tom);
     team_B.add(new TrainedNinja("Hikari", Point(12,81)));


     while(team_A.stillAlive() > 0 && team_B.stillAlive() > 0){
        team_A.attack(&team_B);
        team_B.attack(&team_A);
        team_A.print();
        team_B.print();
     }

     if (team_A.stillAlive() > 0) cout << "winner is team_A" << endl;
     else cout << "winner is team_B" << endl;

     return 0; // no memory issues. Team should free the memory of its members. both a and b teams are on the stack. 

}
