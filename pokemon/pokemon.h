#pragma once
#include <iostream>
#include <string>
using namespace std;
enum Type{FLYING,DARK,ELECTRIC,GHOST};
 class pokemon{
    public:
     pokemon(string Name,Type Type);
     bool dodge();
     void decreaseHealth();
     void attack(pokemon & enemy);
     int getHealth();
     string getName();

    private:
     string name;
     int health;
     Type pokemonType;
 };