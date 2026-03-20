#include<iostream>
using namespace std; 
// 0 , 1, 2 -> if you don't set the value for it
enum  Color {
    RED=10,GREEN=70,BLUE=50
}; 

// constant: variable that its values cannot be changed 

int main(){
    system("clear"); 
    Color color; 
    color = GREEN; 
    // color = GREEN; 
    // color = BLUE; 
    float amount = 4000; 
    cout<<"Total result = "<<(amount*color)<<endl; 
    cout<<"Value of color is : "<<color<<endl; 
    return 0 ; 
}