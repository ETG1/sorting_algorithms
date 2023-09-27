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
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */

void bubble_sort(int *array, size_t size)
{
	size_t e, len = size;
	boolean bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (e = 0; e < len - 1; e++)
		{
			if (array[e] > array[e + 1])
			{
				swap_ints(array + e, array + e + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}
}
