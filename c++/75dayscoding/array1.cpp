#include<iostream>
using namespace std;
int main(){
    int arr[5];
        cout<<"enter elements in array";
    for (int &i : arr)
    {
        cin>>i;
    }
    for (int i : arr)
    {
        cout<<i<<" ";
    }
    return 0;
}