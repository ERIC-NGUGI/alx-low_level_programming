#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - sum all the variables passed to a function
* @n: the first integer passed
* Return: the sum of the variable
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list an;

	va_start(an, n);

	for (i = 0; i < n; i++)
		sum += va_arg(an, int);
	va_end(an);

	return (sum);
}

