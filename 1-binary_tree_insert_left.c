#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node at the left child
 * @parent: pointer to the node to insert the left child in
 * @value: the value to store in the new node
 * Return: pointer to the created node or NULL
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *bntr, *left;

	if (parent == NULL)
	{
		return (NULL);
	}

	bntr = binary_tree_node(parent, value);
	if (bntr == NULL)
		return (NULL);

	if (parent->left == NULL)
	{
		bntr->left = parent->left;
		parent->left->parent = bntr;
	}

	bntr->parent = parent;

	return (bntr);
}
