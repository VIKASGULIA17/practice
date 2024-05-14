#include<stdio.h>
#include<conio.h>
void main(){
    int a,b,c;
    // a=10;
    // b=20;
    printf("enter value of a and b");
    scanf("%d \n %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;

    printf("value after swap %d\n%d",a,b);
    c=a;
    a=b;
    b=c;
    printf("value after swap %d\n%d",a,b);
    getch();

}