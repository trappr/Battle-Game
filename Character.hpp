#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <limits>
#include <time.h>
#include <stdlib.h>
#include <string>

class Character
{
    public:
        Character();
        virtual ~Character();
        virtual int attack();
        virtual void defense(int);
        virtual int getStrength();
        virtual std::string getName();
        virtual int getArmor();

    protected:
        std::string name;
        int armor;
        int strength;

    private:
};

#endif // CHARACTER_HPP
