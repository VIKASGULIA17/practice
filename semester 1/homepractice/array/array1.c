#include<stdio.h>
void main(){
    int marks[50],avg,sum=0;
    
    for ( int i = 0; i < 50; i++)
    {
       printf("enter the marks of student %d ",i+1); 
       scanf("%d",&marks[i]);
    }
    for (int i = 0; i < 50; i++)
    {
        sum+=marks[i];
        avg=sum/50;
    }  
    printf("average marks of 50 student is %d",avg);
}