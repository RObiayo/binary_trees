#include "binary_trees.h"

/**
 * array_to_bst - creates a Binary Search Tree from an array
 * @array: pointer to the initial element of the array to be changed
 * @size: the no. of elements in the array
 * Return: A pointer to the root node of the built BST
 * NULL on fail
 */
bst_t *array_to_bst(int *array, size_t size)
{
	unsigned int i;
	bst_t *root = NULL;

	for (i = 0; i < size; i++)
		bst_insert(&root, array[i]);

	return (root);
}
