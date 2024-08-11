#include<iostream>
using namespace std;

int sumofn(int n){
    if (n<1)return 0;
    return n+=sumofn(n-1);
}
int main(){
    int n,s;
    cin>>n;
    s=sumofn(n);
    cout<<s;
}