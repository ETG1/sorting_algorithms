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
 * lomuto_partition - Order a subset of an array of integers according to
 * the lomuto partition scheme (last element as pivot).
 * @array: The array of integers.
 * @size: The size of the array.
 * @L: Starting index of the subset to order.
 * @R: Ending index of the subset to order.
 *
 * Return: Final partition index.
 */

int lomuto_partition(int *array, size_t size, int L, int R)
{
	int *pivot, above, below;

	pivot = array + R;
	for (above = below = L; below < R; below++)
	{
		if (array[below] < *pivot)
		{
			if (above < below)
			{
				swap_ints(array + below, array + above);
				print_array(array, size);
			}
			above++;
		}
	}

	if (array[above] > *pivot)
	{
		swap_ints(array + above, pivot);
		print_array(array, size);
	}

	return (above);
}

/**
 * lomuto_sort - Implement the quicksort algorithm through recursion.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 * @L: Starting index of the array partition to order.
 * @R: Ending index of the array partition to order.
 *
 * Description: Uses the Lomuto partition scheme.
 */

void lomuto_sort(int *array, size_t size, int L, int R)
{
	int part;

	if (R - L > 0)
	{
		part = lomuto_partition(array, size, L, R);
		lomuto_sort(array, size, L, part - 1);
		lomuto_sort(array, size, part + 1, R);
	}
}

/**
 * quick_sort - Sort an array of integers,
 * using the quicksort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Uses the Lomuto partition scheme.
 * Prints array after each swap of two elements.
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	lomuto_sort(array, size, 0, size - 1);
}
