#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream file("binary.dat",ios::binary);

    if(file.is_open()){
        file<<"This is data";
        cout<<"Entered successfully";
        file.close();
    }
}