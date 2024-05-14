#include <stdio.h>
int merge(int[], int, int, int);
void Print_Array(int values[], int length)
{
    int i;
    for (i = 0; i < length; i++)
        printf("%d ", values[i]);
    printf("\n");
}
int mergesort(int arr[], int beg, int end)
{
    int mid;
    if (beg < end)
    {
        mid = (beg + end) / 2;
        mergesort(arr, beg, mid);
        mergesort(arr, mid + 1, end);
        merge(arr, beg, mid, end);
    }
}
int merge(int a[], int beg, int mid, int end)
{
    int i, j, k, hl = (mid - beg) + 1, sl = (end - mid);
    int L[hl], R[sl];
    for (i = 0; i < hl; i++)
    {
        L[i] = a[beg + i]; // copy data to temp arrays
        for (j = 0; j < sl; j++)
        {
            R[j] = a[mid + 1 + j]; // data from main array to temp arrays
        }
    }
    i = 0;
    j = 0;
    k = beg;
    while (i < hl && j < sl)
    {
        if (L[i] <= R[j])
        {
            a[k] = L[i];
            i++;
        }

        else
        {
            a[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < hl)
    {
        a[k] = L[i];
        i++;
        k++;
    }
    while (j < sl)
    {
        a[k] = R[j];
        j++;
        k++;
    }
}
int main()
{
    int arr[] = {22, 98, 1, 55, 17, 32, 65, 3874, 8};
    int length = 9;
    printf("The unsorted array:\n");
    Print_Array(arr, length);
    mergesort(arr, 0, length - 1);
    printf("\nThe sorted array:\n");
    Print_Array(arr, length);
    return 0;
}