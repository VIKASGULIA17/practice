#include<iostream>
using namespace std;
int recursion_trial(){
    static int i=5;
    if (i<1)return 0; 
    cout<<"hello World "<<i<<endl;
    i--;
    recursion_trial();
    return 1;
}
int main(){
    recursion_trial();
}