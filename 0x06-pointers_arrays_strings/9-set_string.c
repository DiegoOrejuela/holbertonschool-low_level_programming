#include "holberton.h"
/**
 *set_string - sets the value of a pointer to a char.
 *@s: double pointer.
 *@to: pointer.
 *
 *Description: The function sets the directon that appoint the apointer
 *saved in @s, in the direction the apoint @to.
 **/
void set_string(char **s, char *to)
{
	*s = to;
}
