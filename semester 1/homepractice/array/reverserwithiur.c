#include<stdio.h>
void reverse(int arr[]){
    int i=0,j=6;
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
    int arr[7];
    printf("enter the vlaue of array");
    for ( int i = 0; i < 7; i++)
    {
       scanf("%d",&arr[i]);
    }
    reverse(arr);
    for ( int i = 0; i < 7; i++)
    {
       printf("%d ",arr[i]);
    }
    
}
