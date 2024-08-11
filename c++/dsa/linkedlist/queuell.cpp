#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int value)
    {
        data = value;
        next = nullptr;
    }
};

int insertion(node *&head, int value)
{
    node *n = new node(value);
    if (head == nullptr)
    {
        n->next = head;
        head = n;
        return 0;
    }
    node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = nullptr;
    return 0;
}
int tarverse(node *head)
{
    node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}
int deletion(node *&head)
{
    if (head == nullptr)
    {
        cout << "empty";
        return 0;
    }

    node *temp = head;
    head = head->next;
    free(temp);
}
int main()
{
    node *head = nullptr;
    insertion(head, 1);
    insertion(head, 2);
    insertion(head, 3);
    insertion(head, 4);
    tarverse(head);
    deletion(head);
    tarverse(head);
    deletion(head);
    tarverse(head);
    deletion(head);
    tarverse(head);
    deletion(head);
    deletion(head);
    tarverse(head);
}