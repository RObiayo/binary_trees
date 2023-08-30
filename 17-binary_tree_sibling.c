#include "binary_trees.h"

/**
 * binary_tree_sibling - locates the sibling of a node
 * @node: pointer to the node to locate the sibling
 * Return: pointer to the kin node
 * NULL when node is NULL
 * NULL when the parent is NULL
 * NULL when the node has no kins
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
