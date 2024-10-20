#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data=val;
        left=right=nullptr;
    }
};
void preorder(Node* &root){
    if(root==nullptr){
        return ;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void In_order(Node* &root){
    if(root==nullptr){
        return ;
    }
    In_order(root->left);
    cout<<root->data<<" ";
    In_order(root->right);
}
void postorder(Node* &root){
    if(root==nullptr){
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
void level_order(Node* &root){
    if(root==nullptr){
        return ;
    }
    level_order(root->left);
    level_order(root->right);
    cout<<root->data<<" ";
}
int main(){
    Node* root=new Node(1);
    root->left=new Node(5);
    root->right=new Node(43);
    root->right->left=new Node(50);
    root->left->left=new Node(10);
    root->left->right=new Node(19);
    In_order(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
}