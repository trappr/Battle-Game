/*********************************************************************
** Program name: Medusa.cpp
** Author: Ryan Trapp
** Date: 10/28/2018
** Description: The following program implements methods defined in the header
** file "Medusa.hpp". The Medusa class is a child class of class Character and
** it holds attributes and functions specific for Medusa including specific attack
** and defense. It allows returns the various attributes in the class.
*********************************************************************/

#include "Medusa.hpp"

#include <iostream>
#include <limits>
#include <time.h>

Medusa::Medusa()
{
    name = "Medusa";
    armor = 3;
    strength = 8;
}

Medusa::~Medusa()
{
    //dtor
}

//Medusa gets two 6-sided die to roll for attack.
//Returns the total of the two rolls.
//If two 6's are rolled, then Glare is called and attack
//equals 100.
int Medusa::attack()
{
    int roll1, roll2;
    std::cout << "Attack roll is: ";
    roll1 = (rand() % 6) + 1;

    std::cout << roll1 << " ";

    roll2 = (rand() % 6) + 1;

    std::cout << roll2;
    std::cout << std::endl;
    if (roll1 + roll2 == 12)
    {
        std::cout << "Medusa casts Glare" << std::endl;
        return 100;
    }

    else
    {
        return (roll1 + roll2);
    }

}

//Defense function takes the total attack roll as a parameter,
//rolls one 6-sided die for defense and then calculates the result
//as the attack minus defense rolls minus the armor value
void Medusa::defense(int a)
{
    int roll1, result, damage;
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

int Medusa::getStrength()
{
    return strength;
}

std::string Medusa::getName()
{
    return name;
}

int Medusa::getArmor()
{
    return armor;
}
