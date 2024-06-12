#include<stdio.h>
#define max 10
int arr[max],n;
int linear(){
    int item,s=0,x;
    printf("enter what u want to search\n");
    scanf("%d",&item);
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==item)
        {
            s=1;
            x=i;
            break;
        }
        
    }
    if (s==1)
    {
        printf("item present at index %d",x);
    }
    else{
        printf("element not present");
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
    linear();
}