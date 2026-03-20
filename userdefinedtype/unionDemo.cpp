#include<iostream>
using namespace std; 

union Data {
    float floatValue; 
    int intValue; 
    char name[10]; 
};
int main(){
    system("clear"); 
    Data data; 
    data.intValue = 12; 
    cout<<"byte data is : "<<data.intValue<<endl; 
    cout<<"Size of Union is : "<<sizeof(data)<<endl; 

    return 0 ; 
}