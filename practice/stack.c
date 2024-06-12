#include<stdio.h>
#define max 10
int stack[max];
int top=0;
//[2,4,6]
int push(){
    if (top>=max)
    {
        printf("Stack overflow\n");
        return 0;
    }
    printf("enter the number u want to insert");
    scanf("%d",&stack[top++]);
    
}
int pop(){
    if (top==0)
    {
       printf("Stack underflow");
       return 0;
    }
    top--;
}
int display(){
    for (int i = top-1; i >-1; i--)
    {
        printf("%d\t",stack[i]);
    }
    
}
int main(){
    for (int i = 0; i < 3; i++)
    {
        push();
    }
    display();
    printf("\n");
    pop();
    printf("\n");
    display();
    printf("\n");
    
}