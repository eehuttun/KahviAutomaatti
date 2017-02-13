#ifndef MENUSTATE_H
#define MENUSTATE_H
#include "MachineState.h"
class CoffeeMachine;

class MenuState: public MachineState
{
     public:
        void gotoCoffee(CoffeeMachine& c);
        void gotoBeverage(CoffeeMachine& c);
        void gotoMenu(CoffeeMachine& c);
        void close(CoffeeMachine& c);
        void printChoices(CoffeeMachine& c);
};

#endif // MENUSTATE_H
