#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 *
 * Return: size of the tree, 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_left, size_right;

	/* base case */
	if (!tree)
		return (0);

	/* compute the size of each subtree */
	size_left = binary_tree_size(tree->left);
	size_right = binary_tree_size(tree->right);

	/* return the size of the tree */
	return (size_left + size_right + 1);
}
