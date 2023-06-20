#include "main.h"
/**
* main- a program that prints _putchar and returns 0
*
* Return: always 0
*/
int main(void)
{
	int str[8] = {95, 112, 117, 116, 99, 104, 97, 114};
	int count;

	for (count = 0; count < 8; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return (0);
}
