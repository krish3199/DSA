#include <iostream>
using namespace std;

struct tree {
    int data;
    tree *left;
    tree *right;

    tree(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void preOrder(tree* root) {
    if (root == nullptr) return;
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(tree* root) {
    if (root == nullptr) return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void postOrder(tree* root) {
    if (root == nullptr) return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

int main() {
    tree *root = new tree(1);
    root->left = new tree(2);
    root->right = new tree(3);
    root->left->left = new tree(4);
    root->left->right = new tree(5);
    root->right->left = new tree(6);
    root->right->right = new tree(7); 

    cout << "=====================================================" << endl;
    cout << "      Tree Traversals" << endl;
    cout << "=====================================================" << endl << endl;

    cout << " Pre-order Traversal  : ";
    preOrder(root);
    cout << endl;

    cout << " In-order Traversal   : ";
    inOrder(root);
    cout << endl;

    cout << " Post-order Traversal : ";
    postOrder(root);
    cout << endl;

    cout << endl << "======================================================" << endl;

}
