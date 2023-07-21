#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings
 * @separator: to be printed between the strings
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list list;
	char *str;
	unsigned int list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		arg = va_arg(list, char *);
		if (arg)
			printf("%s", arg);
		else
			printf("%p", arg);
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(list);
}

