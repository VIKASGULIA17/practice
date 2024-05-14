#include<stdio.h>
#define max 2
int stack[max];
int top=-1;
void push();
void pop();
int display();
struct stack
{
    int value;
    struct stack *next;
};
typedef struct stack *nptr;
typedef struct stack stack;
struct stack *top = NULL;
int choice;
char ch;
int main(){
    char c='y';
    printf("enrollment number:\n");
    do
    {
        printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
        int ch;
        scanf("%d",&ch);
        printf("\n");
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            c='n';
            break;
        default:
            printf("Invalid Input\n");
        }
    } while (c=='y');
    
}
void push(){
    if(top==max-1){
        printf("Stack Overflow\n");
        return;
    }
    else{
        printf("Enter the element\n");
        top++;
        scanf("%d",&stack[top]);
    }
}
void pop(){
    if(top==-1){
        printf("Stack Underflow\n");
        return;
    }
    else{
        printf("Element popped is %d\n",stack[top]);
        top--;
    }
}
int display(){
    int i;
    for(i=top;i>=0;i--){
        printf("%d\n",stack[i]);
    }
    return 0;
}