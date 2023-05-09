#ifndef YOUNG_NINJA_HPP
#define YOUNG_NINJA_HPP

#include "Ninja.hpp"
#include <iostream>

namespace ariel
{
    class YoungNinja : public Ninja
    {
    private:
    public:
        YoungNinja(std::string name, Point location);
        std::string getName() const override;
        Point getLocation() const override;
        std::string print() override;
        void slash(const Character *character) override;
        void move(const Character *character) override;
        bool isAlive() const override;
        double distance(const Character &other) const override;
        void hit(int hit_points) override;
    };
}

#endif
