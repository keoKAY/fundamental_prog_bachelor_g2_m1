#include<iostream>
using namespace std; 
class Worker{
    private: 
        int id; 
        string name; 
        string gender; 
        float salary; 
    public: 
        Worker(){}
        Worker(int id , string name, string gender, float salary){
            this->id = id; 
            this->name = name; 
            this->gender = gender; 
            this->salary  = salary; 
        }
        // Read and Write 
        // Getters (read)
        int getId(){
             return id; }
        // Setter (write )
        void setId(int id){
            if(id<1000){
                cout<<"Invalid id , id must start from 1000"<<endl; 
                return; 
            }
            this->id = id; 
        }
        // read name 
        string getName(){return name; }
        // write name 
        void setName(string name ){
            this->name = name; 
        }
};
int main(){
    system("clear"); 
    Worker worker1; 
    // Write the data of worker1 
    worker1.setId(1001); 
    worker1.setName("james"); 
    // read the data of worker 1
    cout<<worker1.getId()<<endl;
    cout<<worker1.getName()<<endl;  
    return 0 ; 
}