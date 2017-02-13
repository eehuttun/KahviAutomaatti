#ifndef COFFEESTATE_H
#define COFFEESTATE_H
#include "MachineState.h"
class CoffeeMachine;

class CoffeeState: public MachineState
{
    public:
        void gotoCoffee(CoffeeMachine& c);
        void gotoBeverage(CoffeeMachine& c);
        void gotoMenu(CoffeeMachine& c);
        void close(CoffeeMachine& c);
        void printChoices(CoffeeMachine& c);
};

#endif // COFFEESTATE_H
