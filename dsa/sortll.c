#include <stdio.h>
#include <stdlib.h>
#define max 100
int arr[max],x;
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
    nptr temp = (nptr)malloc(sizeof(int));
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
    nptr temp;
    temp=head;
    x=0;
    while (temp!=NULL)
    {
        temp->data=arr[x++];
        temp=temp->next;
    }
}
int sort(){
    for (int i = 0; i < x-1; i++)
    {
        for (int j=0 ; j< x-i-1;j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            
        }   
    }
    reverse();
}
int imp(){
    nptr temp=head;
    x=0;
    while (temp!=NULL)
    {
        arr[x++]=temp->data;
        temp=temp->next;
    }
    sort();
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
    insertion(12);
    insertionend(3);
    insertionend(8);
    insertionend(5);
    display();
    imp();
    printf("\n");
    display();
}