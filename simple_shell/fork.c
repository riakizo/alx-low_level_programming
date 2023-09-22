#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
/*
 * the fork is to eecute the process id
 * where the child waits for the ppid
 */
int main() {
    pid_t child_pid;

    child_pid = fork();

    if (child_pid < 0) {
        perror("Fork failed");
        return 1;
    } else if (child_pid == 0) {
        printf("Child process: My PID is %d\n", getpid());
    } else {
        printf("Parent process: My PID is %d, Child's PID is %d\n", getpid(), child_pid);
    }

    return 0;
}

