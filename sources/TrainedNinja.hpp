#ifndef TRAINED_NINJA_HPP
#define TRAINED_NINJA_HPP

#include "Ninja.hpp"
#include <iostream>
using namespace std;

namespace ariel {
    class TrainedNinja : public Ninja{
        private:
        public:
            TrainedNinja(const string name, const Point location);
            string getName() const override;
            Point getLocation() const override;
            std::string print() override;
            void slash(const Character* character) override;
            void move(const Character* character) override;
            bool isAlive() const override;
            double distance(const Character& other) const override;
            void hit(int num) override;
    };
}

#endif
