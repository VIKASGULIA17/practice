#include <iostream>
using namespace std;
#include<vector>
int main()
{
    int n = 5;
    int m = 5;
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {1, 2, 3, 6, 7};
    vector<int> v;
    int i=0,j=0;
    while (i<n && j<m)
    {
        if (a[i]<=b[j])
        {
            if (v.size()==0 || v.back()!=a[i])
            {
                v.push_back(a[i]);
            }
            i++;
        }
        else
        {
            if (v.size()==0 || v.back()!=b[j])
            {
                v.push_back(b[j]);
            }
            j++;
        }
        
    }
    while (j<m)
    {
            if (v.size()==0 || v.back()!=b[j])
            {
                v.push_back(b[j]);
            }
            j++;
        
    }
    while (i<n)
    {
            if (v.size()==0 || v.back()!=a[i])
            {
                v.push_back(a[i]);
            }
            i++;

    }
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    
    
}