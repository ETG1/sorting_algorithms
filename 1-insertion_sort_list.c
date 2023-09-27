#include "sort.h"

/**
 * swap_nodes - Swap two nodes in a listint_t doubly-linked list.
 * @p: A pointer to the head of the doubly-linked list.
 * @ni: A pointer to the first node to swap.
 * @nj: The second node to swap.
 */

void swap_nodes(listint_t **p, listint_t **ni, listint_t *nj)
{
	(*ni)->next = nj->next;
	if (nj->next != NULL)
		nj->next->prev = *ni;
	nj->prev = (*ni)->prev;
	nj->next = *ni;
	if ((*ni)->prev != NULL)
		(*ni)->prev->next = nj;
	else
		*p = nj;
	(*ni)->prev = nj;
	*ni = nj->prev;
}

/**
 * insertion_sort_list - Sorts a doubly linked list of,
 * integers using the insertion sort algorithm.
 * @list: A pointer to the head of a doubly-linked list of integers.
 *
 * Description: Prints the list after each swap.
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *iter, *insert, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (iter = (*list)->next; iter != NULL; iter = tmp)
	{
		tmp = iter->next;
		insert = iter->prev;
		while (insert != NULL && iter->n < insert->n)
		{
			swap_nodes(list, &insert, iter);
			print_list((const listint_t *)*list);
		}
	}
}
