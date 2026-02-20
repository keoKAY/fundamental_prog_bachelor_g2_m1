#include<iostream>
using namespace std; 
int main(){
    system("clear"); 
    // index  = id of element 
    int scores[5]; 
    // assign 
    scores[0]=10; 
    scores[1]=20; 
    scores[2]=30; 
    scores[3]=40; 
    scores[4]=50; 
    
    // access the values 
    cout<<"All values of scores:"<<endl; 
    for(int i =0; i<5; i++)
        cout<<scores[i]<<endl; 
   
    // cout<<scores[0]<<endl; 
    // cout<<scores[1]<<endl; 
    // cout<<scores[2]<<endl; 
    // cout<<scores[3]<<endl; 
    // cout<<scores[4]<<endl; 
    return 0 ; 
}