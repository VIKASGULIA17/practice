#include<stdio.h>
int main(){
    int a,rem,num,rev=0;
    printf("enter value");
    scanf("%d",&a);
    num=a;
    while (a>0)
    {
        rem=a%10;
        rev=rev*10+rem;
        a=a/10;
        
    }
    if (num==rev)
    {
        printf("number is palindrome");
    }
    else
    {
        printf("not palindrome");
    }
    
    return 0;
}