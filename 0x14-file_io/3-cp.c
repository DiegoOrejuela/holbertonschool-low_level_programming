#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

int _strlen(char *s);
/**
 * main - point of entry.
 * @ac: arguments counts.
 * @av: pointer of arguments.
 *
 * Return: 0.
 */
int main(int ac, char **av)
{
	char buf[1024];
	int file;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file = open(av[1], O_RDONLY);
	if (file == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if ((read(file, buf, 1024)) == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if ((create_file(av[2], buf)) == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	if ((close(file)) == -1)
	{
		dprintf(2, "Error: Can't close fd %d", file);
		exit(100);
	}
	return (0);
}

/**
 * create_file - creates a file.
 * @filename: path of the file.
 * @text_content: characters to print.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd = 0, rs = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 00664);
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
