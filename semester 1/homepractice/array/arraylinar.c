#include <stdio.h>
int main()
{
    int arr[10], i, item,n,a;
    printf("\nEnter number of elements of an array:\n");
    scanf("%d",&n);
    printf("\nEnter elements: \n");
    for (i=0; i<n; i++)
        scanf("%d", &arr[i]);
    printf("\nEnter item to search: ");
    scanf("%d", &item);
    for (i=0; i<=n+1; i++)
        if (item == arr[i])
        {
            printf("\nItem found at location %d\n", i+1);
            break;
        }
    if (i > n+1)
        printf("\nItem does not exist.\n");
     for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (arr[i] > arr[j]) {
                a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }
    printf("The numbers in ascending order is: ");
    for (i = 0; i < n; ++i)
        printf("%d ", arr[i]);
}
    
