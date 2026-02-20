#include<iostream>
using namespace std; 
int main(){
    system("clear"); 

    for(int i = 1; i<=10; i++){
        // when i = 5 , i= 2, loop will skip 
        if(i==5 || i == 2) continue; 
        cout<<"I= "<<i<<endl; 
    }

    return 0 ; 
}