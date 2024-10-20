#include<iostream>
using namespace std;
// 1. Define a node structure
struct Node {
    int data;             // Data held by the node
    Node* left;           // Pointer to the left child
    Node* right;          // Pointer to the right child

    // Constructor to initialize a new node
    Node(int value) {
        data = value;
        left = right = nullptr;  // No children initially
    }
};
void inorder(Node* root) {
    if (root == nullptr) return;  // Base case: if the node is null, return

    inorder(root->left);          // Traverse the left subtree
    cout << root->data << " ";    // Visit the root
    inorder(root->right);         // Traverse the right subtree
}
void preorder(Node* root) {
    if (root == nullptr) return;  // Base case: null node

    cout << root->data << " ";    // Visit the root node
    preorder(root->left);         // Visit the left subtree
    preorder(root->right);        // Visit the right subtree
}
void postorder(Node* root) {
    if (root == nullptr) return;  // Base case: null node

    postorder(root->left);        // Visit the left subtree
    postorder(root->right);       // Visit the right subtree
    cout << root->data << " ";    // Visit the root node
}

// 2. Create a tree manually
int main() {
    // Create nodes
    Node* root = new Node(1);    // Root node
    root->left = new Node(2);    // Left child of root
    root->right = new Node(3);   // Right child of root
    root->left->left = new Node(4);  // Left child of node 2
    root->left->right = new Node(5); // Right child of node 2
    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
    // Tree is now created
}
