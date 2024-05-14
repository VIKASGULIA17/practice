#include <iostream>
using namespace std;
class node
{
public:
    int value;
    node *next;
    node(int val)
    {
        value = val;
        next = nullptr;
    }
};
class stack
{
public:
    int capacity;
    node *head;
    int count;
    stack(int cap)
    {
        capacity = cap;
        head = nullptr;
        count = 0;
    }
    int push(int value)
    {
        node *n = new node(value);
        if (this->count > this->capacity)
        {
            cout << "overflow" << endl;
            return 0;
        }
        n->next = this->head;
        this->head = n;
        this->count++;
    }
    int pop()
    {
        if (count <= 0)
        {
            cout << "underflow" << endl;
            return 0;
        }
        node *temp = head;
        head = head->next;
        free(temp);
        count = count - 1;
    }
    int display()
    {
        node *temp = this->head;
        int i = 0;
        while (i < count)
        {
            cout << temp->value << endl;
            temp = temp->next;
            i++;
        }
    }
};
int main()
{
    stack ll(4);
    ll.push(10);
    ll.push(20);
    ll.pop();
    ll.push(30);
    ll.push(40);
    ll.push(50);
    ll.pop();
    ll.display();
}