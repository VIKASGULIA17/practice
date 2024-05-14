#include<stdio.h>
void main(){
    int arr[7];
    printf("enter the vlaue of array");
    for ( int i = 0; i < 7; i++)
    {
       scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for (int i = 1; i < 7; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
          
    } 
    printf("max  is  %d",max); 
}