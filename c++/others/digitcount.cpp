#include<iostream>
using namespace std;
int main(){
    long long n;
    cout<<"Enter number";
    cin>>n;
    int d=0;
    while (n>0)
    {
        d+=1;
        n=n/10;
    }
    cout<<d;
}