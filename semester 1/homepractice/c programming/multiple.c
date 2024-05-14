#include<stdio.h>
int main(){
    int a;
    printf("enter a number");
    scanf("%d",&a);
    if (a%5==0 && a%3==0){
        printf("divisble by 3 and 5");
    }
    else{
        printf("not divisible");
    }


    
    return 0;
}