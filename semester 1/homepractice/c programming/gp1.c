#include<stdio.h>
int main(){
    int a;
    float b=100;
    printf("enter a value");
    scanf("%d",&a);
    for (int i =2; i<=a; i++)
    {
        printf("%f  ",b);
        b=b/2;
    }
    
    return 0;
}