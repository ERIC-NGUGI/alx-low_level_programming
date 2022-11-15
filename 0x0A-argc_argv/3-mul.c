#include <stdio.h>
#include <stdlib.h>


/**
* main - entry point
* @argc: size of argv
* @argv: array
* Return: 0
*/

int main(int argc, char *argv[])
{
	int i, multiple = 1;

	if (argc != 1)
	{
		for (i = 1; i < argc; i++)
		{
			multiple = multiple * atoi(argv[i]);
		}
		printf("%d\n", multiple);
	}
	return (0);
}
