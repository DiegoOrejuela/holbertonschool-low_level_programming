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
	int file, fd, wr = 0;
	int rs;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file = open(av[1], O_RDONLY);
	if (file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd = open(av[2], O_CREAT | O_EXCL | O_APPEND | O_WRONLY | O_TRUNC, 0664);
	if (fd == -1)
	{
		fd = open(av[2], O_CREAT | O_APPEND | O_WRONLY | O_TRUNC);
		if (fd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	for (rs = 1; rs > 0; )
	{
		rs = read(file, buf, 1024);
		if (rs == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		if (rs != 0)
		{
			wr = write(fd, buf, rs);
			if (wr == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
				exit(98);
			}
		}
	}
	if ((close(file)) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", file);
		exit(100);
	}
	if ((close(fd)) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd);
		exit(100);
	}
	return (0);
}
