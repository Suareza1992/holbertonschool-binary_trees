#include "binary_trees.h"
/**
*binary_tree_size - counts the full size of the trre
*@tree: tree to be counted
*Return: size of tree
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t left_size, right_size;
	if (tree == NULL)
		return (0);
	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);

	return (left_size + right_size + 1);

}
