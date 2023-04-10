#include "main.h"
/**
  * read_textfile - read a text file and prints to the POSIX stdout.
  * @filename: pointer to file name.
  * @letters:  number of characters to be read.
  *
  * Return: number of letters it could read/print,
  * or 0 if failed.
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, fr, fw;
	char *buffer;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters + 1);

	if (buffer == NULL)
		return (0);

	fr = read(file, buffer, letters);
	if (fr == -1)
		return (0);

	buffer[letters] = '\0';

	fw = write(STDOUT_FILENO, buffer, fr);

	if (fw == -1)
		return (0);

	close(file);
	free(buffer);
	return (fw);
}
