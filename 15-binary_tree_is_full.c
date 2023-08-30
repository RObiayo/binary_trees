#include "binary_trees.h"

/**
 * binary_tree_is_full - looks if a binary tree is full
 * @tree: a pointer to the root node
 * Return: 1 when the tree is full
 * 0 when the tree is not full
 * 0 when tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	if (tree->right && tree->left)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));

	return (0);
}
