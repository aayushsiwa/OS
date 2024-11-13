#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num < 2) {
        return 0; // Not prime
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}

// Function to find the next prime number
int findNextPrime(int num) {
    while (1) {
        num++;
        if (isPrime(num)) {
            return num;
        }
    }
}

// Function to find the previous prime number
int findPrevPrime(int num) {
    while (1) {
        num--;
        if (isPrime(num)) {
            return num;
        }
    }
}

int main() {
    int userNumber;
    pid_t pid;

    // Get user input
    printf("Enter a number: ");
    scanf("%d", &userNumber);

    // Fork a child process
    pid = fork();

    if (pid < 0) {
        fprintf(stderr, "Fork failed\n");
        return 1;
    } else if (pid == 0) {
        // Child process
        printf("Child process (PID: %d) finding the previous prime number: %d\n", getpid(), findPrevPrime(userNumber));
    } else {
        // Parent process
//        wait(NULL); // Wait for the child process to complete
        printf("Parent process (PID: %d) finding the next prime number: %d\n", getpid(), findNextPrime(userNumber));
    }

    return 0;
}

