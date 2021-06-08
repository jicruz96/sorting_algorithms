#ifndef SORT_H
#define SORT_H

#include <stddef.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: integer stored in the node
 * @prev: pointer to the previous element of the list
 * @next: pointer to the next element of the list
 **/
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

void print_list(const listint_t *list);
void insertion_sort_list(listint_t **list);
listint_t *insertion_sort(listint_t *h);
void swap_nodes(listint_t *l);

void merger(int *l, size_t size_l, int *r, size_t size_r);
void merge_sort(int *array, size_t size);



#endif /*SORT_H*/
