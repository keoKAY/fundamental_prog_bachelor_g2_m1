#include<iostream>
#include<fstream>
using namespace std; 
int main(){

    system("clear"); 
    // ios::app = append ( update not overwrite )
    ofstream file("message.txt",ios::app); 
    // check if the file exists or can be open
    if(!file){
        cout<<" ❌ Failed to access the file..!"
            <<endl; 
        return 1; 
    }
    cout<<"Writing data to file ....."<<endl; 
    file<<"This is the first line "<<endl; 
    file<<"This is the secondline line "<<endl; 
    file<<"This is the third line "<<endl; 
    file<<"This is the fourth line "<<endl; 
    file<<"This is the 5th line "<<endl; 

    file.close(); 
    return 0; 
}