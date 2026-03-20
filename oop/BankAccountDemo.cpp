#include<iostream>
using namespace std; 
class BankAccount{
    // private can only  use inide it own class
    private: 
        double balance;  
    // getter 
    public:
        void deposit(double amount ){
            if(amount>0){
                balance +=amount; 
                cout<<" ✅ Successfully deposit ! "<<endl; 
                cout<<" You have deposit: "<<amount<<"$"<<endl; 
            }
        } 
        void withdraw(double amount ){
            if(amount>0 && amount <= balance){
                balance -=amount; 
                cout<<" ✅ You have withdrawn : "<<amount<<"$"<<endl; 
                
            }else{
                cout<<" ❌ Insufficient funds or invalid amount "<<endl; 
            }
        }
        double getBalance(){return balance; }
    
};
// Fullstack ( Frontend, backend, database )
int main(){
    system("clear");
    BankAccount acc1; 
    acc1.deposit(1000); 
    acc1.deposit(200); 

    acc1.withdraw(600); 
    cout<<"Your balance is : "<<acc1.getBalance()<<endl; 
    return 0 ; 
}