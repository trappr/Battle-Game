#ifndef BARBARIAN_HPP
#define BARBARIAN_HPP

#include "Character.hpp"

#include <iostream>
#include <limits>
#include <time.h>
#include <stdlib.h>
#include <string>

class Barbarian : public Character
{
    public:
        Barbarian();
        virtual ~Barbarian();
        int attack();
        void defense(int);
        int getStrength();
        void setStrength(int);
        int getArmor();
        std::string getName();

    protected:

    private:
};

#endif // BARBARIAN_HPP
