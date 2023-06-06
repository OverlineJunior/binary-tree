#include <stdio.h>
#include "../binary-tree.h"

int main(void) {
    BinaryTree btree = btree_new();
    btree = btree_insert(btree, 1);
    printf("Root value: %i\n", btree.root->value);
}
