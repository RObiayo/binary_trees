#include "binary_trees.h"

/**
 * binary_tree_is_bst - confirms if a binary tree is a valid BST
 * @tree: a pointer to the root node of the tree to look
 * Return: 1 when tree is a valid BST
 * 0 if not
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (btib_helper(tree, INT_MIN, INT_MAX));
}

/**
 * btib_helper - looks if a binary tree is a valid BST
 * @tree: a pointer to the root node of the tree to confirm
 * @min: Lower bound of confirmed nored
 * @max: Upper bound of confirmed nodes
 * Return: 1 when BST is valid
 * 0 if not
 */
int btib_helper(const binary_tree_t *tree, int min, int max)
{
	if (!tree)
		return (1);

	if (tree->n < min || tree->n > max)
		return (0);

	return (btib_helper(tree->left, min, tree->n - 1) &&
		btib_helper(tree->right, tree->n + 1, max));
	/* -1 and +1 stem from "There must be no duplicate values" req */
}
