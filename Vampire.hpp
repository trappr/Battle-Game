#ifndef VAMPIRE_HPP
#define VAMPIRE_HPP

#include "Character.hpp"

#include <iostream>
#include <limits>
#include <time.h>
#include <stdlib.h>
#include <string>

class Vampire : public Character
{
    public:
        Vampire();
        virtual ~Vampire();
        int attack();
        void defense(int);
        int getStrength();
        void setStrength(int);
        int getArmor();
        std::string getName();
        bool Charm();

    protected:

    private:
};

#endif // VAMPIRE_HPP
