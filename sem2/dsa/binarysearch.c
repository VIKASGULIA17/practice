#include <stdio.h>
#define max 100
int main()
{
    int arr[max], n;
    printf("enter the number of elements");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("enter element of index %d\t", i);
        scanf("%d", &arr[i]);
    }
    int s, beg = 0, end = n - 1, mid;
    printf("enter the element u want to search");
    scanf("%d", &s);
    mid = (beg + end) / 2;
    while (beg < end)
    {
        if (arr[mid] == s)
        {
            printf("the element is present at index %d", mid);
            break;
        }
        else if (arr[mid] > s)
        {
            end = mid - 1;
        }
        else if (arr[mid] < s)
        {
            beg = mid + 1;
        }
        else
            printf("not present");
        mid = (beg + end) / 2;
    }
}