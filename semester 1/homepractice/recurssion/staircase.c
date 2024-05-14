#include<stdio.h>
int fibo(int);
int main(){
    int n;
    printf("enter a value");
    scanf("%d",&n);
    printf("%d",fibo(n));
    

}
int fibo(int n){
    if (n<=3) return n;
    else{
        int fin=fibo(n-1);
        int fi=fibo(n-2);
        int f=fibo(n-3);
        int nth=fin+fi+f;
        return nth;
    }
}

