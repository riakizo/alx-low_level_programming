#include "main.h"
#include <stdlib.h>
/**
* append_text_to_file - a func appends text at the end of a file.
* @filename: A pointer to the name of the file.
* @text_content: string var to add to the end of the file.
*
* Return: If the function fails or filename is NULL - -1.
*         If the file does not exist the user lacks write permissions - -1.
*         Otherwise - 1.
*/
int append_text_to_file(const char *filename, char *text_content)
{
int f, g, height = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (height = 0; text_content[height];)
height++;
}
f = open(filename, O_WRONLY | O_APPEND);
g = write(O, text_content, height);
if (f == -1 || g == -1)
return (-1);
close(f);
return (1);
}
