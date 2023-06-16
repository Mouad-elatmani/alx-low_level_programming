#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char n = 'z';

	while (n >= 'a')
	{
		putchar(n);
		n--;
	}
	putchar('\n');

	return (0);
}
