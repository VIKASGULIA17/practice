#include<stdio.h>
int fibo(int);
int main(){
    int n;
    printf("enter a value");
    scanf("%d",&n);
    printf("%d",fibo(n));
    

}
int fibo(int n){
    if (n==1||n==2 ) return 1;
    else{
        int fin=fibo(n-1);
        int fi=fibo(n-2);
        int nth=fin+fi;
        return nth;
    }
}

