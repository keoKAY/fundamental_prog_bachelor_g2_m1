#include <iostream>
using namespace std;

int main()
{
    system("clear");
    int option;
    cout << "\n =======<MENU>========" << endl;
    cout << "1. Fried Rice " << endl;
    cout << "2. Chicken Rice " << endl;
    cout << "3. Water " << endl;

    cout << "-> Choose your option(1-3): ";
    cin >> option;

    switch (option)
    {
    case 1:
        cout << "You choose option 1=Fried Rice " << endl;
        break;
    case 2:
        cout << "You choose option 2= Chicken Rice" << endl;
        break;
    case 3:
        cout << "You chose option 3: Water "
             << endl;
        break;
    default:
        cout << "Invalid option! Choose again from 1 - 3  "
             << endl;
        break;
    }
    return 0;
}