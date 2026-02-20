#include<iostream>
using namespace std; 
int main(){
    system("clear"); 
    int option; 
    mainlabel: 
        cout<<"------<<Welcome back to our system>>------"<<endl; 
        cout<<"1. First program "<<endl; 
        cout<<"2. Second Program "<<endl; 
        cout<<"3. Back to main menu "<<endl; 
        cout<<"Choose your option: "; cin>>option; 
        if(option==1){
            cout<<"You choose first program"<<endl; 
        }else if(option==2){
            cout<<"You choose second program "<<endl; 
        }else if (option==3){
            goto mainlabel; 
        }else {
            cout<<"Invalid option!! Try again "<<endl; 
        }
}