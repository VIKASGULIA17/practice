#include<stdio.h>
void reverse(int arr[],int a,int b){
    int i=a,j=b;
    while (i<j)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    
}
void main(){
    int arr[7],n;
    int k=7;
    printf("enter the vlaue of array");
    for ( int i = 0; i < 7; i++)
    {
       scanf("%d",&arr[i]);
    }
    reverse(arr,0,6);
    
    printf("enter how many digits u wanna rotate ");
    scanf("%d",&n);
    n=n%k;
    reverse(arr,0,n-1);
    reverse(arr,n,6);
    for ( int i = 0; i < 7; i++)
    {
       printf("%d ",arr[i]);
    }
}
