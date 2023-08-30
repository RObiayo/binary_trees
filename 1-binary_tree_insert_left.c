#include "binary_trees.h"

/**
 * binary_tree_insert_left - puts a node as the left-child of another node
 * @parent: pointer to the node to put the left-child inside
 * @value: value to keep in the new node
 * Return: Pointer to the newly built node
 * NULL on fail
 * NULL when parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->right = NULL;
	new->left = parent->left;
	parent->left = new;
	if (new->left)
		new->left->parent = new;
	return (new);
}
