#ifndef COFFEEMACHINE_H
#define COFFEEMACHINE_H
#include "MachineState.h"

class CoffeeMachine
{
    private:
        MachineState* msCurrent;
        MachineState *msMenu;
        MachineState *msCoffee;
        MachineState *msBeverage;
        double pay_sum;

    public:
        const static int COFFEE = 1;
        const static int BEVERAGE = 2;
        const static int MENU = 3;
        CoffeeMachine();
        virtual ~CoffeeMachine();
        void setPaySum(double num);
        void addToPaySum(double num);
        double getPaySum() const;
        void changeState(int to);
        void chooseCoffee();
        void chooseBeverage();
        void chooseMenu();
        void chooseClose();
        void printStateChoices();
};

#endif // COFFEEMACHINE_H
