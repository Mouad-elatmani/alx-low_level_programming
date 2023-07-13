#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int ls1, ls2, res, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[ls1] != '\0')
		ls1++;
	while (s2[ls2] != '\0')
		ls2++;

	if (n > ls2)
		n = ls2;

	res = ls1 + n;

	p = malloc(res + 1);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < res; i++)
		if (i < ls1)
			p[i] = s1[i];
		else
			p[i] = s2[i - ls1];

	p[i] = '\0';

	return (p);
}
