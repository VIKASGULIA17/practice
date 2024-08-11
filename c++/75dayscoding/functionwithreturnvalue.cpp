#include<iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
int main(){
    int a,b;
    cout<<"Enter value of a and b: ";
    cin>>a;
    cin>>b;
    cout<<"the sum is :"<<sum(a,b);
    return 0;
}