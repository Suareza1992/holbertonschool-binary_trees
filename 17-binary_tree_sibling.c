#include "binary_trees.h"
/**
*binary_tree_sibling - this function finds the sibling of given node in a tree
*@node: node to be analyzed
*Return: pointer to sibling
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	return (NULL);

	if (node->parent->left == node)
{

		return (node->parent->right);
	}
else
{

	return (node->parent->left);
}
}
