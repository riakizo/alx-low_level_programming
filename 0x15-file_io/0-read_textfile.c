#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - It reads the text file and print to STDOUT
 * @filename: The text file being read
 * @letters: The number of letters to be read
 * Return: w(The number of bytes read and printed) or 0 if NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t fn;
ssize_t r;
ssize_t f;
fn = open(filename, O_RDONLY);
if (fn == -1)
return (0);
buf = malloc(sizeof(char) * letters);
f = read(fn, buf, letters);
r = write(STDOUT_FILENO, buf, f);
free(buf);
close(fn);
return (r);
}
