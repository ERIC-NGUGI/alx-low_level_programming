#include "main.h"

/**
* _isupper - checks for uppercase characters
* @c the character to be checked
*
* Returns 1 if c is uppercase
* Returns o otherwise
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')

		return (1);

	else

		return (0);
}
