// wap to print even numbers in array
#include<stdio.h>
int main(){
    int arr[10],sum=0;
    printf("enter vlaue of array");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (i%2==0)
        {
            printf(" %d",arr[i]);
        }
        
    } 
}