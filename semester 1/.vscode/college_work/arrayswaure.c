#include<stdio.h>
#include<conio.h>
void display(int [5][5],int,int);
void read(int [5][5],int,int);
void add(int[5][5],int [5][5],int,int,int,int);
void main()
{
int a1[5][5],a2[5][5],row1,col1,row2,col2;

printf("enter number of rows and col for first matrix\n");
scanf("%d%d",&row1,&col1);
printf("enter number of rows and col for second matrix\n");
scanf("%d%d",&row2,&col2);

read(a1,row1,col1);
display(a1,row1,col1);
read(a2,row2,col2);
display(a2,row2,col2);
add(a1,a2,row1,col1,row2,col2);

getch();
}
void read(int a[5][5],int r,int c)
{
int i,j;
printf("enter the array");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
}
void display(int mat[5][5],int r,int c)
{
int i,j;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",mat[i][j]);
}
printf("\n");
}
}
void add(int mat1[5][5],int mat2[5][5],int r,int c,int r1,int c1)
{
int mat[5][5],i,j;
if(r==r1&&c==c1)
{
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
mat[i][j]=mat1[i][j]+mat2[i][j];
}
}
}
else
{
printf("addition not possible");
}
display(mat,r,c);
}
