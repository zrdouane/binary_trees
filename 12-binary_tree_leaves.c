#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the leaves in
 *
 * Return: number of leaves in the tree, or 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_left, leaves_right;

	/* base case */
	if (!tree)
		return (0);

	/* if node is a leaf, return 1 */
	if (!tree->left && !tree->right)
		return (1);

	/* compute the number of leaves in each subtree */
	leaves_left = binary_tree_leaves(tree->left);
	leaves_right = binary_tree_leaves(tree->right);

	/* return the number of leaves in the tree */
	return (leaves_left + leaves_right);
}
