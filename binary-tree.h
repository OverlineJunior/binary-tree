typedef struct {
    int value;
    struct Node* left;
    struct Node* right;
} Node;

typedef struct {
    Node* root;
} BinaryTree;

BinaryTree btree_new(void);
BinaryTree btree_insert(BinaryTree btree, int value);
