#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int _strlen(char *s);

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: path of the file.
 * @text_content: characters to print.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0, rs = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
	{
		return (-1);
	}

	rs = write(fd, text_content, _strlen(text_content));
	if (rs == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}

#include "holberton.h"
/**
 *_strlen - returns the length of a string.
 *@s: string to avaluate.
 *
 *Description: The function take a string and iterate it with a loop while
 *until the value '\0'. The times iteration are saved in a int variable 'i'.
 *Return: the length of a string.
 **/
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
