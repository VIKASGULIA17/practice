#include<stdio.h>
int main(){
    int arr[10],n,count=0;
    for (int i = 0; i < 10; i++)
    {
        printf("enter element %d ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the number ypu want to compare");
    scanf("%d",&n);
    for (int i = 0; i < 10; i++)
    {
        if (arr[i]==n)
        {
            count+=1;
        }
        
        
    }
    printf("elements equal to %d is %d ",n,count);
    
    
    
    
}