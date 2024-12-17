#include<iostream>
using namespace std;

double add(double a,int b){
    if(b==0){
        throw("NOT POSSIBLE");
    }
    return a/b;
}

int main(){
    try
    {
        cout<<"This is division "<<add(100,6)<<endl;
        cout<<"This is division "<<add(0,10);
    }
    catch(const char* ch)
    {
        cout<<"Caught an exception : "<< ch;
    }
    
}