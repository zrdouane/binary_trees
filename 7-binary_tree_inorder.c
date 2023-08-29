#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through a binary tree using in-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node,
 * the value in the node must be passed as a parameter to this function
 *
 * Return: void
 * If tree or func is NULL, do nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/* base case */
	if (!tree || !func)
		return;

	/* traverse left subtree */
	binary_tree_inorder(tree->left, func);

	/* print node value */
	func(tree->n);

	/* traverse right subtree */
	binary_tree_inorder(tree->right, func);
}
