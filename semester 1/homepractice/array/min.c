#include<stdio.h>
void main(){
    int arr[7];
    printf("enter the vlaue of array");
    for ( int i = 0; i < 7; i++)
    {
       scanf("%d",&arr[i]);
    }
    int min=arr[0];
    for (int i = 1; i < 7; i++)
    {
        if (arr[i]<min)
        {
            min=arr[i];
        }
          
    } 
    printf("min  is  %d",min); 
}