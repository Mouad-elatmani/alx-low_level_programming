#include "function_pointers.h"
/**
 * int_index - function
 * @array: array
 * @size: size
 * @cmp: pointer
 * Return: return index where match is found or -1 if fails
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
