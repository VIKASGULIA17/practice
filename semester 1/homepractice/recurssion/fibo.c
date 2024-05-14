#include<stdio.h>
int fibo(int ,int,int);
int main(){
    int a=-1,b=1,n;
    printf("enter a value");
    scanf("%d",&n);
    fibo(a,b,n);
    

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

