/*********************************************************************
** Program name: HarryPotter.cpp
** Author: Ryan Trapp
** Date: 10/28/2018
** Description: The following program implements methods defined in the header
** file "HarryPotter.hpp". The HarryPotter class is a child class of class Character and
** it holds attributes and functions specific for HarryPotter including specific attack
** and defense. It allows returns the various attributes in the class.
*********************************************************************/

#include "HarryPotter.hpp"

#include <iostream>
#include <limits>
#include <time.h>

HarryPotter::HarryPotter()
{
    name = "Harry Potter";
    armor = 0;
    strength = 10;
    lives = true;
}

HarryPotter::~HarryPotter()
{
    //dtor
}

//Harry Potter gets two 6-sided die to roll for attack.
//Returns the total of the two rolls.
int HarryPotter::attack()
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
void HarryPotter::defense(int a)
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

    if (strength <= 0 && lives)
    {
        Hogwarts();
    }

}

void HarryPotter::Hogwarts()
{
    if (lives)
    {
        std::cout << "HOGWARTS! Harry comes back to life and has 20 strength points." << std::endl;
        strength = 20;
        lives = false;
    }
}

int HarryPotter::getStrength()
{
    return strength;
}

std::string HarryPotter::getName()
{
    return name;
}

int HarryPotter::getArmor()
{
    return armor;
}
