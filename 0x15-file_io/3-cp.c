#include "main.h"
/**
 * main - copies one file to another
 * @argc: num of arguments
 * @argv: filenames
 *
 * Return: 1, or -1 upon failure
 */
int main(int argc, char *argv[])
{
	int x, i;
	ssize_t written, check;
	char buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	x = open(argv[1], O_RDONLY);
	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	i = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (i < 0)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	do {
		written = read(x, buf, 1024);
		if (written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		check = write(i, buf, written);
		if (check == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	} while (written == 1024);
	if (close(x) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", x), exit(100);
	if (close(i) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", i), exit(100);
	return (0);
}
