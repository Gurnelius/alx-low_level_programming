#include "main.h"
/**
  * create_file - create a file.
  * @filename: filename pointer.
  * @text_content: pointer to string to be written to file.
  *
  * Return:  1 on success, -1 otherwise.
  */
int create_file(const char *filename, char *text_content)
{
	int file, fw;
	int a = 0;

	if (!filename)
		return (-1);

	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[a])
			a++;
		fw = write(file, text_content, a);
		if (fw != a)
			return (-1);
	}

	close(file);
	return (1);
}
