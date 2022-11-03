#include "main.h"
#include <stdio.h>

/**
*
* Return: Always 0.
*/

int main(void)
{
	char s[10] = "my school";

	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	return (0);
}
