#include<stdio.h>
#define max 10
int arr[max],n;
int binary(){
    int beg=0,end=n-1,mid,item;
    printf("enter what u want to search\n");
    scanf("%d",&item);
    while (beg<=end)
    {
        mid=(beg+end)/2;
        if (arr[mid]==item)
        {
            printf("%d is present at index %d",item,mid);
            break;
        }
        else if (arr[mid]>item)
        {
            end=mid-1;
        }
        else if (arr[mid]<item)
        {
            beg=mid+1;
        }
        else
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
    binary();
}