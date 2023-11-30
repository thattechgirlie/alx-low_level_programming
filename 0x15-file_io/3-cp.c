#include "main.h"
/**
 * error_file - check code
 * @file_from: check par1
 * @file_to: check par2
 * @argv: check vector par
 * Return: returns void
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE%s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE%s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check code
 * @argc: check count par
 * @argv: check vector par
 * Return: return 0
 */
int main(int argc, char *argv[])
{
int file_from, file_to, err_close;
ssize_t a, b;
char buff[1024];

if (argc != 3)
{
	dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
	exit(97);
}
file_from = open(argv[1], O_RDONLY);
file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
error_file(file_from, file_to, argv);
a = 1024;
while (a == 1024)
{
	a = read(file_from, buff, 1024);

	if (a == -1)
		error_file(-1, 0, argv);
	b = write(file_to, buff, a);

	if (b == -1)
		error_file(0, -1, argv);
}
err_close = close(file_from);

if (err_close == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE j%d\n", file_from);
	exit(100);
}
return (0);
}
