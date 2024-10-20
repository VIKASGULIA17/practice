#include<iostream>
using namespace std;
#include<vector>
int main() {
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
   int c=0;
   for(int i=0;i<n;i++){
    bool duplicate = false;
    for (int j = 0; j< c;j++)
    {
        if(arr[i]==arr[j]){
            duplicate = true;
            break;
        }
    }
    if(!duplicate){
        arr[c]=arr[i];
        c++;
    }
}
    for (int i = c; i < n; i++)
    {
        arr[i]=-1;
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}