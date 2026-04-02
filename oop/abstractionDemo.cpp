#include<iostream>
using namespace std; 

class Shape{
    public: 
    // pure virtual function 
        virtual void draw()=0; 
        void info(){
            cout<<"This is the shape class!"<<endl; 
        }
}; 

class Circle: public Shape{
    public: 
    // implementation 
        void draw() override{
            cout<<"Drawing circle shape!"<<endl; 
        }
}; 
int main(){
    system("clear"); 
   // Shape s;  ❌ cannot create object, because it's abstract class 
    Circle c; 
    c.draw(); 
    c.info(); 
    return 0; 
}