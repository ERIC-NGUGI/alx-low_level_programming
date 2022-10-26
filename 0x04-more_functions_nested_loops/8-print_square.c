#include "main.h"

/**
 * print_square - Prints a squareusing the character #.
 * @size: The size of the square.
 */

void print_square(int size)
{
	int hashH, hashW;

	if (size > 0)
	{
		for (hashH = 0; hashH < size; hashH++)
		{
			for (hashW = 0; hashW < hashH; hashW++)
				_putchar('#');
			if (hashH == size - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
