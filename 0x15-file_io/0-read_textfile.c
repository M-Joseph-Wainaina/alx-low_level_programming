#include "main.h"


/**
 * read_textfile - function that reads a textfile
 * and prints it to the standard output
 * @letters: number of letters to be printed
 * @filename: file to be opened
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r;
	char *buff;

	buff = malloc(sizeof(char) * letters);

	if (!buff)
		return (0);
	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	r = read(fd, buff, letters);
	write(STDOUT_FILENO, buff, r);

	close(fd);
	free(buff);
	return (r);
}
