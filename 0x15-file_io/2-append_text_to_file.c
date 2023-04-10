#include "main.h"
/**
  * append_text_to_file - append text at the end of a file.
  * @filename: pointer to name of the file.
  * @text_content: pointer to null terminated string.
  *
  * Return: 1 on success, -1 on failure.
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, fa;
	int index = 0;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_EXCL | O_APPEND);

	if (file ==-1)
		return (-1);

	if (text_content)
	{
		while (text_content[index])
			index++;

		fa = write(file, text_content, index);
		if (fa == -1)
		{
			close(file);
			return (-1);
		}
	}

	close(file);
	return (1);
}
