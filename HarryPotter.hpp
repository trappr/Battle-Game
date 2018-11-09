#ifndef HARRYPOTTER_HPP
#define HARRYPOTTER_HPP

#include "Character.hpp"

#include <iostream>
#include <limits>
#include <time.h>
#include <stdlib.h>
#include <string>

class HarryPotter : public Character
{
    public:
        HarryPotter();
        virtual ~HarryPotter();
        int attack();
        void defense(int);
        void Hogwarts();
        int getStrength();
        void setStrength(int);
        int getArmor();
        std::string getName();

    protected:

    private:
        bool lives;
};

#endif // HARRYPOTTER_HPP
