#include<iostream>
#include<vector>

using namespace std;

int SubarraySum(vector<int>&arr,int l,int r,int sum){
    int res=0;
    while(r<arr.size()-1){
        sum-=arr[l];
      l++;
        sum+=arr[r];
        r++;
        res=max(sum,res);
    }
    return res;
}

int main(){
    vector<int> arr={-1,2,3,3,4,5,-1};
    int sizeLim=4;
    int sum=0;
    for(int i=0;i<sizeLim;i++){
        sum+=arr[i];
    }
    cout<<SubarraySum(arr,0,sizeLim,sum);
}