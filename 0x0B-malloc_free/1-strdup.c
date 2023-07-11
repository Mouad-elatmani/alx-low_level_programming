#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	i++;

s = malloc(sizeof(char) * (i + 1));
if (s == NULL)
	return (NULL);
for (j = 0; j < (i + 1); j++)
	s[j] = str[j];
return (s);
}
