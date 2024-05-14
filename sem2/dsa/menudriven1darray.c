#include <stdio.h>
#define max 100
int arr[max];
int n;
int pos;
int deletion(int);
int insertion(int, int);
void traverse();
void reverse();
void merge();
int main()
{
    printf("Enrollment number = 05813702023\n");
    printf("enter the number of elements");
    scanf("%d", &n);
    if (n <= 0 || n > max)
    {
        printf("Invalid Input\n");
        return -1;
    }

    printf("Enter %d integers: \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int pos;
    int new;
    char c = 't';
    do
    {
        printf("\n 1> Insert the element\n");
        printf(" 2> Delete the element\n");
        printf(" 3> Transverse the element\n");
        printf(" 4> reverse the element\n");
        printf(" 5> merge the elements of 2 matrix\n");
        printf(" 6> stop loop\n");
        int ch;
        printf("\nenter a case");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\nenter the position u want to insert element");
            scanf("%d", &pos);
            printf("\nenter new element");
            scanf("%d", &new);
            insertion(pos, new);
            break;
        case 2:
            printf("\nenter the positon u want to delete");
            scanf("%d", &pos);
            deletion(pos);
            break;
        case 3:
            traverse();
            break;
        case 4:
            reverse();
            break;
        case 5:
            merge();
            break;
        case 6:
            c = 'f';
            break;

        default:
            break;
        }
    } while (c == 't');
}
int deletion(int pos)
{
    if (pos > n - 1)
    {
        printf("element not exist");
    }
    else
    {
        for (int i = pos; i < n; i++)
        {
            arr[i] = arr[i + 1];
        }
        n = n - 1;

        for (int i = 0; i < n; i++)
        {
            printf("%d   ", arr[i]);
        }
    }
}
int insertion(int pos, int new)
{
    for (int i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = new;
    n++;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void reverse()
{
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d\n", arr[i]);
    }
}
void merge()
{
    int temp[max];
    int x = 2;
    printf("enter the number of element for 2nd array");
    scanf("%d", &x);
    if ((x + n) > max)
    {
        printf("overload");
        return;
    }
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &temp[i]);
    }
    for (int i = 0; i < x; i++)
    {
        arr[n + i] = temp[i];
    }
    n = n + x;
}
void traverse(){
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",arr[i]);
    }

}