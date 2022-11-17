#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _strcat - concatenate 2 strings.
* @dest: pointer to the string appended from src.
* @src: pointer to the string to be appended.
*
* Return: pointer to string dest.
*/

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
