#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,5,345,657,82,647,79678};
    for (int i : arr)
    {
        cout<<i<<" ";
    }
    return 0;
}