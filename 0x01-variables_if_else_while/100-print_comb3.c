#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 (success)
 */

int main(void)
{
	int n = 0;
	int m = 0;
	int c;
	int d;

	while (n <= 9)
	{
		m = n + 1;
		while (m <= 9)
		{
			c = n + '0';
			putchar(c);
			d = m + '0';
			putchar(d);
			if (n == 8 && m == 9)
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
			m++;
		}
		n++;
	}
	return (0);
}
