#include<stdio.h>
void main(){
    int arr[7]={1,2,2133,4,5,300,3},secondmax=arr[0];
    // printf("enter the vlaue of array");
    // for ( int i = 0; i < 7; i++)
    // {
    //    scanf("%d",&arr[i]);
    // }
    int max=arr[0];
    for (int i = 1; i < 7; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
          
    } 
    for (int i = 1; i < 7; i++)
    {
        if (secondmax<arr[i] && arr[i]<max)
        {
            secondmax=arr[i];
        }
          
    } 
    printf("max  is  %d \n",max); 
    printf("second max  is  %d",secondmax); 
}