#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and
 *                initializes it with a specific char.
 * @size: The size of the array to be initialized.
 * @c: The specific char to intialize the array with.
 *
 * Return: If size == 0 or the function fails - NULL.
 *         Otherwise - a pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	x = malloc(sizeof(char) * size);

	if (x == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		x[i] = c;
	}
	return (x);
}
