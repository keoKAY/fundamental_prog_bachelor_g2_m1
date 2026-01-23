#include<iostream>
using namespace std; 
int main(){
    const int CODE=9999; 
    system("clear"); 

    int password=1111; 
    string username=" user"; 
    bool isVerified = false; 
    // cout<<"---------[Welcome]-------"<<endl; 
    // cout<<"Enter username: "; 
    // cin>>username; 
    // cout<<"Enter your password: "; 
    // cin>>password; 

    if( 
        password == CODE   || username=="admin" || isVerified==true){
        cout<<"  Login successfully ✅"<<endl; 
    }else{
        cout<<"  Incorrect credentials ❌"<<endl; 
    }
    
    return 0; 
}