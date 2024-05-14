#include <stdio.h>
#define max 100

int main()
{
    int arr[max], n;
    printf("Enter the number of elements you want in array : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("enter element at index %d\t", i);
        scanf("%d", &arr[i]);
    }
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
    for (int i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
    }
}