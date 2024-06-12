#include<stdio.h>
#define max 10
int arr[max],n;
int insertion(){
    int j;
    for (int i = 1; i < n; i++)
    {
        int temp=arr[i];
        j=i-1;
        while (arr[j]>temp&&j>-1)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
        
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
    insertion();
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",arr[i]);
    }
    
}