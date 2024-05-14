#include<stdio.h>
int main(){
    int a,b=1,i=0;
    printf("enter the range ");
    scanf("%d",&a);
    while (i<=a)
    {
        printf("%d+",b);
        i++;
        b+=2;
    }
    
    return 0;
}