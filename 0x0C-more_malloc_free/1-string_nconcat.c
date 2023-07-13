#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int  i, j, ls1 = 0, ls2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = j = 0;
	while (s1[ls1] != '\0')
		ls1++;
	while (s2[ls2] != '\0')
		ls2++;
	if (n < ls2)
		p = malloc(sizeof(char) * (n + ls1 + 1));
	else
		p = malloc(sizeof(char) * (ls1 + ls2 + 1));
	if (p == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		p[i] = s2[j];
		i++, j++;
	}
	p[i] = '\0';
	return (p);
}
