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
int insbeg()
{
    nptr temp;
    temp=(nptr)malloc(sizeof(node));
    int n;
    printf("enter data");
    scanf("%d", &n);
    temp->data = n;
    temp->next = head;
    head = temp;
}
int insend()
{
    nptr temp,tail;
    int n;
    temp=head;
    tail=(nptr)malloc(sizeof(int));
    if (head==NULL)
    {
        insbeg();
        return 0;
    }
    printf("enter data");
    scanf("%d", &n);
    tail->data=n;
    tail->next=NULL;
    while (temp->next!= NULL)
    {
        temp = temp->next;
    }
    temp->next=tail;
}
int insmid(){
    
}
int display()
{
    nptr temp = head;
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
}
int main()
{
    // insbeg();
    // insbeg();
    // insbeg();
    insend();
    insend();
    insend();
    display();
}