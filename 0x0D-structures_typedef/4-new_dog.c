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

	copyName = _strdup(name);
	if (copyName == NULL)
	{
		return (NULL);
	}
	copyOwner = _strdup(owner);
	if (copyName == NULL)
	{
		return (NULL);
	}

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
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string for asiggn.
 *
 * Return: Null o the pointer with the changues.
 */
char *_strdup(char *str)
{

	char *p;
	int size;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	for (size = 0; str[size] != '\0'; size++)
	{
		;
	}
	size++;

	p = malloc(sizeof(char) * size);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
