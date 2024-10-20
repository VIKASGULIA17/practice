#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* head=nullptr;
    node(int val){
        data=val;
        next=nullptr;
    }
};
    void insertion(node*&head,int val){
        node* n=new node(val);
        n->next=head;
        head=n;
    }
    void end(node*&head,int val){
        node* n=new node(val);
        if(head==nullptr){
            insertion(head,val);
            return;
        }
        node* temp=head;
        while (temp->next!=nullptr)
        {
            temp=temp->next;
        }
        temp->next=n;
    }
    int display(node *head){
        node*temp=head;
        while(temp!=nullptr){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL";
        return 0;
    }

int main(){
    node* head=nullptr;
    end(head,10);
    // insertion(head,3);
    // insertion(head,2);
    // insertion(head,1);
    end(head,4);
    end(head,5);
    display(head);
    return 0;
}