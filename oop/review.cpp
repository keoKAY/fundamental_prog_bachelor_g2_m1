#include<iostream>
using namespace std; 
class Student{
    protected: 
        int id ; 
        string name; 
        int age; 
    public: 
        // No-arg constructor
        Student(){
            id = 0; 
            age = 0; 
            name = "anonymous"; 
        }
        Student(int id, string name, int age){
            this->id = id; 
            this->name = name; 
            this->age = age; 
        }
        void output(){
            cout<<id<<" - "<<name<<" - "<<age; 
        }
        // getters and setters 
        int getAge(){ return age; }
        void setAge(int age){
            if(age<=0){
                cout<<" ⚠️ Age amount is invalid! "<<endl; 
                return; 
            }
            this->age = age; 
        }
}; 

class InternationalStudent : public Student{
    public: 
        string country; 
        string email; 
        // Override 
    InternationalStudent(){}
    InternationalStudent(int id, string name, int age, string country, string email):Student(id, name, age){
        // calling to parent constructor 
       
        this->email = email ; 
        this->country = country; 

    }
    void output(){
        Student::output(); 
        cout<<"- "<<country<<" - "<<email; 
    }     
}; 
int main(){
    system("clear"); 

    Student student1(1001,"james",21); 
    student1.output(); 

    InternationalStudent iStudent1(1001,"June",22,"Cambodia","june@istad.com"); 
    cout<<endl; 
    iStudent1.output(); 
    return 0; 
}