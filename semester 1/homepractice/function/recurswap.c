#include<stdio.h>
int swap(int);
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    printf("factorial of %d =%d",n,swap(n));
}
int swap(int a){
    if (a==1)
    {
        return 1;
    }   
    else
    {
       return (a=a*swap(a-1));
    }
    
    
}