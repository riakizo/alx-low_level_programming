
#include "main.h"
#include <stdlib.h>
/**
* read_textfile - func to read text file print to STDOUT.
* @filename: variable to read text file
* @letters: letters to be read
* Return:  actual number of bytes read and printed
*        0 when function fails or filename is NULL
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t b;
	ssize_t d;
	ssize_t fn;
	char *buffr;

fn = open(filename, O_RDONLY);
if (fn == -1)
return (0);
buffr = malloc(sizeof(char) * letters);
d = read(fn, buffr, letters);
b = write(STDOUT_FILENO, buffr, d);
free(buffr);
close(fn);
return (b);
}
