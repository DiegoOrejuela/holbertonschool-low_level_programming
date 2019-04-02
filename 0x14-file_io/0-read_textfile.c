#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - check the code for Holberton School students.
 * @filename: path of the file.
 * @letters: characters to print.
 *
 * Return: lenght of the characters readed or 0 if is error.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rs, length;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		return (0);
	}

	length = 0;
	length = read(fd, buf, letters);
	if (length == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}

	rs = write(STDOUT_FILENO, buf, letters);
	if (rs == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}
	close(fd);
	free(buf);

	return (length);
}
