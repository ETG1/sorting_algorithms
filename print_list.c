#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: list to print
 */

void print_list(const listint_t *list)
{
	int e;

	e = 0;
	while (list)
	{
		if (e > 0)
			printf(", ");
		printf("%d", list->n);
		++e;
		list = list->next;
	}
	printf("\n");
}
