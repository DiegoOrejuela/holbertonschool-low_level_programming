#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - object type dog
 * @name: name dog.
 * @age: age of the dog.
 * @owner: name owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strdup(char *str);
#endif
