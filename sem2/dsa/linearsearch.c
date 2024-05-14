#include <stdio.h>
#define max 100
int main()
{
    int arr[max], n, i;
    printf("enter number of element");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("\n enter the elements %d\t", i);
        scanf("%d", &arr[i]);
    }
    int s, f;
    printf("enter the element u want to search");
    scanf("%d", &s);
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