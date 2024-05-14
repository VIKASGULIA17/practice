#include<stdio.h>
int main(){
    int arr[3], i;
    printf("Enter the array elements (10 elements):\n");
    for ( i = 0; i < 3; i++)
    {
        scanf("%d",&arr[i]);
    }
    int even,odd;
    even=0;
    odd=0;
    for (int i = 0; i < 3; i++)
    {
        if (arr[i]%2==0)
        {
            even+=1;
        }
        else
        {
            odd+=1;
        }   
    }
    printf("number of even %d\n",even);
    printf("number of odd %d",odd);
}