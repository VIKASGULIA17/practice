#include<iostream>
#include<map>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
        for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    map <int,int> mpp;
    int q;
    cin>>q;
    
        for (int i = 0; i < n; i++)
        {
            mpp[arr[i]]+=1;
        }
    
    while (q--)
    {
       int number;
       cin>>number;
       cout<<mpp[number]<<endl;
    }
    return 0;
}