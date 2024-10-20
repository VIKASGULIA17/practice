#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include <climits>
int main(){
    vector<int> arr={1,4,7,5,8,1,7,8,3,6};
    int n=arr.size();
    int max1=arr[0];
    int max2=INT_MIN;
    for(int i=1;i<n;i++){
        if(arr[i]>=max1){
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]<=max1 &&max2<arr[i]){
            max2=arr[i];
        }
    }
    cout<<max2;
    return 0;
}