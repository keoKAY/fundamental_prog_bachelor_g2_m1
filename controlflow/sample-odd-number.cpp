#include<iostream>
using namespace std;
int main()
{
    system("clear");
    int n , sum =0 ; 
    cout<<"Enter n: "; 
    cin>>n; 
    cout<<"All values : "; 
    for(int i = 1; i<=n; i++){
        if(i%2==0) continue; 
        cout<<" "<<i; 
        sum+=i; // sum = sum + i; 
    }
    cout<<endl; // used to make a new line 
    cout<<"Sum of Odd value is : "<<sum<<endl; 
    return 0 ; 
}