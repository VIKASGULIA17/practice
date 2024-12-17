// Define two namespaces Alpha and Beta, each containing a function greet().
// Call greet() from both namespaces in the main function.

#include<iostream>
using namespace std;

namespace alpha{
    void greet(){
        cout<<"this is alpha"<<endl;
    }
}
namespace beta{
    void greet(){
        cout<<"this is beta"<<endl;
    }
}

int main(){
    alpha::greet();
    beta::greet();
}