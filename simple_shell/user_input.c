#include "shell.h"

/*
 *this is to display the user inputer
 *
 */
void read_command(char *command, size_t size) {
    if (fgets(command, size, stdin) == NULL) {
        if (feof(stdin)) {
            izo_print("\n");
            exit(EXIT_SUCCESS);
        } else {
            izo_print("Error while reading input.\n");
            exit(EXIT_FAILURE);
        }
    }
    command[strcspn(command, "\n")] = '\0'; /* Remove newline */
}
