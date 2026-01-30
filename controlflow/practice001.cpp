#include<iostream>
using namespace std; 
// M1->Practice001->Salary Finder
int main(){
    system("clear"); 
    string name; 
    char gender; 
    float wage, hours,originalSalary=0, salary=0,tax=0; 

    cout<<"----------[Input Worker]---------"<<endl; 
    cout<<"Enter Worker Name: "; cin>>name; 
    cout<<"Enter worker gender: "; cin>>gender; 
    cout<<"Enter Working Hour(hrs): "; cin>>hours; 
    cout<<"Enter Wage($): "; cin>>wage; 

    originalSalary = hours * wage; 
    if(originalSalary>= 1000 ){
        if(gender=='f') tax = 0.3; 
        else tax = 0.5; 
    }
    salary = originalSalary * (1 - tax ); 

    cout<<"-------------[Worker Output]---------"<<endl; 
    cout<<"Worker Name: "<<name<<endl; 
    cout<<"Worker gender : "<<gender<<endl ; 
    cout<<"Worker Hours: "<<hours<<"hrs"<<endl; 
    cout<<"Worker wage: "<<wage<<"$/1hrs"<<endl; 
    cout<<"Original Salary: "<<originalSalary<<"$"<<endl; 
    cout<<"Tax= " << (tax * 100)<<"%"<<endl; 
    cout<<"Salary after taxed: "<<salary<<"$"<<endl; 
    return 0 ; 
}