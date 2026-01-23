#include<iostream>
using namespace std; 
int main(){
    system("clear"); 

    // declare variables 
    string studentName, classroom;  
    char gender;
    float math,eng,cpp,avg; 
    // float math; 
    // float eng; 
    // float cpp ;
    
    cout<<" ========Input Student Info======== "<<endl; 
    cout<<"Enter name: "; cin>>studentName; 
    cout<<"Enter Gender: "; cin>>gender; 
    cout<<"Enter classroom: "; cin>>classroom; 
    cout<<"Enter math: "; cin>>math; 
    cout<<"Enter eng: "; cin>>eng; 
    cout<<"Enter cpp: "; cin>>cpp; 

    avg = (math+eng+cpp)/3; 

    cout<<"\n========Output Student Info======== "<<endl; 
    cout<<"Name: "<<studentName<<endl; 
    cout<<"Gender: "<<gender<<endl; 
    cout<<"Classroom: "<<classroom<<endl; 
    cout<<"(Math,Eng,CPP):"
        <<math<<","
        <<eng<<","
        <<cpp<<endl;
    cout<<"Average: "<<avg<<endl;
    
    
    
    return 0; 
}