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
int count = 0;
int insertionbeg()
{
    nptr temp;
    temp = (nptr)malloc(sizeof(node));
    int item;
    printf("enter the data");
    scanf("%d", &item);
    temp->data = item;
    temp->next = head;
    head = temp;
}
int insertionend()
{
    nptr temp, end;
    end = (nptr)malloc(sizeof(node));
    if (head == NULL)
    {
        insertionbeg();
        return 0;
    }
    int item;
    printf("enter the data");
    scanf("%d", &item);
    end->data = item;
    temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = end;
    end->next = NULL;
}
int insertionmid()
{
    nptr prev, temp1;
    temp1 = (nptr)malloc(sizeof(node));
    if (head == NULL)
    {
        insertionbeg();
        return 0;
    }
    prev = head;
    int i = 1;
    int pos;
    printf("enter the position");
    scanf("%d", &pos);
    int item;
    printf("enter the item");
    scanf("%d", &item);
    temp1->data = item;
    while (i < pos - 1)
    {
        prev = prev->next;
        i++;
    }
    temp1->next = prev->next;
    prev->next = temp1;
}
int deletionbeg()
{
    if (head == NULL)
    {
        printf("empty\n");
        return 0;
    }

    nptr temp;
    temp = head;
    head = head->next;
    free(temp);
}
int deletionend()
{
    nptr temp, end;
    if (head == NULL)
    {
        printf("empty\n");
        return 0;
    }
    temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    end = temp->next;
    temp->next = NULL;
    free(end);
}
int deletionmid()
{
    nptr temp, prev;
    if (head == NULL)
    {
        printf("empty\n");
        return 0;
    }
    temp =prev= head;
    int i = 1;
    int pos;
    printf("enter position");
    scanf("%d", &pos);
    while (i < pos)
    {
        prev = temp;
        temp = temp->next;
        i++;
    }
    prev->next = temp->next;
    free(temp);
}
int traverse()
{
    nptr temp;
    temp = head;
    if (temp == NULL)
    {
        printf("empty\n");
        return 0;
    }
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main()
{
    insertionend();
    insertionend();
    insertionend();
    traverse();
    // deletionbeg();
    deletionmid();
    // traverse();
    // deletionend();
    traverse();
}