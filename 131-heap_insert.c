#include "binary_trees.h"

/**
 * heap_insert - inserts a value in Max Binary Heap
 * @root: a double pointer to the root node of the Heap to insert the value
 * @value: the value to store in the node to be inserted
 *
 * Return: a pointer to the created node
 *         NULL on failure
 */
heap_t *heap_insert(heap_t **root, int value)
{
	heap_t *node, *parent;

	if (!root)
		return (NULL);
	parent = NULL;
	node = *root;
	while (node)
	{
		parent = node;
		if (value > node->n)
			node = node->left;
		else if (value < node->n)
			node = node->right;
		else
			return (NULL);
	}
	node = binary_tree_node(parent, value);
	if (!node)
		return (NULL);
	if (!parent)
		*root = node;
	else if (value > parent->n)
		parent->left = node;
	else
		parent->right = node;
	return (node);
}
