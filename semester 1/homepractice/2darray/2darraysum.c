#include<stdio.h>
int main(){
    int arr[100][100],brr[100][100],sum[10][10];
    int n,m,x,y;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d",&n, &m);
    printf("Enter the number of rows and columns of second matrix: ");
    scanf("%d %d",&x, &y);
    if (n==x && m==y)
    {
    for (int i = 0; i<n; i++)
    {
        for (int j =0; j<m; j++)
        {
            printf("enter [%d][%d]",i,j);
            scanf("%d",&arr[i][j]);
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j< m; j++)
        {
            printf("enter [%d ][%d]",i,j);
            scanf("%d",&brr[i][j]);
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j< m; j++)
        {
            printf("%d\t",arr[i][j]+brr[i][j]);
        }
        printf("\n");

        
    }    
    }
    else
    printf("error");
}