#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int data;
    struct stack *next;
};
typedef struct stack stack;
typedef struct stack *nptr;
nptr top=NULL;

int push(int n){
    nptr temp=(nptr)malloc(sizeof(int));
    temp->data=n;
    temp->next=top;
    top=temp;
}
int pop(){
    if (top==NULL)
    {
        printf("stack is empty\n");
        return 0;
    }
    nptr temp;
    temp=top;
    top=top->next;
    printf("%d is dleted\n",temp->data);
    free(temp);
}
int display(){
    nptr temp;
    temp=top;
    while (temp->next!=NULL)
    {
        printf("%d\n^\n|\n",temp->data);
        temp=temp->next;
    }
        printf("%d\n",temp->data);
}
int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    display();
    pop();
    display();
}
