#include <stdio.h>
#define max 100
int arr[max];
int n;
int linear()
{
    int search, t = 0;
    printf("enter the number u want to search\n");
    scanf("%d", &search);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            t = 1;
            printf("element is present at %d\n", i + 1);
        }
    }
    if (t != 1)
    {
        printf("element not found\n");
    }
}
int binary()
{
    int beg = 0, end = n - 1;
    int search;
        int mid = (beg + end) / 2;
    printf("enter the number u want to search\n");
    scanf("%d", &search);
    while (beg <= end)
    {
        if (arr[mid] == search)
        {
            printf("element present at %d\n", mid+1);
            break;
        }
        else if (arr[mid] > search)
        {
            end=mid-1;
            mid = (beg + end) / 2;
        }
        else if(arr[mid]<search){
            beg = mid + 1;
            mid = (beg + end) / 2;
        }
    }
}
int main()
{
    printf("enter the number of elements\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]--:", i+1);
        scanf("%d", &arr[i]);
    }
    binary();
}