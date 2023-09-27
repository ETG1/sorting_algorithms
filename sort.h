#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>


#define UP 0
#define DOWN 1

/**
 * enum boolean - Enumeration of Boolean values.
 * @false: Equals 0.
 * @true: Equals 1.
 */

typedef enum boolean
{
	false = 0,
	true = 1
} boolean;

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */

typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* Prints helper functions */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* Sorting_algoritms */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void swap_nodes(listint_t **p, listint_t **ni, listint_t *nj);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void swap_ints(int *i, int *j);
int lomuto_partition(int *array, size_t size, int L, int R);
void lomuto_sort(int *array, size_t size, int L, int R);

#endif
