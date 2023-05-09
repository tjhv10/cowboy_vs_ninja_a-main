#ifndef NINJA_HPP
#define NINJA_HPP

#include "Character.hpp"
#include <iostream>

namespace ariel {
    class Ninja : public Character{
        private:
            int speed;
        public:
            Ninja(std::string name, Point& location,int speed , int hit_points);
            ~Ninja() = default; 
            std::string getName() const override;
            Point getLocation() const override;
            std::string print() override;
            virtual void slash(const Character* enemy);
            virtual void move(const Character* enemy);
            double distance(const Character& other) const override;
            void hit(int hit_points) override;
            bool isAlive() const override;
                };
}

#endif
