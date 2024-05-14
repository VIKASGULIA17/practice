// wap to find square of all array element
// wap to find given number in array (linear search).
// wap to find number of even and odd data in array (count of even and odd)
#include <stdio.h>

int main() 
{
    int arr[10], i;
    printf("Enter the array elements (10 elements):\n");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int n;
    printf("enter the number you want to search");
    scanf("%d",&n);
    for (int i = 0; i < 10; i++)
    {
        if (arr[i]==n)
        {
            printf("number is present");
            break;
        }
    else
    {
        continue;
    }   
    }
    

}