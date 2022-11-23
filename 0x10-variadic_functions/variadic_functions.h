#ifndef VARIADIC_H
#define VARIADIC_H

#include <stdarg.h>


/**
* int sum_them_all - function that returns the sum of all parameters
*/

typedef struct format
{
	char *f;
	void (*func)(va_list vargs);
} form;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
int _putchar(char c);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
