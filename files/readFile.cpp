#include<iostream>
#include<fstream>
using namespace std; 
int main(){

    system("clear"); 
    ifstream file("message.txt"); 
    // check if the file exists or can be open
    if(!file){
        cout<<" ❌ Failed to access the file..!"
            <<endl; 
        return 1; 
    }
    string line; 
    cout<<"FILE CONTENT: "<<endl; 
    while(!file.eof()){
        getline(file,line); // read string of line 
        cout<<line<<endl; 
    }
    file.close(); 
    return 0; 
}