#include<stdio.h>
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3 ; j++)
        {
            printf("%d\t",arr[i][j]);
        }
       printf("\n"); 
    }
    int a=3,b=3;
    for (int i = 0; i < b; i++)
    {
        if (i%2==0)
        {
            for (int j = a-1; j>=0; j--)
            {
                printf("%d ",arr[j][i]);
            }
            printf("\n");
        }
        else{
            for (int j = 0; j < b; j++)
            {
                printf("%d ",arr[j][i]);
            }
            printf("\n");
            
        }
        
    }
    
}