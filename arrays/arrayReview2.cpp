#include<iostream>
using namespace std; 
int main(){
    system("clear"); 
    int n = 8; 
    int scores[n];
    // index = id = start from 0 -> size -1 
    for(int i = 0 ; i<n; i++)
        scores[i] = 10*(i+1); // (i+1) * 10 


    for(int i = 0 ; i<n; i++){
        cout<<" "<<scores[i]; 
    }
    cout<<endl; 

    cout<<"+ forEach for easier iteration : "<<endl; 
    for(int val : scores){
        cout<<" "<<val; 
    }

    return 0 ; 
}