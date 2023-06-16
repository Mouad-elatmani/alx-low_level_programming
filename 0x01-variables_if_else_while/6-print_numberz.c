#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (success)
 */

int main(void)
{
	int n = 0;
	int c;

	while (n < 10)
	{
		c = n + '0';
		putchar(c);
		n++;
	}

		putchar('\n');

	return (0);
}
