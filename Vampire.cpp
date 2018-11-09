/*********************************************************************
** Program name: Vampire.cpp
** Author: Ryan Trapp
** Date: 10/28/2018
** Description: The following program implements methods defined in the header
** file "Vampire.hpp". The Vampire class is a child class of class Character and
** it holds attributes and functions specific for Vampire including specific attack
** and defense. It allows returns the various attributes in the class.
*********************************************************************/

#include "Vampire.hpp"

#include <iostream>
#include <limits>
#include <time.h>

Vampire::Vampire()
{
    name = "Vampire";
    armor = 1;
    strength = 18;
}

Vampire::~Vampire()
{
    //dtor
}

//Vampire gets one 1 12-sided die to roll for attack.
//Returns the total of the two rolls.
int Vampire::attack()
{
    int roll1;
    std::cout << "Attack roll is: ";
    roll1 = (rand() % 12) + 1;

    std::cout << roll1;
    std::cout << std::endl;
    return roll1;
}

//Defense function takes the total attack roll as a parameter,
//rolls one 6-sided die for defense and then calculates the result
//as the attack minus defense rolls minus the armor value.
//If charm is activated it overrides the opponent's attack
void Vampire::defense(int a)
{
    int roll1, result, damage;

    if (Charm())
    {
        std::cout << "Vampire casts Charm. Opponent does not attack." << std::endl;
    }

    else
    {
        std::cout << "Defense roll is: ";
        roll1 = (rand() % 6) + 1;

        std::cout << roll1;
        std::cout << std::endl;
        result = roll1;

        damage = a - result - armor;

        if (damage < 0)
        {
            damage = 0;
        }

        std::cout << "Total inflicted damage: " << damage << std::endl;
        strength = strength - damage;

        if (strength < 0)
        {
            strength = 0;
        }
    }
}

int Vampire::getStrength()
{
    return strength;
}

std::string Vampire::getName()
{
    return name;
}

//Charm rolls a two-sided die (50/50) and then returns a bool
bool Vampire::Charm()
{
    int charmRoll = 0;

    charmRoll = (rand() % 3);

    if (charmRoll == 1)
        return true;
    else
        return false;
}

int Vampire::getArmor()
{
    return armor;
}
