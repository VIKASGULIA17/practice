#include<stdio.h>
int fact(int );
int main(){
    int a;
    printf("enter a value");
    scanf("%d",&a);
    int fac=fact(a);
    printf("factorial of %d is %d",a,fac);

}
int fact(int n){
    if (n==1) return 1;
    else{
        return n*fact(n-1);
    }
}

