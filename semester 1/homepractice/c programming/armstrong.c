#include<stdio.h>
int main(){
    int a,rem,num,sum=0;
    printf("enter value");
    scanf("%d",&a);
    num=a;
    while (a>0)
    {
        rem=a%10;
        sum=sum+rem*rem*rem;
        a=a/10;
    }
    if (num==sum)
    {
        printf("number is armstrong");
    }
    else
    {
        printf("not armstrong");
    }
    

    return 0;
}