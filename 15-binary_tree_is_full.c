#include "binary_trees.h"

/**
 * binary_tree_is_full - check if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 0 or 1
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int l, r;

	if (tree == NULL)
		return (0);

	if ((tree->left == NULL) && (tree->right == NULL))
		return (1);

	if ((tree->left == NULL) || (tree->right == NULL))
		return (0);


	l = binary_tree_is_full(tree->left);
	r = binary_tree_is_full(tree->right);

	return (r & l);
}
