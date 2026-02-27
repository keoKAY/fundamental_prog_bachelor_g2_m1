// Sort -> ordering the element based on its values
#include<iostream>
using namespace std;
void printArray(int scores[], int size ){
    for(int i = 0; i<size; i++){
        cout<<scores[i]<<" ";
    }
    cout<<endl; 
} 
int main(){
    system("clear"); 
    int scores[]={20,10,6,7,90,100,60}; 
    int size = sizeof(scores)/sizeof(scores[0]);
    cout<<"Original array is:"<<endl; 
    printArray(scores, size); 

    // sort elements 
    // ascending -> small to large
    // descending -> large to small 

    // BubbleSorts 
    // n
    for(int i =0 ; i<size; i++){
        // n 
        for(int j = 0; j<size-i-1; j++){
            if(scores[j] > scores[j+1]){
                swap(scores[j],scores[j+1]);
            }
        }
    }
    printArray(scores,size); 
    return 0 ; 
}