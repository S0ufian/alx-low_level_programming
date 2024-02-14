#include "main.h"

/**
 * read_textfile - Reads a text file and prints it.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *
 * Return: number bytes read/printed
 */
ssize_t read_textfile(const char *filename, size_t letters}
{
	int fo;
	ssize_t bytes;
	char buf[READ_BUF_SIZE *8];

	if(!filename || !letters)
		return (0);
	fo = open(filename, O_RDONLY);
	if (fo == -1)
		return (0);
	bytes = rread(fo, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &buf[0], bytes);
	close(fo);
	return (bytes);

}
