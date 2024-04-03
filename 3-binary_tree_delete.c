#include <stdlib.h>

typedef struct binary_tree_s {
    int data;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;

void binary_tree_delete(binary_tree_t *tree) {

    if (tree == NULL) {
        return;
    }


    binary_tree_delete(tree->left);
    binary_tree_delete(tree->right);


    free(tree);
}
