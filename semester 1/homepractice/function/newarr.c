// wap to perform swapping of index 3 and 6 in the array of size 10
#include<stdio.h>
int main(){
    int arr[10],sum=0;
    printf("enter vlaue of array");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }
    int c;
    c=arr[3];
    arr[3]=arr[6];
    arr[6]=c;
    for (int i = 0; i < 10; i++)
    {
        printf("arr[%d]  %d\n",i,arr[i]);
    }
    
}
