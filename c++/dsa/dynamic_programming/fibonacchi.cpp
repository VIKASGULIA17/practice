#include<iostream>
using namespace std;

int fibonachi(int n,int pow){
    
    return n*fibonachi(n,pow-1);
}

int main(){
    int n=5;
    cout<<fibonachi(n);
}