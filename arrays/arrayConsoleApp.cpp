#include <iostream>
using namespace std;
// USERDEFINED TYPE 
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
    void update(){
        cout<<"Enter new name: "; 
        getline(cin, name); 
        cout<<"Enter new gender: "; 
        cin>>gender; 
        cout<<"Enter new salary: "; 
        cin>>salary; 
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
    cin.ignore();
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
        cout << "2. Search worker BY ID  " << endl;
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
            {
                int index = search(workerList,counter); 
                if(index==-1){
                    cout<<" Failed to delete, data doesn't exist "<<endl; 
                }else{
                    for(int i = index; i<counter -1 ; i++){
                        workerList[i] = workerList[i+1]; 
                    }
                    counter--; 
                    cout<<" ✅ Delete successfuly !"<<endl; 
                }
            }
            break;
        case 4:
        {
            display(workerList, counter);
        }
        break;
        case 5:
        {
            if(counter==0)
                cout<<"There is no data to update"<<endl; 
            else 
                {
                    int index = search(workerList, counter); 
                    if(index==-1){
                        cout<<" ❌ Result not found! \nCannot update the data"<<endl; 
                    }else{
                        Worker newWorker = workerList[index]; 
                        newWorker.update(); 
                        // add updated worker to the list 
                        workerList[index] = newWorker; 
                        cout<<" ✅ Updated successfully"<<endl;
                    }
                }
        }
            break;
        case 6:
            cout << "Exit from the program " << endl;
            break;
        }
    } while (option != 6);
    return 0;
}