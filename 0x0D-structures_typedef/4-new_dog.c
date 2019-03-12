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
	char *copyName;
	char *copyOwner;

	copyName = name;
	copyOwner = owner;

	myDog = malloc(sizeof(dog_t));
	if (myDog == NULL)
	{
		free(myDog);
		return (NULL);
	}
	(*myDog).name = copyName;
	(*myDog).age = age;
	(*myDog).owner = copyOwner;
	return (myDog);
}
