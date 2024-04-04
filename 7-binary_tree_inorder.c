#include "binary_trees.h"
/**
*binary_tree_inorder - function traverses tree in order
*@tree: tree to bre traversed
*@func: provided function
*Return: Void if succesful
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
	return;

binary_tree_inorder(tree->left, func);


func(tree->n);

binary_tree_inorder(tree->right, func);
}
