#include<stdio.h>
int main(){
    int a;
    printf("enter value of a");
    scanf("%d",&a);
    for (int i=1;i<=2*a+1;i=i+2){
        printf("%d\n",i);
        
        
    }
    
    return 0;
}