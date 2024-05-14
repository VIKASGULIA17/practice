#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node
{
    int num;
    struct node *next;
};
typedef struct node node;
typedef struct node *nptr;
nptr start = NULL;
int count = 0;
int ins_beg(int item)
{
    nptr p;
    // int item;
    p = (nptr)malloc(sizeof(node));
    // printf("\n\tEnter the element to be inserted : ");
    // scanf("%d", &item);
    p->num = item;
    p->next = start;
    start = p;
    count++;
}
void trav()
{
    nptr p;
    p = start;
    if (start == NULL)
        printf("list is empty");
    else
    {
        while (p != NULL)
        {
            printf("\n%d", p->num);
            p = p->next;
        }
    }
}
void travodd()
{
    nptr p;
    nptr q;
    p = start;

    while (p != NULL && p->next != NULL)
    {
        printf("\n%d", p->num);

        q = p->next;
        p = q->next;
    }
}
void traveven()
{
    nptr p;
    nptr q;
    p = start->next;

    while (p != NULL || p->next != NULL)
    {
        printf("\n%d", p->num);

        q = p->next;
        p = q->next;
    }
}
int main()
{
    printf("enrollment number :05813702023");
    printf("\n------------------------------");
    ins_beg(10);
    ins_beg(9);
    ins_beg(8);
    ins_beg(7);
    ins_beg(6);
    ins_beg(5);
    ins_beg(4);
    ins_beg(3);
    ins_beg(2);
    ins_beg(1);
    printf("\n------------------------------");
    trav();
    printf("\n------------------------------");
    travodd();
    printf("\n------------------------------");
    traveven();
}