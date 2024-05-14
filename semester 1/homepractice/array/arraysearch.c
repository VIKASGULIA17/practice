// wap to find square of all array element
// wap to find given number in array (linear search).
// wap to find number of even and odd data in array (count of even and odd)
#include <stdio.h>

int main() 
{
    int arr[3], i;
    printf("Enter the array elements:\n");
    for ( i = 0; i < 3; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int n;
    printf("enter the number you want to search");
    scanf("%d",&n);
    int x=0;
    for (int i = 0; i < 3; i++)
    {
        if (arr[i]==n)
        {
            x+=1;
        }
        }

    if (x==0)
    {
        printf("not present");
    }
    else
    {
        printf("present");
    }
    
    
    


}