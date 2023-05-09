#ifndef TEAM2_HPP
#define TEAM2_HPP

#include "Cowboy.hpp"
#include "OldNinja.hpp"
#include "TrainedNinja.hpp"
#include "YoungNinja.hpp"
#include <iostream>
#include <vector>

using namespace std;

namespace ariel {
    class Team2{
        private:
            vector<Character*> team; 
            Character* character_leader; 
        public:
            Team2(Character* character_leader);
            ~Team2()=default;
            void add(Character* character);
            void attack(Team2* enemy);
            bool stillAlive();
            std::string print();

    };
}
#endif
