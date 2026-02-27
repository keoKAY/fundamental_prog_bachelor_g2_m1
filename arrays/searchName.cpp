#include<iostream>
using namespace std; 

// use with loop in order print all element 
void printNames(string studentNames[], int size){
 // print all name 
    cout<<"All Student Names: "<<endl; 
    for(int i = 0 ; i <size; i++){
        cout<<studentNames[i]<<" "; 
    }
    cout<<endl; 
}
int main(){
    system("clear"); 

    string studentNames[]={"james","john","bona","vipha","koko"}; 

    // count the element 
    int size = sizeof(studentNames)/sizeof(studentNames[0]);
    cout<<"Total size of array is : "<<size<<endl; 
    printNames(studentNames, size); 
    // search name by inputing the name 
    string item; 
    cout<<"Enter name to update: "; 
    cin>>item; 
    // bool isFound = false ; 
    // for(int i = 0; i<size; i++){
    //     if(item  == studentNames[i] ){
    //         isFound= true; 
    //         cout<<"Student found at index = "<<i<<endl; 
    //     }
    // }
    // if(isFound == false ){
    //     cout<<"Student with name = "<<item<<" not found!"
    //         <<endl; 
    // }

    // Update 
    bool isFound = false ;
    for(int i = 0 ; i<size; i++){
        if(item == studentNames[i]){
            isFound = true; 
            // update it here
            cout<<"Enter new name : "; 
            cin>>studentNames[i];  
            cout<<"Update name successfully! ✅"<<endl; 
        }
    }
    if(!isFound){
        cout<<"Failed to update! Name = "<<item
            <<" doesn't exists ! "<<endl; 
    }

    printNames(studentNames,size); 
    return 0 ;
}