#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream file("example.txt",ios::app);
    
    if(file.is_open()){
        file<<"\n Are you still watching anime and wasting your time on useless things";
        
        cout<<"File created succesfully";
        file.close();
    }
    else{
        cout<<"some error";
    }
}