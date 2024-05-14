#include<stdio.h>
#include<conio.h>
void display(int [5][5],int,int);
void read(int [5][5],int,int);
int main(){
    
    int n,m;
    int arr[5][5];
    printf("enter rows and columns");
    scanf("%d\n%d",&n,&m);
    read(arr,n,m);
    display(arr,n,m);
    
    }

void read(int a[5][5],int r,int c){
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            printf("Enter a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    }
void display(int a[5][5],int r,int c){
    for (int i = 0; i < r; i++)
    {
        printf("\n");
        for (int j = 0; j < c; j++)
        {
            printf("%d\t",a[i][j]);
        }
        
    }
    
}
