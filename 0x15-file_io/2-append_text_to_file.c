#include "main.h"
/**
 * append_text_to_file - check the file
 * @filename: check par1
 * @text_content: check par3
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int j, y;
int rwr;

if (filename == NULL)
	return (-1);
if (text_content)
{

	for (y = 0; text_content[y]; y++)
		;
	rwr = write(j, text_content, y);

	if (rwr == -1)
		return (-1);
}
close(j);
return (1);
}
