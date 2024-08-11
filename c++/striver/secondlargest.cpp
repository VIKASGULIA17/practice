#include<iostream>
using namespace std;
int sec_max(int arr[],int n){
    int maximum=arr[0];
    
    int sec=-1;
    int count=0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i]>maximum)
        {
            sec=maximum;
            maximum=arr[i];
        }
        else if(maximum>=arr[i] && arr[i]>sec)
        {
            sec=arr[i];
        }    
    }
    cout<<sec;
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
    sec_max(arr,n);
}