#include <iostream>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node(int data)
    {
        val = data;
        next = nullptr;
    }
};
void insertionbeg(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}
int insend(node *&head, int val)
{
    node *n = new node(val);
    if (head == nullptr)
    {
        n->next = nullptr;
        head = n;
    }
    else
    {
        node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = n;
        n->next = nullptr;
    }
}
int insertionmid(node *&head, int val)
{
    node *n = new node(val);
    int pos;
    cout << "enter the position";
    cin >> pos;

    if (head == nullptr)
    {
        n->next = head;
        head = n;
    }
    else
    {
        node *temp = head;
        int i = 0;
        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        }
        n->next = temp->next;
        temp->next = n;
    }
}
int display(node *head)

{
    node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->val << " -> ";
        temp = temp->next;
    }
    cout << "null" << endl;
}
int main()
{
    node *head = nullptr;
    char c = 'y';
    do
    {
        cout << "1. insertion begin" << endl;
        cout << "2. insertion end" << endl;
        cout << "3. insertion mid" << endl;
        cout << "4. display" << endl;
        cout << "5. exit" << endl;
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            int val;
            cout << "enter value";
            cin >> val;
            insertionbeg(head, val);
            break;
        case 2:
            cout << "enter value";
            cin >> val;
            insend(head, val);
            break;
        case 3:
            cout << "enter value";
            cin >> val;
            insertionmid(head, val);
            break;
        case 4:
            display(head);
            break;
        case 5:
            c = 'n';
            break;
        default:
            break;
        }
    } while (c == 'y');
    return 0;
}