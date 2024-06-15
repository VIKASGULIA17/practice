#include<stdio.h>
#define max 100
int stack[max];
int top=-1;
int push(){
    if (top>max-1)
    {
        printf("overflow\n");
        return 0;
    }
    ++top;
    // printf("%d",top);
    printf("enter the element\n");
    scanf("%d",&stack[top]);
    
}
int pop(){
    if (top==-1)
    {
        printf("underflow\n");
        return 0;
    }
    printf("%d is deleted\n",stack[top]);
    top=top-1;
}
int display(){
    for (int i = top; i >= 0; i--)
    {
        printf("%d\t",stack[i]);
    }
    printf("\n");
}
int main(){
    for (int i = 0; i < 3; i++)
    {
        push();
    }
    display();
    
    pop();
    display();
}