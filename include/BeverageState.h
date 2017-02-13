#ifndef BEVERAGESTATE_H
#define BEVERAGESTATE_H
#include "MachineState.h"

class CoffeeMachine;

class BeverageState : public MachineState
{
    public:
        void gotoCoffee(CoffeeMachine& c);
        void gotoBeverage(CoffeeMachine& c);
        void gotoMenu(CoffeeMachine& c);
        void close(CoffeeMachine& c);
        void printChoices(CoffeeMachine& c);
};

#endif // BEVERAGESTATE_H
