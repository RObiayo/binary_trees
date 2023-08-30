#include "binary_trees.h"

/**
 * binary_tree_node - builds binary tree node
 * @parent: pointer to the original node of the node to be built
 * @value: value to insert in the new node
 * Return: Pointer to the newly built node
 * NULL on no success
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL); /* insufficient memory */

	new->n = value;
	new->left = new->right = NULL;
	new->parent = parent;

	if (new->parent == NULL) /* root */
		return new;
	if (new->n < parent->n)
		parent->left = new;
	else
		parent->right = new;
	return new;
}
