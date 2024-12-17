#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream file("example.txt");
    
    if(file.is_open()){
        file<<"Hello this is a new file\n";
        file<<"sup ! \nhow is everything going\n hope you are not slacking round right foolish me";
        cout<<"File created succesfully";
        file.close();
    }
    else{
        cout<<"some error";
    }
}