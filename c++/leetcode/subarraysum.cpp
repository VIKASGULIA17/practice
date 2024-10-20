#include<iostream>
using namespace std;


int pow(int num,int i){
    if(i==0)return 1;
    return num*pow(num,i-1);
}


long long sum(int arr[],int i,int j){
    int sum=0;
    int x=j+1;
    for(int p=i;p<j;p++){
        sum+=pow(arr[p],x)*x;
        x++;
    }
    return sum;
}

int main(){
    int arr[]={2,4,1};
    int n=3;
    for(int i=0;i<n-1;i++){
        
            cout<<sum(arr,i,n)<<" ";
        
      
    }

}