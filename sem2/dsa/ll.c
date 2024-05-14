#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node node;
typedef struct node *nptr;
nptr start = NULL;
int insertion()
{
    nptr temp;
    temp = (nptr)malloc(sizeof(int));
    int item;
    printf("enter data");
    scanf("%d", &item);
    temp->data = item;
    temp->next = start;
    start = temp;
}
int insend()
{
    nptr temp, prev;
    prev = (nptr)malloc(sizeof(int));
    if (start == NULL)
    {
        insertion();
        return 0;
    }
    int item;
    printf("enter data");
    scanf("%d", &item);
    prev->data = item;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = prev;
    prev->next = NULL;
}
int insmid()
{
    nptr temp, prev;
    prev = (nptr)malloc(sizeof(int));
    if (start == NULL)
    {
        insertion();
        return 0;
    }
    temp = start;
    int i = 1;
    int pos;
    printf("enter position");
    scanf("%d", &pos);
    int item;
    printf("enter data");
    scanf("%d", &item);
    prev->data = item;
    while (i < pos - 1)
    {
        temp = temp->next;
        i++;
    }
    prev->next = temp->next;
    temp->next = prev;
}
int delbeg()
{
    if (start == NULL)
    {
        printf("empty\n");
        return 0;
    }

    nptr temp;
    temp = start;
    start = start->next;
    free(temp);
}
int delend()
{
    nptr prev, temp;
    if (start == NULL)
    {
        printf("emprty\n");
        return 0;
    }
    temp = prev = start;
    while (temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }
    prev->next = NULL;
    free(temp);
}
int delmid()
{
    nptr temp, prev;
    if (start == NULL)
    {
        printf("empty\n");
        return 0;
    }
    temp = prev = start;
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
    nptr p;
    p = start;
    while (p != NULL)
    {
        printf("%d->", p->data);
        p = p->next;
    }
}
int main()
{
    insertion();
    insend();
    insend();
    insend();
    delmid();
    traverse();
}
