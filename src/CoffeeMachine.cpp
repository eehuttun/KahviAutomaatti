#include "CoffeeMachine.h"
#include "MenuState.h"
#include "CoffeeState.h"
#include "BeverageState.h"

CoffeeMachine::CoffeeMachine()
{
    msMenu = new MenuState();
    msBeverage = new BeverageState();
    msCoffee = new CoffeeState();
    msCurrent = msMenu;
}

CoffeeMachine::~CoffeeMachine()
{
   delete msMenu;
   delete msBeverage;
   delete msCoffee;
}

void CoffeeMachine::chooseMenu()
{
    msCurrent->gotoMenu(*this);
}
void CoffeeMachine::chooseCoffee()
{
    msCurrent->gotoCoffee(*this);
}
void CoffeeMachine::chooseBeverage()
{
    msCurrent->gotoBeverage(*this);
}
void CoffeeMachine::chooseClose()
{
    msCurrent->close(*this);
}
void CoffeeMachine::setPaySum(double num)
{
    pay_sum = num;
}
void CoffeeMachine::addToPaySum(double num)
{
    pay_sum += num;
}
double CoffeeMachine::getPaySum() const
{
    return pay_sum;
}
void CoffeeMachine::changeState(int to)
{
    switch(to) {
		case MENU:
		msCurrent = msMenu;
		break;

		case COFFEE:
		msCurrent = msCoffee;
		break;

		case BEVERAGE:
		msCurrent = msBeverage;
		break;
	}
}
void CoffeeMachine::printStateChoices()
{
    msCurrent->printChoices(*this);
}
