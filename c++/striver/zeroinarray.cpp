#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int temp[n];
    int x=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]!=0)
        {
            temp[x++]=arr[i];
        }    
    }
    for (int i = 0; i < x; i++)
    {
        arr[i]=temp[i];
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