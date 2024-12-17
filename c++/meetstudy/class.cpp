#include <iostream>
using namespace std;
class B;
class A {
private:
    int value;
public:
    A(){
        value=100; 
    }
    friend void displayValue(A& a);  
    friend class B;
};
void displayValue(A& a) {
    cout << "Friend Function: Value in A is " << a.value << endl;
}
class B {
public:
    void showValue(A& a) {
        cout << "Friend Class: Value in A is " << a.value << endl;
    }
};
int main() {
    A objA; 
    B objB;  
    displayValue(objA);
    objB.showValue(objA);
    return 0;
}
