#include<iostream>
using namespace std;
int main(){
    long long n;
    cout<<"Enter number";
    cin>>n;
    long d=0;
    int sign;
    if (n<0)
    {
        n=abs(n);
        sign=1;
    }
    while (n>0)
    {
        int last=n%10;
        d=d*10+last;
        n=n/10;
    }
    if (sign==1)
    {
        d=(-d);
    }
    cout<<d;
}