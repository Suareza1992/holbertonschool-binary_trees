<<<<<<< HEAD
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
=======
#include "binary_trees.h"

/*
*binary_tree_delete - function to delete a binary tree
*@tree: Tree to be deleted
*Return: void if successful
*/
void binary_tree_delete(binary_tree_t *tree)
{
if (tree == NULL)
binary_tree_delete(tree->left);
binary_tree_delete(tree->right);
free(tree);
    return (void);
}
>>>>>>> 44265d7df5411a47683e3572a36f35c8bda9638c
