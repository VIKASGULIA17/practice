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
        next = nullptr;
    }
};
class circular
{
public:
    node *head;
    circular()
    {
        head = nullptr;
    }
};
int insertion(node *&head, int value)
{
    node *n = new node(value);
    if (head == nullptr)
    {
        head = n;
        n->next = head;
        return 0;
    }
    node *end = head;
    while (end->next != head)
    {
        end = end->next;
    }
    end->next = n;
    n->next = head;
    head = n;
}
int insertionend(node *&head, int value)
{
    if (head == nullptr)
    {
        insertion(head, value);
    }
    node *n = new node(value);
    node *end = head;
    while (end->next != head)
    {
        end = end->next;
    }
    end->next = n;
    n->next = head;
}
int deletion(node *&head)
{
    if (head == nullptr)
    {
        cout << "List Is Empty"<<endl;
        return 0;
    }
    node *end = head;
    while (end->next != head)
    {
        end = end->next;
    }
    node *temp = head;
    head = head->next;
    end->next = head;
    free(temp);
}
int delend(node *&head)
{
    if (head == nullptr)
    {
        cout << "List Is Empty"<<endl;
        return 0;
    }
    node*end=head;
    while (end->next->next!=head)
    {
        end=end->next;
    }
    node* temp=end->next;
    end->next=head;
    free(temp);
}
int display(node *head)
{
    node *temp = head;
    do
    {
        cout << temp->value << "->";
        temp = temp->next;
        // cout << head->value << "->";
    } while (temp != head);
    cout << "NULL" << endl;
}
int main()
{
    node *head = nullptr;
    deletion(head);
    insertion(head, 3);
    insertion(head, 2);
    insertion(head, 1);
    insertionend(head, 4);
    insertionend(head, 5);
    display(head);
    deletion(head);
    delend(head);
    display(head);
}