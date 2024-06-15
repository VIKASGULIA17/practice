#include<stdio.h>
#define max 10
int n=3,m=3,count=0,sparsematrix[max][max],k;
int sparse(int arr[3][3]);
int check(int arr[3][3]){
    for (int i = 0; i < n; i++)
    {
        for (int j= 0; j < m; j++)
        {
            if (arr[i][j]!=0)
            {
                count++;
            }            
        }       
    }
}
int sparse(int arr[3][3]){
    k=1;
    sparsematrix[0][1]=3;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           if (arr[i][j]!=0)
           {
            sparsematrix[k][0]=i;
            sparsematrix[k][1]=j;
            sparsematrix[k][2]=arr[i][j];
            // printf("%d %d %d ",i,j,arr[i][j]);
           }   
        //    printf("\n");        
        }  
        k++;      
    }
    sparsematrix[0][0]=count+1;   
    sparsematrix[0][2]=count;
}
int display(){
    for (int i = 0; i < k; i++)
    {
        printf("%d\t%d\t%d",sparsematrix[i][0],sparsematrix[i][1],sparsematrix[i][2]);
        printf("\n");
    }
    
    
}
int main(){
    // printf("enter number of rows &columns");
    // scanf("%d",&n);
    // scanf("%d",&m);
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         printf("arr[%d][%d]",i,j);
    //         scanf("%d",&arr[i][j]);
    //     }
        
    // }
    int arr[3][3]={{1,0,0},{0,4,10},{0,0,34}};
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf("%d\t",arr[i][j]);
    //     }
        
    // }
    
    check(arr);
    sparse(arr);
    display(arr);
}