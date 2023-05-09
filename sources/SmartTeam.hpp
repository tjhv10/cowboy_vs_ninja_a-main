#ifndef SMART_TEAM_HPP
#define SMART_TEAM_HPP

#include "OldNinja.hpp"
#include "TrainedNinja.hpp"
#include "YoungNinja.hpp"
#include "Cowboy.hpp"

#include <iostream>
#include <vector>

using namespace std;

namespace ariel {
    class SmartTeam{
        private:
            Character* character_leader;
            vector<Character*> team; 
        public:
            SmartTeam(Character* leader);
            ~SmartTeam() = default;
            void add(Character* fighter);
            void attack(SmartTeam* enemyTeam);
            std::string print() const;
            int stillAlive() const;
    };
}

#endif
