#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the range ");
    scanf("%d\n%d",&a,&b);
    while (a<=b)
    {
        if (a%2==0)
        {
            printf("%d   ",a);
        }
        a++;
    }
    
    return 0;
}