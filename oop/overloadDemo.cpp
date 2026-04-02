#include<iostream>
using namespace std; 

int sum(int a , int b ){
    return a + b; 
}
int sum(int a , int b , int c ){
    return a + b + c; 
}
void sum(){
    cout<<"this is just a demo "<<endl; 
}
int main(){
    system("clear"); 
    cout<<sum(10,20)<<endl; 
    cout<<sum(10,10,30)<<endl; 
    sum(); 

    return 0 ; 
}