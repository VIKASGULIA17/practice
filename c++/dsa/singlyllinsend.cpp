#include <iostream>
using namespace std;
class node
{
public:
    int value;
    node *next;
    node(int data)
    {
        value = data;
        next = NULL;
    }
};
int insertionend(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        n->next = head;
        head = n;
    }
    else
    {
        node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = n;
        n->next = NULL;
    }
}
int deletion(node *&head)
{
    node *secondlast = head;
    while (secondlast->next->next != NULL)
    {
        secondlast = secondlast->next;
    }
    node *temp = secondlast->next;
    secondlast->next = nullptr;
    free(temp);
}
int display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main()
{
    node *head = NULL;
    insertionend(head, 1);
    insertionend(head, 2);
    insertionend(head, 3);
    display(head);
    deletion(head);
    display(head);
}