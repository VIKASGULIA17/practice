#include<stdio.h>
int dec(int );
int main(){
    int a;
    printf("enter a value");
    scanf("%d",&a);
    // printf("%d",dec(a));
    printf("%d\n",dec(a));
    

}
int dec(int n){
    if (n==0) return 0;
    else{
        // printf("%d\n",n);
       return n+=dec(n-1);
}
}

