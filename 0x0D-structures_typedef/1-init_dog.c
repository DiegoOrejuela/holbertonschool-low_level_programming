#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog.
 * @d: addres object dog declarated.
 * @name: name dog.
 * @age: age dog.
 * @owner: name owner of the dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
