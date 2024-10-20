#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int> &temp,int i,int j){
    while(i<j){
        swap(temp[i],temp[j]);
        i++,j--;
    }
}
int main(){
    vector<int> v={1,2,3,4,5,6,7};
    int k=3;
    int n=v.size();
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    reverse(v,n-k,n);
    reverse(v,0,n-k);
    reverse(v,0,n);
    for(int i:v){
        cout<<i<<" ";
    }
}