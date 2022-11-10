#include "main.h"
/**
 * append_text_to_file - function
 * @filename: file name
 * @text_content: text content
 *
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND, 0600);
	if (fd < 0)
		return (-1);
	if (text_content != NULL)
	{
		write(fd, text_content, strlen(text_content));
	}
	close(fd);
	return (1);
}
