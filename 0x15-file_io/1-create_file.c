#include "main.h"
/**
 * create_file - check the code
 * @filename: check par1
 * @text_content: check par3
 * Return: returns 1 on success,-1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int j;
int y;
int rwr;

if (filename == NULL)
{
	return (-1);
}
j = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

if (j == -1)
{
	return (-1);
}
if (text_content == NULL)
{
	text_content = "";
}
for (y = 0; text_content[y]; y++)
	;
rwr = write(j, text_content, y);

if (rwr == -1)
	return (-1);
close(j);

return (1);
}
