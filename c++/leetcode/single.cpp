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
    
    for (int  i = 0; i < n; i++)//2
    {
        int count=1;
        for (int j = 0; j < n; j++)
        {
            if (i==j)
            {
                continue;
            }
            
            else if (arr[i]==arr[j])//2==2
            {
                count+=1;//2
            }
            
        }
            if (count==1)
            {
                cout<<arr[i];
                break;
            }
        
    }
    
}