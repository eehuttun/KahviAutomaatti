#include <iostream>
#include <string>
#include <vector>
#include "CoffeeMachine.h"
using namespace std;

int main() {

    int valitsin = 0;
    int state = 1;
    vector<string> juomat;
    CoffeeMachine Kahviautomaatti;
    do {
        //Tulostaa tilan valikon esim. alussa tila on MenuState ja funktio tulostaa paavalikon
        Kahviautomaatti.printStateChoices();
        cin >> valitsin;
        while(cin.fail())
        {
            cin.clear();
            cin.ignore(256, '\n');
            cout << "Virheellinen syote! Anna numero: ";
            cin >> valitsin;
        }
        switch(state)
        {
        //Paavalikko (MenuState)
        case 1:
        {
            switch(valitsin)
            {
            case 1:
                Kahviautomaatti.chooseCoffee();
                state = 2;
                break;
            case 2:
                Kahviautomaatti.chooseBeverage();
                state = 3;
                break;
            case 3:
                if(Kahviautomaatti.getPaySum() == 0.0)
                {
                    Kahviautomaatti.chooseClose();
                    valitsin = 0;
                    break;
                }
                Kahviautomaatti.setPaySum((double)0.0);
                cout << "Tilauksesi: ";
                while(!juomat.empty())
                {
                    cout << juomat.back();
                    if(juomat.size() == 2)
                    {
                        cout << " ja ";
                    }
                    else if(juomat.size() == 1)
                    {
                        //do nothing
                    }
                    else
                    {
                        cout << ", ";
                    }
                    juomat.pop_back();
                }
                cout << endl;
                break;
            case 4:
                if(Kahviautomaatti.getPaySum() == 0.0)
                {
                    cout << "Vain numerot 1-3 kelpaavat." << endl;
                    break;
                }
                Kahviautomaatti.chooseClose();
                valitsin = 0;
                break;
            default:
                cout << "Vain numerot 1-3 kelpaavat." << endl;
                break;
            }
        break;
        }
        //Kahvivalikko (CoffeeState)
        case 2:
        {
            switch(valitsin)
            {
            case 1:
                juomat.push_back("Pieni kahvi");
                Kahviautomaatti.addToPaySum(1.5);
                Kahviautomaatti.chooseMenu();
                state = 1;
                break;
            case 2:
                juomat.push_back("Iso kahvi");
                Kahviautomaatti.addToPaySum(2.0);
                Kahviautomaatti.chooseMenu();
                state = 1;
                break;
            case 3:
                juomat.push_back("Espresso");
                Kahviautomaatti.addToPaySum(2.5);
                Kahviautomaatti.chooseMenu();
                state = 1;
                break;
            case 4:
                juomat.push_back("Latte");
                Kahviautomaatti.addToPaySum(3.0);
                Kahviautomaatti.chooseMenu();
                state = 1;
                break;
            case 5:
                Kahviautomaatti.chooseClose();
                state = 1;
                break;
            default:
                cout << "Vain numerot 1-5 kelpaavat." << endl;
            }
        break;
        }
        //Muut juomat -valikko (BeverageState)
        case 3:
        {
            switch(valitsin)
            {
            case 1:
                juomat.push_back("Kuuma vesi");
                Kahviautomaatti.addToPaySum(1.0);
                Kahviautomaatti.chooseMenu();
                state = 1;
                break;
            case 2:
                juomat.push_back("Haudutettu tee");
                Kahviautomaatti.addToPaySum(1.5);
                Kahviautomaatti.chooseMenu();
                state = 1;
                break;
            case 3:
                juomat.push_back("Kaakao");
                Kahviautomaatti.addToPaySum(2.5);
                Kahviautomaatti.chooseMenu();
                state = 1;
                break;
            case 4:
                Kahviautomaatti.chooseClose();
                state = 1;
                break;
            default:
                cout << "Vain numerot 1-4 kelpaavat." << endl;
            }
        break;
        }
        }
    } while(valitsin != 0);

    return 0;
}
