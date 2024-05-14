#include<stdio.h>
int main(){
    int a,b=0;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    
    for (int i = 2; i < a; i++)
    {
        if (a%i==0)
        {
            b+=1;
            break;
        }
        else
        b=0;
        
    }
    if (b==1)
    {
        printf("not prime");
    }
    else
    printf("prime");
}