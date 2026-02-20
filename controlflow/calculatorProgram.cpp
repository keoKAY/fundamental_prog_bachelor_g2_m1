#include <iostream>
using namespace std;
int main()
{
    system("clear");
    int a, b;
    float result = 0;
    char optr, option;
    do
    {
        system("clear"); 
        cout<<"------------[ Simple Calculator ]---------------"<<endl; 
        cout << "Enter value A : ";
        cin >> a;
        cout << "Enter value B : ";
        cin >> b;

        cout << "-> Choose ('+','-','*','/','%'): ";
        cin >> optr;

        switch (optr)
        {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / (float)b;
            break;
        case '%':
            result = a % b;
            break;
        default:
            cout << "Invalid operators ! Try again...!"
                 << endl;
            cout << "Only support ('+','-','*','/','%') "
                 << endl;
            break;
        }
        cout << "Result is : " << result << endl;
        cout << "\nType 'Y' to continue, 'N' or 'n' to exit ! " 
             << endl;
        cout << "==> Enter your choice: ";
        cin >> option;
    } while (option != 'N' && option != 'n');
    return 0;
}