#include<stdio.h>
void main(){
    int arr[6];
    printf("enter the vlaue of array");
    for ( int i = 0; i < 5; i++)
    {
       scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("array[%d]    %d \n",i,arr[i]);
        
    }  
}