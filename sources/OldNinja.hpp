#ifndef OLD_NINJA_HPP
#define OLD_NINJA_HPP

#include "Ninja.hpp"
#include <iostream>

namespace ariel {
    class OldNinja : public Ninja{
        private:
        public:
            OldNinja(std::string name, Point location);
            std::string getName() const override;
            Point getLocation() const override;
            std::string print() override;
            void move(const Character* enemy) override;
            void slash(const Character* enemy) override;
            bool isAlive() const override;
            double distance(const Character& other) const override;
            void hit(int hit_points) override;
    };
}

#endif
