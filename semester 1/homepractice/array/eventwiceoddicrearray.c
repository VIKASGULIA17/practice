#include<stdio.h>
int main(){
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        printf("enter element %d ",i+1);
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (i%2==0)
        {
            arr[i]+=10;
        }
        else
        arr[i]*=2;
        
    }
    for (int i = 0; i < 10; i++)
    {
        printf("array is %d \n  ",arr[i]);
    }
    
    
    
}