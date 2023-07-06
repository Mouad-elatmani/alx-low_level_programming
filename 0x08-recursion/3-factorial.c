#include "main.h"

/**
 * factorial - return
 * @n: input
 *
 * Return: n*fact
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
