#include<iostream>
using namespace std;
#include<vector>

int main(){
    int a[]={1,2,3,3,4,5};
    int b[]={2,2,3,3,4,6};
    int n=6;
    int m=6;
    vector<int> v;
    int i=0,j=0;
    while (i<n && j<m)
    {
        if (a[i]>b[j])
        {
            j++;
        }
        else if(a[i]<b[j]){
            i++;
        }
        else{
            v.push_back(a[i]);
            i++;
            j++;
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
}
