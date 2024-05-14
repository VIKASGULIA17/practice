#include <stdio.h>
#define max 100
int arr[max], n;
int bubble()
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int insertion()
{
    int j, temp;
    for (int i = 0; i < n; i++)
    {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && temp < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}
int merge(int arr[], int l, int mid, int r)
{
    int an = mid - l + 1;
    int bn = r - mid;
    int a[an];
    int b[bn];
    for (int i = 0; i < an; i++)
    {
        a[i] = arr[l + i];
    }
    for (int i = 0; i < bn; i++)
    {
        b[i] = arr[mid + i + 1];
    }
    int i = 0;
    int j = 0;
    int k = l;
    while (i < an && j < bn)
    {
        if (a[i] < b[j])
        {
            arr[k++] = a[i++];
        }
        else
            arr[k++] = b[j++];
    }
    while (an > i)
    {
        arr[k++] = a[i++];
    }
    while (bn > i)
    {
        arr[k++] = b[i++];
    }
}
int mergesort(int arr[], int l, int r)
{
    if (l >= r)
    {
        return 1;
    }
    int mid = (l + r) / 2;
    mergesort(arr, l, mid);
    mergesort(arr, mid + 1, r);
    merge(arr, l, mid, r);
}
int selection()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
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
int traverse()
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}
int main()
{
    printf("enrollment no:05813702023\n");
    printf("Enter the number of elements you want in array : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("enter element at index %d\t", i);
        scanf("%d", &arr[i]);
    }
    char c = 't';
    do
    {
        printf("\n 1> bubble\n");
        printf(" 2> insertion\n");
        printf(" 3> merge\n");
        printf(" 4> selection\n");
        printf(" 5> traverse\n");
        printf(" 6> stop loop\n");
        int ch;
        printf("\nenter a case");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            bubble();
            break;
        case 2:
            insertion();
            break;
        case 3:
            mergesort(arr, 0, n - 1);
            break;
        case 4:
            selection();
            break;
        case 5:
            traverse();
            break;
        case 6:
            c = 'f';
            break;

        default:
            break;
        }
    } while (c == 't');
}
