#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int i = 0, j = 0;
	char *arg;

	a_start(list, format);

	while (format && format[i])
	{
		if (j)
			printf(", ");
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(list, int));
			break;
		case 'i':
			printf("%i", va_arg(list, int));
			break;
		case 'f':
			printf("%f", va_arg(list, double));
			break;
		case 's':
			arg = va_arg(list, char *);
			if (arg)
			{
				printf("%s", arg);
				break;
			}
			printf("%p", arg);
			break;
		default:
			j = 0;
			i++;
			continue;
		}
		j = 1;
		i++;
	}
	printf("\n");
	va_end(list);
}

