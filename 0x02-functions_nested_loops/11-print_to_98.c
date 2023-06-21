#include "main.h"
/**
 * print_to_98 - fonction
 * Return: rien
 * @n: parametre
 */
void print_to_98(int n)
{
	int i, j;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
			_putchar(i + '0');
	}
	else
	{
	for (j = n; j >= 98; j++)
		_putchar(j + '0');
	}
}

