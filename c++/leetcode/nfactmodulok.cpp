#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int fact=1;
    if(n>=k)return 0;
    for(int i=1;i<k;i++){
        fact=(fact*i)%k;
    }
    cout<<fact;
}