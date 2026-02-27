#include<iostream>
using namespace std;
// size = total amount of elements 
void printArray(int scores[], int size ){
    cout<<"Array elements are: "<<endl; 
    for(int i = 0 ; i<size; i++){
        cout<<scores[i]<<" "; 
    }
    cout<<endl; 
} 

// create delete array function here !
int deleteElement(int scores[], int size, int target){
    int index = 0 ; 
    for(int i = 0; i<size; i++){
        if(scores[i]!=target){
            scores[index++]= scores[i]; 
        }
    }
    return index; 
} 
int main(){
    system("clear"); 
    // initialize 
    int scores[]={10,20,30,40,50 ,60 }; 
    // amount = totalmemory / memoryperunit
    int size = sizeof(scores)/sizeof(scores[0]); 
    printArray(scores, size); 

    // Write the code here in order to delete element
    int target = 50; 
    cout<<"Target is : "<<target<<endl;
    size = deleteElement(scores,size,target);
    //size = deleteElement(scores,size,60);  
    printArray(scores,size); 
    cout<<endl; 
    return 0 ; 
}