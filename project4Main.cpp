/*********************************************************************
** Program name: project4Main.cpp
** Author: Ryan Trapp
** Date: 11/07/2018
** Description: The following program is a fantasy war game that pits two
** types of characters against each other. Each player rolls a certain number
** of dice, depending the character, to attack the other player's character until
** a player wins the match.
*********************************************************************/

#include "Menu.hpp"

#include <iostream>
#include <limits>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand (time(NULL));

    Menu* mainMenu = new Menu();
    int round = 1;

    do
    {

        std::cout << "Player 1: ";
        Character* p1 = mainMenu->select();
        std::cout << std::endl;
        std::cout << "Player 2: ";
        Character* p2 = mainMenu->select();

        std::cout << "Player 1: " << p1->getName() << std::endl;
        std::cout << "Player 2: " << p2->getName() << std::endl;

        while (p1->getStrength() > 0 && p2->getStrength() > 0)
        {
            std::cout << std::endl << "***Round: " << round << "***" << std::endl;
            std::cout << std::endl;
            std::cout << "Attacker: " << p1->getName() << std::endl;
            std::cout << "Defender: " << p2->getName() << "  --  " << "Armor: " << p2->getArmor() <<
            "  --  " "Strength Points: " << p2->getStrength() << std::endl;
            std::cout << std::endl;
            int attack1 = p1->attack();
            std::cout << std::endl;
            p2->defense(attack1);
            std::cout << "Player 2's strength point amount is: " << p2->getStrength() << std::endl;
            std::cout << std::endl;
            std::cout << "Attacker: " << p2->getName() << std::endl;
            std::cout << "Defender: " << p1->getName() << "  --  " << "Armor: " << p1->getArmor() <<
            "  --  " "Strength Points: " << p1->getStrength() << std::endl;
            int attack2 = p2->attack();
            std::cout << std::endl;
            p1->defense(attack2);
            std::cout << "Player 1's strength point amount is: " << p1->getStrength() << std::endl;

            round++;

        }

        delete p1;
        p1 = nullptr;
        delete p2;
        p2 = nullptr;

    } while (mainMenu->play());

    delete mainMenu;

}
