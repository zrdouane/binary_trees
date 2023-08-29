#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling of
 *
 * Return: pointer to the sibling node, or NULL if node has no sibling or if
 * node is NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling;

	/* if node is NULL or node has no parent, return NULL */
	if (!node || !node->parent)
		return (NULL);

	/* if node is the left child, return the right child */
	if (node->parent->left == node)
		sibling = node->parent->right;
	/* if node is the right child, return the left child */
	else
		sibling = node->parent->left;

	return (sibling);
}
