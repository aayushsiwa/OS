#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/resource.h>
#include <sys/wait.h>

int main() {
    pid_t child_pid;

    // Creating a child process
    child_pid = fork();

    if (child_pid == -1) {
        // Error handling for fork failure
        perror("fork");
        exit(EXIT_FAILURE);
    } 
    else if (child_pid == 0) {;;
        // Child process
        printf("Child process with PID: %d\n", getpid());

        // Adjusting priority using nice()
        int nice_value = 5; // higher priority
        if (nice(nice_value) == -1) {
            perror("nice");
            exit(EXIT_FAILURE);
        }
        printf("Child priority adjusted using nice()\n");

        // Simulating some work
        for (int i = 0; i < 1000000000; ++i);

        printf("Child process exiting\n");
        exit(EXIT_SUCCESS);
    } 
    else {
        // Parent process
        printf("Parent process with PID: %d\n", getpid());

        // Waiting for the child to terminate
        wait(NULL);

        printf("Parent process exiting\n");
    }

    return 0;
}
