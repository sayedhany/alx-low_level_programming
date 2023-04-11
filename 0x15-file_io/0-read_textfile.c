#include "main.h"
#include <stdlib.h>

/**
 * read-textfile - read text file
 * @filename: filename
 * @letters: letters
 * Return: written
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, letter, write1;
	char *text;

	text = malloc(letters);
	if (text == NULL || filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(text);
		return (0);
	}
	letter = read(file, text, letters);
	write1 = write(STDOUT_FILENO, text, letter);
	close(file);
	return (write1);
}
