#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
    pid_t child1, child2, child3;

    child1 = fork();

    if (child1 == 0) {
        // This is the first child process
        printf("Child with id: %d and its Parent id: %d\n", getpid(), getppid());
        
        child3 = fork();
        if (child3 == 0) {
            // This is the third child which is also a grandchild of the parent
            printf("Child with id: %d and its Parent id: %d\n", getpid(), getppid());
        }
    } else {
        // This is still within the parent process
        printf("Parent of all: %d\n", getpid());

        child2 = fork();
        
        if (child2 == 0) {
            // This is the second child process
            printf("Child with id: %d and its Parent id: %d\n", getpid(), getppid());
            
            // Creating another level of processes as children of the second child
            for(int i=0; i<2; i++) {
                if(fork() == 0) {
                    printf("Child with id: %d and its Parent id: %d\n", getpid(), getppid());
                    exit(0);
                }
            }
            
            //wait(NULL);  // Waiting for children to finish execution
            
        } else {
            //wait(NULL);  // Waiting for children to finish execution
        }
    }

    return 0;
}
