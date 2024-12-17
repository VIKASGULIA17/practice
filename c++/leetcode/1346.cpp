#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr;
    arr={-20,8,-6,-14,0,-19,14,4};

    sort(arr.begin(),arr.end());
        int i=0;
        int j=arr.size()-1;
        while(i<j){
            if(arr[i]*2==arr[j]){
                cout<< "true";
                break;
            }
            else if(arr[i]*2>arr[j]){
                j--;
            }
            else i++;
        }
        cout<<"oy";
}