#include "search_algos.h"
/**
 * linear_search - search linearly in array for element
 * @array: array list
 * @size: size of array
 * @value: value of the array
 *
 * Return: index where user looks for
 */

int linear_search(int *array, size_t size, int value)
{
	size_t x = 0;

	if (array == NULL)
		return (-1);

	for (; x < size; x++)
	{
		printf("Value checked array[%lu] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);
	} return (-1);
}
