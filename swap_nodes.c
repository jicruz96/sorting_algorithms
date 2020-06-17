#include "sort.h"

/**
 * swap_nodes - swaps position of two nodes
 * @l: pointer to node
 **/
void swap_nodes(listint_t *l)
{
	if (l->next)
		l->next->prev = l->prev;
	l->prev->next = l->next;
	l->next = l->prev;
	l->prev = l->prev->prev;
	l->next->prev = l;
	if (l->prev)
		l->prev->next = l;
}
