#include <stdio.h>
#include <stdlib.h>

// Node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Create node
struct Node* create(int value) {
    struct Node* n = malloc(sizeof(struct Node));
    n->data = value;
    n->left = NULL;
    n->right = NULL;
    return n;
}

// Insert
struct Node* insert(struct Node* root, int value) {
    if (root == NULL) return create(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);

    return root;
}

// 🔍 SEARCH FUNCTION
int search(struct Node* root, int target) {

    // If empty → not found
    if (root == NULL) {
        return 0;
    }

    // If found
    if (root->data == target) {
        return 1;
    }

    // Go left
    if (target < root->data) {
        return search(root->left, target);
    }

    // Go right
    return search(root->right, target);
}

int main() {
    struct Node* root = NULL;

    insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);

    int target = 40;

    if (search(root, target)) {
        printf("Found\n");
    } else {
        printf("Not Found\n");
    }

    return 0;
}