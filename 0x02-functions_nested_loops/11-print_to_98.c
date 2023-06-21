#include <stdio.h>
/**
 * print_to_98 - fonction
 * Return: rien
 * @n: parametre
 */
void print_to_98(int n)
{
	int i, j;

	if (n == 98)
		printf("%d\n", n);
	else if (n < 98)
	{
		for (i = n; i <= 98; i++)
			printf("%d, ", i);
	}
	else
	{
	for (j = n; j >= 98; j--)
		printf("%d, ", j);
	}
}

