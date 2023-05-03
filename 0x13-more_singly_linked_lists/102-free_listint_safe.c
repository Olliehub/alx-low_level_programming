#include "lists.h"

/**
 * free_listp2 - This frees a linked list
 * @head: head of a list
 *
 * Return: no return
 */
void free_listp2(listp_t **head)
{
	listp_t *tmp;
	listp_t *corr;

	if (head != NULL)
	{
		corr = *head;
		while ((tmp = corr) != NULL)
		{
			corr = corr->next;
			free(tmp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - This frees a linked list
 * @h: head of a list
 *
 * Return: size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodes = 0;
	listp_t *hptr, *new, *add;
	listint_t *corr;

	hptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&hptr);
				return (nodes);
			}
		}

		corr = *h;
		*h = (*h)->next;
		free(corr);
		nodes++;
	}

	*h = NULL;
	free_listp2(&hptr);
	return (nodes);
}
