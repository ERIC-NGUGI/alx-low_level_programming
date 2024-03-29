#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - function like puts();
 * @s: input
 * Return: Always 0 (Success)
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
