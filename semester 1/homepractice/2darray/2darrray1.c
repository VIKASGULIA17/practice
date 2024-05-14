#include <stdio.h>
void main ()
{
    int n;
    printf("enter how many rows");
    scanf("%d",&n);
    int m;
    printf("enter how many columns");
    scanf("%d",&m);
    int arr[n][m],i,j;
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            printf("Enter a[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n printing the elements ....\n");
    for(i=0;i<n;i++)
    {
        printf("\n");
        for (j=0;j<m;j++)
        {
            printf("%d\t",arr[i][j]);
        }
    }
}