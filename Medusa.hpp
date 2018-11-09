#ifndef MEDUSA_HPP
#define MEDUSA_HPP

#include "Character.hpp"

#include <iostream>
#include <limits>
#include <time.h>
#include <stdlib.h>
#include <string>

class Medusa : public Character
{
    public:
        Medusa();
        virtual ~Medusa();
        int attack();
        void defense(int);
        int getStrength();
        void setStrength(int);
        int getArmor();
        std::string getName();

    protected:

    private:
};

#endif // MEDUSA_HPP
