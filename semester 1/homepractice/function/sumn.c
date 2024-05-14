// wap to fnd sum of 10 natural number
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
        sum=sum+arr[i];
    }
    printf("sum of natural number is %d",sum);
    
    
}