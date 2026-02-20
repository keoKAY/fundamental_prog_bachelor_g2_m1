#include<iostream>
using namespace std; 

// name, gender, hours, wage, bonus 
// create the program with struct 
// use it with loop to simulate a program 

// if hours >= 100 
// 40% bounus for male worker 
// 50% bonus for female worker 
struct Worker{
    string name, gender; 
    float hours,wage,bonus=0; 

    float findSalary(){
        return hours* wage; 
    }
    float getBonus(){
        return (hours>=100)?            (gender=="female")? 0.5:0.4
        :0; 
    }
    float findTotal(){
        return findSalary()+findSalary()*getBonus(); 
    }
    void input(){
        cout<<"--------------<<INPUT>>------------"<<endl; 
        cout<<"Enter name: "; getline(cin,name); 
        cout<<"Enter gender: "; cin>>gender; 
        cout<<"Enter hours: "; cin>>hours; 
        cout<<"Enter wage: "; cin>>wage; 
    }

    void output(){
         cout<<"--------------<<OUTPUT>>------------"<<endl; 
         cout<<"Worker Name: "<<name<<endl; 
         cout<<"Worker Gender: "<<gender<<endl; 
         cout<<"Worker data: hours = "
            <<hours<<"(hours) wage ="<<wage<<"$"<<endl; 
         cout<<"Bonus (%): "
            <<(getBonus()*100)<<endl; 
         cout<<"Original Salary: "
            <<findSalary()<<"$"<<endl; 
         cout<<"Total Salary: "
            <<findTotal()<<"$"<<endl; 
    }
};
int main(){
    system("clear"); 

    Worker worker1 ; 
    worker1.input(); 
    worker1.output();
    
    return 0 ; 
}