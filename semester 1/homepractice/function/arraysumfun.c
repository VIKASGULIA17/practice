#include<stdio.h>
int sum(int arr[5]){
    int a=0;
    for (int i = 0; i < 5; i++)
    {
         a=a+arr[i];
    }
    printf("%d",a);
    
}

int main(){
    int arr[5];
    printf("enter array");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    sum(arr);
}
