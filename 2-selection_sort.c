#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @i: The first integer to swap.
 * @j: The second integer to swap.
 */

void swap_ints(int *i, int *j)
{
	int tmp;

	tmp = *i;
	*i = *j;
	*j = tmp;
}

/**
 * selection_sort - Sorts an array of integers,
 * using the selection sort algorithm.
 * @array: An array of integers.
 * @size: Size of the array.
 *
 * Description: Prints the array after each swap.
 */

void selection_sort(int *array, size_t size)
{
	int *min;
	size_t e, k;

	if (array == NULL || size < 2)
		return;

	for (e = 0; e < size - 1; e++)
	{
		min = array + e;
		for (k = e + 1; k < size; k++)
			min = (array[k] < *min) ? (array + k) : min;

		if ((array + e) != min)
		{
			swap_ints(array + e, min);
			print_array(array, size);
		}
	}
}
