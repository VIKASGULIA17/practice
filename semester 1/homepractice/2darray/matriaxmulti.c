#include <stdio.h>
int main()
{
    int arr[100][100], brr[100][100], r[100][100];
    int n, m, x, y;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("enter [%d][%d]", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d \t", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Enter the 2nd number of rows and columns: ");
    scanf("%d %d", &x, &y);
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("enter [%d][%d]", i, j);
            scanf("%d", &brr[i][j]);
        }
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d \t", brr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    if (m == x)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < y; j++)
            {
                r[i][j] = 0;
                for (int k = 0; k < m; k++)
                {
                    r[i][j] += arr[i][k] * brr[k][j];
                }
            }
        }
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d \t", r[i][j]);
        }
        printf("\n");
    }
}