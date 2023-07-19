#include "function_pointers.h"

/**
 * array_iterator - prints array elements one by one on new lines
 * @array: array
 * @size: number of elements
 * @action: function pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;
	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
