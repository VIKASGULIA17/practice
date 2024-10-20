#include<iostream>
#include<vector>
#include<numeric>

using namespace std;
int main(){
    vector<int> v={6,3,5,2};
    int n=v.size();
    int sum=accumulate(v.begin(),v.end(),0);
    int p=9;
    int rem=sum%p;
    if(rem==0)cout<< 0;
    for(int i=0;i<n;i++){
        if(rem==v[i])cout<< 1;
    }
    for(int i=0;i<n;i++){
        
    }
    }