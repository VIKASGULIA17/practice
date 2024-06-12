#include<stdio.h>
#define max 10
int arr[max],n;
int deletion(){
    int pos;
    printf("enter the position u want to delete");
    scanf("%d",&pos);
    for (int i = pos; i < n; i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    
}
int main(){
    printf("enter number of items");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    deletion();
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",arr[i]);
    }
    
}