#include<iostream>
using namespace std; 
// duplicate name, type conversion (prevent implicit conversion )
enum class Days{
    MONDAY, 
    TUESDAY,
    WEDNESDAY
}; 
// Implicit (inside) vs Explicit (outside) 
int main(){
    system("clear"); 
    Days date; 
    date = Days::MONDAY; 
    int value = static_cast<int>(date); 
    // Explicit coversion 
    cout<<"Value of date is : "<<value<<endl; 
    return 0 ; 
}