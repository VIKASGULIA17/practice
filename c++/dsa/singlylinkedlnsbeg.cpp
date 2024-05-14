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
    node *newn = new node(val);
    newn->next = head;
    head = newn;
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
}
int deletion(node* &head){
    node* temp=head;
    head=head->next;
    free(temp);
}
int main()
{
    node *head = nullptr;
    insertion(head, 2);
    display(head);
    insertion(head, 1);
    display(head);
    deletion(head);
    display(head);
}