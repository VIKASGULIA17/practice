#include<iostream>
using namespace std;
void deletion(int arr[],int pos,int *n){
    for (int i = pos; i < *n; i++)
    {
        arr[i]=arr[i+1];
    } 
    *n=*n-1;  
    return ;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int pos;
    cin>>pos;
    deletion(arr,pos,&n);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}