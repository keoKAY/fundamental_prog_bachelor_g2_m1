#include<iostream>
using namespace std; 

class Base{
    public: 
        void output(){
            cout<<"Output from the base class!"<<endl; 
        }
}; 
class Child: public Base{

   public: 
   // override 
    void output(){
        Base::output(); 
        cout<<"Output from the Child class!"<<endl; 
    }

}; 
int main(){
    system("clear");
    Base baseObj; 
    baseObj.output(); 

    
    Child childObj; 
    cout<<endl; 
    childObj.output(); 

    return 0 ; 
}