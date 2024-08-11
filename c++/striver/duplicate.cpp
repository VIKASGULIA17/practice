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
    
    int x=0;
    int i;
    for (i = 1; i < n; i++)
    {
        if (arr[i]!=arr[i-1])
        {
            arr[x]=arr[i-1];
            x++;
        }
        arr[x]=arr[i];
    }
    for (int i = 0; i<=x; i++)
    {
        cout<<arr[i]<<" ";
    }
}