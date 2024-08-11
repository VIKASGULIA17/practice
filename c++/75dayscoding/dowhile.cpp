#include<iostream>
using namespace std;
int main(){
    int n,i=1;
    cout<<"enter number";
    cin>>n;
    do
    {
       cout<<n*i<<endl; 
       i++;
    } while (i<=10);
    return 0;
}