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
int insbeg(int n)
{
    nptr temp, end;
    temp = (nptr)malloc(sizeof(int));
    temp->data = n;
    if (head == NULL)
    {
        head = temp;
        temp->next = head;
        return 1;
    }
    end = head;
    temp->next = head;

    while (end->next != head)
    {
        end = end->next;
    }
    end->next = temp;
    head = temp;
}
int insend(int n)
{
    nptr temp, end;
    end = (nptr)malloc(sizeof(int));
    end->data = n;
    if (head == NULL)
    {
        insbeg(n);
        return 1;
    }
    temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = end;
    end->next = head;
}
int insmid(int n, int pos)
{
    nptr temp, mid;
    mid = (nptr)malloc(sizeof(int));
    if (head == NULL)
    {
        insbeg(n);
        return 1;
    }
    if (pos == 1)
    {
        insbeg(n);
        return 1;
    }
    mid->data = n;
    temp = head;
    int i = 1;
    while (i < pos - 1)
    {
        temp = temp->next;
        i++;
    }
    mid->next = temp->next;
    temp->next = mid;
}
int delbeg()
{
    nptr temp, end;
    temp = head;
    if (head == NULL)
    {
        printf("list is empty\n");
        return 1;
    }
    if (head == temp->next)
    {
        printf("%d is deleted\n", temp->data);
        head = NULL;
        free(temp);
        return 1;
    }

    head = head->next;
    end = head;
    printf("%d is deleted\n", temp->data);
    while (end->next != temp)
    {
        end = end->next;
    }
    end->next = head;
    free(temp);
}
int delend(){
    nptr temp,end;
    if (head==NULL)
    {
        printf("list is empty \n");
        return 1;
    }
    if (head==head->next)
    {
        delbeg();
        return 1;
    }
    
    temp=head;
    while (temp->next!=head)
    {
        end=temp;
        temp=temp->next;
    }
    end->next=head;
    printf("%d is deleted\n",temp->data);
    free(temp);
}
int display()
{
    nptr temp = head;
    while (temp->next != head)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("%d->", temp->data);
    printf("%d", head->data);
}
int main()
{
    insend(1);
    insend(2);
    insend(3);
    insend(4);
    // insmid(55555,5);
    display();
}