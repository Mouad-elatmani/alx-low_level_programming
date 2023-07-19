#include "function_pointers.h"
/**
 * array_iterator -execute a function giev as aparmetre
 * @array: array
 * @size: size
 * @action: pointer
 * Return: no
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int tail;

	if (array != NULL && action != NULL)
	{
		for (tail = 0; tail < size; tail++)
			action(array[tail]);
	}
}
