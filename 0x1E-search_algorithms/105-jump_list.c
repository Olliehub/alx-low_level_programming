#include "search_algos.h"

/**
 * jump_list -A jump search for linked list
 * @list: list to search
 * @size: size of list
 * @value: search value
 *
 * Return: index of matched value; NULL if not found
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *low =  NULL, *high = NULL;
	size_t limit = 0;

	if (list != NULL)
	{
		low = list;
		high = list;
		while (high->next != NULL && high->index < size && high->n < value)
		{
			low = high;
			limit += sqrt(size);
			while (high->index < limit && high->next != NULL)
				high = high->next;
			printf("Value checked at index [%lu] = [%d]\n", high->index, high->n);
		}
		printf("Value found between indexes [%lu] and [%lu]\n",
		       low->index, high->index);
		while (low != NULL && low->index < size && low->index <= high->index)
		{
			printf("Value checked at index [%lu] = [%d]\n", low->index, low->n);
			if (low->n == value)
				return (low);
			low = low->next;
		}
	}
	return (NULL);

}
