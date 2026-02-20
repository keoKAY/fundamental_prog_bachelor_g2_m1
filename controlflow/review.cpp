#include<iostream>
using namespace std; 
int main( ){

    system("clear"); 

    // if -else , switch case , ternary operators 
    // 1. initial expression 
    // 2. condition expression 
    // 3. update expression 
    int n ,sum=0; 
    cout<<"-------------[ SUM from 1 -N ]-------"<<endl; 
    cout<<"Enter n : "; 
    cin>> n; 
    for(int i = 1; i<=n; i++){
        sum = sum + i;
    }
    
    cout<<"Result = "<<sum<<endl; 
    return 0 ; 
}