#include<stdio.h>
int main(){
    int a,b,i,n=0,c=0;
    a=-1;
    b=1;
    printf("enter how many you want to print");
    scanf("%d",&n);
    while (i<+n)
    {
        c=a+b;
        printf("%d  ",c);
        a=b;
        b=c;
        i++;
    }
    
    
    return 0;
}