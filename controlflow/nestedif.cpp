#include<iostream>
using namespace std; 
int main(){
    system("clear"); 
    int grade =12; 
    char gender = 'm';  
// nested if 
    if(gender=='f'){
        if(grade==12){
            cout<<"you are able to apply!! "<<endl; 
        }else{
            cout<<"you are not in grade 12, cannot apply!"<<endl; 
        }
    }else {
        cout<<"You can't apply, only Female able to apply!"
            <<endl; 

    }

    return 0 ; 
}