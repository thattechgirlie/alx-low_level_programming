#include "main.h"
/**
 * read_textfile - check the code
 * @filename: check par1
 * @letters: check par2
 * Return: returns actual number of letters or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t a, b;
int j;
char *task0;

if (filename == NULL)
{
	return (0);
}
j = open(filename, O_RDONLY);

if (j == -1)
{
	return (0);
}
task0 = malloc(sizeof(char) * (letters));

if (task0 == NULL)
{
	return (0);
}
a = read(j, task0, letters);
b = write(STDOUT_FILENO, task0, a);
close(j);
free(task0);
return (b);
}
