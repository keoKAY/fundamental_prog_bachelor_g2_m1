#include<iostream>
using namespace std; 
struct Student{
    // data members 
    string name; 
    string gender; 
    int age; 
    string classroom; 

    // Default constructor 
    // provide default values for the instances
    Student(){
        name="anonymous"; 
        gender="unknown"; 
        classroom="unknown"; 
        age = 18; 
    }
    // Parameterized constructor 
    Student(string n , string g , string c , int a ){
        name = n; 
        gender = g ; 
        classroom = c; 
        age = a ; 
    }
    // function members
    void output(){
        cout<<"\n---------------------"<<endl; 
        cout<<"Name is : "<<name<<endl; 
        cout<<"Gender is : "<<gender<<endl; 
        cout<<"Age is : "<<age<<endl; 
        cout<<"Classroom : "<<classroom<<endl; 
    }
}; 
int main(){
    system("clear"); 
    // Instantiation = create an instance 
    // s1 is an instance , struct variable 
    Student s1; 
    // Initialize 
    Student s2("james","male","mobile",20); 
    s1.output();
    s2.output();
    return 0 ; 
}