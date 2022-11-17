#include <string.h>
#include "main.h"

/**
* *_strncpy - a function that copies a string.
* @dest: The buffer storing the string copy.
* @src: The source string.
* @n: The maximum number of bytes to be copiesd from src.
*
* Return: A pointer to the resulting string dest.
*/

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
