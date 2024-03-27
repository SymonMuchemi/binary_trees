#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right child
 *      of another node
 * @parent: pointer to the node to insert the right child
 * @value: the value to be stored in the new node
 * Return: pointer to the new node or NULL
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *bntr;

	if (parent == NULL)
		return (NULL);

	bntr = binary_tree_node(parent, value);
	if (bntr == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		bntr->right = parent->right;
		parent->right->parent = bntr;
	}

	parent->right = bntr;

	return (bntr);
}
