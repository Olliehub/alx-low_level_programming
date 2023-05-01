#include "lists.h"

/**
 * get_nodeint_at_index - This returns the nth node of a
 * linked list.
 * @head: head of a list
 * @index: index of the node
 *
 * Return: nth node. return NULL, if node don't exit
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *new = head;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0, i < index && new; i++;)
	{
		if (new->next == NULL)
			return (NULL);
		new = new->next;
	}

	return (new);
}
