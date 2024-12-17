#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream file("advanced.txt",ios::in|ios::out|ios::trunc);
    if(file.is_open()){
        file<<"Hey !\nYour learned advanced file opening quick . ";
        file<<"\nKeep it up foolish me";
        cout<<"Data entered successfully\n";
        file.seekg(0);
    }
    string line;
    if(file.is_open()){
        while (getline(file,line))
        {
            cout<<line<<endl;
        }
        cout<<"\nSuccessfully readed";
    }
    file.close();
}