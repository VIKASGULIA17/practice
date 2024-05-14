#include<stdio.h>
int add(int *,int *);
int sub(int*,int*);
int mul(int*,int*);
int div(int* ,int*);
int main(){
    int a,b,c;
    printf("enter 1st value");
    scanf("%d",&a);
    printf("enter 2nd value");
    scanf("%d",&b);
    printf("sum of %d and %d number is %d\n",a,b,add(&a,&b));
    printf("subtraction of %d and %d number is %d\n",a,b,sub(&a,&b));
    printf("multiplication of %d and %d number is %d\n",a,b,mul(&a,&b));
    printf("division of %d and %d number is %d\n",a,b,div(&a,&b));
    
}
int add(int* a,int* b){
    int sum= *a + *b;
    return sum;
}
int sub(int* a,int* b){
    int sub= *a - *b;
    return sub;
}
int mul(int* a,int* b){
    int mul= *a * *b;
    return mul;
}
int div(int* a,int* b){
    int div= *a / *b;
    return div;
}
