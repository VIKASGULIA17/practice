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
    for (int i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
    }
}