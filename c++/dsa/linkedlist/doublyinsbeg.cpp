#include <iostream>
using namespace std;
class node
{
public:
    int value;
    node *prev;
    node *next;
    node(int data)
    {
        value = data;
        prev = nullptr;
        next = nullptr;
    }
};
int display(node *head)
{
    node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->value << "<->";
        temp = temp->next;
    }
    cout << endl;
}
void insertion(node *&head, int val)
{
    node *n = new node(val);
    if (head == nullptr)
    {
        head = n;
        // tail = n;
        return;
    }
    n->next = head;
    head->prev = n;
    head = n;
    return;
}
// class doublylinkedlist
// {
// public:
//     node *head;
//     node *tail;

//     doublylinkedlist()
//     {
//         head = nullptr;
//         tail = nullptr;
//     }
// };
int main()
{
    node *head = nullptr;
    // node *tail = nullptr;
    insertion(head, 1);
    insertion(head, 2);
    insertion(head, 3);
    display(head);
    return 0;
}
