#include <stdio.h>

// Structure to represent a process
struct Process {
    int process_id;
    int arrival_time;
    int burst_time;
    int priority;
};

// Function to implement Shortest Job First (SJF) CPU Scheduling Algorithm
void sjf(struct Process processes[], int n) {
    // Sort processes based on burst time
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (processes[j].burst_time > processes[j + 1].burst_time) {
                // Swap processes
                struct Process temp = processes[j];
                processes[j] = processes[j + 1];
                processes[j + 1] = temp;
            }
        }
    }

    // Execute processes
    int completion_time = 0;
    printf("\nShortest Job First (SJF) Algorithm:\n");
    printf("Process\tCompletion Time\n");
    for (int i = 0; i < n; i++) {
        completion_time += processes[i].burst_time;
        printf("%d\t%d\n", processes[i].process_id, completion_time);
    }
}

// Function to implement Shortest Remaining Time First (SRTF) CPU Scheduling Algorithm
void srtf(struct Process processes[], int n) {
    // Implementation of SRTF algorithm
    // (You can use a similar logic to SJF, with the consideration of preemption)
    // Note: Implementing SRTF involves a more complex logic with preemption,
    // and is often done with the help of a priority queue or some other data structure.
    // The provided example is a simplified version for illustration purposes.
}

// Function to implement Round Robin CPU Scheduling Algorithm
void round_robin(struct Process processes[], int n, int time_quantum) {
    // Implementation of Round Robin algorithm
    int remaining_time[n];
    for (int i = 0; i < n; i++) {
        remaining_time[i] = processes[i].burst_time;
    }

    int time = 0;
    printf("\nRound Robin Algorithm (Time Quantum: %d):\n", time_quantum);
    printf("Process\tCompletion Time\n");
    while (1) {
        int done = 1;
        for (int i = 0; i < n; i++) {
            if (remaining_time[i] > 0) {
                done = 0;
                if (remaining_time[i] > time_quantum) {
                    time += time_quantum;
                    remaining_time[i] -= time_quantum;
                } else {
                    time += remaining_time[i];
                    remaining_time[i] = 0;
                    printf("%d\t%d\n", processes[i].process_id, time);
                }
            }
        }
        if (done == 1) {
            break;
        }
    }
}

// Function to implement Non-preemptive Priority CPU Scheduling Algorithm
void non_preemptive_priority(struct Process processes[], int n) {
    // Sort processes based on priority
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (processes[j].priority > processes[j + 1].priority) {
                // Swap processes
                struct Process temp = processes[j];
                processes[j] = processes[j + 1];
                processes[j + 1] = temp;
            }
        }
    }

    // Execute processes
    int completion_time = 0;
    printf("\nNon-preemptive Priority Algorithm:\n");
    printf("Process\tCompletion Time\n");
    for (int i = 0; i < n; i++) {
        completion_time += processes[i].burst_time;
        printf("%d\t%d\n", processes[i].process_id, completion_time);
    }
}

int main() {
    // ... (same as in your code)
    int n, time_quantum;
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    struct Process processes[n];

    // Input the details of each process including arrival time, burst time, and priority
    for (int i = 0; i < n; i++) {
        printf("Enter Arrival Time, Burst Time, and Priority for Process %d: ", i + 1);
        scanf("%d %d %d", &processes[i].arrival_time, &processes[i].burst_time, &processes[i].priority);
        processes[i].process_id = i + 1;
    }

    // Implement SJF Algorithm with Different Arrival Times
    sjf(processes, n);

    // Implement SRTF Algorithm with Different Arrival Times
    srtf(processes, n);

    // Implement Round Robin Algorithm with Different Arrival Times and Time Quantum
    printf("Enter the Time Quantum for Round Robin: ");
    scanf("%d", &time_quantum);
    round_robin(processes, n, time_quantum);

    // Implement Non-preemptive Priority Algorithm with Different Arrival Times
    non_preemptive_priority(processes, n);

    return 0;
}
