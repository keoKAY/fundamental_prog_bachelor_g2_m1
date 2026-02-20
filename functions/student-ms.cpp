#include<iostream>
using namespace std; 

float findAverage(float math, float eng, float cpp){
    return (math + eng + cpp )/ 3; 
}

char findGrade(float average){
    char grade ; 
    if(average>=90) grade = 'A'; 
    else if (average>=80) grade = 'B'; 
    else if (average>=75) grade = 'C'; 
    else if (average>=60) grade = 'D'; 
    else if (average >= 50 ) grade = 'E'; 
    else grade ='F'; 
  
    return grade; 
}
int main(){
    system("clear"); 

    string name,classroom; 
    char grade, gender; 
    float math,eng,cpp,average;
    // input 
    cout<<"---------x INPUT x ----------"<<endl; 
    cout<<"Enter name: "; getline(cin,name); 
    cout<<"Enter classroom: "; getline(cin,classroom); 
    cout<<"Enter gender: "; cin>>gender; 
    cout<<"Enter Scores(math,eng,cpp): "<<endl; 
    cin>>math; cin>>eng;cin>>cpp; 

    cout<<"---------x OUTPUT x ----------"<<endl; 
    average = findAverage(math,eng,cpp); 

    cout<<"Grade: "<<findGrade(average)<<endl; 
    cout<<"Student name: "<<name<<endl; 
    cout<<"Studen gender: "<<gender<<endl; 
    cout<<"Scores (math,eng,cpp): "
        <<math<<"-"<<eng<<"-"<<cpp<<endl; 
    cout<<"Student Average: "<<average<<endl; 
    return 0 ; 
}