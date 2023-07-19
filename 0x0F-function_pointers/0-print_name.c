#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print aname
 * @name: the name what want to printed
 * @f: pointer
 *
 *  * Rteurn: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
		f(name);
}
