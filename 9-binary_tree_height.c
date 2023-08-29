#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left, height_right;

	/* base case */
	if (!tree)
		return (0);

	/* compute the height of each subtree */
	if (tree->right)
		height_right = 1 + binary_tree_height(tree->right);
	else
		height_right = 0;

	if (tree->left)
		height_left = 1 + binary_tree_height(tree->left);
	else
		height_left = 0;

	/* return the maximum height */
	if (height_left > height_right)
		return (height_left);
	else
		return (height_right);
}
