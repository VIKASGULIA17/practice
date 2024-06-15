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
        temp->next = front;
        front = rear = temp;
        return 0;
    }
    end = rear;
    end->next = temp;
    rear = temp;
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
}
int display()
{
    nptr temp;
    temp = front;
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("null\n");
}
int main()
{
    push(1);
    pop();
    push(2);
    pop();
    push(3);
    display();
    pop();
}