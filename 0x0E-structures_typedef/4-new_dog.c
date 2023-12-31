#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	char *cname, *cowner;
	int i, len1, len2;

	if (name == NULL || owner == NULL)
		return (NULL);
	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	for (len1 = 0; name[len1]; len1++)
		;
	for (len2 = 0; owner[len2]; len2++)
		;
	cname = malloc(sizeof(char) * (len1 + 1));
	if (cname == NULL)
	{
		free(ptr);
		return (NULL);
	}

	cowner = malloc(sizeof(char) * (len2 + 1));
	if (cowner == NULL)
	{
		free(cname);
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < len1; i++)
		cname[i] = name[i];
	cname[i] = '\0';
	for (i = 0; i < len2; i++)
		cowner[i] = owner[i];
	cowner[i] = '\0';
	ptr->name = cname;
	ptr->owner = cowner;
	ptr->age = age;

	return (ptr);
}
