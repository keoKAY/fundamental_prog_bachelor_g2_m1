#include <iostream>
using namespace std;
int main()
{
    system("clear");
    int option;

    do
    {
        cout << "==========<<Menu>>=========" << endl;
        cout << "1. Salary Finder Program" << endl;
        cout << "2. Money Exchange Program" << endl;
        cout << "3. Calculator Program" << endl;
        cout << "4. Exit " << endl;

        cout << ">> Choose your option(1-4): ";
        cin >> option;

        switch (option)
        {
        case 1:
        {
            string name;
            char gender;
            float hours, wages, salary;

            cout << "\n ---------[Salary Finder]-------------" << endl;
            cout << "Enter worker name: ";
            cin.ignore(); 
            getline(cin,name); 
            // cin >> name;
            cout << "Enter gender: ";
            cin >> gender;
            cout << "Enter working hours (hrs): ";
            cin >> hours;
            cout << "Enter wage($): ";
            cin >> wages;

            salary = hours * wages;
            cout << "\n -----------[OUTPUT]---------------" << endl;
            cout << "Name is : " << name << endl;
            cout << "Gender is : " << gender << endl;
            cout << "Hours : " << hours << "hrs" << "  Wage : " << wages << "$" << endl;
            cout << "Salary is : " << salary << "$" << endl;
            break;
        }
        case 2:
        {
            cout << "------------[Money Exchange ]------------" << endl;
            // 1. Exchange from USD -> KHR
            // 2. Exchange from KHR -> USD
            // rate = 4000 riels
            break;
        }
        case 3:
        {
            // Calculator (+,-,*,/)
            // enter a , b 
            // choose the operators for the calculation!!
            
            break;
        }
            case 4:
            cout << "Exit from the program! "
                 << endl;
            break;
        default:
            cout << "Invalid option! Try again from 1-4"
                 << endl;
            break;
        }
    } while (option != 4);
    return 0;
}