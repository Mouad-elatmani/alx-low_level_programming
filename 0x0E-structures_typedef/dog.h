#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct
 * @name: First champ
 * @age: Second champ
 * @owner: Third champ
 *
 * Description: Dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
