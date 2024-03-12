#include <stdio.h>
#include "search_algos.h"

/**
 * jump_list - Search for value in sorted list using Jump search algorithm
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int jump, i;
	listint_t *cur, *tmp;

	if (!list)
		return (NULL);
	jump = sqrt(size);
	cur = list;
	do {
		tmp = cur;
		for (i = jump; cur->next && i > 0; --i, cur = cur->next)
			;
		printf("Value checked at index [%lu] = [%d]\n", cur->index, cur->n);
		if (!cur->next)
			break;
	} while (cur->n < value);
	printf("Value found between indexes [%lu] and [%lu]\n",
		tmp->index, cur->index);
	cur = tmp;
	while (cur->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", cur->index, cur->n);
		cur = cur->next;
		if (cur->n == value)
			return (printf("Value checked at index [%lu] = [%d]\n",
				cur->index, cur->n), cur);
		if (!cur->next)
			return (printf("Value checked at index [%lu] = [%d]\n",
				cur->index, cur->n), NULL);
	}
	if (cur->n == value)
		return (printf("Value checked at index [%lu] = [%d]\n",
			cur->index, cur->n), cur);
	return (NULL);
}
