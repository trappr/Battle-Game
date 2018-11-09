/*********************************************************************
** Program name: Barbarian.cpp
** Author: Ryan Trapp
** Date: 10/28/2018
** Description: The following program implements methods defined in the header
** file "Barbarian.hpp". The Barbarian class is a child class of class Character and
** it holds attributes and functions specific for Barbarian including specific attack
** and defense. It allows returns the various attributes in the class.
*********************************************************************/

#include "Barbarian.hpp"

Barbarian::Barbarian()
{
    name = "Barbarian";
    armor = 0;
    strength = 12;

}

Barbarian::~Barbarian()
{
    //dtor
}

//Barbarian gets two 6-sided die to roll for attack.
//Returns the total of the two rolls.
int Barbarian::attack()
{
    int roll1, roll2;
    std::cout << "Attack roll is: ";
    roll1 = (rand() % 6) + 1;

    std::cout << roll1 << " ";

    roll2 = (rand() % 6) + 1;

    std::cout << roll2;
    std::cout << std::endl;
    return (roll1 + roll2);
}

//Defense function takes the total attack roll as a parameter,
//rolls two 6-sided die for defense and then calculates the result
//as the attack minus defense rolls minus the armor value
void Barbarian::defense(int a)
{
    int roll1, roll2, result, damage;
    std::cout << "Defense roll is: ";
    roll1 = (rand() % 6) + 1;

    std::cout << roll1 << " ";

    roll2 = (rand() % 6) + 1;

    std::cout << roll2;
    std::cout << std::endl;
    result = roll1 + roll2;

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

int Barbarian::getStrength()
{
    return strength;
}

std::string Barbarian::getName()
{
    return name;
}

int Barbarian::getArmor()
{
    return armor;
}
