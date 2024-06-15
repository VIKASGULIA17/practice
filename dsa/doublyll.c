#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
typedef struct node node;
typedef struct node *nptr;
nptr head = NULL;
nptr last;
int count;
int insbeg(int n)
{
    nptr temp = (nptr)malloc(sizeof(int));
    temp->next = head;
    head = temp;
    last = temp;
    temp->prev = NULL;
    temp->data = n;
    count++;
}
int insend(int n)
{
    nptr temp, tail;
    tail = (nptr)malloc(sizeof(int));
    if (head == NULL)
    {
        insbeg(n);
        return 0;
    }
    temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = tail;
    tail->next = NULL;
    tail->prev = temp;
    tail->data = n;
    last = tail;
    count++;
}
int insmid(int n, int pos)
{
    nptr temp, end;
    end = (nptr)malloc(sizeof(int));
    temp = head;
    if (head == NULL)
    {
        insbeg(n);
        return 0;
    }
    int i = 1;
    while (i < pos - 1)
    {
        temp = temp->next;
        i++;
    }
    end->next = temp->next;
    temp->next = end;
    temp->next->prev = end;
    end->data = n;
    end->prev = temp;
    count++;
}
int delbeg()
{
    nptr temp;
    temp = head;
    if (head == NULL)
    {
        printf("list is empty\n");
        return 0;
    }
    if (head==last)
    {
        printf("%d is deleted\n",temp->data);
        head=last=NULL;
        free(temp);
        return 1;
    }
    
    printf("%d is deleted\n", temp->data);
    head = head->next;
    head->prev = NULL;
    free(temp);
}
int delend()
{
    nptr temp;
    temp = head;
    if (head == NULL)
    {
        printf("list is empty\n");
        return 0;
    }
    else if (head == last)
    {
        delbeg();
        return 0;
    }
    temp=last;
    last=last->prev;
    last->next=NULL;
    printf("%d is deleted\n",temp->data);
    free(temp);
}
int delmid(int pos){
    nptr temp,main;
    temp=head;
    if (head==NULL)
    {
        printf("list is empty\n");
        return 0;
    }
    if (pos==count)
    {
        delend();
        return 1;
    }
    if (pos>count)
    {
        printf("not possible\n");
        return 1;
    }
    
    int i=1;
    while (i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    main=temp->next;
    temp->next=main->next;
    main->next->prev=temp;
    printf("%d",main->next->prev->data);
    free(main);
}
int display()
{
    printf("head=%d\t",head->data);
    printf("last=%d\t\n",last->data);
    nptr temp = head;
    if (head==NULL)
    {
        // printf("list is empty\n");
        return 0;
    }
    printf("NULL");
    
    while (temp != NULL)
    {
        printf("<=%d=>", temp->data);
        temp = temp->next;
    }
    printf("NULL");
}
int main()
{
    insend(1);
    // delbeg();
    insend(2);
    insend(3);
    // delend();
    // delend();
    // insbeg(3);
    // insbeg(2);
    // insmid(34,1);
    // insbeg(1);
    // insend(5);
    // insend(6);
    // insmid(4,3);
    delmid(2);
    display();
}
