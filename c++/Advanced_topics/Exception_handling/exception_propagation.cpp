// Exception Propagation

// An exception can be thrown in a function and caught in another function higher in the call stack.

#include<iostream>

using namespace std;

void func1(){
    throw "this is fucking stupid";
}
void func2(){
    func1();
}

int main(){
    try{
        func2();
    }
    catch(const char* ch){
        cout<<ch;
    }
}