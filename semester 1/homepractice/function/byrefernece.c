#include<stdio.h>
int swap(int*,int*);
int main(){
    int a,b;
    printf("enter vlaue of a and b");
    scanf("%d%d",&a,&b);
    printf("vlaue before swap %d %d\n",a,b);
    swap(&a,&b);
    printf("value of a and b after swap %d %d",a,b);
}
int swap(int* x,int* y){
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
    

}