#include<stdio.h>
#include<conio.h>
void main(){
    int p,t;
    float r,si;
    printf("enter value of p,r and t");
    scanf("%d\n%f\n%d",&p,&r,&t);
    si=(p*r*t)/100;
    printf("simple interest is %f\n",si);
    getch();

}