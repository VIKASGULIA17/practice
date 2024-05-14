#include<stdio.h>
int dec(int );
int main(){
    int a;
    printf("enter a value");
    scanf("%d",&a);
    // printf("%d",dec(a));
    dec(a);
    

}
int dec(int n){
    if (n==0) return 0;
    else{
        printf("%d\n",n);
        n=dec(n-1);
}
}

