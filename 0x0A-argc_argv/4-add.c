#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int num, i, addition = 0;

	if (argc < 3)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *endptr;

		num = strtol(argv[i], &endptr, 10);

		if (*endptr != '\0' && *endptr != '\n')
		{
			printf("Error\n");
			return (1);
		}
	addition += num;
	}

	printf("%d\n", addition);

	return (0);
}
