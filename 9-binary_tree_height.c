#include "binary_trees.h"
/**
*binary_tree_height - Function return count of height of binary tree
*@tree: tree to be handled
*Return: Return height of tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	return (0);

	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);

	return ((left_height > right_height) ? left_height + 1 : right_height + 1);
}
