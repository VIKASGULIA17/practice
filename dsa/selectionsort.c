#include<stdio.h>
#define max 10
int arr[max],n;
int selection(){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
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
    selection();
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",arr[i]);
    }  
}