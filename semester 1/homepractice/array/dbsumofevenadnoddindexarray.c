#include<stdio.h>
int main(){
    int n,sumodd=0,sumeven=0,db=0;
    printf("Enter the number of elements you want in array : ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter element %d ",i+1);
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf(" %d     ",arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
       if (i%2==0)
       {
        sumeven+=arr[i];
        
       }
       else
       sumodd+=arr[i];
       
    }
    db=sumeven-sumodd;
    printf("\ndifference between even and odd sum od array is %d ",db);
   
}