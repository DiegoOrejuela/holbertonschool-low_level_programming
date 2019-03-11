#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog.
 * @name: name dog.
 * @age: age dog.
 * @owner: name owner of the dog.
 *
 * Return: pointer changed or null.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *myDog;

	myDog = malloc(sizeof(dog_t));
	if (myDog == NULL)
	{
		return (NULL);
	}
	(*myDog).name = name;
	(*myDog).age = age;
	(*myDog).owner = owner;
	return (myDog);
}
