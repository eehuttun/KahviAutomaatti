#include <iostream>
#include "CoffeeMachine.h"
#include "CoffeeState.h"
using namespace std;

void CoffeeState::gotoCoffee(CoffeeMachine& c)
{
    cout << "Olet jo kahvi-valikossa." << endl;
}
void CoffeeState::gotoBeverage(CoffeeMachine& c)
{
    cout << "'Muut kuumat juomat' -valikkoon paasee vain paavalikosta." << endl;
}
void CoffeeState::gotoMenu(CoffeeMachine& c)
{
    c.changeState(CoffeeMachine::MENU);
}
void CoffeeState::close(CoffeeMachine& c)
{
    c.changeState(CoffeeMachine::MENU);
}
void CoffeeState::printChoices(CoffeeMachine& c)
{
    cout << "Valitse kahvi:" << endl;
    cout << "1. Pieni kahvi 1.50 euroa" << endl;
    cout << "2. Iso kahvi 2 euroa" << endl;
    cout << "3. Espresso 2.50 euroa" << endl;
    cout << "4. Latte 3 euroa" << endl;
    cout << "5. Peruuta" << endl;
}
