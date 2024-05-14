#include <stdio.h>
#define max 100
int n, i;
int linear(int, int[]);
int binary(int, int[]);
int main()
{
    int arr[max];
    printf("enrollment number :05813702023\n");
    printf("enter the number of elements");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("enter element of index %d\t", i);
        scanf("%d", &arr[i]);
    }
    int s;
    char ch;
    do
    {
        int c;
        printf("press 1 for linear search\n");
        printf("press 2 for binary search \n");
        printf("enter ur choice");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            printf("enter the element u want to search\n");
            scanf("%d", &s);
            linear(s, arr);
            break;
        case 2:
            printf("enter the element u want to search\n");
            scanf("%d", &s);
            binary(s, arr);
            break;

        default:
            break;
        }
        printf("\nenter 't' to continue\n", &ch);
        scanf("%s", &ch);
    } while (ch == 't');
}
int linear(int s, int arr[])
{
    int f;
    for (i = 0; i < n; i++)
    {
        if (s == arr[i])
        {
            f = 1;
            break;
        }
    }
    if (f == 1)
    {
        printf("%d is present at the index %d", s, i);
    }
    else
        printf("element not present");
}
int binary(int s, int arr[])
{
    int beg = 0, end = n - 1, mid;
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
            mid = (beg + end) / 2;
        }
        else if (arr[mid] < s)
        {
            beg = mid + 1;
            mid = (beg + end) / 2;
        }
        else
            printf("not present");
    }
}