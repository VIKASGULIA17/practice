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
int insertionbeg(node *&head, int value)
{
    node *n = new node(value);
    n->next = head;
    head = n;
    return 0;
}
int insertionend(node *&head, int value)
{
    if (head == nullptr)
    {
        insertionbeg(head, value);
        return 0;
    }
    node *n = new node(value);
    node *temp = head;

    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = nullptr;
    return 0;
}
int insertionmid(node *&head, int value, int pos)
{
    if (head == nullptr)
    {
        insertionbeg(head, value);
        return 0;
    }
    node *n = new node(value);
    node *temp = head;
    int i = 0;
    while (i < pos - 1)
    {
        temp = temp->next;
        i++;
    }
    n->next = temp->next;
    temp->next = n;
    return 0;
}
int display(node *head)
{
    node *temp = head;

    while (temp != nullptr)
    {
        cout << temp->value << "-> ";
        temp = temp->next;
    }
    cout << "null" << endl;
    return 0;
}
int deletionbeg(node *&head)
{
    node *temp = head;
    head = head->next;
    free(temp);
    return 0;
}
int deletionend(node *&head)
{
    node *temp = head;
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    node *temp2 = temp->next;
    temp->next = nullptr;
    free(temp2);
    return 0;
}
int deletionmid(node *&head, int pos)
{
    if (pos == 0)
    {
        deletionbeg(head);
        return 0;
    }
    node *temp = head;
    int i = 0;
    while (i < pos - 1)
    {
        temp = temp->next;
        i++;
    }
    node *temp2 = temp->next;
    temp->next = temp->next->next;
    free(temp2);
    return 0;
}
int main()
{
    node *head = nullptr;
    char c = 'y';
    do
    {
        int ch;
        cout << "1 for insertion begining" << endl;
        cout << "2 for insertion mid" << endl;
        cout << "3 for insertion end" << endl;
        cout << "4 for deletion beg" << endl;
        cout << "5 for deletion mid" << endl;
        cout << "6 for deletion end" << endl;
        cout << "enter your choice" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            int value;
            cout << "enter the value" << endl;
            cin >> value;
            insertionbeg(head, value);
            break;
        case 2:

            cout << "enter the value" << endl;
            cin >> value;
            int pos;
            cout << "enter the position" << endl;
            cin >> pos;
            insertionmid(head, value, pos);
            break;
        case 3:

            cout << "enter the value" << endl;
            cin >> value;
            insertionend(head, value);
            break;
        case 4:
            deletionbeg(head);
            break;
        case 5:

            cout << "enter the position" << endl;
            cin >> pos;
            deletionmid(head, pos);
            break;
        case 6:
            deletionend(head);
            break;
        case 7:
            display(head);
            break;
       case 8:
            c = 'n';
            break;
        default:
            break;
        }
    } while (c == 'y');

    return 0;
}