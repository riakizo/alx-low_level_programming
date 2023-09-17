#include "shell.h"

/* 
 * this is the costumized shell project
 *
 */
void izo_print(const char *message) 
{
    write(STDOUT_FILENO, message, strlen(message));
}
