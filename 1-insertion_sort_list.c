#include "sort.h"
#include "swap_nodes.c"

/**
 * insertion_sort_list - wrapper for insertion sort
 * @list: pointer to list
 **/
void insertion_sort_list(listint_t **list)
{
	if (list)
		*list = insertion_sort(*list);
}

/**
 * insertion_sort - sorts a list of ints using insertion sort, prints each step
 * @l: pointer to node
 * Return: head of list
 **/
listint_t *insertion_sort(listint_t *l)
{
	static listint_t *head;
	listint_t *tmp;

	if (l == NULL)
		return (l);

	if (l->prev == NULL)
		head = l;

	tmp = l->next;

	while (head != l && l->n < l->prev->n)
	{
		swap_nodes(l);
		if (l->next == head)
			head = l;
		print_list(head);
	}

	insertion_sort(tmp);
	return (head);
}
