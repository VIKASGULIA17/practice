#include<stdio.h>
int power(int ,int);
// int hexa(int){


// }
int main(){
    int a;
    printf("enter a number");
    scanf("%d",&a);
    int pow=power(2,a);
    printf("%d",pow);
    // hexa(a);

}
int power(int n,int a){
    if (a==4) return 8;
    else{
        int n=n*power(2,a+1);
        return n;
    }
}