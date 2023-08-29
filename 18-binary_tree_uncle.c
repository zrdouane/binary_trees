#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle of
 *
 * Return: pointer to the uncle node, or NULL if node has no uncle or if node
 * is NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;

	/* if node is NULL or node has no parent, return NULL */
	if (!node || !node->parent)
		return (NULL);

	/* if node has no grandparent, return NULL */
	if (!node->parent->parent)
		return (NULL);

	/* if node's parent is the left child, return the right child */
	if (node->parent->parent->left == node->parent)
		uncle = node->parent->parent->right;
	/* if node's parent is the right child, return the left child */
	else
		uncle = node->parent->parent->left;

	return (uncle);
}
