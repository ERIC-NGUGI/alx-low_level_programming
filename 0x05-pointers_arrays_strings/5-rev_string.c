#include "main.h"

/**
*rev_string - a function that reverses a string.
*
*@s: The string to be printed
*/

void rev_string(char *s)
{
	int i, j;
	char c, d;

	for (i = 0; s[i] != 0; i++)
	{

	}

	i--;
	for (j = 0; j < i; j++)
	{
		c = s[j];
		d = s[i];
		s[j] = d;
		s[i] = c;
		i--;
	}
}
