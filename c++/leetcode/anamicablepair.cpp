#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    int sum=0;
    int sum2=0;
    for(int i=1;i<a;i++){
        if(a%i==0)sum+=i;
    }
    for(int i=1;i<b;i++){
        if(b%i==0)sum2+=i;
    }
    if(sum==b&&sum2==a)
    cout<<"True";
    else cout<<"False";
}