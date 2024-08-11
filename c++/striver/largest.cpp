#include<iostream>
using namespace std;

int largest(int arr[],int n){
    int maximum=arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i]>maximum)
        {
            maximum=arr[i];
        }
        
    }
    cout<<maximum;
    return 0;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    largest(arr,n);
    
}