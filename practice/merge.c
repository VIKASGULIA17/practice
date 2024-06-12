#include<stdio.h>
int merge(int arr[],int l,int mid,int r){
    int an=mid-l+1;
    int bn=r-mid;
    int a[an];
    int b[bn];
    for (int i = 0; i < an; i++)
    {
        a[i]=arr[l+i];
    }
    for (int i = 0; i < bn; i++)
    {
        b[i]=arr[mid+i+1];
    }
    int i=0,j=0,k=l;
    while (i<an && j<bn)
    {
        if (a[i]<b[j])
        {
            arr[k++]=a[i++];
        }
        else
        arr[k++]=b[j++];
        
    }
    while (an>i)
    {
        arr[k++]=a[i++];
    }
    while (bn>i)
    {
        arr[k++]=b[i++];
    } 
}
int mergesort(int arr[],int l,int r){
    if (l>=r)
    {
        return 1;
    }
    
    int mid=(l+r)/2;
    mergesort(arr,l,mid);
    mergesort(arr,mid+1,r);
    merge(arr,l,mid,r);
}
int main()
{
    int arr[5]={30,45,12,9,6};
    // printf("enter the number of element in array\n");
    // scanf("%d",&n);
    // for (int i = 0; i < n; i++)
    // {
    //     printf("arr[%d]---------",i);
    //     scanf("%d",&arr[i]);
    // }
    // bubble();
    // selection();
    // insertion();
    for (int i = 0; i < 5; i++)
    {
        printf("arr[%d] =%d\n",i, arr[i]);
    }
    printf("----------\n");
    mergesort(arr,0,4);
    for (int i = 0; i < 5; i++)
    {
        printf("arr[%d]=%d\n", i,arr[i]);
    }
}