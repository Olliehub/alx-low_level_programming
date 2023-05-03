#include "lists.h"

/**
 * free_listp - This frees a linked list
 * @head: head of a list
 *
 * Return: no return
 */
void free_listp(listp_t **head)
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
 * print_listint_safe - This prints a linked list
 * @head: head of a list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	listp_t *hptr, *new, *add;

	hptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hptr);
				return (nodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodes++;
	}

	free_listp(&hptr);
	return (nodes);
}
