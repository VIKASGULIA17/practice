#include<stdio.h>
int main(){
    int a,b,i;
    printf("enter ");
    scanf("%d",&a);
    b=a;
    while (b<=a*10)
    {
        printf("%dx%d=%d\n",a,i,b);
        b=b+a;
        
    }
    
    return 0;
}