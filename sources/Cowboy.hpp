#ifndef COWBOY
#define COWBOY

#include "Character.hpp"
#include <iostream>

namespace ariel {
    class Cowboy : public Character{
        private:
            int num_of_bullets = 6;
            int health = 110;
        public:
            Cowboy(std::string name, Point& location);
            ~Cowboy()= default;
            bool hasboolets() const;
            bool isAlive() const override;
            double distance(const Character& other) const override;
            void reload();
            void hit(int hit) override;
            void shoot(Character* enemy);
            std::string getName() const override;
            Point getLocation() const override;
            int getHealth() const;
            std::string print() override;
        };
}
#endif
