#include<stdio.h>
#define max 10
int arr[max];
int n;
int insertion(){
    int new,pos;
    printf("enter the position where you want to insert\n");
    scanf("%d",&pos);
    if (pos>=max)
    {
        printf("overflow\n");
        return 0;
    }
    printf("enter the number you want to insert\n");
    scanf("%d",&new);
    for (int i = n; i > pos-1; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=new;
    n++;
}
int main(){
    printf("enter the number of element you want to insert\n");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    
    insertion();
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
}