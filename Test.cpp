#include "doctest.h"
#include <sstream>
#include <iostream>

#include "sources/Team.hpp"

using namespace ariel;

TEST_CASE("Point test")
{
    Point a(1.5,3) ,b(4.75,98);
    CHECK(a.distance(b)==95.06);
    CHECK(a.distance(b)==b.distance(a));
}
TEST_CASE("Charecter creation and hit test")
{
    Point a(1.5,3) ,b(4.75,98);
    Character c1("c1",a,50);
    Character c2("c2",b,100);
    CHECK(c1.distance(c2)==c2.distance(c1));
    CHECK(c2.distance(c1)==95.06);
    c1.hit(30);
    CHECK(c1.isAlive());
    c1.hit(20);
    CHECK_FALSE(c1.isAlive());
}
TEST_CASE("Cowboy vs cowboy test")
{
    Point a(1.5,3) ,b(4.75,98);
    Cowboy cowboy_a("Jhon",a);
    Cowboy cowboy_b("Peter",b);
    cowboy_a.shoot(&cowboy_b);
    CHECK(cowboy_b.isAlive());
    for (size_t i = 0; i < 5; i++)
    {
        cowboy_a.shoot(&cowboy_b);
    }
    CHECK_EQ(cowboy_b.getHealth(),50);
    CHECK_FALSE(cowboy_a.hasboolets());
    cowboy_a.reload();
    CHECK(cowboy_a.hasboolets());
    for (size_t i = 0; i < 4; i++)
    {
        cowboy_a.shoot(&cowboy_b);
    }
    CHECK_EQ(cowboy_b.getHealth(),10);
    CHECK(cowboy_b.isAlive());
    cowboy_a.shoot(&cowboy_b);
    CHECK_FALSE(cowboy_b.isAlive());
    CHECK_EQ(cowboy_b.getHealth(),0);
}
TEST_CASE("Cowboy vs ninja test")
{
    Point a(1.5,3) ,b(4.75,3);
    Cowboy cowboy("Jhon",a);
    TrainedNinja ninja("Peter",b);
    CHECK(cowboy.distance(ninja)>1);
    for (size_t i = 0; i < 20; i++)
    {
        ninja.slash(&cowboy);
    }
    CHECK(cowboy.isAlive());
    ninja.move(&cowboy);
    CHECK(cowboy.distance(ninja)==0);
    for (size_t i = 0; i < 20; i++)
    {    
        ninja.slash(&cowboy);
        cowboy.shoot(&ninja);
    }
    CHECK_FALSE(cowboy.isAlive());
    CHECK(ninja.isAlive());
}
TEST_CASE("Cowboy vs ninja test")
{
    
}