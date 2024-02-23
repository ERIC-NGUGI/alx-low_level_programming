#include <stdio.h>
#include <stdarg.h>


/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Description: If separator is NULL, it is not printed.
 *              If one of the strings if NULL, (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list x;
	unsigned int i;
	const char *str;

	va_start(x, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(x, const char *);

		if (str != NULL)
		{
			printf("%s", str);
		} else
		{
			printf("(nil)");
		}

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(x);

	printf("\n");
}
