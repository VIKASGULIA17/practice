#include<iostream>
using namespace std;
int main(){
    int arr[9]={10,4,5,2,3,6,1,3,6};
    int m=3;
    int len=6;
    int s=0;
    for(int i=m+1;i<(len+m)/2+1;i++){
        int temp=arr[i];
        arr[i]=arr[len-s-1];
        arr[len-s-1]=temp;
        // cout<<arr[len-s-1]<<"-"<<s<<" ";
        s+=1;
    }
    for (int i = 0; i < len; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}