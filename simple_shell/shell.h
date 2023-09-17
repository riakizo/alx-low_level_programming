#ifndef SHELL_H
#define SHELL_H
/*
 *These are header files of my project
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include <sys/types.h>
#include <sys/wait.h>

/*
 *these are my prototypes
 */
void display_prompt(void);
void izo_print(const char *message);
void read_command(char *command, size_t size);
void execute_command(const char *command);




#endif /* SHELL_H */
