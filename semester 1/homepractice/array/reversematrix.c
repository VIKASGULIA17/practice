#include<stdio.h>
void main(){
    int arr[7],rarr[7];
    printf("enter the vlaue of array");
    for ( int i = 0; i < 7; i++)
    {
       scanf("%d",&arr[i]);
    }
    for ( int i = 0; i < 7; i++)
    {
        rarr[6-i] = arr[i]; //reversing the array using a loop
        // arr[6-i]=rarr[i]; same as above but with reverse method.
    }
    for ( int i = 0; i < 7; i++)
    {
       printf("%d ",rarr[i]);
    }
    
}