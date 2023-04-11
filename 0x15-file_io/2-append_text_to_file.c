#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * append_text_to_file - append text to file
 * @filename: file name
 * @text_content: text content
 * Return: 1 if success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0, file;

	if (filename == NULL)
		return (-1);
	while (text_content[i] != '\0')
		i++;
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	write(file, text_content, i);
	return (1);
}
