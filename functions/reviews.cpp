#include<iostream> 
using namespace std;
// usd -> khmer 
// khr -> usd 
// isUsdToKhr = true (Exchange usd to khr )
// isUsdToKhr = false ( Exhcnage khr to usd )
float exchangeMoney(float amount , bool isUsdToKhr ){
    if(isUsdToKhr)
        return amount * 4000; 
    else
        return amount /4000;   
}
// code reusability 
int main(){
    system("clear"); 
    float usd = 10; 
    cout<<"Result in riels :"
        <<exchangeMoney(usd,true)<<"riels"<<endl; 
    float riels = 50000; 
    cout<<"Result is usd: "
        <<exchangeMoney(riels,false)<<"$"<<endl; 
    return 0; 
}