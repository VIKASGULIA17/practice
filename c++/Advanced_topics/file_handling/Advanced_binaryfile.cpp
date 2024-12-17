#include<iostream>
#include<fstream>
#include<string>
using namespace std;

struct Data{
    int id;
    char name[20];
};
int main(){
    Data emp={1,"Zoro"};
    ofstream file("binary_advance.dat",ios::binary);

    if(file.is_open()){
        file.write((char* )&emp,sizeof(emp));
        file.close();
        cout<<"Entered successfully";
    }
    else{
        cout<<"error";
    }
}