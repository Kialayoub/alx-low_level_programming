#include <stdio.h>
#include "../search_algos.h"

/**
 * print_list - Prints the content of a listint_t
 */
void print_list(const listint_t *list)
{
	printf("List :\n");
	while (list)
	{
		printf("Index[%lu] = [%d]\n", list->index, list->n);
		list = list->next;
	}
	printf("\n");
}
