#include<stdio.h>
int fact(int x){
    int factorial;
   for (int i = x; i< 0; i--)
   {
    factorial=factorial*i;
   }
   return factorial;
   
}
void main(){
    int fac,rem,fr;
    // printf("enter the number ");
    // scanf("%d",&fac);
    // printf("enter the remainder");
    // scanf("%d",&rem);
    // fr=fac-rem;
    fac=fact(5);
    printf("%d",fac);
    
}