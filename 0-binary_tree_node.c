#include "binary_trees.h"

/**
<<<<<<< HEAD
 * binary_tree_node - create a new node
 * @parent: a pointer to the parent of the node to be created
 * @value: the value to put in the new node
 *
 * Return: If memory allocation fails, return NULL.
 * Otherwise, return a pointer to the new node.
 */
bt_t *binary_tree_node(bt_t *parent, int value)
{
	bt_t *new = calloc(1, sizeof(*new));

	if (new)
	{
		new->n = value;
		new->parent = parent;
	}
	return (new);
=======
 * binary_tree_node - function that creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: pointer to the new node, or NULL on failure
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;

new_node = malloc(sizeof(binary_tree_t));
if (new_node == NULL)
return (NULL);

new_node->n = value;
new_node->parent = parent;
new_node->left = NULL;
new_node->right = NULL;

return (new_node);
>>>>>>> master
}
