#include<iostream>
#include<set>
using namespace std;


int main(){
    int arr1[4]={1,2,1,6};
    int arr2[7]={1,3,4,2,2,1,4};
    set<int> s;
    for (int i = 0; i < 4; i++)
    {
        s.insert(arr1[i]);
    }
    for (int i = 0; i < 7; i++)
    {
        s.insert(arr2[i]);
    }
    int uni[s.size()];
    int i=0;
    for (auto it : s)
    {
        uni[i++]=it;
    }
    
    for (int i = 0; i < sizeof(uni)/sizeof(int); i++)
    {
        cout<<uni[i]<<" ";
    }
    
}
