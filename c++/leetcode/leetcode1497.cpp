#include<iostream>
using namespace std;
#include<algorithm>
int main(){
    int arr[]={1,2,3,4,5,10,6,7,8,9};
    int len=5;
    int k=5;
    sort(arr,arr+10);
    for (int i = 0; i < 9; i++)
    {
        for(int j=i+1;j<10;j++){
            if((arr[i]+arr[j])%k==0){   
                len--;      
                break;
            }
            j++;
            
        }   
    }
    cout<<len;
}