#include<stdio.h>
#include<conio.h>
void main(){
    int p,t;
    float r,ci;
    printf("enter value of p,r and t");
    scanf("%d\n%f\n%d",&p,&r,&t);
    ci=p*(1+(r/100)*t);
    printf("compound  interest is %f\n",ci);
    getch();



}