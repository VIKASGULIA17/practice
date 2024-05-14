#include<stdio.h>
int main(){
    int a,b;
    printf("enter rows:");
    scanf("%d",&a);
    // printf("enter columns:");
    // scanf("%d",&b);
    for (int i = 1; i <= a; i++)
    {
        for (int j=1;j<=i;j+=2)
        {
            printf("%d ",j);
        }
        printf("\n");
        
    }
    return 0;
}