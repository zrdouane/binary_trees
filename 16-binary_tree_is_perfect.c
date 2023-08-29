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

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Description: A perfect binary tree is a binary tree in which all interior
 * nodes have two children and all leaves have the same depth or same level.
 *
 * Return: 1 if tree is perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t number_of_nodes = 0, height = 0;

	if (tree == NULL)
		return (0);
	number_of_nodes = binary_tree_nodes(tree);
	height = binary_tree_height(tree);
	if (number_of_nodes == 0)
		return (1);
	if (number_of_nodes == (2 << height) - 1)
		return (1);
	return (0);
}
