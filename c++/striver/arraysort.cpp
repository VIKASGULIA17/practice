#include<iostream>
using namespace std;

int sort_check(int arr[],int n){
    int c=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>arr[i+1])
        {
            c=1;
            break;
        }
        
    }
    if (c==1)
    {
        cout<<"not";
    }
    else{
        cout<<"sorted";
    }
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
    sort_check(arr,n);
}