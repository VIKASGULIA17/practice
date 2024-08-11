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
int insertion(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
    return 0;
}
int display(node *head)
{
    node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
    return 0;
}
int deletion(node* &head){
    node* temp=head;
    head=head->next;
    free(temp);
    return 0;
}
int main()
{
    node *head = nullptr;
    insertion(head, 4);
    insertion(head, 3);
    insertion(head, 2);
    // display(head);
    insertion(head, 1);
    display(head);
    // deletion(head);
    // display(head);
}