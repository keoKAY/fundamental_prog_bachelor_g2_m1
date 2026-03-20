#include<iostream>
using namespace std; 
class Person{
    // access modifier 
    private: 
        string name; 
        string gender; 
        int age; 
    public: 
        // constructor 
        Person(){}
        Person(string name,string gender,int age){
            this->name = name; 
            this->gender = gender; 
            this->age = age; 
        }
        void output(){
            cout<<"Name: "<<name<<endl; 
            cout<<"Gender: "<<gender<<endl; 
            cout<<"Age: "<<age<<endl; 
        }
}; 
int main(){
    system("clear"); 
    // creating object 
    Person person1("James","male",10); 
    
    person1.output(); 
    return 0; 
}