#include<stdio.h>
int main(){
    int arr[100][100],b[1][100],max,max1;
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
        max=0;
        for (int j =0; j<m; j++)
        {
                max+=arr[i][j];     
        }
    for (int i = 0; i < m; i++)
    {
        b[0][i]=max;
    }
    max=0;
    max1=b[0][0];
    for (int s = 1; s <i ; s++)
    {
        
            if (b[0][s]>max1)
            {
                max1=b[0][i];
            }
            
        
        
    }
    }
    printf("max is %d",max1);
    
    
      
}