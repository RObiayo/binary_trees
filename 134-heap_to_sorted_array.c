#include "binary_trees.h"

/**
 * heap_to_sorted_array - changes a Binary Max Heap
 * to a sorted array of integers
 * @heap: a pointer to the root node of the heap to change
 * @size: an address to keep the size of the array
 * Return: the created array
 * NULL on fail
 */
int *heap_to_sorted_array(heap_t *heap, size_t *size)
{
	int *array;
	int extract, i = 0;
	size_t heap_size;

	if (!heap)
		return (NULL);
	heap_size = binary_tree_size(heap);
	*size = heap_size;
	array = malloc(heap_size * sizeof(int));
	if (!array)
		return (NULL);
	while (heap)
	{
		extract = heap_extract(&heap);
		array[i] = extract;
		i++;
	}
	return (array);

}
