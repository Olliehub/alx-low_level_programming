#include "lists.h"

/**
 * listint_len - this returns the number of elememnts in a
 * linked list.
 * @h: head of a list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
