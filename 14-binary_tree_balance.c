#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balancing factor of binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: 0 or >
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (tree == NULL)
		return (0);

	l = tree->left ? 1 + binary_tree_balance(tree->left) : 0;
	r = tree->right ? 1 + binary_tree_balance(tree->right) : 0;

	return (l - r);
}
