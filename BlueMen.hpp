#ifndef BLUEMEN_HPP
#define BLUEMEN_HPP

#include "Character.hpp"

#include <iostream>
#include <limits>
#include <time.h>
#include <stdlib.h>
#include <string>

class BlueMen : public Character
{
    public:
        BlueMen();
        virtual ~BlueMen();
        int attack();
        void defense(int);
        int getStrength();
        void setStrength(int);
        int getArmor();
        std::string getName();

    protected:

    private:
};

#endif // BLUEMEN_HPP
