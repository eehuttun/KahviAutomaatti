#ifndef MACHINESTATE_H
#define MACHINESTATE_H

class CoffeeMachine;

class MachineState
{
    public:
        virtual void gotoCoffee(CoffeeMachine& c) = 0;
        virtual void gotoBeverage(CoffeeMachine& c) = 0;
        virtual void gotoMenu(CoffeeMachine& c) = 0;
        virtual void close(CoffeeMachine& c) = 0;
        virtual void printChoices(CoffeeMachine& c) = 0;
        virtual ~MachineState(){};
};

#endif // MACHINESTATE_H
