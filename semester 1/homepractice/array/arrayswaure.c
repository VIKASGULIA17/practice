#include<stdio.h>
int main(){
    int arr[3], i;
    printf("Enter the array elements (10 elements):\n");
    for ( i = 0; i < 3; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        arr[i]*=arr[i];
    }
    for (int i = 0; i < 3; i++)
    {
        printf("elements of array are %d\n",arr[i]);
    }
}
    
    
    