#include<stdio.h>
int palindrome(int arr[]){
    int a=0,i=0,j=6;
    while (i<j)
    {
        i++;
        j--;
        if (arr[i]!=arr[j])
        {
            printf("array is not palindrome");
            a+=1;
            break;
        }  
    }
    if (a==0)
    {
        printf("array is palindrome");
    }
}
void main(){
    int arr[7];
    printf("enter the vlaue of array");
    for ( int i = 0; i < 7; i++)
    {
       scanf("%d",&arr[i]);
    }
    palindrome(arr);
       
}