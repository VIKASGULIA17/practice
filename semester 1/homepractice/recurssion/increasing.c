#include<stdio.h>
int inc(int ,int);
int main(){
    int a,b=1;
    printf("enter a value");
    scanf("%d",&a);
    // printf("%d",dec(a));
    inc(b,a);
    

}
int inc(int b,int n){//b=1,n=3
    if (b>n) return 0;
    else{
        printf("%d\n",b);
        inc(b+1,n);
        printf("%d\n",b);
}
}

