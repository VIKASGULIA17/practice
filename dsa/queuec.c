#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int data;
    struct queue *next;
};
typedef struct queue queue;
typedef struct queue *nptr;
nptr front = NULL;
nptr rear = NULL;
int push(int n)
{
    nptr temp, end;
    temp = (nptr)malloc(sizeof(int));
    temp->data = n;
    if (front == NULL)
    {
        front = rear = temp;
        temp->next = front;
        return 0;
    }
    end = rear;
    end->next = temp;
    rear = temp;
    rear->next=front;
}
int pop()
{
    nptr temp;
    if (front==NULL)
    {
        printf("queue is empty\n");
        return 0;
    }
    
    if (rear == front)
    {
        printf("%d is deleted\n", front->data);
        front=rear=NULL;
        return 0;
    }
    temp = front;
    printf("%d is deleted\n", temp->data);
    front = front->next;
    rear->next=front;
}
int display()
{
    nptr temp;
    temp = front;
    while (temp->next != front)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("%d->%d\n",temp->data,front->data);
}
int main()
{
    push(1);
    display();
    pop();
    push(2);
    // pop();
    push(3);
    display();
    pop();
    display();
}