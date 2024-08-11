#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int x=0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i]!=0)
        {
            arr[x++]=arr[i];
        }
    }
    for (int i = x; i < n; i++)
    {
        arr[i]=0;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    
}