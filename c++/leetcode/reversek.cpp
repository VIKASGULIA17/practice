#include<iostream>
using namespace std;

int main(){
    int n ;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    k=k%n;
    k=n-k;
    for (int i = 0; i < k/2; i++)
    {
        swap(arr[i],arr[k-i-1]);
    }
    for (int i = k; i < (n+k)/2; i++)
    {
        swap(arr[i],arr[n-i-1+k]);
    }

    for (int i = 0; i < n/2; i++)
    {
        swap(arr[i],arr[n-1-i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}