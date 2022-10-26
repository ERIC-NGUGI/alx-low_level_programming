#include "main.h"

/**
* print_line - draws a straight line using the character_.
* @n: The number of _ characters to be printed.
*/

void print_line(int n)
{
	int lin;

	if (n > 0)
	{
		for (lin = 0; lin < n; lin++)
			_putchar('_');
	}

	_putchar('\n');
}
