#include<iostream>
using namespace std; 

// DRY- Don't Repeat yourself 
int main(){
    system("clear"); 

    int numOfCar; 
    cout<<"Enter the number of car: "; 
    cin>>numOfCar; 

    string unit = (numOfCar>=2)? " cars": " car"; 
    cout<<"You bought: " 
        <<numOfCar<<unit<<endl; 

    cout<<"You bought: " <<numOfCar
        <<((numOfCar>=2)? " cars": " car")
        <<endl; 

    // if(numOfCar>=2){
    //     cout<<" cars"<<endl;
    // }
    // else  {
    //     cout<<" car"<<endl; 
    // }

    return 0 ; 
}