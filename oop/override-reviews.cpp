#include<iostream>
using namespace std; 

class Parent{
    public: 
    virtual void output(){
            cout<<"Output from parent class!"
                <<endl; 
        }
}; 
class Child1 : public Parent{
    public: 
        void output() override{
                cout<<"Output from child class 1 !"<<endl; 
        }
}; 
class Child2 : public Parent{
    public: 

        void output() override{
                cout<<"Output from child class 2!"<<endl; 
        }
}; 
int main(){
    system("clear"); 
    Parent * parent = new Child1(); 
    parent->output(); 
    parent = new Child2(); 
    parent->output(); 

    delete parent; 
    return 0 ; 
}