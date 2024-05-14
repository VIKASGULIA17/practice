#include<stdio.h>
int main(){
    int arr[100][100],max;
    int n,m,x,y;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d",&n, &m);
    for (int i = 0; i<n; i++)
    {
        for (int j =0; j<m; j++)
        {
            printf("enter [%d][%d]",i,j);
            scanf("%d",&arr[i][j]);
        }
        
    }
    for (int i = 0; i<n; i++)
    {
        max=arr[i][0];
        for (int j =0; j<m; j++)
        {
            if (max<arr[i][j])
            {
                max=arr[i][j];
            }
            
        }
    printf("max element of row [%d] is %d \n",i,max);   
    }
}