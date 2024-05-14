#include<stdio.h>
int func(int aa[5]){
    for (int i = 0; i < 5; i++)
    {
        printf("%d",aa[i]);
    }
    
}
int main(){
    int arr[5]={1,2,3,4,5};
    func(arr);
}
