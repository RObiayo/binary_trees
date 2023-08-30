#include "binary_trees.h"

/**
 * binary_tree_insert_right - puts a node as the right-child of another node
 * @parent: pointer to the node to put the right-child inside
 * @value: value to kept in the new node
 * Return: Pointer to the newly built node
 * NULL on fail
 * NULL when parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = parent->right;
	parent->right = new;
	if (new->right)
		new->right->parent = new;
	return (new);
}
