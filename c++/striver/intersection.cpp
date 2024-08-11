#include<iostream>
using namespace std;
#include<vector>

int main(){
    int a[]={1,2,3,3,4,5};
    int b[]={2,2,3,3,4,6};
    int n=6;
    int m=6;
    int v[m]={0};
    int ans[n];
    int x=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j< m; j++)
        {
            if (a[i]==b[j] && v[j]==0)
            {
                ans[x++]=a[i];
                v[j]=1;
                break;
            }
            if (b[j]>a[j])
            {
               break;
            }
            
        }
        
    }
    for (int i = 0; i < x ; i++)
    {
        cout<<ans[i]<<" ";
    }
    
    
}