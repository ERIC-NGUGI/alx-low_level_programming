#include <stdio.h>

/*
 * A function that prints a string followed by a new line
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return ;
	}

	printf("%c", *s);

	_puts_recursion(s+1);
}
