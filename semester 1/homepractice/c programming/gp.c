#include<stdio.h>
int main(){
    int a,b=1,i;
    printf("enter value");
    scanf("%d",&a);
    for (i = 1; i<=a;i++)
    {
        printf("%d   ",b);
        b=b*2;
    }
    printf("%d",i);
    return 0;
}