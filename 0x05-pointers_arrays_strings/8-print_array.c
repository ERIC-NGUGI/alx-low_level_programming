#include <stdio.h>
#include "main.h"

/**
* print_array - a function that prints n elements of
*               an array of integers, followed by a new line.
* @a: The array of integers.
* @n: The number of elements to be printed.
*/

void print_array(int *a, int n)
{
	int p;

	for (p = 0; p < n; p++)
	{
		printf("%d", a[p]);

		if (p == n - 1)
			continue;
		printf(", ");
	}
	printf("\n");
}
