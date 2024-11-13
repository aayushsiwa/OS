// 1. WAP in C to implement zombie process and orphan process
// This program first creates a child process. The parent process then sleeps for 5 seconds, 
// creating a zombie process because it doesn't wait for the child to terminate. After that, 
// the parent process exits, leaving the child process orphaned.

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t child_pid;

    // Creating a child process
    child_pid = fork();

    if (child_pid > 0) {
        // Parent process
        printf("Parent process with PID: %d\n", getpid());
        sleep(5); // Parent sleeps for a while to allow child to become a zombie
        printf("Parent process exiting\n");
    } 
    else if (child_pid == 0) {
        // Child process
        printf("Child process with PID: %d\n", getpid());
        printf("Child process exiting\n");
        exit(0);
    } 
    else {
        // Fork failed
        printf("Fork failed\n");
        return 1;
    }

    // Orphan process scenario
    if (child_pid > 0) {
        sleep(2); // Parent sleeps for a while
        printf("Parent process exiting, child becomes orphan\n");
    }

    return 0;
}
