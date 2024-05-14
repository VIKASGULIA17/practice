// wap to print sum of array element of size 5

#include<stdio.h>
int main(){
    int arr[5],sum=0;
    printf("enter vlaue of array");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        sum=sum+arr[i];
    }
    printf("sum of array is %d",sum);
    
    
}