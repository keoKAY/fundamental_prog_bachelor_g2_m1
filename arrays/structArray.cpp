#include<iostream> 
using namespace std; 
struct Student{
    string name; 
    string gender; 
    string classroom; 
    float score; 

    Student(){}
    Student(string n , string g , string c , float s){
        name = n; 
        gender =  g ; 
        classroom = c ; 
        score =s ; 
    }

    void input(){
        cout<<"Enter name: "; 
        getline(cin,name); 
        cout<<"Enter classroom: "; 
        getline(cin,classroom); 
        cout<<"Enter gender: "; 
        getline(cin,gender); 
        cout<<"Enter score: "; 
        cin>>score; 
        cin.ignore();
    }
    void output(){
        cout<<"-----------------<<OUTPUT>>-------------"<<endl; 
        cout<<"Student name is : "<<name<<endl; 
        cout<<"Student gender is : "<<gender<<endl; 
        cout<<"Classroom: "<<classroom<<endl; 
        cout<<"Score: "<<score<<endl; 
    }
}; 
int main(){
    system("clear"); 
    // array of students 
    Student students[2]; 
    //students[0].input(); 
   // students[1].input(); 
    // Initialize the value for the object
    students[0]=Student("bona I","male","mobile lab",100); 
    students[1]={"bona II","male","mobile lab",100}; 


    students[0].output(); 
    students[1].output();

    return 0; 
}