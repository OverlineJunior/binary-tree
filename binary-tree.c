#include <stdlib.h>

typedef struct {
    int value;
    struct Node* left;
    struct Node* right;
} Node;

Node* node_new(int value) {
    Node *node = malloc(sizeof(Node));
    node->value = value;
    node->left = NULL;
    node->right = NULL;

    return node;
}

typedef struct {
    Node* root;
} BinaryTree;

BinaryTree btree_new(void) {
    BinaryTree btree = {
        .root = NULL
    };

    return btree;
}

BinaryTree btree_insert(BinaryTree btree, int value) {
    btree.root = node_new(value); // TODO: Temporary.

    return btree;
}
