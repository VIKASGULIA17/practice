// Write a program to write user-inputted lines into a text file and read them back.
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream file("test.txt",ios::in|ios::out|ios::trunc);
    if(file.is_open()){
        string s;
        cout<<"Enter your strign";
        getline(cin,s);
        file<<s;
        cout<<"Data entered successfully";

        file.seekg(0);
        string temp;
        while(getline(file,temp)){
            cout<<temp<<endl;
        }
        file.close();

    }
}