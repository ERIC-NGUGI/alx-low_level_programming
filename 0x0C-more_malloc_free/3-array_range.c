#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Creates an array of integers ordered
 *               from min to max, inclusive.
 * @min: The first value of the array.
 * @max: The last value of the array.
 *
 * Return: If min > max or the function fails - NULL.
 *         Otherwise - a pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int size;
	int *result;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	result = (int *)malloc(size * sizeof(int));

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		result[i] = min + i;
	}

	return (result);
}
