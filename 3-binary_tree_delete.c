#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: pointer to the root node of the tree to delete
 *
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	/* base case */
	if (!tree)
		return;

	/* delete left subtree */
	binary_tree_delete(tree->left);

	/* delete right subtree */
	binary_tree_delete(tree->right);

	/* delete root node */
	free(tree);
}
