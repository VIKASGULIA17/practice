#include<iostream>
using namespace std;

int power(int n,int pow){
    if(pow==1){
        return n;
    }
    return n*power(n,pow-1);
}

int main(){
    int n=5;
    int pow=3;
    cout<<power(n,pow);
}