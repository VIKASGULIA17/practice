#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int sum1=0,sum2=0;
    sum1=(n*(n+1))/2;
    for (int i = 0; i < n; i++)
    {
        sum2+=arr[i];
    }
    
    int missing_value=sum1-sum2;
    cout<<missing_value;
}