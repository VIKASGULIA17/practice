#include<stdio.h>
#include<conio.h>
void main(){
    
    float r,pi,area,cir;
    pi=3.14;
    printf("enter value of r");
    scanf("%f",&r);
    area=pi*r*r;
    cir=2*pi*r;
    printf("area of circle %f\n",area);
    printf("circumference if circle is%f \n",cir);
    getch();

}