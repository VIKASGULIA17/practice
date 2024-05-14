#include<stdio.h>
int fibo(int ,int,int);
int fact(int );
int main(){
    int num;
    printf("enter a value to find factorial");
    scanf("%d",&num);
    int fac=fact(num);
    printf("factorial of %d is %d\n",num,fac);
    int a=-1,b=1,n;
    printf("enter a value to print fibonachi series");
    scanf("%d",&n);
    fibo(a,b,n);
    

}
int fact(int n){
    if (n==1) return 1;
    else{
        return n*fact(n-1);
    }
}
int fibo(int a,int b,int n){
    if (n==0) return 1;
    else{
        int c=a+b;//0
        a=b;//1
        b=c;//0
        printf("%d ",c);
        fibo(a,b,n-1);

    }
}

