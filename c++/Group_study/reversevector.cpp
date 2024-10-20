#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main(){
    vector<int> v;
    v={1,2,3,4,5};
    // push_back()
    // emplace_back()
    // pop();
    // swap();
    // sort();
    // unordered_map
    // map
    reverse(v.begin(),v.end());
    for(int i:v){
        cout<<i<<" ";
    }
}