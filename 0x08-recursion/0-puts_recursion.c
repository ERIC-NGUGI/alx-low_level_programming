#include <stdio.h>

/*
 * _puts_recursion - function like puts()
 * @s - string that we need to print.
 *
 * Return: Always 0 (success)
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(s[0]);
		_puts_recursion(s + 1);
	}
	else
	{
		putchar('\n');
	}
}
