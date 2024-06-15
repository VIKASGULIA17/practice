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
int insertionmid(int n, int pos)
{
    nptr temp, tail;
    tail = (nptr)malloc(sizeof(int));
    if (head == NULL)
    {
        insertion(n);
        return 0;
    }
    else if (pos==1)
    {
        insertion(n);
        return 0;
    }
    temp = head;
    int i = 1;
    while (i < pos - 1)
    {
        temp = temp->next;
        i++;
    }
    tail->next = temp->next;
    temp->next = tail;
    tail->data = n;
}
int delbeg()
{
    nptr temp = head;
    head = head->next;
    if (temp == NULL)
    {
        printf("list is empty\n");
        return 0;
    }

    printf("\n%d is deleted\n", temp->data);
    free(temp);
}
int deletionend()
{
    nptr temp, tail;
    if (head == NULL)
    {
        printf("list is empty\n");
        return 0;
    }
    temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    tail=temp->next;
    temp->next=NULL;
    printf("%d is deleted\n",tail->data);
    free(tail);
}
int delmid(int pos){
    if (head==NULL)
    {
        printf("list is empty\n");
        return 0;
    }
    nptr end,temp=head;
    int i=1;
    while (i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    printf("%d is deleted\n",temp->next->data);
    temp->next=temp->next->next;

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
    // insertion(3);
    insertion(2);
    // delbeg();
    insertion(1);
    // delbeg();
    insertionend(4);
    insertionend(5);
    insertionmid(3, 1);
    // deletionend();
    // delmid(3);
    display();
}