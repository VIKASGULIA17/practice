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
int insertionend(node *&head, int value)
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
    n->next = nullptr;
    temp->next = n;return 0;
}
int display(node *head)
{
    node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->value << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
    return 0;
}
int print(node *&head)
{
    if (head == nullptr)
        return 0;
    node *temp = head;
    print(temp->next);
    cout << temp->value << "->";return 0;
}
int main()
{
    node *head = nullptr;
    insertionend(head, 1);
    insertionend(head, 2);
    insertionend(head, 3);
    insertionend(head, 4);
    insertionend(head, 5);
    display(head);
    print(head);

}