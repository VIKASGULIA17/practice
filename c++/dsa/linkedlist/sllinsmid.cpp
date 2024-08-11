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
int insetionend(node *&head, int value)
{
    node *n = new node(value);
    node *temp = head;
    if (temp == nullptr)
    {
        n->next = head;
        head = n;
    }
    else
    {
        int x;
        cout << "enter the position";
        cin >> x;
        int i = 1;
        while (i < x - 1)
        {
            temp = temp->next;
            i++;
        }
        n->next = temp->next;
        temp->next = n;
    }
}
int deletion(node *&head, int pos)
{
    // if (pos == 0)
    // {
    //     deletion(head); // deletion in the begining
    // }

    {
        node *prev = head;
        int i = 0;
        while (i != pos - 1)
        {
            prev = prev->next;
            i++;
        }
        node *temp = prev->next;
        prev->next = prev->next->next;
        free(temp);
    }
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
    insetionend(head, 1);
    insetionend(head, 2);
    insetionend(head, 3);
    insetionend(head, 4);
    insetionend(head, 5);
    display(head);
    deletion(head, 4);
    display(head);
}