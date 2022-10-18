#include <stdio.h>

/**
 * main - assign variable for n each time it executed
 * print the last digit of stored in variable n
 *
 *Return: 0
 */

int main(void)
{
	int numberZ;

	for (numberZ = 0; numberZ < 10; numberZ++)
	{
		putchar((numberZ % 10) + '0');
	}
	putchar('\n');

	return (0);
}
