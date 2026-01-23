#include<iostream> 
using namespace std; 
// entrypoint 
int main(){
    system("clear"); 
    cout<<"========[ Exchange Money ]========"
        <<endl; 
    float usd; 
    cout<<" 👍 Enter amount in USD : "; 
    cin>>usd; 
    float result = usd * 4000; 
    cout<<"\nResult is : "<<result<<" riels"
        <<endl; 

    return 0; 
}