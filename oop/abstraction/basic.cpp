#include<iostream>
using namespace std; 

class AuthService{
    public: 
    // pure virtual function must be override (implemented )
        virtual void login()=0; 
        virtual void signup()=0; 
}; 
class GoogleAuth: public AuthService{
    public: 
        void login(){
            cout<<"Login with Google Account ✅"<<endl; 
        }
        void signup(){
            cout<<"Signup With Google Account ✅"<<endl; 
        }
}; 

class FacebookAuth: public AuthService{
    public: 
        void login(){
            cout<<"Login with Facebook Account ✅"
                <<endl; 
        }

        void signup(){
            cout<<"Signup with Facebook Account ✅"
                <<endl; 
        }
};

class GithubAuth: public AuthService{
    public: 
        void login(){
            cout<<"Login with Github Account"<<endl; 
        }
        void signup(){
            cout<<"Signup with github account"<<endl; 
        }
};


// handleLogin 
void handleLogin(AuthService* auth ){
    // login first 
    auth->login(); 
    cout<<"You are allowed access resource !! 👍"
    <<endl;     
}
int main(){
    system("clear");    
    handleLogin(new GithubAuth()); 
    return 0 ; 
}