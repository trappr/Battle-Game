/*********************************************************************
** Program name: Character.cpp
** Author: Ryan Trapp
** Date: 10/28/2018
** Description: The following program calls methods defined in the header
** file "Character.hpp". The Character class is a base class that holds
** attributes that the derived classes inherit such as name, strength points, and armor.
** It also contains virtual functions attack and defense that are used in the combat scenarios.
*********************************************************************/

#include "Character.hpp"

#include <iostream>
#include <limits>
#include <time.h>

Character::Character()
{
    name = "NO NAME";
    next = nullptr;
    prev = nullptr;
}

Character::~Character()
{
    //dtor
}

int Character::attack()
{
    return 0;
}

void Character::defense(int d)
{

}

int Character::getStrength()
{
    return strength;
}

std::string Character::getName()
{
    return name;
}

int Character::getArmor()
{
    return armor;
}

Character* Character::getNext()
{
    return next;
}

void Character::setNext(Character* n)
{
    next = n;
}

Character* Character::getPrev()
{
    return prev;
}

void Character::setPrev(Character* p)
{
    prev = p;
}
