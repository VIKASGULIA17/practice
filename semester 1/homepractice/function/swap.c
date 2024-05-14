#include<stdio.h>
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
    
}
int main(){
    int a,b;
    printf("enter value of a");
    scanf("%d",&a);
    printf("enter value of b");
    scanf("%d",&b);
    swap(&a,&b);
    printf(" value of a is %d \n",a);
    printf(" value of b is %d \n",b);
    return 0;
}