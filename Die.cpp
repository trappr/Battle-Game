#include "Die.hpp"

Die::Die()
{
    //ctor
}

Die::~Die()
{
    //dtor
}

int Die::d6()
{
    result = (rand() % 6) + 1;

    return result;
}

int Die::d10()
{
    result = (rand() % 10) + 1;

    return result;
}

int Die::d12()
{
    result = (rand() % 12) + 1;

    return result;
}
