#include<stdio.h>
#define max 10
int arr[max],n;
int bubble(){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            
        }
        
    }
    
}
int main(){
    printf("enter number of items");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    bubble();
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",arr[i]);
    }
    
}