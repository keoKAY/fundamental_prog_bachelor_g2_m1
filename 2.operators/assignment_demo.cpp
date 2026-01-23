
#include<iostream>
using namespace std; 

// assignment operators demo 
int main(){
    system("clear"); 

    int a = 10; 
    cout<<"Original value a ="<<a<<endl; 
    a*=10; // a = a * 10 ;
    a/=10; 
    a%=10; 
    cout<<"a-=10 is "<<(a-=10)<<endl; 
    cout<<"a+=10 is "<<(a+=10)<<endl; 

    return 0; 
}