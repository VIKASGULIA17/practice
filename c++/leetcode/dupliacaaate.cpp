#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int main(){
    vector<int> arr={1,1,2,2,2,3,3};
    int n=arr.size();
    vector<int> temp;
    for(int i=1;i<n;i++){
        if(arr[i-1]!=arr[i]){
            temp.push_back(arr[i-1]);
        }
    }   
   temp.push_back(arr[n-1]);
    for(int i=0;i<temp.size();i++){
        cout<<temp[i]<<" ";
    }
}