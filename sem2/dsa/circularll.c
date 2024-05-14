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
void ins_beg();
void ins_end();
void ins_bet();
void del_beg();
void del_end();
void del_bet();
void trav();
int count = 0;

int main()
{
    int ch;
    char choice;
    printf("\n\t****Enrl No. - 05813702023****\n");
    do
    {
        printf("\n\t***** MENU *****");
        printf("\n\n\t1 Insert at beginning");
        printf("\n\t2 Insert at End");
        printf("\n\t3 Insert in Between");
        printf("\n\t4 Delete at Beginning");
        printf("\n\t5 Delete at End");
        printf("\n\t6 Delete in Between");
        printf("\n\t7 Traverse ");
        printf("\n\t8 Quit");
        printf("\n\n\tEnter your choice : ");

        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            ins_beg();
            break;
        case 2:
            ins_end();
            break;
        case 3:
            ins_bet();
            break;
        case 4:
            del_beg();
            break;
        case 5:
            del_end();
            break;
        case 6:
            del_bet();
            break;
        case 7:
            trav();
            break;
        case 8:
            exit(0);
        default:
            printf("\n\tYou have entered wrong choice !!!!! ");
        }
        fflush(stdin);
        printf("\n\tDo you want to continue y/n : ");
        scanf("%c", &choice);
    } while (choice == 'y');
}

void ins_beg()
{
    nptr p, q;
    int item;
    p = (nptr)malloc(sizeof(node));
    printf("\n\tEnter the element to be inserted : ");
    scanf("%d", &item);
    p->num = item;
    if (start == NULL)
    {
        start = p;
        p->next = start;
    }
    else
    {
        q = start;
        while (q->next != start)
        {
            q = q->next;
        }
        q->next = p;
        p->next = start;
        start = p;
    }
    count++;
}

void ins_end()
{
    int item;
    nptr p, q;
    p = (nptr)malloc(sizeof(node));
    printf("\n\tEnter the element to be inserted : ");
    scanf("%d", &item);
    p->num = item;
    if (start == NULL)
    {
        p->next = start;
        start = p;
    }
    else
    {
        q = start;
        while (q->next != start)
        {
            q = q->next;
        }
        q->next = p;
        p->next = start;
    }
    count++;
}

void ins_bet()
{
    int i = 1, item, pos;
    nptr p, q;
    printf("\n\tEnter the location at which you want to insert : ");
    scanf("%d", &pos);
    if (pos > count)
    {
        printf("wrong  choice");
    }
    else
    {
        p = (nptr)malloc(sizeof(node));
        printf("\n\tEnter the element to be inserted : ");
        scanf("%d", &item);
        p->num = item;
        q = start;
        while (i < pos - 1)
        {
            q = q->next;
            i++;
        }
        p->next = q->next;
        q->next = p;
        count++;
    }
}

void del_beg()
{
    nptr p, q;
    if (start == NULL)
    {
        printf("\n\tList is Empty !!!!! ");
        return;
    }
    else
    {
        if (p == start && q == start)
        {
            printf("\n\t%d is deleted....", start->num);
            start = NULL;
        }
        else
        {
            p = q = start;
            while (q->next != start)
            {
                q = q->next;
            }
            printf("\n\t%d is deleted....", start->num);
            q->next = p->next;
            start = p->next;
        }
        free(p);
        count--;
    }
}

void del_end()
{
    if (start == NULL)
    {
        printf("\n\tList is Empty !!!!! ");
        return;
    }
    else
    {
        nptr p, q;
        if (p == start && q == start)
        {
            printf("\n\t%d is deleted....", p->num);
            start = NULL;
        }
        else
        {
            p = q = start;
            while (q->next != start)
            {
                p = q;
                q = q->next;
            }
        }
        p->next = start;
        printf("\n\t%d is deleted....", p->num);
        free(p);
        count--;
    }
}

void del_bet()
{
    int i = 1, pos;
    if (start == NULL)
    {
        printf("\n\tList is empty !!!!!");
        return;
    }

    else
    {
        nptr p, q;
        p = q = start;
        printf("\n\tEnter the location at which you want to delete : ");
        scanf("%d", &pos);
        while (i < pos)
        {
            q = p;
            p = p->next;
            i++;
        }
        q->next = p->next;
        printf("\n\t%d is deleted....", p->num);
        free(p);
        count--;
    }
}

void trav()
{
    nptr p;
    if (start == NULL)
        printf("list is empty");
    else
    {
        p = start;
        while (p != start)
        {
            printf("\n%d", p->num);
            p = p->next;
        }
    }
}
