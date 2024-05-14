#include <stdio.h>
#define max 100
int main()
{
    int arr[max], n;
    printf("emter no of elements i n array");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int new;
    printf("enter new element");
    scanf("%d", &new);
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < new &&arr[i + 1] >= new)
        {
            index = i + 1;
        }
    }
    for (int i = n; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[index] = new;
    for (int i = 0; i < n + 1; i++)
    {
        printf("%d\t", arr[i]);
    }
}