#include <stdio.h>
#define max 10
// int arr[max],n;
int n;
int merge(int arr[], int beg, int end, int mid)
{
    int an = mid - beg + 1, bn = end - mid;
    int a[an], b[bn];
    for (int i = 0; i < an; i++)
    {
        a[i] = arr[beg + i];
    }
    for (int i = 0; i < bn; i++)
    {
        b[i] = arr[mid + 1 + i];
    }
    int i = 0, j = 0, k = beg;
    while (i < an && j < bn)
    {
        if (a[i] < b[j])
        {
            arr[k++] = a[i++];
        }
        else
            arr[k++] = b[j++];
    }
    while (i < an)
    {
        arr[k++] = a[i++];
    }
    while (j < bn)
    {
        arr[k++] = b[j++];
    }
    return 0;
}
int mergesort(int arr[], int beg, int end)
{
    if (beg >= end)
    {
        return 1;
    }
    int mid = (beg + end) / 2;
    mergesort(arr, beg, mid);
    mergesort(arr, mid + 1, end);
    merge(arr, beg, end, mid);
    return 0;
}
int main()
{
    n = 6;
    int arr[6] = {17, 2, 34, 8, 4, 67};
    // printf("enter number of items");
    // scanf("%d",&n);
    // for (int i = 0; i < n; i++)
    // {
    //     printf("arr[%d]",i);
    //     scanf("%d",&arr[i]);
    // }
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    mergesort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}