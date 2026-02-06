#include<iostream>
using namespace std; 

int main(){
    system("clear"); 

    // variables 
    string name; 
    char gender; 
    float hours, wages, bonus=0, salary=0, total=0; 
 
    // input 
    cout<<"\n ================[INPUT]=============="<<endl; 
    cout<<"Enter name: "; getline(cin,name); 
    cout<<"Enter gender: "; cin>>gender; 
    cout<<"Enter hours (hrs): "; cin>>hours; 
    cout<<"Enter wage($): "; cin>>wages; 

    // process 
    salary = hours * wages; 
    if(hours>=100){
        if(gender == 'f' || gender == 'F') bonus=0.5; 
        else bonus = 0.4; 

        //bonus = (gender=='f')?0.5:0.4; 
    }
    total = salary + (salary*bonus); 
    // output 
    cout<<"\n ================[OUTPUT]============"<<endl; 
    cout<<"Name : "<<name<<endl; 
    cout<<"Gender: "<<gender<<endl;
    cout<<"Bonus: "<<(bonus * 100 )<<"%"<<endl;  
    cout<<"Salary(Before Bonus): " <<salary<<"$"<<endl; 
    cout<<"Total: "<<total<<"$"<<endl; 
    return 0 ; 
}