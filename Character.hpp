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
        virtual std::string getName() = 0;
        virtual int getArmor();
        virtual Character* getNext();
        virtual void setNext(Character*);
        virtual Character* getPrev();
        virtual void setPrev(Character*);

    protected:
        std::string name;
        int armor;
        int strength;
        Character* next;
        Character* prev;

    private:
};

#endif // CHARACTER_HPP
