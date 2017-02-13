#include <iostream>
#include "BeverageState.h"
#include "CoffeeMachine.h"
using namespace std;

void BeverageState::gotoCoffee(CoffeeMachine& c)
{
    c.changeState(CoffeeMachine::COFFEE);
}
void BeverageState::gotoBeverage(CoffeeMachine& c)
{
    cout << "Olet jo 'Muut kuumat juomat'-valikossa." << endl;
}
void BeverageState::gotoMenu(CoffeeMachine& c)
{
    c.changeState(CoffeeMachine::MENU);
}
void BeverageState::close(CoffeeMachine& c)
{
    c.changeState(CoffeeMachine::MENU);
}

void BeverageState::printChoices(CoffeeMachine& c)
{
    cout << "Valitse muu kuuma juoma:" << endl;
    cout << "1. Kuuma vesi 1.0 euroa" << endl;
    cout << "2. Haudutettu tee 1.50 euroa" << endl;
    cout << "3. Kaakao 2.50 euroa" << endl;
    cout << "4. Peruuta" << endl;
}
