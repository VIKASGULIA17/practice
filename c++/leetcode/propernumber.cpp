#include<iostream>
using namespace std;
long perfect_number(long n){
    long sum=0;
    for (long i = 1; i < n/2+1; i++)
    {
        if (n%i==0)
        {
            sum+=i;
        }
        
    }
    if (n==sum)
    {
       cout<<"proper number";
    }
    else
    cout<<"Not proper number";
    return 0;
}
int main(){
    long n;
    cout<<"Enter number";
    cin>>n;
    perfect_number(n);
}