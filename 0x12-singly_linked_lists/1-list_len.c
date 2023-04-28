#include "lists.h"

/**
 * list_hen - returns then number of elements in a list
 * @h: singly linked ist
 *
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t sim;

	sim = 0;
	while (h != NULL)
	{
		h = h->next;
		sim++;
	}
	return (sim);
}
