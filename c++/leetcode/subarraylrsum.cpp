#include<iostream>
using namespace std;
#include<vector>
int main(){
    int arr[]={1,2,3,4};
    int left=1;
    int right=5;
    int sum=0;
    vector<int> v;
    for (int i = 0; i < 4; i++)
    {
        sum=0;        for (int j = i; j < 4; j++)
        {
            sum+=arr[j];
            v.push_back(sum);
        }
        
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
}