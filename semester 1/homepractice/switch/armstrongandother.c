#include <stdio.h>

int main() {
    int choice,sum=0,rem=0,b,a,rev=0,num;
    printf("Choose an operation to perform:\n");
    printf("1. Armstrong\n");
    printf("2. prime\n");
    printf("3. reverse\n");

    scanf("%d", &choice);

    switch (choice) {
        case 1:
        printf("enter value");
    scanf("%d",&a);
    for (int i = 0; i < a; i++)
    {
    num=a;
    b=a;
    while (num>0)
    {
        rem=a%10;
        sum=sum+rem*rem*rem;
        a=a/10;
    }
    if (b==sum)
    {
        printf("number is armstrong");
    }
    }
            break;
        case 2:
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
break;
        case 3:
    printf("enter value");
    scanf("%d",&a);
    while (a>0)
    {
        rem=a%10;
        rev=rev*10+rem;
        a=a/10;
    }
    printf("reverse of number is%d \n",rev);
    break;
            
            
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}