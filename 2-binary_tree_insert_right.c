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
	binary_tree_t *bntr, *right_node;

	if (parent == NULL)
		return (NULL);

	bntr = malloc(sizeof(binary_tree_t));
	if (bntr == NULL)
		return (NULL);

	bntr->n = value;
	bntr->left = NULL;

	if (parent->right != NULL)
	{
		right_node = parent->right;
		bntr->right = right_node;
	}

	parent->right = bntr;

	return (bntr);
}
