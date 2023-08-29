#include "lists.h"
/**
 * list_len-returns number of slements in a linked list
 * @h:linked list of type listint_t to traverse
 *
 * Return :number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
