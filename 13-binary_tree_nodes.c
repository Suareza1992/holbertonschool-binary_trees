#include "binary_trees.h"

size_t binary_tree_nodes(const binary_tree_t *tree) {
    if (tree == NULL)
        return 0;

    /* Recursively count nodes with at least one child in the left and right subtrees */
    size_t left_nodes = binary_tree_nodes(tree->left);
    size_t right_nodes = binary_tree_nodes(tree->right);

    /* If the current node has at least one child, increment the count by 1 */
    if (tree->left != NULL || tree->right != NULL)
        return left_nodes + right_nodes + 1;
    else
        return left_nodes + right_nodes;
}
