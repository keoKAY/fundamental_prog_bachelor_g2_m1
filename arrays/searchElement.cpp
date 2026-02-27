#include<iostream>
using namespace std; 
int main(){
    system("clear"); 

    // 1. initialize value of the array 
    float scores[]={30,50,60,90,100,94,88,77}; 
    // to find the total size of the array 
    int size = sizeof(scores)/ sizeof(scores[0]); 
    cout<<"Total element = "<<size<<endl; 
    cout<<"All values: "<<endl; 
    for(int i = 0; i<size; i++){
        cout<<" "<<scores[i]; 
    }
    cout<<endl; 
    // value to search 
    float item; 
    cout<<"Enter value to search: "; 
    cin>>item; 


    bool isFound = false; 
    for(int i = 0 ; i< size; i++){
        if(item == scores[i]){
            isFound = true; 
            cout<<" ✅ Item found at index = "<<i<<endl; 
        }
    }
    if(isFound==false){
        cout<<" ❌ Item = "<<item<<" Not found in array "
            <<endl; 
    }

    return 0 ; 
}