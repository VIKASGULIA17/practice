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
    return 0;
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
    return 0;
}
int insertion_mid(node *&head,int pos,int value){
if (head == nullptr)
    {
        insertion(head, value);
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
    return 0;
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
    return 0;
}
int delmid(node *&head,int pos){
    node*temp=head;
    node*prev=head;
    int i=1;
    if(pos==1){
        deletion(head);
        return 0;
    }
    while(i<pos){
        prev=temp;
        temp=temp->next;
        i++;
    }
    prev->next=temp->next;
    free(temp);
    return 0;
}
int display(node *head)
{
    node *temp = head;
    do
    {
        cout << temp->value << "->";
        temp = temp->next;
    } while (temp != head);
    cout << "NULL" << endl;
    return 0;
}
int main()
{
    node *head = nullptr;
    insertion(head, 3);
    insertion(head, 2);
    insertion(head, 1);
    insertionend(head, 4);
    insertionend(head, 5);
    delmid(head,3);
    display(head);
}