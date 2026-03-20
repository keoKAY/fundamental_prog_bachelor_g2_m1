#include<iostream>
using namespace std; 
class Person{
    public: 
        string name; 
        string gender; 
        int age; 
        
        Person(){}
        Person(string name, string gender, int age){
            this->name = name; 
            this->gender = gender; 
            this->age = age; 
        }
        void input(){
            cout<<"Enter name: "; 
            getline(cin,name); 
            cout<<"Enter gender: "; 
            cin>>gender; 
            cout<<"Enter age: "; 
            cin>>age; 
        }
        void output(){
            cout<<"Name is : "<<name<<endl; 
            cout<<"Gender is : "<<gender<<endl; 
            cout<<"Age is : "<<age<<endl; 
        }

};

// Student is the child class of the person class 
class Student : public Person{
    public: 
        float score; 
        string classroom ; 
        // Function override 
        void input() {
            // calling input 
            Person::input(); 
            cout<<"Enter score: "; 
            cin>>score; 
            cout<<"Enter classroom: "; 
            cin>>classroom; 
            // use getline(cin,classroom) if you want two or more words 
        }
        void output(){
            Person::output(); 
            cout<<"Classroom is : "<<classroom<<endl; 
            cout<<"Score is : "<<score<<endl; 
        }
}; 

int main(){
    system("clear"); 
    Student student1; 
    Person person1; 
    person1.input(); 
    person1.output(); 


    student1.input(); 
    student1.output(); 
    return 0 ; 
}