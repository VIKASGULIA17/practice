// standard exception 

// An exception can be thrown in a function and caught in another function higher in the call stack.

#include<iostream>
using namespace std;
#include<stdexcept>


int main(){
    try{
        throw runtime_error("Runtime error occured");
    }
    catch( const exception& e){
        cout<<e.what();
    }
}