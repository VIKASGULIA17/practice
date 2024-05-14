#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr,n;
    FILE(fopen("firstfile.txt","w"));
    if (firstfile==NULL)
    {
        printf("error");
        exit(1);
    }
    printf("enter a number");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",n);
    }fclose(firstfile);
    
}