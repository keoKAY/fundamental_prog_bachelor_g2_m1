#include<iostream>
using namespace std; 
int main(){
    system("clear"); 
    char gender = 'm'; 

    if(gender=='f') 
        cout<<"Gender is Female"<<endl; 
    else if(gender=='m')
        cout<<"Gender is Male"<<endl; 
    else 
        cout<<"Gender is invalid! choose 'm' or 'f'"<<endl; 
     
    return 0 ; 
}