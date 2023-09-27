#include "sort.h"

/**
 * print_array - Prints an array of integers
 *
 * @array: array to  print
 * @size: Number of elements in @array
 */

void print_array(const int *array, size_t size)
{
	size_t e;

	e = 0;
	while (array && e < size)
	{
		if (e > 0)
			printf(", ");
		printf("%d", array[e]);
		++e;
	}
	printf("\n");
}
