#include<iostream> 
using namespace std; 
int main(){
    system("clear"); 

    for(int i = 1; i<= 10; i++){
        cout<<"I="<<i<<endl; 
        // Loop will be terminated when i == 5 
        if(i==5) break; 
    }

    // inifinite loop 
    int value; 
    for(;;){
        cout<<"Enter your value:  "; 
        cin>>value; 
        if(value==10){
            cout<<"Exit from infinite loop! "<<endl; 
            break; 
        }
    }
    return 0 ; 
}