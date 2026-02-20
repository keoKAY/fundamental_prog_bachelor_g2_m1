#include <iostream>
using namespace std;
void salaryFinder()
{
    string name;
    char gender;
    float hours, wages, salary;

    cout << "\n ---------[Salary Finder]-------------" << endl;
    cout << "Enter worker name: ";
    cin.ignore();
    getline(cin, name);
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
}
void menu(){
    cout << "==========<<Menu>>=========" << endl;
        cout << "1. Salary Finder Program" << endl;
        cout << "2. Money Exchange Program" << endl;
        cout << "3. Calculator Program" << endl;
        cout << "4. Exit " << endl;

        cout << ">> Choose your option(1-4): ";
}

void exchangeMoney(){
    // your code here 
}
void calculator(){
    // your code here 
}
int main()
{
    system("clear");
    int option;

    do
    {
        menu();
        cin >> option;

        switch (option)
        {
        case 1:
        {
            salaryFinder();
            break;
        }
        case 2:
        {
            exchangeMoney();
            break;
        }
        case 3:
        {
            calculator(); 
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