#include<iostream>
using namespace std; 
// void = no return value (return nothing)
void greeting(string subject){
    cout<<"--------------------------------"<<endl;
    cout<<"Welcome to "<<subject<<" ! "<<endl;
    cout<<"--------------------------------"<<endl;
}

// Money Exchange 
float usdToKhr(){
    float usd; 
    float rate = 4000; 

    cout<<"Enter your amount($): "; 
    cin>>usd; 
    float result = usd * rate;
    cout<<"Result is : "<<result<<endl; 

   return result; 
}
float usdToKhrV2(float usd,  float rate ){
    return usd * rate; 
}
int main(){
    system("clear"); 
    const float RATE = 4000; 

    // float usd ; 
    // cout<<"Enter amount in usd: "; 
    // cin>>usd; 

    float result = usdToKhrV2(10,RATE);
    cout<<"10$->KHR ="<<result<<endl; 
    cout<<"20$->KHR ="<<usdToKhrV2(20,RATE)<<endl; 
    cout<<"40$->KHR ="<<usdToKhrV2(40,RATE)<<endl; 

    return 0; 
}

