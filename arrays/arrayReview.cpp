#include<iostream>
using namespace std; 
int main(){
    system("clear"); 
    // n must be entered by the user 
    int n ; 
    cout<<"Enter number of score: "; 
    cin>>n; 
    if(n<=0){
        cout<<"Size of array must be greater than 0 "
        <<endl; 
        return 0 ; 
    }
    float scores[n]; 
    // enter the n score 
    for(int i = 0; i<n; i++){
        cout<<"Enter score "<<(i+1)<<": "; 
        cin>>scores[i]; 
    }
    // find totalScore 
    float totalScore = 0; 
    for(int i = 0 ; i <n; i++){
        //totalScore = totalScore + scores[i]; 
        totalScore+=scores[i]; 
    }
    float average = totalScore / n; 

    cout<<"Total Scores: "<<totalScore<<endl; 
    cout<<"Average: "<<average<<endl; 
    cout<<"All scores are : "<<endl; 
    for(int i =0; i<n; i++)
        cout<<scores[i]<<" "; 
    cout<<endl; 
    return 0; 
}