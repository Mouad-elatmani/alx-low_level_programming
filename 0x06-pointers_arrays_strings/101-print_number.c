#include "main.h"
/**
 * print_number - print an int numbers.
 * @n: number tested
 * Return: Always 0.
 */
void print_number(int n)
{
	int temp;

	if (n < 0)
	{
		_putchar('-');
		temp = -n;
	}
	else
		temp = n;

	if (temp < 10)
		_putchar(temp + '0');
	else
	{
		_putchar((temp / 10) + 48);
		_putchar((temp % 10) + 48);
	}
}
