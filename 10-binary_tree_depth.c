#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: depth of the node, or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	/* base case */
	if (!tree)
		return (0);

	/* compute the depth of each subtree */
	if (tree->parent)
		depth = 1 + binary_tree_depth(tree->parent);
	else
		depth = 0;

	return (depth);
}
