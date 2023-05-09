#ifndef TEAM_HPP
#define TEAM_HPP

#include "Cowboy.hpp"
#include "TrainedNinja.hpp"
#include "YoungNinja.hpp"
#include "OldNinja.hpp"

#include <iostream>
#include <memory>
#include <vector>

namespace ariel {
    class Team{
        private:
            std::vector<std::unique_ptr<Character>> team; 
            Character* character_leader;
        public:
            Team(Character* leader);
            ~Team() = default;
            void attack(Team* enemy);
            void add(Character* character);
            std::string print() const;
            bool stillAlive() const;
    };
}

#endif
