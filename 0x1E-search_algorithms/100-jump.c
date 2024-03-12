#include "search_algos.h"

/**
 * jump_search - Searches value in sorted array using Jump search algorithm
 */
int jump_search(int *array, size_t size, int value)
{
	int jump;
	size_t i;

	if (!array)
		return (-1);
	jump = sqrt(size);
	i = 0;
	do {
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i += jump;
		if (i >= size)
			break;
	} while (array[i] < value);
	printf("Value found between indexes [%lu] and [%lu]\n", i - jump, i);
	i -= jump;
	while (array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		++i;
		if (i == size)
			return (-1);
	}
	if (array[i] == value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		return (i);
	}
	return (-1);
}
