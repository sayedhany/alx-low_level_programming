#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_file - create file
 * @filename: filename
 * @text_content: text content
 * Return: 1 if success
 */
int create_file(const char *filename, char *text_content)
{
	int j = 0, file;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[j] != '\0')
		j++;
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	write(file, text_content, j);
	return (1);
}
