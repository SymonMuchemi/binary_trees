#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node
 * @value: the value to be held by the node
 * Return: pointer to the new node or null
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *bntr = malloc(sizeof(binary_tree_t));

	if (bntr == NULL)
	{
		return (NULL);
	}

	bntr->n = value;
	bntr->parent = parent;
	bntr->left = NULL;
	bntr->right = NULL;

	return (bntr);
}
