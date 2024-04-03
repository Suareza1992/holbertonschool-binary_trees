#include "binary_trees.h"
/**
*binary_tree_nodes - counts nodes with 1 child or more
*@tree: Tree to be counted
*Return: count of tree with children
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	size_t left_nodes = binary_tree_nodes(tree->left);
	size_t right_nodes = binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
		return (left_nodes + right_nodes + 1);
	else
		return (left_nodes + right_nodes);
}
