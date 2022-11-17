#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* *_strncat - a function that concatenates two strings.
* @dest: The string to be appended upon
* @src: The string to be appended to dest.
* @n: The number of bytes from src to be appended to dest.
*
* Return: A pointer to the resulting string dest.
*/

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
