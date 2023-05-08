#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *creat_buffer(char *file);
void close_file(int fd);
/**
 * create_buffer - It allocates 1024 bytes for a buffer
 * @fine: It is the name of the file buffer is storing chars.
 * Return: The pointer to the newly allocated buffer
 */
char *create_buffer(char *file)
{
char *buffer;
buffer = malloc(sizeof(char) * 1024);
if (buffer == NULL)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
exit(99);
}
return (buffer);
}
/**
 * close_file - It closes file descriptors
 * @fd: The file descriptor to be closed
 */
void close_file(int fd)
{
int n;
n = close(fd);
if (n == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}
/**
 * main - It copies the content of a file to another file
 * @argc: The number of arguments supplied to the program
 * @argv: An array of pointers to the arguments
 * Return: 1 on success
 */
int main(int argc, char *argv[])
{
int from, to, a, b;
char *buffer;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
buffer = create_buffer(argv[2]);
from = open(argv[1], O_RDONLY);
a = read(from, buffer, 1024);
to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do {
if (from == -1 || a == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}
b = write(to, buffer, a);
if (to == -1 || b == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
free(buffer);
exit(99);
}
a = read(from, buffer, 1024);
to = open(argv[2], O_WRONLY | O_APPEND);
} while (a > 0);
free(buffer);
close_file(from);
close_file(to);
return (0);
}
