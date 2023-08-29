#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to be stored in the new node
 *
 * Return: pointer to the newly created node,
 * or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_n = NULL, *tmp = NULL;

	if (!parent)
		return (NULL);

	new_n = binary_tree_node(parent, value);
	if (!new_n)
		return (NULL);

	/* if parent has a left child, the new node must take its place */
	if (parent->left)
	{
		tmp = parent->left;
		parent->left = new_n;
		new_n->left = tmp;
		tmp->parent = new_n;
	}
	else
		parent->left = new_n;

	return (new_n);
}
