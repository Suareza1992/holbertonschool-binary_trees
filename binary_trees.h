#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * enum avl_state_n - mneumonic for unique states when balancing AVL trees
 * @AVL_RETURN: return to caller
 * @AVL_CREATE: create and insert a node
 * @AVL_CHILD_L: coming from child's left subtree
 * @AVL_CHILD_R: coming from child's right subtree
 */
typedef enum avl_state_n
{
    AVL_RETURN = 0,
    AVL_LCHILD,
    AVL_RCHILD,
    AVL_CREATE
} avl_state_t;

/**
 * struct binary_tree_s - a binary tree node
 * @n: an integer
 * @parent: a pointer to the parent node
 * @left: a pointer to the left child node
 * @right: a pointer to the right child node
 */
typedef struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;

typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;

/* Function Prototypes */
void binary_tree_print(const binary_tree_t *);
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
void binary_tree_delete(binary_tree_t *tree);
int binary_tree_is_leaf(const binary_tree_t *node);
int binary_tree_is_root(const binary_tree_t *node);
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
size_t binary_tree_height(const binary_tree_t *tree);
size_t binary_tree_depth(const binary_tree_t *tree);
size_t binary_tree_size(const binary_tree_t *tree);
size_t binary_tree_leaves(const binary_tree_t *tree);
size_t binary_tree_nodes(const binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree);
int binary_tree_is_full(const binary_tree_t *tree);
int binary_tree_is_perfect(const binary_tree_t *tree);
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
binary_tree_t *binary_tree_uncle(binary_tree_t *node);

#endif /* BINARY_TREES_H */
