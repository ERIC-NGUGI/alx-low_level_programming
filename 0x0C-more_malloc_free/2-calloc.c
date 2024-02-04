#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * _calloc - Allocates memory for an array of a certain number
 *           of elements each of an inputted byte size.
 * @nmemb: The number of elements.
 * @size: The byte size of each array element.
 *
 * Return: If nmemb = 0, size = 0, or the function fails - NULL.
 *         Otherwise - a pointer to the allocated memory.
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t total_size;
	void *allocated_memory;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total_size = nmemb * size;

	allocated_memory = malloc(total_size);

	if (allocated_memory == NULL)
	{
		return (NULL);
	}

	memset(allocated_memory, 0, total_size);

	return (allocated_memory);
}
