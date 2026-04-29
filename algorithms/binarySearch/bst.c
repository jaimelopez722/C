#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Create a new node
struct Node* create(int value) {
    struct Node* n = malloc(sizeof(struct Node));
    n->data = value;
    n->left = NULL;
    n->right = NULL;
    return n;
}

// Insert into BST
struct Node* insert(struct Node* root, int value) {

    // If empty, create node
    if (root == NULL) {
        return create(value);
    }

    // Go left
    if (value < root->data) {
        root->left = insert(root->left, value);
    }
    // Go right
    else {
        root->right = insert(root->right, value);
    }

    return root;
}

// Print (in order)
void printTree(struct Node* root) {
    if (root == NULL) return;

    printTree(root->left);
    printf("%d ", root->data);
    printTree(root->right);
}

int main() {
    struct Node* root = NULL;

    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);

    printf("Tree: ");
    printTree(root);

    return 0;
}