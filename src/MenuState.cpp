
#include <iostream>
#include "CoffeeMachine.h"
#include "MenuState.h"
using namespace std;

void MenuState::gotoCoffee(CoffeeMachine& c)
{
    c.changeState(CoffeeMachine::COFFEE);
}
void MenuState::gotoBeverage(CoffeeMachine& c)
{
    c.changeState(CoffeeMachine::BEVERAGE);
}
void MenuState::gotoMenu(CoffeeMachine& c)
{
    cout << "Olet jo paavalikossa." << endl;
}
void MenuState::close(CoffeeMachine& c)
{
    cout << "Suljetaan ohjelma..." << endl;
}
void MenuState::printChoices(CoffeeMachine& c)
{
    cout << "\nToiminto\n 1. Valitse kahvi" << endl;
	cout << " 2. Valitse muu kuuma juoma" << endl;
	if(c.getPaySum() != 0.0)
    {
        cout << " 3. Maksa ostokset: yhteensa " << c.getPaySum() << " euroa" << endl;
        cout << " 4. Lopeta" << endl;
    }
    else
    {
        cout << " 3. Lopeta" << endl;
    }
}
