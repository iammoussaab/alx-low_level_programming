#include "main.h"

/**
 * create_file - creates a file and fills it with text
 * @filename: name of the file to create
 * @text_content: text to write in the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fil, x, y=0;
	if(!filename)
		return (-1);

	fil = open(filename, O_CREAT | O_RDWR | O_TRUNC);

	if(fil < 0)
		return (-1);
	if(text_content)
	{
		for (y = 0; text_content[y] != '\0'; y++)
			;
		x = write(fil, text_content, y);
		if(x != y)
			return (-1);
	}
	close(fil);
	return 1;

}

