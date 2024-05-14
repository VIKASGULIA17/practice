#include<stdio.h>
int power(int ,int);
int main(){
    int a;
    printf("enter a base");
    scanf("%d",&a);
    int b;
    printf("enter a power");
    scanf("%d",&b);
    int pow=power(a,b);
    printf("%d after power of %d is %d",a,b,pow);

}
int power(int a,int b){
    if (b==1) return a;
    else{
        int x=power(a,b/2);
        if (b%2==0)
        return x*x;
        else
        return x*x*a;
        
    }
}

