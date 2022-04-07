#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *x;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	x = malloc(sizeof(int) * (max - min + 1));
	if (x == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (min <= max)
	{
		x[i] = min;
		min++;
		i++;
	}
	return (x);
}

