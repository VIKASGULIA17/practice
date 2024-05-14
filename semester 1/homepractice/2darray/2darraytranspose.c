#include<stdio.h>
int main(){
    int arr[100][100];
    int n,m;
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
        for (int j =0; j<m; j++)
        {
            printf("%d\t",arr[j][i]);
        }
        printf("\n");
        
    }
   

    
    
      
}