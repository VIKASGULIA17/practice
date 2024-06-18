#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node node;
typedef struct node *nptr;
nptr head = NULL;
int insertion(int n)
{
    // int n;
    nptr temp = (nptr)malloc(sizeof(int));
    // printf("enter new data");
    // scanf("%d",&n);
    temp->data = n;
    temp->next = head;
    head = temp;
}
int insertionend(int n)
{
    if (head == NULL)
    {
        insertion(n);
        return 0;
    }
    nptr temp, tail;
    tail = (nptr)malloc(sizeof(int));
    tail->data = n;
    temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = tail;
    tail->next = NULL;
}
int reverse(){
    nptr temp,prev,front;
    prev=NULL;
    temp=head;
    while (temp!=NULL)
    {        
    front=temp->next;
    temp->next=prev;
    prev=temp;
    temp=front;
    } 
    head=prev;
}
int display()
{
    nptr temp;
    temp = head;
    while (temp != NULL)
    {
        printf("%d=>", temp->data);
        temp = temp->next;
    }
    printf("NULL");
}
int main()
{
    insertion(2);
    insertion(1);
    insertionend(3);
    insertionend(4);
    insertionend(5);
    display();
    reverse();
    printf("\n");
    display();
}