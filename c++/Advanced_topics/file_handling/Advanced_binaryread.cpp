#include<iostream>
#include<fstream>
#include<string>
using namespace std;

struct Data{
    int id;
    char name[20];
};
int main(){
    Data emp;
    ifstream file("binary_advance.dat",ios::binary);

    if(file.is_open()){
        file.read((char* )&emp,sizeof(emp));
        file.close();
        cout<<emp.id<<" "<<emp.name;
    }
    else{
        cout<<"error";
    }
}