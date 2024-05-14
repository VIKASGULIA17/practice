#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    for (int i = 1; i < a; i++)
    {
        int c=0;
        b=i;
        for (int j = 2; j < b; j++)
        {
            if (b%j==0)
            {
                c+=1;
                break;
            }   
    }
    if (c==0)
    {
        printf("%d   ",i);
        }
}
}