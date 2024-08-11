#include<iostream>
using namespace std;
int x(int i,int arr[],int n){
    if (i>=n/2)return 0;
    swap(arr[i++],arr[n-i-1]);
    x(i,arr,n);
    return 1;
}
int main(){
    int arr[5]={1,2,3,4,5};
    x(0,arr,5);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}