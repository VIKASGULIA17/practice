#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int main(){
    vector<int> arr={1,2,3,4,5,6,9};
    int count=0;
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            count++;
            break;
        }
    }
    if(count!=0){
        cout<<"NOT sorted";
    }
    else cout<<"Sorted";
}