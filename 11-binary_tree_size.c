#include "binary_trees.h"

size_t binary_tree_size(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0;

    /* Recursively calculate the size of the left and right subtrees */
    size_t left_size = binary_tree_size(tree->left);
    size_t right_size = binary_tree_size(tree->right);

    /* Return the sum of the sizes of the left and right subtrees plus 1 (for the root node) */
    return left_size + right_size + 1;
}
