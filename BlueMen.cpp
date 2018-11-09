/*********************************************************************
** Program name: BlueMen.cpp
** Author: Ryan Trapp
** Date: 10/28/2018
** Description: The following program implements methods defined in the header
** file "BlueMen.hpp". The BlueMen class is a child class of class Character and
** it holds attributes and functions specific for BlueMen including specific attack
** and defense. It allows returns the various attributes in the class.
*********************************************************************/

#include "BlueMen.hpp"

#include <iostream>
#include <limits>
#include <time.h>

BlueMen::BlueMen()
{
    name = "Blue Men";
    armor = 3;
    strength = 12;
}

BlueMen::~BlueMen()
{
    //dtor
}

//Blue Men gets two 10-sided die to roll for attack.
//Returns the total of the two rolls.
int BlueMen::attack()
{
    int roll1, roll2;
    std::cout << "Attack roll is: ";
    roll1 = (rand() % 10) + 1;

    std::cout << roll1 << " ";

    roll2 = (rand() % 10) + 1;

    std::cout << roll2;
    std::cout << std::endl;
    return (roll1 + roll2);
}

//Defense function takes the total attack roll as a parameter,
//rolls three 6-sided die for defense and then calculates the result
//as the attack minus defense rolls minus the armor value
//For every 4 strength points that are lost, one die is removed
void BlueMen::defense(int a)
{
    int roll1, roll2, roll3, result, damage;
    std::cout << "Defense roll is: ";
    if (strength > 8)
    {
        roll1 = (rand() % 6) + 1;

        std::cout << roll1 << " ";

        roll2 = (rand() % 6) + 1;

        std::cout << roll2 << " ";

        roll3 = (rand() % 6) + 1;

        std::cout << roll3;

        result = (roll1 + roll2 + roll3);
    }

    if (strength > 4 && strength <= 8)
    {
        roll1 = (rand() % 6) + 1;

        std::cout << roll1 << " ";

        roll2 = (rand() % 6) + 1;

        std::cout << roll2 << " ";

        result = (roll1 + roll2);
    }

    if (strength <= 4)
    {
        roll1 = (rand() % 6) + 1;

        std::cout << roll1 << " ";

        result = roll1;
    }
    std::cout << std::endl;

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

int BlueMen::getStrength()
{
    return strength;
}

std::string BlueMen::getName()
{
    return name;
}

int BlueMen::getArmor()
{
    return armor;
}
