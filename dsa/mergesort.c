#include<stdio.h>
#define max 10
int arr[max],n;
int merge(int beg,int end,int mid){
    int an=(mid-beg)+1,bn=end-mid;
    int a[an],b[bn];
    for (int i = 0; i < an; i++)
    {
        a[i]=arr[beg+i];
    }
    for (int i = 0; i < bn; i++)
    {
        b[i]=arr[mid+1+i];
    }
    
}
int mergesort(int beg,int end){
    if (beg<=end)
    {
        return 1;
    }
    int mid=(beg+end)/2;
    mergesort(beg,mid);
    mergesort(mid+1,end);
}
int main(){
    printf("enter number of items");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    mergesort(0,n-1);
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",arr[i]);
    }
    
}