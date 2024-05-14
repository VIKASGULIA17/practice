#include <iostream>
using namespace std;
class node
{
public:
    int value;
    node *next;
    node *prev;
    node(int data)
    {
        value = data;
        next = nullptr;
        prev = nullptr;
    }
};
int insertion(node *&head, int value)
{
    node *n = new node(value);
    if (head == nullptr)
    {
        n->next = nullptr;
        head = n;
        n->prev = nullptr;
        return 0;
    }
    n->next = head;
    n->prev = nullptr;
    head = n;
}
int insertionend(node *&head, int value)
{
    node *n = new node(value);
    if (head == nullptr)
    {
        insertion(head, value);
        return 0;
    }
    node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
    n->next = nullptr;
}
int insertionmid(node *&head, int value, int pos)
{
    if (head == nullptr)
    {
        insertion(head, value);
        return 0;
    }
    node *n = new node(value);
    node *temp = head;
    int i = 1;
    while (i < pos - 1)
    {
        temp = temp->next;
        i++;
    }
    n->next = temp->next;
    temp->next = n;
    n->prev = temp;
}
int deletion(node *&head)
{
    if (head == nullptr)
    {
        return 0;
    }

    node *temp = head;
    head = head->next;
    head->prev = nullptr;
    free(temp);
    return 0;
}
int delmid(node *&head, int pos)
{
    node *temp = head;
    if (pos == 0)
    {
        deletion(head);
        return 0;
    }
    int i = 0;
    while (i < pos - 1)
    {
        temp = temp->next;
        i++;
    }
    node *temp2 = temp->next;
    temp->next = temp2->next;
    temp2->next->prev = temp->prev;
}
int deletionend(node *&head)
{
    node *temp = head;
    if (head->next == nullptr)
    {
        deletion(head);
        return 0;
    }
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    node *temp2 = temp->prev;
    temp2->next = nullptr;
    temp->prev = nullptr;
}
int display(node *head)
{
    node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->value << "<=>";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    node *head = nullptr;
    // node *tail = nullptr;
    insertion(head, 3);
    // deletionend(head);
    insertion(head, 2);
    insertionend(head, 5);
    display(head);
    delmid(head, 1);
    display(head);
    insertionend(head, 6);
    insertionmid(head, 345, 2);
    insertionmid(head, 3445, 1);
    display(head);
    delmid(head, 2);
    display(head);
}