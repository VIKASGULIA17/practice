#include<stdio.h>
int main(){
    int a,rem,sum=0;
    printf("enter value");
    scanf("%d",&a);
    while (a>0)
    {
        rem=a%10;
        sum=sum+rem;
        a=a/10;
    }
    printf("%d",sum);
    return 0;
}