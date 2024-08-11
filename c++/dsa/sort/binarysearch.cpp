#include<iostream>
using namespace std;
int binary_search(int arr[],int target,int n){
    int beg=0;
    int end=n-1;
    int x=0;
    while (beg<=end)
    {
        int mid=(beg+end)/2;
        if (arr[mid]==target)
        {
            return mid;
            x=1;
            break;
        }
        else if(arr[mid]>target){
            end=mid-1;
        }
        else if(arr[mid]<target){
            beg=mid+1;
        }  
    }
    if (x==0)
    {
        cout<<"Not Present";
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
    int target;
    cin>>target;
    int s=binary_search(arr,target,n);
    cout<<s;
}