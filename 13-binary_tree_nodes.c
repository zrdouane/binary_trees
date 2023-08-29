#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the nodes in
 *
 * Return: number of nodes with at least 1 child in the tree, or 0 if tree is
 * NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t number_of_nodes = 0;

	if (tree != NULL)
	{
		if (tree->right != NULL || tree->left != NULL)
			number_of_nodes++;
		number_of_nodes += binary_tree_nodes(tree->right);
		number_of_nodes += binary_tree_nodes(tree->left);
	}
	return (number_of_nodes);
}
