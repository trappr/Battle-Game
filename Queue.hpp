#ifndef QUEUE_HPP
#define QUEUE_HPP

#include "Character.hpp"

class Queue
{
    public:
        Queue();
        ~Queue();
        bool isEmpty();
        void addBack(int);
        int getFront();
        void removeFront();
        void printQueue();

    protected:
        Character* head;

    private:
};

#endif // QUEUE_HPP
