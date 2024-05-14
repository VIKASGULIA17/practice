#include<stdio.h>
int main(){
    int arr[99],sum=0,sumarray=0;
    
    for (int i = 0; i <99; i++)
    {
        if (i==37)
        {
            continue;
        }
        
        arr[i]=i;
    }
    for (int i = 0; i <99; i++)
    {
        sum+=i;
    }
    for (int i = 0; i <98; i++)
    {
        sumarray+=i;
    }
    printf("missing element is %d ",sum-sumarray);
    
}