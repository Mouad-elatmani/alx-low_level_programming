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
	int o = 0;
	int p = 0;

	while (n <= 9)
	{
		while (m <= 9)
		{
			o = n;
			p = m + 1;
			while (o <= 9)
			{
				while (p <= 9)
				{
					putchar(n + '0');
					putchar(m + '0');
					putchar(' ');
					putchar(o + '0');
					putchar(p + '0');
					if (n == 9 && m == 8 && o == 9 && p == 9)
					{
						putchar('\n');
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
					p++;
				}
				p = 0;
				o++;
			}
			m++;
		}
		m = 0;
		n++;
	}
	return (0);
}
