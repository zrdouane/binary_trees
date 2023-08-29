#include "binary_trees.h"

/**
 * binary_tree_postorder - travers a binary tree using post-order
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node,
 * the value in the node must be passed as a parameter to this function
 *
 * Return: void
 * If tree or func is NULL, do nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	/* base case */
	if (!tree || !func)
		return;

	/* traverse left subtree */
	binary_tree_postorder(tree->left, func);

	/* traverse right subtree */
	binary_tree_postorder(tree->right, func);

	/* print node value */
	func(tree->n);
}
