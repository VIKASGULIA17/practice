#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

// Insertion function
Node *insertion(Node *root, int val) {
    if (root == nullptr) {
        return new Node(val);
    }
    if (val > root->data) {
        root->right = insertion(root->right, val);
    } else {
        root->left = insertion(root->left, val);
    }
    return root;
}

// Pre-order traversal
void preorder(Node *root) {
    if (root == nullptr) {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// Search function
bool search(Node *root, int item) {
    if (root == nullptr) {
        cout << "Not present\n";
        return false;
    }
    if (root->data == item) {
        cout << "Present\n";
        return true;
    }
    if (root->data > item) {
        return search(root->left, item);
    } else {
        return search(root->right, item);
    }
}

// Deletion function
Node *deletion(Node *root, int val) {
    if (root == nullptr) {
        return root;
    }
    if (val > root->data) {
        root->right = deletion(root->right, val);
    } else if (val < root->data) {
        root->left = deletion(root->left, val);
    } else { // Node found
        // Node with only one child or no child
        if (root->left == nullptr) {
            Node *temp = root->right;
            delete root; // Free memory
            return temp;
        } else if (root->right == nullptr) {
            Node *temp = root->left;
            delete root; // Free memory
            return temp;
        }

        // Node with two children: Get the inorder successor (smallest in the right subtree)
        Node *temp = root->right;
        while (temp && temp->left != nullptr) {
            temp = temp->left;
        }
        // Copy the inorder successor's content to this node
        root->data = temp->data;

        // Delete the inorder successor
        root->right = deletion(root->right, temp->data);
    }
    return root;
}

int main() {
    Node *root = nullptr;
    root = insertion(root, 6);
    insertion(root, 7);
    insertion(root, 2);
    insertion(root, 3);
    insertion(root, 9);
    root = deletion(root, 3); // Delete node with value 3
    cout << endl;
    preorder(root); // Print the tree
    cout << endl;

    // Searching for a value
    search(root, 7);
    search(root, 3); // Should print "Not present" after deletion
    return 0;
}
