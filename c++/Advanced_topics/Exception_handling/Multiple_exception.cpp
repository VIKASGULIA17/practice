#include<iostream>
using namespace std;

int main(){
    try{
        throw 404;
    }
    catch (int e){
        cout<<e;
    }
    catch(...){
        cout<<"unexpected error";
    }
}