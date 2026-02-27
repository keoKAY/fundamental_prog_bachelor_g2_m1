#include <iostream>
using namespace std;
struct Worker
{
    int id;
    string name;
    string gender;
    float salary;
    Worker() {}
    // this
    Worker(int id, string name, string gender, float salary)
    {
        this->id = id;
        this->name = name;
        this->gender = gender;
        this->salary = salary;
    }

    void input()
    {
        cout << "Enter worker id: ";
        cin >> id;
        cin.ignore();
        cout << "Enter worker name: ";
        getline(cin, name);
        cout << "Enter gender: ";
        cin >> gender;
        cout << "Enter salary: ";
        cin >> salary;
    }

    void output()
    {
        cout << id << "-" << name << "-" << gender << "-" << salary << endl;
    }
};

// helper functions
void display(Worker workers[], int n)
{
    if (n == 0)
    {
        cout << "No info to display " << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            workers[i].output();
        }
    }
}
int search(Worker workers[], int n)
{
    int searchId;
    cout << "Enter ID to search: ";
    cin >> searchId;
    for (int i = 0; i < n; i++)
    {
        if (workers[i].id == searchId)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    system("clear");
    int n;
    cout << "Enter worker capacity: ";
    cin >> n;

    Worker workerList[n];
    int counter = 0;
    int option;
    do
    {
        cout << "------------[ Worker program]---------" << endl;
        cout << "1. Add new worker " << endl;
        cout << "2. Search worker " << endl;
        cout << "3. Delete worker " << endl;
        cout << "4. Show Workers " << endl;
        cout << "5. Update Workers" << endl;
        cout << "6. Exit  " << endl;
        cout << ">>> Choose option 1-6: ";
        cin >> option;

        switch (option)
        {
        case 1:
        {
            if (counter >= n)
            {
                cout << "Capacity is full ! " << endl;
            }
            else
            {
                Worker worker;
                worker.input();
                workerList[counter] = worker;
                counter++;
            }
        }
        break;
        case 2:
        {
            // search worker first
            // if exists -> update
            // else -> not found
            if (counter == 0)
            {
                cout << "Workers is empty! No data to search" << endl;
                break;
            }
            int index = search(workerList, counter);
            if (index == -1)
            {
                cout << "Result not found! "
                     << endl;
            }
            else
            {
                workerList[index].output();
            }
        }
        break;
        case 3:
            break;
        case 4:
        {
            display(workerList, counter);
        }
        break;
        case 5:
            break;
        case 6:
            cout << "Exit from the program " << endl;
            break;
        }
    } while (option != 6);
    return 0;
}