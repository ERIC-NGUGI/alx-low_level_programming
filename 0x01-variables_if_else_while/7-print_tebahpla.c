#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0,
 *        only using putchar and without char variables.
 *
 * Return: Always 0.
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph < 'z'; alph--)
	{
		putchar(alph);
	}
	putchar('\n');

	return (0);
}
