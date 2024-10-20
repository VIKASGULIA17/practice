#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v={1,1,3,5,5};
    int count=0;
    int n=v.size();
    for(int i=0;i<n;i++){
        if(i==0 &&v[i]!=v[i+1])cout<<v[i];
        else if(v[i-1]!=v[i]&&v[i]!=v[i+1]){     
            cout<<v[i];
        }
    }
}
