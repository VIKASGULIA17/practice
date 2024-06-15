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
int enqueueend(int n)
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
int enqueuebeg(int n)
{
    nptr temp;
    temp = (nptr)malloc(sizeof(int));
    temp->data = n;
    if (front == NULL)
    {
        temp->next = front;
        front = rear = temp;
        return 0;
    }
    temp->next=front;
    front=temp;
}
int dequueend(){
    nptr temp,end;
    if (front==NULL)
    {
        printf("queue is empty");
        return 0;
    }
    if (front==rear)
    {
        printf("%d is deleted\n",front->data);
        front=rear=NULL;
        return 1;
    }
    temp=front;
    while (temp->next!=NULL)
    {
        end=temp;
        temp=temp->next;
    }
    end->next=NULL;
    rear=temp;
    printf("%d is deleted\n",temp->data);
    free(temp);
    
    
}
int dequeuebeg()
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
        temp = temp->next;/* code */
    }
    printf("null\n");
}
int main()
{
    enqueueend(1);
    enqueueend(2);
    dequueend();
    dequueend();
    enqueueend(3);
    display();
}