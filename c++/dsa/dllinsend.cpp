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
class doublylinkedlist
{
public:
    node *head;
    node *tail;
    doublylinkedlist()
    {
        head = nullptr;
        tail = nullptr;
    }
int insertionend(int value)
{
    node *n = new node(value);
    if (tail == nullptr)
    {
        head = n;
        tail = n;
        return 0;
    }
    tail->next=n;
    n->prev=tail;
    tail=n;
}
int display()
{
    node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->value << "<->";
        temp = temp->next;
    }
    cout << endl;
}
};
int main()
{
    doublylinkedlist ll;
    ll.insertionend(1);
    ll.insertionend(2);
    ll.insertionend(3);
    ll.display();
    return 0;
}
