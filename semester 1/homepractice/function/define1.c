#include<stdio.h>
#define square(x) (x*x)
#define cube(x) (square(x)*x)
#define quad(x) (cube(x)*square(x))
int main(){
    int a;
    a=quad(2);
    printf("%d",a);
}