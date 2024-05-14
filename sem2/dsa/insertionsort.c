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

    for (int i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
    }
}