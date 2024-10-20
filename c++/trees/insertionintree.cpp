#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int val)
    {
        data = val;
        left = right = nullptr;
    }
};
Node *insertion(Node *root, int val)
{
    if (root == nullptr)
    {
        return new Node(val);
    }
    if (val > root->data)
    {
        root->right = insertion(root->right, val);
    }
    else
    {
        root->left = insertion(root->left, val);
    }
    return root;
}
void preorder(Node *&root)
{
    if (root == nullptr)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
bool search(Node* root,int item){
    if(root==nullptr){
        cout<<"not present";
        return false;
    }
    if(root->data==item){
        cout<<"present";
        return true;
    }
    if(root->data>item){
        return search(root->left,item);
    }
    else{
        return search(root->right,item);
    }
    cout<<"Not present";
    return false;
}
int main()
{
    Node *root = nullptr;
    root = insertion(root, 6);
    insertion(root, 7);
    insertion(root, 2);
    insertion(root, 3);
    search(root,7);
    // cout << endl;
    // preorder(root);
    // cout << endl;
}