#ifndef MENU_HPP
#define MENU_HPP

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>

#include "Character.hpp"
#include "Vampire.hpp"
#include "Barbarian.hpp"
#include "BlueMen.hpp"
#include "Medusa.hpp"
#include "HarryPotter.hpp"

class Menu
{
    public:
        Menu();
        ~Menu();
        Character* select();
        bool play();
        int intValidation();

    private:
        int choice;
};

#endif
