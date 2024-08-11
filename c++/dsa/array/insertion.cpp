#include<iostream>
using namespace std;
#define max 10
int arr[max];
int n;
int insertion(){
    int ins,pos;
    cin>>pos;
    if (pos>=max)
    {
        cout<<"overflow\n";
        return 0;
    }
    cin>>ins;
    for (int i = n; i > pos-1; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=ins;
    n++;
    return 0;
}
int main(){
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }   
    insertion();
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}