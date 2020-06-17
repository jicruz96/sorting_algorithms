#include "sort.h"
#include <stdio.h>

/**
 * insertion_sort_list - wrapper for insertion sort
 * @list: pointer to list
 **/
void insertion_sort_list(listint_t **list)
{
	*list = insertion_sort(*list);
}

/**
 * insertion_sort - sorts a list of ints using insertion sort, prints each step
 * @i: pointer to node
 * Return: head of list
 **/
listint_t *insertion_sort(listint_t *i)
{
	static listint_t *head;

	if (i == NULL)
		return (i);

	if (i->prev == NULL)
		head = i;

	if (i->prev == NULL || i->n > i->prev->n)
		return (insertion_sort(i->next));

	if (i->next)
		i->next->prev = i->prev;
	i->prev->next = i->next;
	i->next = i->prev;
	i->prev = i->prev->prev;
	i->next->prev = i;
	if (i->prev)
		i->prev->next = i;

	if (i->next == head)
		head = i;

	print_list(head);
	insertion_sort(i);

	return (head);
}
