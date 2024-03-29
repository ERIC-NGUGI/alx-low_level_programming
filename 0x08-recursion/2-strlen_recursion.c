#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *  * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.*
 * Return: The length of the string.
 */


int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s != '\0')
	{
		l++;
		l += _strlen_recursion(s + 1);
	}
	return (l);
}
