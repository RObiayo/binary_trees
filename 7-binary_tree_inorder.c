#include "binary_trees.h"

/**
 * binary_tree_inorder - navigates a binary tree using in-order traversal
 * @tree: tree to navigate
 * @func: pointer to a func to find every node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
