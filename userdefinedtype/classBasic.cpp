#include<iostream>
using namespace std; 

class Car{
    private: 
        string brand; 
        int speed; 
    public: 
        // paramaterized constructor 
        Car(string brand, int speed){
            this->brand = brand; 
            this->speed = speed; 
        }
        void output(){
            cout<<"Driving : "<<brand<<" at "<<speed<<"km/h"<<endl;   
        }
}; 

int main(){
    system("clear"); 
    // creating object 
    Car car1("Tesla",100);
    // calling the function of the object   
    car1.output(); 
    Car car2 ("BMW",120); 
    car2.output(); 
    


    return 0 ; 
}