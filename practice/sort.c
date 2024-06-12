#include <stdio.h>
#define max 10
int arr[max], n;
int bubble()
{
    for (int i = 0; i < n - 1; i++)//1-3[i<3]
    {
        for (int j = 0; j < n - i - 1; j++)//[0-3]
        {
            if (arr[j] > arr[j + 1])//1
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
//[34,456,12,56]
//[12,456,34,56]

int selection()
{
    for (int i = 0; i < n - 1; i++)//[1-2]
    {
        for (int j = i; j < n; j++)//[1-3]
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
//[456,34,12,56]
//[456,456,12,56]
//[34,456,12,56]
//[34,12,456,56]
int insertion()
{
    for (int i = 1; i < n; i++)//2nd
    {
        int current = arr[i];//12
        int j = i - 1;//2-1=1
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
}
int merge(int arr[],int l,int mid,int r){
    int an=mid+1-l;
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
    // int arr[5]={30,45,12,9,6};
    
    printf("enter the number of element in array\n");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]---------",i);
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] =%d\n",i, arr[i]);
    }
    printf("----------\n");
    // bubble();
    // selection();
    // insertion();
    // mergesort(arr,0,n-1);
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]=%d\n", i,arr[i]);
    }
}