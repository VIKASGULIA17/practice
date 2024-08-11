#include<iostream>
using namespace std;
class node{
    int value;
    node*next;
    node*prev;
    node(int data){
        value=data;
        next=nullptr;
        prev=nullptr;
    }
};
int deletion(node* &head,int value){
    node* temp=head;
    if(head==nullptr){
        head->next=nullptr;
        free(temp);
        return 0;
    }
    head=head->next;
    free(temp);
}