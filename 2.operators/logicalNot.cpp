#include<iostream>
using namespace std; 

// logical NOT 
int main(){
    system("clear"); 
    bool isValid = true; 

    cout<<"isValid value is : "<<isValid<<endl; 
    cout<<"!isValid value is : "<<(!isValid)<<endl; 

    int age = 14; 
    if( !(age>=18) ){
        cout<<"Age is NOT greater or equal to 18"<<endl; 
    }
    return 0; 
}